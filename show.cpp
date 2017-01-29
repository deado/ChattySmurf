/* This file contains functions for displaying things to the console */

#include <iostream>
#include <string>

using namespace std;

void printMsg(string msg, string msg_type) {
//  cout << "Made inside printMsg()\n";
//  cout << msg << endl;
//  cout << msg_type << endl;

  if (msg_type == "INFO") {
    cout << "\033[0;32m[I]\033[0m " << msg << endl;
  } else if (msg_type == "ERROR") {
    cout << "\033[0;31m[E]\033[0m " << msg << endl;
  } else if (msg_type == "MSG") {
    cout << "MSG received!\n";
  } else if (msg_type == "DEBUG") {
    cout << "\033[0;35m[DBG]\033[0m " << msg << endl;
  } else {
      cout << "Unknown msg_type: " << msg_type << endl;
  }

}
