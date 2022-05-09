#include <iostream> 

template <typename T>
int ricercaLineare(T vec[], int dim, T key);

template <typename T>
int binarySearch(T vec[], int low, int high, T key);

//Sorting Algorithms 

//Insertion Sort

template <typename T>
void insertionSort(T * vec, int n);


//Selection Sort

template <typename T>
void selectionSort(T vec[], short n);


//Bubblesort

template <typename T>
void bubbleSort(T vec[], int n);


//Quicksort

template <typename T>
void quickSort(T * vec, int n);
template <typename T>
void quickSort(T vec[], int s, int d);
