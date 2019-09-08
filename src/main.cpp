#include <iostream>
#include <string>
#include "Mgmt.hpp"

using namespace std;

int main() {
  cout << "Welcome to your new Music Database!\n"
    << "What would you like to do first?\n";
  Mgmt Database;
  if (Database.Getload_choice() == 2) {
    Database.Options();
  }

  return 0;
}
