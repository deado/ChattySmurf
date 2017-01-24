/* ChattySmurf!
IRC Client written in cpp by deado.
It sucks and probably will never be 100% completed.
*/
#include "headers/main.h" //include custom header file with the fun stuff...

int main()
{
  cout<<"Hello World!\n"; //standard output
  test(); //call custom function

  Client foo; //define foo New Client;
  foo.username = "deado"; //set username
  cout << foo.username << endl; //output and flush
  return 0;
}

