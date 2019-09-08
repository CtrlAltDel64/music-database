#include <string>
#include "Album.hpp"

using namespace std;

class Artist {
private:
  int albumSize = 10; // number of albums each artist will hold
  int albumExist = 0; //number of existing albums
  char artist[20];

  Album **albumObjects; //array start for objects of class Album


public:
  Artist(); //gets artist name + create album reference arrays

  void SetArtistInfo();
  char *GetArtist();
  void AddAlbum();

    //~Artist();

};
