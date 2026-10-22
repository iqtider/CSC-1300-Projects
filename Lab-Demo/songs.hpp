/******************************************************* 
Why do we use header file:
https://www.geeksforgeeks.org/cpp/header-files-in-c-c-with-examples/
*******************************************************/

// Include guard: stops this file from being added twice by mistake
#ifndef SONGS_HPP
#define SONGS_HPP

#include <iostream>   
#include <fstream>   
#include <string>     
#include <limits>     
#include <cstdlib>    
using namespace std;  


//PROTOTYPES
int showMenu();               
void playSong(string song); 

#endif