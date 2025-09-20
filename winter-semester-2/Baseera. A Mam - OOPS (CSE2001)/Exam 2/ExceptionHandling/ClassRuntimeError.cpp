#include <iostream>
using namespace std;

class Exception {
    protected:
    string msg;
    public:
    Exception(string msg) {
        this-> msg=msg;
    }
    string what() {
        return msg;
    }
};

class Runtime_Error : public Exception {
    public:
    Runtime_Error(const string &msg) : Exception (msg){};
};