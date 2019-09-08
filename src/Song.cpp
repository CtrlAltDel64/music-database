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

void Song::SetSongInfo(char **impdata) {
  for(int i = 0; i < 20; i++) {
    if(*impdata[i] != '_' || *impdata[i] != ';') {
      song[i] = *impdata[i + (21 * 3)];
    }
    else {
      break;
    }
  }
  for(int i = 0; i < 20; i++) {
    if(*impdata[i] != '_' || *impdata[i] != ';') {
      track[i] = *impdata[i + (21 * 4)];
    }
    else {
      break;
    }
  }
  for(int i = 0; i < 20; i++) {
    if(*impdata[i] != '_' || *impdata[i] != ';') {
      duration[i] = *impdata[i + (21 * 5)];
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
