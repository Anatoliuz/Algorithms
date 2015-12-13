//
//  DynamicArray.cpp
//  Algorithms
//
//  Created by fix on 09/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "DynamicArray.h"
void DynamicArray::grow()
{
    
}
double DynamicArray::Get(int i) const
{
    assert(i >= 0 && i < realSize && buffer != 0);
    return buffer[i];
}