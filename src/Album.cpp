#include <string>
#include <iostream>
#include "Album.hpp"

using namespace std;

Album::Album() {
  Song songObjects = new Song*[songSize];
}

void Album::SetAlbumInfo() {
  cout << "\nEnter album name: ";
  cin.getline(album, 19);
  cout << "\nEnter album year: ";
  cin.getline(year, 19);
}

char *Album::GetAlbum() {
  return album;
}
char *Album::GetYear() {
  return year;
}

void Album::AddSong() {
  Song *A = new Song;
  songObjects[songExist] = A; //add Song object a to list
  songExist++;
}
