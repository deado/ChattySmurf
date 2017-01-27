#include "colors.h" //color defines

using namespace std; //apparently after I stopped C++ namespaces took over...

void initClient();

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
    cout << "\033[0;32mUsername: " << username << endl;
    cout << "ident: " << ident << endl;
    cout << "Full Name: " << fullname << endl;
    cout << "EMail: " << email << endl;
    cout << "Hostname: " << hostname << endl;
    cout << "IP Address: " << ip << "\033[0m" << endl;
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
