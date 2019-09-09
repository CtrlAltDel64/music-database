#include <iostream>
#include <string>
#include <fstream>
#include "Mgmt.hpp"

using namespace std;

Mgmt::Mgmt(){
  cout  << "1. Load existing database\n"
    << "2. Create new database\n";
  cin >> load_choice;

  if(load_choice == 1) {
    Import();
    Options();
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
  myfile.open("database");

  bool end = false;
  char filedata[21 * 6], buffer[1] = {'a'};
  cout << "help1\n";
  myfile.read(buffer, 1);
  cout << buffer[0] << "\n";
  cout << "help2\n";
  while(!end) {
    cout << "help2.5\n";
    for(int i = 0; i < 6; i++) {
      for(int j = 0; j < 20; j++) {
        if(buffer[0] == '_') { //when end of info is reached (e.g. title of song)
          break;
        }
        cout << "help2.6\n";
        if(buffer[0] == ';') { //when end of data line/entry is reached
          break;
        }
        cout << "help2.7\n";
        if((int)buffer[0] < 33 || (int)buffer[0] > 122) { //if not an expected character
          break;
        }
        cout << "help2.8\n";
        cout << "help3\n";
        filedata[j + (21 * i)] = buffer[0];
        cout << "help4\n";
        myfile.read(buffer, 1);
        cout << "help\n";
      }
    }
    NewEntry(filedata);
    if(buffer[0] == ';') { //when end of file is reached (;; is the condition)
      end = true;
    }
  }
  myfile.close();
}

void Mgmt::Options() {
  cout << "\n1. Edit Database\n"
  << "2. Search Database\n"
  << "3. Print Database\n"
  << "4. Export Database\n"
  << "5. Exit\n";
  cin >> action_choice;

  switch (action_choice) {
    case 1:
      NewEntry();
      Options();
      break;
    case 2:
      Search();
      Options();
      break;
    case 3:
      Print();
      Options();
      break;
    case 4:
      Export();
      Options();
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

void Mgmt::NewEntry(char filedata[]) {
  Artist *A = new Artist; //create new Artist object
  A->SetArtistInfo(filedata);
  artistObjects[artistExist] = A; //add Artist object to object array
  artistExist++;
  Options();
}

void Mgmt::Search() {

}
void Mgmt::Print() { //simple, unordered
  for (int i = 0; i < artistExist; i++) {
    cout << artistObjects[i]->GetArtist() << '\t';
    artistObjects[i]->Print();
  }
}
void Mgmt::Export() {

}

Mgmt::~Mgmt() {
  Export();
  for(int i = 0; i < artistExist; i++) {
    //delete loop
  }
}
