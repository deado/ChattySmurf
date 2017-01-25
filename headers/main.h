#include <iostream> //standard i/o streaming to stdio c lib
#include <unistd.h> //POSIX; getopt and much much more =D
#include <string> //dont think this is included in iostream...
//#include <stdlib.h>

using namespace std; //apparently after I stopped C++ namespaces took over...

void parseData(string data);

/* Client class: Local user information to be stored during runtime. */
class Client {
//public variables
  public:
    string username;
    string ident;
    string fullname;
    string email;
    string hostname;
    string ip;
};

/* DCC Class: Direct Client-to-Client transfers */
class Dcc {
  public:
    int port;
    string hostname;
    string username;
    string filename;
    double filesize;

};

/* Server Class: Server and connection information variables */
class Server {
  public:
    int port;
    string host;
    string channel[];
    bool issecure;
};

/* Custom funtion; show working inside header files; no use yet */
void parseData(string data)
{
  cout << "parseData Function\n";
  cout << data << endl;
}

