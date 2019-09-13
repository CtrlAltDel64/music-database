#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include "Mgmt.hpp"

#define clear() printf("\033[H\033[J")

using namespace std;

Mgmt::Mgmt(){
  cout  << "1. Load existing database\n"
    << "2. Create new database\n";
  cin >> load_choice;
  clear();

  artistObjects = new Artist*[artistSize]; //Creates array for pointers to Artist objects

  if(load_choice == 1) {
    Import();
    Options();
  }
  if(load_choice == 2) {
    Options();
  }
  else {
    cout << "Creating new database!";
  }
}

int Mgmt::Getload_choice() {
  return load_choice;
}
int Mgmt::Getaction_choice() {
  return action_choice;
}

void Mgmt::Import() {
  ifstream myfile;
  myfile.open("database");

  bool end = false;
  char filedata[21 * 6], buffer[1] = {'a'};
  while(!end) {
    for(int i = 0; i < 6; i++) { //6 runs for number of fields to import
      for(int j = 0; j < 20; j++) { //20 runs for max number of characters per field
        myfile.read(buffer, 1);
        if(buffer[0] > 33 || buffer[0] < 122) { //if expected character
          if(buffer[0] == '_' || buffer[0] == ';') { //when end of field or line is reached
            break;
          }
          filedata[j + (21 * i)] = buffer[0];
        }
      }
    }
    NewEntry(filedata);
    myfile.read(buffer, 1);
    if(buffer[0] == ';') { //when end of file is reached (;; is the condition)
      end = true;
    }
  }
  myfile.close();
  Options();
}

void Mgmt::Options() {
  cout << "1. Edit Database\n"
  << "2. Search Database\n"
  << "3. Print Database\n"
  << "4. Export Database\n"
  << "5. Exit\n\n";
  cin >> action_choice;

  switch (action_choice) {
    case 1:
      clear();
      NewEntry();
      Options();
      break;
    case 2:
      clear();
      Search();
      Options();
      break;
    case 3:
      clear();
      Print();
      Options();
      break;
    case 4:
      clear();
      Export();
      Options();
      break;
    case 5:
      clear();
      cout << "\nGoodbye!\n";
      break;
    default:
      clear();
      cout << "Please try again. Select a number 1-5.\n";
      Options();
  }
}

void Mgmt::NewEntry() {
  Artist *A = new Artist; //create new Artist object
  A->SetArtistInfo();
  artistObjects[artistExist] = A; //add Artist object to object array
  artistExist++;
  Options();
}

void Mgmt::NewEntry(char filedata[]) {
  Artist *A = new Artist; //create new Artist object
  A->SetArtistInfo(filedata);
  artistObjects[artistExist] = A; //add Artist object to object array
  artistExist++;
}

void Mgmt::Search() {
  char search[20];
  cout << "Search by (case sensitive):\n" // can be made case insensitive with 'a' + n characters to get capital
    << "1. Artist\n"
    << "2. Album\n"
    << "3. Song\n";
  cin >> search_choice; //no error correction with wrong value implemented
  clear();
  cout << "Enter your search string: ";
  cin >> search;
  SearchOption(search, search_choice);
}

void Mgmt::SearchOption(char search[], int search_choice) {
  switch (search_choice) {
    case 1:
      for (int i = 0; i < artistExist; i++) {
        if (search[0] == artistObjects[i]->GetArtist()[0])
      }
    case 2:

    case 3:

    default:
      clear();
      cout << "Incorrect choice, returning back to options.\n";
      break;
  }
}

void Mgmt::Print() { //simple, unordered
  cout << "Artist\tAlbum\tYear\tSong\tTrack\tDuration\n";
  for (int i = 0; i < artistExist; i++) {
    cout << artistObjects[i]->GetArtist() << '\t';
    artistObjects[i]->Print();
  }
}
void Mgmt::Export() {
  ofstream myfile;
  myfile.open("export1");
  for (int i = 0; i < artistExist; i++) {
    myfile << artistObjects[i]->GetArtist() << '_';
    artistObjects[i]->Export(myfile);
  }
  myfile.close();

  cout << "Exported successfully to file export1!\n";
}

Mgmt::~Mgmt() {
  Export();
}
