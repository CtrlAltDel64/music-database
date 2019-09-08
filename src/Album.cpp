#include <string>
#include <iostream>
#include "Album.hpp"

using namespace std;

Album::Album() {
  songObjects = new Song*[songSize]; //Creates array for pointers to Song objects
}

void Album::SetAlbumInfo() {
  cout << "\nEnter album name: ";
  cin >> album;
  cout << "\nEnter album year: ";
  cin >> year;
  AddSong();
}

void Album::SetAlbumInfo(char **impdata) {
  for(int i = 0; i < 20; i++) {
    if(*impdata[i] != '_' || *impdata[i] != ';') {
      album[i] = *impdata[i + (21 * 1)];
    }
    else {
      break;
    }
  }
  for(int i = 0; i < 20; i++) {
    if(*impdata[i] != '_' || *impdata[i] != ';') {
      year[i] = *impdata[i + (21 * 2)];
    }
    else {
      break;
    }
  }
  AddSong(&impdata);
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
  songObjects[songExist] = A; //add Song object a to object array
  songExist++;
}

void Album::AddSong(char **impdata) {
  Song *A = new Song;
  A->SetSongInfo(&impdata);
  songObjects[songExist] = A; //add Song object a to object array
  songExist++;
}
