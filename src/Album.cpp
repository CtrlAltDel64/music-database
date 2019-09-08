#include <string>
#include <iostream>
#include "Album.hpp"

using namespace std;

Album::Album() {
  songObjects = new Song*[songSize];
}

void Album::SetAlbumInfo() {
  cout << "\nEnter album name: ";
  cin >> album;
  cout << "\nEnter album year: ";
  cin >> year;
  AddSong();
}

char *Album::GetAlbum() {
  return album;
}
char *Album::GetYear() {
  return year;
}

void Album::AddSong() {
  Song *A = new Song;
  A->SetSongInfo();
  songObjects[songExist] = A; //add Song object a to list
  songExist++;
}
