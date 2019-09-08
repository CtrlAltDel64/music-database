#include <string>
#include <iostream>
#include "Song.hpp"

using namespace std;

Song::Song() {
  cout << "\nEnter song name: ";
  cin.getline(song, 19);
  cout << "\nEnter track number: ";
  cin.getline(track, 19);
  cout << "\nEnter song duration: ";
  cin.getline(duration, 19);
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
