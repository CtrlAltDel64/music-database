#include <string>
#include <iostream>
#include "Artist.hpp"

using namespace std;

Artist::Artist() {
  cout << "hey";
}

void Artist::SetArtist() {
  cout << "\nEnter artist name: ";
  cin.getline(artist, 19);
}

char *Artist::GetArtist() {
  return artist;
}

void Artist::AddAlbum() {
  Album *a = new Album;
  Album *albumObjects = new Album[albumSize];
  albumObjects[albumExist] = {*a}; //add Album object to list
  albumExist++;
}
