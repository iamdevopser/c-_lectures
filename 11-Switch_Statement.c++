#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){

    string dayName;

    switch (dayNum){
        case 0:
        dayName = "Sunday\n";
        break;
        case 1:
        dayName = "Monday\n";
        break;
        case 2:
        dayName = "Tuesday\n";
        break;
        case 3:
        dayName = "Wednesday\n";
        break;
        case 4:
        dayName = "Thursday\n";
        break;
        case 5:
        dayName = "Friday\n";
        break;
        case 6:
        dayName = "Saturday\n";
        break;
        default:
        dayName = "Invalid Day\n";

    }
    
    return dayName;
}


int main(){

    cout << getDayOfWeek(0);
    cout << getDayOfWeek(1);
    cout << getDayOfWeek(2);
    cout << getDayOfWeek(3);
    cout << getDayOfWeek(4);
    cout << getDayOfWeek(5);
    cout << getDayOfWeek(6);
    cout << getDayOfWeek(7);
    return 0;

}

/* outputs:
Sunday
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Invalid Day
*/