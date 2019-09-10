#include <string>
#include <iostream>
#include <fstream>
#include "Artist.hpp"

using namespace std;

Artist::Artist() {
  albumObjects = new Album*[albumSize]; //Creates array for pointers to Album objects
}

void Artist::SetArtistInfo() {
  cout << "Enter artist name: ";
  cin >> artist;
  AddAlbum();
}

void Artist::SetArtistInfo(char filedata[]) {
  for(int i = 0; i < 20; i++) {
    if(filedata[i] != '_' || filedata[i] != ';') {
      artist[i] = filedata[i];
    }
    else {
      break;
    }
  }
  AddAlbum(filedata);
}

char *Artist::GetArtist() {
  return artist;
}

void Artist::AddAlbum() {
  Album *A = new Album;
  A->SetAlbumInfo();
  albumObjects[albumExist] = A; //add Album object to object array
  albumExist++;
}

void Artist::AddAlbum(char filedata[]) {
  Album *A = new Album;
  A->SetAlbumInfo(filedata);
  albumObjects[albumExist] = A; //add Album object to object array
  albumExist++;
}

void Artist::Print() {
  for (int i = 0; i < albumExist; i++) {
    cout << albumObjects[i]->GetAlbum() << '\t';
    cout << albumObjects[i]->GetYear() << '\t';
    albumObjects[i]->Print();
  }
}

void Artist::Export(ofstream &myfile) {
  for (int i = 0; i < albumExist; i++) {
    myfile << albumObjects[i]->GetAlbum() << '_';
    myfile << albumObjects[i]->GetYear() << '_';
    albumObjects[i]->Export(myfile);
  }
}
