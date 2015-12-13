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
#include "Binom.h"
#define MAX 6
#define INF 100000000

//void Merge(int *A, int p, int q, int r)
//{
//    int n1 = q - p + 1;
//    int n2 = r - q;
//    int L[ n1 + 1];
//    int R[ n2 + 1];
//    memset(L, 0, sizeof(L));
//    memset(R, 0, sizeof(R));
//    for (int i = 0; i < n1; ++i) {
//        L[i] = A[ p + i - 1];
//    }
//    for (int j = 0; j < n2; ++j)
//    {
//        R[j] = A[q + j];
//    }
//    L[ n1 ] = INF;
//    R[ n2 ] = INF;
//    int i = 1;
//    int j = 1;
//    for (int k = p; k < r; ++k) {
//        if (L[i] <= R[j]) {
//            A[k] = L[i];
//            ++i;
//        }
//        else{
//            A[k] = R[j];
//            j++;
//        }
//    }
//}
//void MergeSort(int* A, int p, int r)
//{
//    if ( p < r)
//    {
//        int q = (p + r) / 2;
//        
//    }
//}

class Tree{
private:
    int data;
    Tree* left;
    Tree* right;
public:
    Tree(): data(0), left(nullptr), right(nullptr){}
    Tree* NewTree(int data){
        Tree* tree    = new Tree;
        tree -> data  = data;
        tree -> left  = nullptr;
        tree -> right = nullptr;
        return tree;
    }
    Tree* Insert(Tree* tree, int data){
        if (tree == nullptr) {
            return NewTree(data);
        }
        if (data < tree->data   ) {
            tree -> left = Insert(tree->left, data);
        }
        return tree;
    }
    void Find(int data){}
    void Remove(int data){}
    void Print(Tree* tree){
        while (tree != 0) {
            std::cout << tree -> data;
            tree = tree->left;
        }
       // return tree->left;
    }
    };
int main(int argc, const char * argv[])
{
    Tree* tree;
    tree = tree -> NewTree(10);
    for(auto n: { 9, 8 , 7}){
      tree->Insert(tree, n);
    }
    tree -> Print(tree);
    return 0;
}

