#include <iostream>
#include <cmath>

using namespace std;

int main()
{

int luckyNums[] = {1,2,3,4,5,6,7,8,9,0};
cout << luckyNums[0] << endl;

luckyNums[10]=19;
cout << luckyNums[10] << endl;
return 0;

}

/* output:
1
19
*/