#include <iostream>
#include <string.h>
#include <string>
#include "Mgmt.hpp"

using namespace std;

Mgmt::Mgmt(){ //incomplete
  cout << "Welcome to your new Music Database!\n"
  << "What would you like to do first?\n"
  << "1. Load existing database.\n"
  << "2. Create new database.\n";
  cin >> load_choice;

  Artist *ArtistObjects = new Artist[artistSize];
}

void Mgmt::Options() { //incomplete
    cout << "1. Edit Database\n"
    << "2. Search Database\n"
    << "3. Print Database\n"
    << "4. Export Database\n";
    cin >> action_choice;

    if(action_choice == 1) {
      NewEntry();
    }
}

void Mgmt::NewEntry() {
 Artist *a = new Artist; //create new Artist object
 Artist *ArtistObjects[artistExist] = {*a}; //add Artist object to list
 artistExist++;
}

Mgmt::~Mgmt() {
  for(int i = 0; i < artistExist; i++) {
    //delete loop
  }
}
