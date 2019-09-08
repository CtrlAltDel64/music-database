#include <string>
#include <iostream>
#include "Album.hpp"

using namespace std;

Album::Album() {
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
  Song *a = new Song;
  Song *SongObjects = new Song[songSize];
  Song SongObjects[songExist] = {*a}; //add Song object a to list
  songExist++;
}
