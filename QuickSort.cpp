//
//  QuickSort.cpp
//  Algorithms
//
//  Created by fix on 15/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "QuickSort.h"
template <typename T>
QuickSortClass<T>::QuickSortClass(T* A) {
    this->A = A;
}
template <typename T>
int QuickSortClass<T>::Partition(T* A, int p, int r){
    int x = A[r - 1 ];
    int i = p - 1;
    for (int j = p; j < r - 1; ++j) {
        if(A[j] <= x){
            ++i;
            T temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    T temp = A[r - 1];
    A[r - 1] = A[i + 1];
    A[i + 1] = temp;
    return i + 1;
}
template <typename T>
void QuickSortClass<T>::QuickSort(T* A, int p, int r)
{
    if(p < r)
    {
        int   q = Partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
}