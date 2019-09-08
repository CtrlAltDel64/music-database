#include <string>
#include <iostream>
#include "Artist.hpp"

using namespace std;

Artist::Artist() {
  albumObjects = new Album*[albumSize];
}

void Artist::SetArtistInfo() {
  cout << "\nEnter artist name: ";
  cin >> artist;
  AddAlbum();
}

char *Artist::GetArtist() {
  return artist;
}

void Artist::AddAlbum() {
  Album *A = new Album;
  A->SetAlbumInfo();
  albumObjects[albumExist] = A; //add Album object to list
  albumExist++;
}
