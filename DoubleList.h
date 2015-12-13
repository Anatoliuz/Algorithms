//
//  DoubleList.h
//  Algorithms
//
//  Created by fix on 10/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#ifndef __Algorithms__DoubleList__
#define __Algorithms__DoubleList__

#include <iostream>
#include <cassert>
struct Node
{
    int data;
    Node* Prev;
    Node* Next;
    Node(): data(0), Next(0), Prev(0) {}
};
Node* Search(Node* head, int index);
#endif /* defined(__Algorithms__DoubleList__) */
