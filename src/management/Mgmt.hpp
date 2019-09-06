#include "Artist.h"
#include "Album.h"
#include "Song.h"
#include "string"
using namespace std;

class Mgmt {
private:



public:
  void View(); //dynamic memory allocation to show all data
  void Options();
  void Create();
  void Import();
  void Export();
  void Search();


  Mgmt(); //Loads or creates new database
  ~Mgmt(); //Saves database to file on exit


}
