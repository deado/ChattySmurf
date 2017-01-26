#include <iostream> //standard i/o streaming to stdio c lib
#include <unistd.h> //POSIX; getopt and much much more =D
#include <string> //dont think this is included in iostream...
#include "colors.h" //color defines
//#include <stdlib.h>

using namespace std; //apparently after I stopped C++ namespaces took over...

void initClient();
void parseData(string data);
void parseCommand(string cmd);

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
  void display() {
    cout << "Username: " << username << endl;
    cout << "ident: " << ident << endl;
    cout << "Full Name: " << fullname << endl;
    cout << "EMail: " << email << endl;
    cout << "Hostname: " << hostname << endl;
    cout << "IP Address: " << ip << endl;
  }

}client;

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

/* initClient: This might end up changing or going away. Used at startup to read configuration files and populate local variables.
  Might end up running out of profiless or something of the sort. */
void initClient()
{
 // Client client;
  client.username = "deado";
  client.ident = "waldoworx";
  client.fullname = "Where's Waldo?!";
  client.email = "something@fake.net";
}

/* parseData: Parse incoming data */
void parseData(string data)
{
  cout << "parseData Function\n";
  cout << data << endl;
}

/* parseCommand: Parse user commands and data */
void parseCommand(string cmd)
{

}
