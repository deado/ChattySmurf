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
#include "headers/show.h"
//void parseData(string data);

const string Smurf::escChar = "\033[";

int main()
{
  /* Collect and populate client vars and do 'startup' stuff */
  printMsg("Calling initClient()...","INFO");
  initClient();

  parseData("Test data");

  printMsg("Calling client.display()...","INFO");
  client.display();

  string userInput;
  bool endLoop = false;
  while (!endLoop) {
    cin >> userInput;
    if (userInput.substr(0,1) == "/") {
      parseCommand(userInput);
    } else {
      printMsg(userInput,"MSG");
   }
  }
  return 0;
}
