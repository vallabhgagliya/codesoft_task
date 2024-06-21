#include<iostream>


using namespace std;

int main(){
    int num1,num2;
    char operation;
    double result;
    
    cout<<"enter 1st number:";
    cin>>num1;

    cout<<"enter a operation of this ( + , - , * , / ) :";
    cin>>operation;

    cout<<"enter 2st number:";
    cin>>num2;

    switch (operation){
        case '+' :

        result = num1 + num2;
        cout<< num1<<" + "<<num2<<" = " <<result<<endl;
        break;

        case '-' :

        result = num1 - num2;
        cout<< num1<<" - "<<num2<<" = "  <<result<<endl;
        break;

        case '*' :

        result = num1 * num2;
        cout<< num1<<" * "<<num2<<" = "  <<result<<endl;
        break;

        case '/' :

        result = num1 / num2;
        cout<< num1<<" / "<<num2<<" = "  <<result<<endl;
        break;

    default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }
    return 0;
}


