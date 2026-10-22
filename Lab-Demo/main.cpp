#include "songs.hpp"

int main()
{
  int choice;
  string song;
  do
  {
    choice = showMenu();

    if (choice == 1) // user picked to play a song
    {
      cout << "Which song? 1) Jingle Bells  2) Beethoven - Coriolan Overture: ";
      cin >> song;
      playSong(song);
    }
    else if (choice == 2) // user choose to exit
    {
      cout << "Goodbye!" << endl;
    }

  } while (choice != 2);

  return 0;
}

// SHOW MENU
int showMenu()
{
  int choice;

  cout << endl;
  cout << "===== Song Player =====" << endl;
  cout << "1. Play a song" << endl;
  cout << "2. Exit" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  while (cin.fail() || cin.peek() != '\n' || choice < 1 || choice > 2)
  {
    cout << "Invalid choice. Please enter 1 or 2: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // throw away the bad typing
    cin >> choice;
  }

  return choice;
}