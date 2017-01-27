/* ChattySmurf!
IRC Client written in cpp by deado.
It sucks and probably will never be 100% completed.
*/

#include <iostream>
#include <string>
#include <unistd.h>
#include "headers/main.h" //include custom header file with the fun stuff...
//#include "parser.cpp"
#include "headers/parser.h"

//void parseData(string data);

int main()
{
  /* Collect and populate client vars and do 'startup' stuff */
  cout << "Calling initClient()...\n";
  initClient();

  cout<<"Hello World!\n"; //standard output
  parseData("Test data");

  cout << "Calling client.display()...\n";
  cout << "\033[0;36m Test line for colors?\033[0m\n";
  client.display();

  cout << "Ending program\n";

  return 0;
}

