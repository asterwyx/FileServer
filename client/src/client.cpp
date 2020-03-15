#include <iostream>
#include <httplib.hpp>
using namespace std;

int main(void)
{
    httplib::Client client("localhost", 8888);
    auto res = client.Get("/index");
    if (res && res->status == 200)
    {
        cout << res->body << endl;
    }
    client.Get("/stop");
    return 0;    
}