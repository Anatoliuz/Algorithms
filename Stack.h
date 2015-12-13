//
//  Stack.h
//  Algorithms
//
//  Created by fix on 10/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#ifndef __Algorithms__Stack__
#define __Algorithms__Stack__

#include <iostream>
#include <cassert>
class Stack{
public:
    int top;
    int* buffer;
    int bufferSize;
private:
    Stack( int buf_Size);
    ~Stack();
    void Push(int a);
    int Pop();
    bool isEmpty() const { return top == -1; }
    int Peek();
};
#endif /* defined(__Algorithms__Stack__) */
