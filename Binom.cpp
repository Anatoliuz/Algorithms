//
//  Binom.cpp
//  Algorithms
//
//  Created by fix on 11/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "Binom.h"

long Binom(int n, int k)
{
    if (k==0) {
        return 1;
    }
    return (n - k + 1)*Binom(n,k-1)/k;
}