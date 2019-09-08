#include <string>
#include <iostream>
#include "Artist.hpp"

using namespace std;

Artist::Artist() {
  Album albumObjects = new Album*[albumSize];
}

void Artist::SetArtistInfo() {
  cout << "\nEnter artist name: ";
  cin.getline(artist, 19);
}

char *Artist::GetArtist() {
  return artist;
}

void Artist::AddAlbum() {
  Album *A = new Album;
  albumObjects[albumExist] = A; //add Album object to list
  albumExist++;
}
