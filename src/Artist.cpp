#include <string>
#include <iostream>
#include "Artist.hpp"

using namespace std;

Artist::Artist() {
  cout << "\nEnter artist name: ";
  cin.getline(artist, 19);

  Album **AlbumObjects = new Album[AlbumSize];
}

char *Artist::GetArtist() {
 return artist;
}

void Artist::AddAlbum() {
  Album *a = new Album;
  Album *AlbumObjects[AlbumExist] = *a; //add Album object to list
}
