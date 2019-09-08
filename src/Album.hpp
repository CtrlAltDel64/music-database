#include <string>
#include "Song.hpp"

using namespace std;

class Album {
private:
  int SongSize = 20; // number of songs each album will hold;
  int SongExist = 0; //number of existing songs
  char album[20];
  char year[20];

  Song **SongObjects; //array start for objects of class Song


public:
  char *GetAlbum();
  char *GetYear();
  void AddSong();


};
