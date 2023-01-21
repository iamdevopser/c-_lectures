#include <iostream>

using namespace std;




int main(){

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    // guessing number with while statement
    while(secretNum != guess && !outOfGuesses){
        if (guessCount < guessLimit) {
        cout << "Enter guess: ";
        cin >> guess;
        guessCount++;
        } else {
        outOfGuesses = true;
        }
    }
        if(outOfGuesses){
        cout << "You lose!" << endl;
        } else {
        cout << "You win!" << endl;
        }
        
        return 0;
    
}

/* outputs:

Enter guess: 3
Enter guess: 5
Enter guess: 7
You win!

Enter guess: 6
Enter guess: 8
Enter guess: 1
You lose!

*/