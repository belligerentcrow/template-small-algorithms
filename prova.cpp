#include <iostream>
#include <stdlib.h>
#include <ctime>
//#include "algorithmsHeader.h"

#define N 20
using namespace std; 

void printvec(int vec[], int n){
    for(short i = 0; i <n;  i++){
        cout << vec[i]<< " "; 
    }
}

int main(){
    int vector[N]; 

    for(short i = 0; i<N; i++){
        vector[i] = (int) rand()%20 + 1; 
    }

    cout << "Un-ordered array:"<<endl; 
    printvec(vector, N); 

    cout << endl<<"Insertion sort:"<<endl; 
    insertionSort(vector, 20); //FIX ERROR  " undefined reference to `void insertionSort<int>(int*, short)' "

    cout << "Ordered array: "<<endl; 
    printvec(vector, N); 
}