#include <iostream>
#include <cpr/cpr.h>
using namespace std;

int main() {

    cpr::Response response = cpr::Get(cpr::Url("https://httpbin.org/get"));
    cout << "STATUS: " << response.status_code << endl;
    cout << response.text << endl;

    return 0;
}
