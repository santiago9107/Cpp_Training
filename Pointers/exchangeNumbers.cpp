// Exchange two numbers using pointers

#include<iostream>

using namespace std;

int number1 = 1;
int number2 = 2;

void exchangeFunction(int* num1 , int* num2){


    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){
    
    cout << "num1 before execution: " << number1 << endl;
    cout << "num2 before execution: " << number2 << endl;

    exchangeFunction(&number1, &number2);

    cout << "num1 after execution: " << number1 << endl;
    cout << "num2 after execution: " << number2 << endl;

    return 0;
}