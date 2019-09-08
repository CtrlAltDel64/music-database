#include <string>
#include "Artist.hpp"

using namespace std;

class Mgmt {
private:
  int load_choice;
  int action_choice;
  int artistSize = 100; //number of artists that the database will hold
  int artistExist = 0; //number of existing artists
  Artist *artistObjects; //array start for objects of class Artist


public:
  int Getload_choice();
  int Getaction_choice();

  void NewEntry(); //starts process for new Artist/Album/Song object creation
  void Print(); //Show all in alphabetical order
  void Options();
  void Import(); //load database from file
  void Export(); //export database to file (maybe redundant with destructor)
  void Search(); //search database according to criteria


  Mgmt(); //Loads or creates new database
  ~Mgmt(); //Saves database to file on exit then clears memory


};
