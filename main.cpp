#include <iostream>
#include "http.h"

using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    http_get("http://127.0.0.1:80/index.html");
    return 0;
}