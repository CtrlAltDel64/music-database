#include <string>
#include "Album.hpp"

using namespace std;

class Artist {
private:
  int AlbumSize = 10; // number of albums each artist will hold
  int AlbumExist = 0; //number of existing albums
  char artist[20];

  Album **AlbumObjects; //array start for objects of class Album


public:
  Artist(); //gets artist name + create album reference arrays
  ~Artist();

  char *GetArtist();
  void AddAlbum();

};
