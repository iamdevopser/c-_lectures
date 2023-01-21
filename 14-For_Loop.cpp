#include <iostream>

using namespace std;

int main(){

    for(int i=1; i <=5; i++){
        cout << i << endl;
    }

    cout << endl;

    int nums[] = {1,2,5,7,9};
    for (int i = 0; i < 5; i++){
        cout << nums[i] << endl;
    }
    
    return 0;

}

/*outputs:
1
2
3
4
5

1
2
5
7
9
*/