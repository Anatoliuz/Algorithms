//
//  Stack.cpp
//  Algorithms
//
//  Created by fix on 10/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "Stack.h"
Stack::Stack(int _bufSize): bufferSize(_bufSize), top( -1 )
{
    buffer = new int[bufferSize];
}
Stack::~Stack(){
    delete[] buffer;
}
void Stack::Push(int a){
    assert( top + 1 < bufferSize);
    buffer[++top] = a;
}
int Stack::Pop(){
    assert(top != -1);
    return buffer[top--];
}