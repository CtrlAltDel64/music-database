#include <iostream>
#include <string>
#include <fstream>
#include <ifstream>
#include "Mgmt.hpp"

using namespace std;

Mgmt::Mgmt(){
  cout  << "1. Load existing database\n"
    << "2. Create new database\n";
  cin >> load_choice;

  if(load_choice == 1) {

  }
  if(load_choice == 2) {
    artistObjects = new Artist*[artistSize]; //Creates array for pointers to Artist objects
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
  myfile.open("database")

  bool end = false;
  char filedata[21 * 6], buffer[1];
  char *dataptr;
  dataptr = filedata;

  myfile.read(buffer, 1);
  while(!end) {
    for(int i = 0; i < 6; i++) {
      for(int j = 0; j < 20; j++) {
        if(buffer[0] == '_') { //when end of info is reached (e.g. title of song)
          break;
        }
        if(buffer[0] == ';') { //when end of data line/entry is reached
          break;
        }
        if(buffer[0] > 33 || buffer[0] > 122) { //if not an expected character
          break;
        }
        filedata[j + (21 * i)] = buffer[0];
        myfile.read(buffer, 1);
      }
    }
    NewEntry(&dataptr);
    if(buffer[0] == ';') { //when end of file is reached (;; is the condition)
      end = true;
    }
  }
}

void Mgmt::Options() {
  cout << "\n1. Edit Database\n"
  << "2. Search Database\n"
  << "3. Print Database\n"
  << "4. Export Database\n"
  << "5. Exit";
  cin >> action_choice;

  switch (action_choice) {
    case 1:
      NewEntry();
    case 2:
      Search();
      break;
    case 3:
      Print();
      break;
    case 4:
      Export();
      break;
    case 5:
      cout << "\nGoodbye!";
      break;
    default:
      cout << "\nPlease try again. Select a number 1-5.";
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

void Mgmt::NewEntry(char **impdata) {
  Artist *A = new Artist; //create new Artist object
  A->SetArtistInfo(&impdata);
  artistObjects[artistExist] = A; //add Artist object to object array
  artistExist++;
  Options();
}

void Mgmt::Search() {

}
void Mgmt::Print() {

}
void Mgmt::Export() {

}

Mgmt::~Mgmt() {
  for(int i = 0; i < artistExist; i++) {
    //delete loop
  }
}
