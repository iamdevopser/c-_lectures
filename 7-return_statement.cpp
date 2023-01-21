#include <iostream>
using namespace std;

double cube(double num){
    double result = num * num * num;
    return result;

    // or you can type (return num * num * num) instead of given info below
    // answer will be the same
}

int main()
{

double answer = cube(5.0);// you can store result in specific env.
                          // or you can print answer out directly by cube(5.0) 
cout << answer << endl;

return 0;

}
/* output: 125 */
