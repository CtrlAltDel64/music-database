#include <string>
#include "Artist.h"
#include "Album.h"
#include "Song.h"

using namespace std;

class Mgmt {
private:
  int ArtistSize = 100; //number of artists that the database will hold
  int ArtistExist = 0; //number or existing artists
  char *ArtistInfo; //array start for the artist names

  void ArtistInfoArray();


public:
  void NewEntry(); //new artist class object that calls other database classes
  void Print(); //Show all in alphabetical order
  void Options();
  void Import();
  void Export();
  void Search();


  Mgmt(); //Loads or creates new database
  ~Mgmt(); //Saves database to file on exit then clears memory


};
