#include <string>
#include "Artist.hpp"

using namespace std;

class Album {
private:
  int SongSize = 20; // number of songs each album will hold;
  int SongExist = 0; //number or existing songs
  char album[20];
  char year[20];


public:
  void AddAlbum(); // return address location
  void DelAlbum();


};
