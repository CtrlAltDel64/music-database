#include <string>
#include "Artist.hpp"

using namespace std;

class Mgmt {
private:
  int load_choice;
  int action_choice;
  int artistSize = 10; //number of artists that the database will hold
  int artistExist = 0; //number of existing artists
  Artist **artistObjects; //array start for objects of class Artist


public:
  Mgmt(); //Loads or creates new database

  int Getload_choice();
  int Getaction_choice();

  void Import(); //load database from file //to finish
  void Options(); //to finish
  void NewEntry(); //starts process for new Artist/Album/Song object creation
  void NewEntry(char filedata[]); //new Artist/Album/Song object creation when importing
  void Search(); //search database according to criteria //todo
  void Print(); //Show all in alphabetical order //todo
  void Export(); //export database to file (maybe redundant with destructor) //todo

  ~Mgmt(); //Saves database to file on exit then clears memory


};
