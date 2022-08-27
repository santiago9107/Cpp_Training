/* Create a program to know if a number is prime number and the memory location, use pointers*/

#include <iostream>

using namespace std;


void isPrime(int *p_number){
int isDivisible = 0;
    for (int i = 1; i < *p_number+1; i++){
             
        if(*p_number % i == 0){
            isDivisible++;
        }   
 
     }

    if (isDivisible < 3){
        cout << *p_number << " is prime" << endl;
    }

    else{
        cout << *p_number << " is not prime" << endl;
        }


   cout << "Memory location of number is: " << p_number;
}

int main(){
    int number, *p_number;
    cout << "Enter a number: ";
    cin >> number;
    p_number = &number;
    isPrime(p_number);
}