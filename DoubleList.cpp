//
//  DoubleList.cpp
//  Algorithms
//
//  Created by fix on 10/12/15.
//  Copyright (c) 2015 Anatoly Filinov. All rights reserved.
//

#include "DoubleList.h"
//O(n)
Node* Search(Node* head, int a)
{
    Node* cur = head;
    while (cur != 0) {
        if (cur->data == a) {
            return cur;
        }
        cur = cur->Next;
    }
    return 0;
}

//O(1)
Node* InsertAfter(Node* node, int a){
    assert( node != 0);
    Node* newNode = new Node();
    newNode->data = a;
    newNode->Next = node->Next;
    newNode->Prev = node;
    if (node -> Next != 0 ) {
        node->Next->Prev = newNode;
    }
    node->Next = newNode;
    return newNode;
}
//O(1)
void Delete(Node* node)
{
    assert(node != 0 );
    if( node->Next != 0 )
    {
        node->Next->Prev = node -> Prev;
    }
    if( node->Prev != 0 )
    {
        node->Prev->Next = node -> Next;
    }
    delete node;
}
//O(n)
Node* Union(Node* head1, Node* head2)
{
    if( head1 == 0)
        return head2;
    if( head2 == 0)
        return head1;
    Node* tail = head1;
    for (; tail->Next != 0; tail = head1->Next);
    tail -> Next = head2;
    return head1;
}