#include <iostream>
#include <string>
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

Mgmt::~Mgmt() {
  for(int i = 0; i < artistExist; i++) {
    //delete loop
  }
}
