#include "songs.hpp"


/**********************************************************************
Citations:

-------- “Jingle Bells” by Kevin MacLeod (incompetech.com), 
licensed under Creative Commons: By Attribution 3.0 
(https://creativecommons.org/licenses/by/3.0/), via Wikimedia Commons
-------- Ludwig van Beethoven - Overture to 'Coriolan', Op. 62.ogg
**********************************************************************/



/*****************************************************************
                            playSong()
Takes the song number as a PARAMETER, finds the matching mp3,
and plays it using the computer's built-in audio player.
*****************************************************************/
void playSong(string song)
{
  string title;
  string fileName;

  if (song == "1")
  {
    title = "Jingle Bell";
    fileName = "Jingle_Bells.mp3";
  }
  else if (song == "2")
  {
    title = "Piano???";
    fileName = "Ludwig_van_Beethoven.mp3";
  }
  else
  {
    cout << "That song doesn't exist." << endl;
  }

  // Use ifstream to check the mp3 is in the folder before playing it
  ifstream songFile(fileName);
  if (!songFile)
  {
    cout << "Couldn't find " << fileName << " in the program's folder." << endl;
    return;
  }
  songFile.close();

  cout << "Now playing: " << title << endl;


/*
    We make our program "type" a command into the computer for us, the same as if YOU
    double-clicked the mp3 file. Windows then opens its music player.

    1. command = ...        we write the command as text, like:
                            start "" "Jingle_Bells.mp3"
                            "start" is Windows for "open this file".
                             (The \" bits are just quote marks inside the text.)
    2. #if defined(_WIN32)   Is this computer running Windows? If yes, run the program
    3. system(...)           Plays the music
*/
  string command;
#if defined(_WIN32)
  command = "start \"\" \"" + fileName + "\""; // Windows: opens the default media player
#endif

  system(command.c_str()); // run the command in the terminal
}