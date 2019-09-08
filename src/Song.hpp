#include <string>
#include "Album.hpp"

using namespace std;

class Song {
private:
  char song[20];
  char track[20] = {'1'};
  char duration[20] = {'-'};


public:
  void AddSong(); // return address location
  void DelSong();


};
