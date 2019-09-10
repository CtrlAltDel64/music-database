#include <string>
#include <iostream>
#include <fstream>
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

void Album::SetAlbumInfo(char filedata[]) {
  for(int i = 0; i < 20; i++) {
    if(filedata[i] != '_' || filedata[i] != ';') {
      album[i] = filedata[i + (21 * 1)];
    }
    else {
      break;
    }
  }
  for(int i = 0; i < 20; i++) {
    if(filedata[i] != '_' || filedata[i] != ';') {
      year[i] = filedata[i + (21 * 2)];
    }
    else {
      break;
    }
  }
  AddSong(filedata);
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

void Album::AddSong(char filedata[]) {
  Song *A = new Song;
  A->SetSongInfo(filedata);
  songObjects[songExist] = A; //add Song object a to object array
  songExist++;
}

void Album::Print() {
  for (int i = 0; i < songExist; i++) {
    cout << songObjects[i]->GetSong() << '\t';
    cout << songObjects[i]->GetTrack() << '\t';
    cout << songObjects[i]->GetDuration() << '\n';
  }
}

void Album::Export(ofstream &myfile) {
  for (int i = 0; i < songExist; i++) {
    myfile << songObjects[i]->GetSong() << '_';
    myfile << songObjects[i]->GetTrack() << '_';
    myfile << songObjects[i]->GetDuration() << ";;" << '\n';
  }
}
