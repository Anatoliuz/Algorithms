//
//  InserctionSort.cpp
//  Algorithms
//
//  Created by fix on 03/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "InsertionSort.h"
void InsertionSort(int* A, int length)
{
    for (int j = 1; j < length; ++j) {
        int key = A[j];
        int i   = j - 1;
        while( i >=0 && A[i] > key)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    }
}