#include<iostream>
using namespace std;

int addition (int x, int y);
int mul (int x, int y);
int division (int x, int y);
int sub (int x, int y);

int main(){
    float a, b;
    int choice, x, retry=1;
    do{

    cout << "~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "[1] - Addition" << endl;
    cout << "[2] - Multiplication" << endl;
    cout << "[3] - Division" << endl;
    cout << "[4] - Subtraction" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout<<"What would you like to find?: ";
    cin>> choice;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;


    switch (choice){
        case 1:
            cout << endl << a << "" << " + " << b << "" << " = " << addition(a, b);
            break;
        case 2:
            cout << endl << a << "" << " * " << b << "" << " = " << mul(a, b);
            break;
        case 3:
            cout << endl << a << "" << " / " << b << "" << " = " << division(a, b);
            break;
        case 4:
            cout << endl << a << "" << " - " << b << "" << " = " << sub(a, b);
            break;
        default:
            cout << "Invalid Input! Please try again.";

    }
    cout << endl << endl <<"Do you want to try again? 0 to exit: ";
    cin >> retry;
    }while (retry !=0);

    cout << endl << endl <<"Programmed by: Hanna Princess Rodrigo" << endl;
    return 0;
}

int addition (int x, int y){
return x+y;
}
int mul(int x, int y){
return x*y;
}
int division (int x, int y){
return x/y;
}
int sub (int x, int y){
return x-y;
}
