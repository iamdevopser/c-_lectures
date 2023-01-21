#include <iostream>
using namespace std;


int main()
{

bool isMale = false;
bool isTall = false;

if(isMale && isTall){
    cout << "You are a Tall Male! " << endl;
} else if(isMale && !isTall) {
    cout << "You are a short Male" << endl;
} else if(!isMale && isTall) {
    cout << "You are a Tall but not Male" << endl;
} else {
    cout << "You are not Male and not Tall" << endl;
}

return 0;

}

/* possible outputs:
You are a Tall Male! 
You are a short Male
You are a Tall but not Male
You are not Male and not Tall
*/