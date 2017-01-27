/* This file contains functions for displaying things to the console */

#include <iostream>
#include <string>

using namespace std;

void printMsg(string msg, string msg_type) {
  cout << "Made inside printMsg()\n";
  cout << msg << endl;
  cout << msg_type << endl;
}
