#include <iostream>
#include <sstream>
using namespace std;

int main() {
    

    string input = "apple,orange,banana,grape";
    istringstream iss(input);

    string token;
    while (getline(iss, token, ',')) {
        cout << token << endl;
    }

    return 0;
}
// * Note : The line istringstream iss(input); is creating an object of the istringstream class in  C++. istringstream stands for "input string stream." It is a stream class in C++ that reads from strings instead of the standard input/output streams.