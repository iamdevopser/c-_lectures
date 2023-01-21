#include <iostream>

using namespace std;
// gunleri listeleyen if statement
// string getDayOfWeek(int dayNum){

//     string dayName;

//     if(dayNum == 0){
//         dayName = "Sunday\n";
//     } else if(dayNum == 1){
//         dayName = "Monday\n";
//     } else if(dayNum == 2){
//         dayName = "Tuesday\n";
//     } else if(dayNum == 3){
//         dayName = "Wednesday\n";
//     } else if(dayNum == 4){
//         dayName = "Thursday\n";
//     } else if(dayNum == 5){
//         dayName = "Friday\n";
//     } else if(dayNum == 6){
//         dayName = "Saturday\n";
//     } else {
//         cout << "invalid day number is entered\n";
//     }

//     return dayName;
// }

int main(){

    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    int result;

    if ( op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else if (op == '/' ){
        result = num1 / num2;
    } else cout << "invalid operator\n";
    cout << result << endl;

    return 0;

}

/* outputs:
Enter first number: 4
Enter operator: +
Enter second number: 12
16

Enter first number: 2
Enter operator: -
Enter second number: 5
-3

Enter first number: 4
Enter operator: *
Enter second number: 6
24

Enter first number: 10
Enter operator: /
Enter second number: 2
5
*/