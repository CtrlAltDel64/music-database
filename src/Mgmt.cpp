#include <iostream>
#include <string>
#include "Mgmt.hpp"

using namespace std;

Mgmt::Mgmt(){ //incomplete
  cout  << "1. Load existing database\n"
    << "2. Create new database\n";
  cin >> load_choice;

  cout << "help";
}

int Mgmt::Getload_choice() {
  return load_choice;
}
int Mgmt::Getaction_choice() {
  return action_choice;
}

void Mgmt::Options() { //incomplete
  cout << "1. Edit Database\n"
  << "2. Search Database\n"
  << "3. Print Database\n"
  << "4. Export Database\n";
  cin >> action_choice;

  if(action_choice == 1) {
    artistObjects = new Artist*[artistSize];
    NewEntry();
  }
}

void Mgmt::NewEntry() {
  Artist *A = new Artist; //create new Artist object
  cout << "help2";
  artistObjects[artistExist] = A; //add Artist object to list
  artistExist++;
}

Mgmt::~Mgmt() {
  for(int i = 0; i < artistExist; i++) {
    //delete loop
  }
}
