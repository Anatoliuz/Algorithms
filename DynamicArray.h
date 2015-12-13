//
//  DynamicArray.h
//  Algorithms
//
//  Created by fix on 09/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#ifndef __Algorithms__DynamicArray__
#define __Algorithms__DynamicArray__

#include <iostream>
#include <cassert>
class DynamicArray{
private:
    double* buffer;
    int bufferSize;
    int realSize;
    void grow();
public:
    DynamicArray(): buffer( 0 ), bufferSize( 0 ), realSize( 0 ) {}
    ~DynamicArray() { delete[] buffer; }

    int Size() const { return realSize; }
    double Get( int index ) const;
    double operator[](int index) const { return Get(index);}
    double& operator[](int index);
    
    void Add(double element);
};
#endif /* defined(__Algorithms__DynamicArray__) */
