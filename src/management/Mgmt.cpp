
Mgmt::Mgmt(){

  cout << "Welcome to your new Music Database!\n"
  << "What would you like to do first?\n"
  << "1. Load existing database.\n"
  << "2. Create new database.\n";
  cin >> load_choice;
}

void Mgmt::Options()
{

    cout << "1. Edit Database\n"
    << "2. Search Database\n"
    << "3. Print Database\n"
    << "4. Export Database\n";
    cin >> action_choice;
}
