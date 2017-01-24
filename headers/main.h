#include <iostream> //standard i/o streaming to stdio c lib
#include <unistd.h> //POSIX; getopt and much much more =D
#include <string> //dont think this is included in iostream...

using namespace std; //apparently after I stopped C++ namespaces took over...

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
int test()
{
  cout<<"Made it into the header file!\n";
  return(0);
}

