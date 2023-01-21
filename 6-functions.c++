#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age){ // return function

    cout << "Hello " << name << "You are " << age << " years old." << endl;
}

int main()
{
sayHi("Mike! ", 60);
sayHi("Tom! ", 45);
sayHi("Steve! ", 19);
return 0;

}

// OUTPUT
// Hello Mike! You are 60 years old.
// Hello Tom! You are 45 years old.
// Hello Steve! You are 19 years old.