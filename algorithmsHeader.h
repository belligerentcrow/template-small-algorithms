#include <iostream> 

template <class T>
int ricercaLineare(T vec[], int dim, T key);

template <class T>
int binarySearch(T vec[], int low, int high, T key);

//Sorting Algorithms 

//Insertion Sort

template <class T>
void insertionSort(T vec[], short n);


//Selection Sort

template <class T>
void selectionSort(T vec[], short n);


//Bubblesort

template <class T>
void bubbleSort(T vec[], short n);


//Quicksort

template <class T>
void quickSort(T * vec, int n);
template <class T>
void quickSort(T vec[], int s, int d);
