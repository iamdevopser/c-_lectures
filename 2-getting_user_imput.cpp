#include <iostream>
#include <cmath>
using namespace std;

int main()
{

//getting string from terminal
string name;
cout << "Enter your name: \n";
getline(cin, name);

// getting integer from terminal
int age;
cout << "Enter your age: \n";
cin >> age;

cout << "Hello " << name << "!\n";
cout << "You are " << age << " years old!\n";





return 0;


}

/* output: 

Hello tarik!
You are 37 years old!

*/