#include <cstdlib>
#include <iostream>
#include <boost/format.hpp>

using namespace std;

int main(int argc, char** argv) {

    unsigned int arr[5] = { 0x05, 0x04, 0xAA, 0x0F, 0x0D };
    cout << boost::format("%02X-%02X-%02X-%02X-%02X")
            % arr[0]
            % arr[1]
            % arr[2]
            % arr[3]
            % arr[4]
         << endl;
    return 0;
}

//output should be:
//05-04-AA-0F-0D
