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
#define MAX 6
int main(int argc, const char * argv[])
{

    int a[MAX] = {1,666, 85, 99, 33, 35};
    BubbleSort(a,MAX);
    return 0;
}

