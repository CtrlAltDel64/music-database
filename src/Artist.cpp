#include <string>
#include <iostream>
#include "Artist.hpp"

using namespace std;

Artist::Artist() {
  Album *albumObjects = new Album[albumSize];
}

void Artist::SetArtistInfo() {
  cout << "\nEnter artist name: ";
  cin.getline(artist, 19);
}

char *Artist::GetArtist() {
  return artist;
}

void Artist::AddAlbum() {
  Album *a = new Album;
  albumObjects[albumExist] = {*a}; //add Album object to list
  albumExist++;
}
