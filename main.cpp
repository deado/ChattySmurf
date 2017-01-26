/* ChattySmurf!
IRC Client written in cpp by deado.
It sucks and probably will never be 100% completed.
*/
#include "headers/main.h" //include custom header file with the fun stuff...
#include "parser.cpp"

int main()
{
  cout<<"Hello World!\n"; //standard output
  parseData("Test data...");

  cout << "Calling initClient()...\n";
  initClient();

  cout << "Calling client.display()...\n";
  cout << "\033[0;36m Test line for colors?\n";
  client.display();
  return 0;
}

