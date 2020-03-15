#include <httplib.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#define SERVER_ROOT "/home/asterwyx/repos/FileServer/ServerRoot/"  // The root folder of the file server
using namespace std;

int main(int argc, char *argv[])
{
    using namespace httplib;
    auto server = new Server();
    // Acquire directory information
    server->Get("/index", [](const Request &req, Response &res) {
        string command("ls -alh >");
        string filename(SERVER_ROOT);
        filename.append("dir.txt");
        command = command + filename;
        cout << "Execute command: " << command << endl;
        system(command.data());
        ostringstream buf;
        ifstream ifile(filename);
        char ch;
        while (buf && ifile.get(ch))
        {
            buf.put(ch);
        }
        string index_content(buf.str());
        res.set_content(index_content.data(), "text/plain");
    });
    // Stop the server by request /stop
    server->Get("stop", [&](const Request &req, Response &res) {
        server->stop();
    });

    // Start server listen
    server->listen("localhost", 8888);    
    return 0;
}




	

	
	


	
