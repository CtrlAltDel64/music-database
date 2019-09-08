#include <iostream>
#include <string>
#include "Artist.hpp"
#include "Album.hpp"
#include "Song.hpp"
#include "Mgmt.hpp"

using namespace std;

int main() {
    cout << "Welcome to your new Music Database!\n"
    << "What would you like to do first?\n";
    Mgmt Database;
    Database.Options();

    return 0;
}
