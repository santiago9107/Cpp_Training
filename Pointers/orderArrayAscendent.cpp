// Create a function to order the elements of an array in ascendent order, use pointers.

#include<iostream>
#include<stdlib.h>

using namespace std;
int *oldArray, maximum = 0, aux;

void orderArray(int* arreglo, int numElements){

    for(int i=0; i<numElements; i++){
        for(int j=0; j<numElements-1; j++){
            if(arreglo[j]>arreglo[j+1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }

    }

    for (int i = 0; i < numElements; i++){
        cout << arreglo[i] << " ";
    }
    
}

int main(){

    int numElements;
    cout << "Type the number of elements of the array: ";
    cin >> numElements;

    oldArray = new int[numElements];
   
    cout << "Type the elements of the array: " << endl;
    
    for (int i = 0; i < numElements; i++){
        cin >> oldArray[i];
    }
    cout << "The old array is: "; 

    for (int i = 0; i < numElements; i++){
        cout << oldArray[i] << " ";
    }
    cout << "The ordered array is: "; 
    orderArray(oldArray, numElements);  

    delete [] oldArray; 
  
    return 0;
}