#include <iostream>

using namespace std;

int main() {

    int numberMenuOne;

    cout<<"Welcome to the application"<<endl;
    cout<<"Select an item from the menu: "<<endl;

    cout<<"1 - Working with Strings"<<endl;
    cout<<"2 - Working with numbers"<<endl;
    cout<<"3 - go out"<<endl;

    cout<<"Enter number one: ";
    cin>>numberMenuOne;

    while(true){
        switch (numberMenuOne) {
            case 1:

                int numberMenuTwo;
                float resultOne;

                int number1;
                int number2;
                cout<<"number1: ";
                cin>>number1;
                cout<<endl<<"number2: ";
                cin>>number2;

                cout<<"1 - add numbers"<<endl;
                cout<<"2 - subtract numbers"<<endl;
                cout<<"3 - multiply numbers"<<endl;
                cout<<"4 - divide numbers"<<endl;

                cout<<"Enter number menu 2: ";
                cin>>numberMenuTwo;

                switch (numberMenuTwo) {
                    case 1:
                        resultOne = number1 + number2;
                        cout<<resultOne<<endl;
                        break;
                    case 2:
                        resultOne = number1 - number2;
                        cout<<resultOne<<endl;
                        break;
                    case 3:
                        resultOne = number1 * number2;
                        cout<<resultOne<<endl;
                        break;
                    case 4:
                        if(number1 != 0 || number2 != 0) {
                            resultOne = number1 / number2;
                            cout << resultOne << endl;
                            break;
                        }else{
                            cout<<"You can't divide by zero"<<endl;
                            break;
                        }
                    default:
                        cout<<"The value entered is incorrect"<<endl;
                        break;
                }

            case 2:
                string to_string_one;
                string to_string_two;
                string to_string_result;

                cout<<"Enter one string: ";
                cin>>to_string_one;

                cout<<"Enter two string: ";
                cin>>to_string_two;

                //to_string_result = to_string_one + " " + to_string_two;
                cout<<endl<<"Result: " << to_string_result<< endl;
                break;
        }
    }
}
