#include <string>
#include "Mgmt.hpp"

using namespace std;

class Artist {
private:
  int AlbumSize = 15; // number of albums each artist will hold
  int AlbumExist = 0; //number or existing albums
  char artist[20];

  char **ArtistAlbumInfo; // array start for the album info
  char ***ArtistAlbumData; // array start for the pointers to album data



public:
  void AddArtist(); // return address location
  void DelArtist();

};
