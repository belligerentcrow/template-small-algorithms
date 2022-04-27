#include <iostream>
#include "algorithmsHeader.h"

template <class T>

//Search Algorithms

int ricercaLineare(T vec[], int dim, T key){
    for(int i = 0; i < dim; i++){
        if (vec[i] == key){
            return i; 
        }
    }
    return -1;
};

template <class T>
int binarySearch(T vec[], int low, int high, T key){
    int central; 
    T centralValue; 
    while(low <= high){
        central = (low + high)/2; //index central element
        centralValue = vec[central]; //value of central index
        if(key == centralValue){
            return central;     //found value, return index
        }else if (key < centralValue){
            high = central -1; //lower half-vector
        }else{
            low = central + 1; //higher half-vector
        }
    }
    return -1; 
};

//Sorting Algorithms 

//Insertion Sort

template <class T>
void insertionSort(T vec[], int n){
    T aux; 
    for(short i = 1; i < n; i++){
        aux = vec[i]; 
        int j = i -1; 
        while((j>=0)&&(vec[j]>aux)){
            vec[j+1] = vec[j]; 
            j--; 
        }
        vec[j+1] = aux; 
    }
};


//Selection Sort

template <class T>
void selectionSort(T vec[], short n){
    T aux; 
    short posmin; 
    for(short i = 0; i<n-1; i++){
        posmin = i; 
        short j = i+1; 
        while(j < n){
            if(vec[j]<vec[posmin]){
                posmin = j; 
            }
            j++; 
        }
        aux = vec[i]; 
        vec[i] = vec[posmin]; 
        vec[posmin] = aux; 
    }
};


//Bubblesort

template <class T>
void bubbleSort(T vec[], short n){
    T aux; 
    bool swap; 
    swap = true; 
    while(swap){
        swap = false; 
        for(short i = 0; i<n-2; i++){
            if(vec[i]>vec[i+1]){
                aux = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = aux; 
                swap = true; 
            }
        }
    }
};


//Quicksort

template <class T>
void quickSort(T * vec, int n){
    quickSort(vec, 0, n-1);
}
template <class T>
void quickSort(T vec[], int s, int d){
    int i = s, j = d; 
    T tmp; 
    T pivot = vec[(s+d)/2]; 
    while (i <= j){
        while(vec[i]<pivot) i++; 
        while(vec[j]>pivot) j--; 
        if(i <=j){
            tmp = vec[i];
            vec[i] = vec[j]; 
            vec[j] = tmp; 
            i++; 
            j--; 
        }
    }; 
    if (s<j){
        quickSort(vec, s, j); 
    }
    if (i < d){
        quickSort(vec, i, d); 
    }
}
