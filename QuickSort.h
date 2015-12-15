//
//  QuickSort.h
//  Algorithms
//
//  Created by fix on 15/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#ifndef __Algorithms__QuickSort__
#define __Algorithms__QuickSort__

#include <iostream>
template <typename T>
class QuickSortClass{
private:
    T* A;
public:
    QuickSortClass(T* A);
    int Partition(T* A, int p, int r);
    void QuickSort(T* A, int p, int r);
};
#endif /* defined(__Algorithms__QuickSort__) */
