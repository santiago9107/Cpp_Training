// Find the maximum number of an array using pointer to pass the array as an argument of the function to find it

#include<iostream>

using namespace std;

int findMax(int* arreglo){

    int maximo = 0;

    for(int i=0; i<5; i++){
        if(*arreglo> maximo){
            maximo = *arreglo;
        }
        arreglo++;
    }

    return maximo;

}


int main(){

    const int numElements = 5;
    int arreglo[numElements];

    cout << "Type the elements of the array: " << endl;
    
    for (int i = 0; i < numElements; i++){
        cin >> arreglo[i];
    }

    cout << "El numero mayor del arreglo es: "<< findMax(arreglo);
    
    return 0;
}