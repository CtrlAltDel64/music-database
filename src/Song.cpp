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

char *Song::GetSong() {
  return song;
}
char *Song::GetTrack() {
  return track;
}
char *Song::GetDuration() {
  return duration;
}
