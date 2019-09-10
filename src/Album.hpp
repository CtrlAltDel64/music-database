#include <string>
#include <fstream>
#include "Song.hpp"

using namespace std;

class Album {
private:
  int songSize = 10; // number of songs each album will hold;
  int songExist = 0; //number of existing songs
  char album[20];
  char year[20];

  Song **songObjects; //array start for objects of class Song


public:
  Album();

  void SetAlbumInfo();
  void SetAlbumInfo(char filedata[]); //to verify
  char *GetAlbum();
  char *GetYear();
  void AddSong();
  void AddSong(char filedata[]); //to verify
  void Print();
  void Export(ofstream &myfile);

  //~Album();


};
