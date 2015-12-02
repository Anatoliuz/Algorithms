//
//  main.cpp
//  Algorithms
//
//  Created by fix on 02/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//
//
#include <iostream>
#include "bubbleSort.h"
#include "InsertionSort.h"
//merge() O(n)
#define MAX 6
#define INF 100000000

int main(int argc, const char * argv[])
{
    int A[MAX] = {1,666, 85, 99, 33, 35};
  //  BubbleSort(A,MAX);
   // int Merge[MAX] = {2,4,5,7,1,2,3,6};

//    MergeSort(B, 0, MAX);
    int C[MAX] = { 5, 2, 4, 6, 1, 3};
    InsertionSort(C, MAX);
    for (int i = 0; i < MAX; ++i) {
        cout<<C[i] <<",";
    }

    return 0;
}

