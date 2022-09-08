#include <iostream>

using namespace std;


int main(){
    int numbersArray[5];
    int *numbersPointer;
    int *minimum;

    numbersPointer = numbersArray;
    minimum = numbersArray;

    cout << "Please introduce 5 numbers for your array: ";
    
    for (int i = 0; i<5; i++){

        cin >> numbersArray[i];
       
    }

    for (int i = 0; i<5; i++){
        if(numbersPointer <= minimum){
            minimum = numbersPointer;
        }
        numbersPointer++;
    }

    cout << "The minimum number of the array is " << *minimum; 


    return 0;
}