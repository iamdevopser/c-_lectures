#include <iostream>
#include <cmath>
using namespace std;

int main()
{

string color, pluralNoun, celebrity;

cout << "enter the color: ";
getline(cin, color);
cout << "enter plural noun: ";
getline(cin, pluralNoun);
cout << "enter celebrity: ";
getline(cin, celebrity);
cout << endl;

cout << "Roses are " << color << endl;

cout << pluralNoun << " are blue" << endl;

cout << "I love " << celebrity << endl;

return 0;


}

/* output:
Roses are white
kitchen are blue
I love tom
*/