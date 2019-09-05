#include "string"
using namespace std;

class Song {
private:
  string song;
  int track = 1;
  int duration = 0;


public:
  void AddSong();
  void DelSong();


}
