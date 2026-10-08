#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string first;
    string last;

    void fullName(){
        cout << first << " " << last << endl;
    }
};


int main (){
    Person p;
    p.first = "Arcadio";
    p.last = "Rojo";

    p.fullName();

    return 0;
};