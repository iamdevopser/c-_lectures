#include <iostream>

using namespace std;




int main(){

    // while statement
    int index = 1;
    while (index <= 5){
        cout << index << endl;
        index++;
    }
    cout << endl;
    // do-while statement
    int index1 = 1;
    do {
        cout << index1 << endl;
        index1++;
    } while(index1 <= 5);
    
    return 0;

}

/* outputs:
1
2
3
4
5
*/