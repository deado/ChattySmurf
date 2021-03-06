/* ChattySmurf! [CS-00000002]
IRC Client written in cpp by deado.
It sucks and probably will never be 100% completed.
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <ncurses.h>
#include "headers/main.h"

/* Filter pretty much all text being printed through this function
 to make shit all pretty. */
void printMsg(string msg, string msg_type) {
	if (msg_type == "INFO") {
		cout << "\033[0;32m[**]\033[0m " << msg << endl;
	} else if (msg_type == "ERROR") {
		cout << "\033[0;31m[!!]\033[0m " << msg << endl;
	} else if (msg_type == "MSG") {
		cout << msg << endl;
	} else if (msg_type == "DEBUG") {
		cout << "\033[0;35m[DBG]\033[0m " << msg << endl;
	} else if (msg_type == "HELP") {
		cout << "\033[0;33m[??]\033[0m " << msg << endl;
	} else {
		cout << "Unknown msg_type: " << msg_type << endl;
	}
}

/* Parses incoming data */
void parseData(string data) {
	printMsg("Entering parseData()","DEBUG");
	printMsg(data,"DEBUG");
}

/* Parse commands being presented by the user and sends them to
 the appropriate functions */
void parseCommand(string data) {
	string cmd = data.substr(1,data.length());
	if (cmd == "help") {
		smurf.help();
	} else if (cmd == "exit") {
		exit(0);
	} else {
		printMsg("Unknown command","ERROR");
	}
}

int main() {
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
