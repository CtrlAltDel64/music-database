#include <string>

using namespace std;

class Song {
private:
  char song[20];
  char track[20] = {'1'};
  char duration[20] = {'-'};


public:
  void SetSongInfo();
  char *GetSong();
  char *GetTrack();
  char *GetDuration();

  Song();
  //~Song();


};
