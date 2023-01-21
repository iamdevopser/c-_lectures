#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >=num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    
    return result;
}

int main(){

    cout << getMax (10, 2, -4) << endl;
    
    cout << getMax (2, 5, 0) << endl;
    
    cout << getMax (2, 1, 4) << endl;

    return 0;
    
}

/* output:
10 --> num1
5 ---> num2
4 ---> num3
*/