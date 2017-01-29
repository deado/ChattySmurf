/* Most of the outputs in all of these functions will get removed later on.
Especially in the early stages of the program, I have found this a very great
way to debug and get things squared away... saying when you are entering, leaving
or maybe even as far as calling other functions or blocks of code. Then when dealing
with any sort of data, output the raw data as well as each step if any alterations.
You can go back to clean up the code and remove all the excessive outputs after things
are working the way you want them. */
#include <iostream>
#include <string> //get access to all the main client infos
#include <stdlib.h>
//#include <unistd.h>
//#include "headers/parser.h"
//#include "headers/show.h"

using namespace std;

void printMsg(string msg, string msg_type);


void parseData(string data) {
  printMsg("Entering parseData()","INFO");
  printMsg(data,"INFO");
}

void parseCommand(string data) {
  string cmd = data.substr(1,data.length());
//  printMsg(cmd,"DEBUG");
  if (cmd == "help") {
    // Haven't made class Chatty or Smurf yet... so waiting for smurf_help()
    printMsg("Help list coming soon...","INFO");
  } else if (cmd == "exit") {
    exit(0);
  } else {
    printMsg("Unknown command","ERROR");
  }
}
