#include <string>
#include <iostream>
#include "Song.hpp"

using namespace std;

Song::Song() {

}

void Song::SetSongInfo() {
  cout << "\nEnter song name: ";
  cin >> song;
  cout << "\nEnter track number: ";
  cin >> track;
  cout << "\nEnter song duration: ";
  cin >> duration;
}

void Song::SetSongInfo(char filedata[]) {
  for(int i = 0; i < 20; i++) {
    if(filedata[i] != '_' || filedata[i] != ';') {
      song[i] = filedata[i + (21 * 3)];
    }
    else {
      break;
    }
  }
  for(int i = 0; i < 20; i++) {
    if(filedata[i] != '_' || filedata[i] != ';') {
      track[i] = filedata[i + (21 * 4)];
    }
    else {
      break;
    }
  }
  for(int i = 0; i < 20; i++) {
    if(filedata[i] != '_' || filedata[i] != ';') {
      duration[i] = filedata[i + (21 * 5)];
    }
    else {
      break;
    }
  }
}

char *Song::GetSong() {
  return song;
}
char *Song::GetTrack() {
  return track;
}
char *Song::GetDuration() {
  return duration;
}
