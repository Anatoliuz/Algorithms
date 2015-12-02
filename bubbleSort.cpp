//
//  bubbleSort.cpp
//  Algorithms
//
//  Created by fix on 02/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "bubbleSort.h"
void BubbleSort(int* arr, int size)
{
    for (int index = 0; index < size; ++index) {
        for (int jndex = size - 1; jndex >=0 ; --jndex) {
            if (arr[jndex] < arr[jndex-1]) {
                int temp = arr[jndex];
                arr[jndex] = arr[jndex - 1];
                arr[jndex - 1] = temp;
            }
        }
    }
    cout << "BubbleSort: ";
    for (int index = 0; index < size; ++index  ) {
            cout<<arr[index] << ",";
        }
    cout << endl;
}