//
//  StackType.cpp
//  StackLLtemplate
//
//  Created by Md. Jahid Hasan Naiem on 7/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "StackType.hpp"
#include <iostream>
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        cout<<"The stack is Empty"<<endl;
    else
        return topPtr->info;
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType<ItemType>* location;
    try
    {
        location = new NodeType<ItemType>;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        cout<<"The stack is full"<<endl;
    else {
        NodeType<ItemType>* location;
        location = new NodeType<ItemType>;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    } }
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
        cout<<"Empty"<<endl;
    else
    {
        NodeType<ItemType>* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    } }



//////
template <class ItemType>
NodeType<ItemType> *SortedInsert(NodeType<ItemType>* head, NodeType<ItemType>* newNode )
{
    //special case: newnode to be added as first node
    if( head == NULL || head->info >= newNode->info)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    NodeType<ItemType> *ptr = head;
    NodeType<ItemType> *prev = NULL;
    while ( ptr != NULL && ptr->info < newNode->info )
    {
        prev = ptr;
        ptr = ptr->next;
    }
    newNode->next = ptr;
    prev->next = newNode;
    return head;
}


template <class ItemType>
NodeType<ItemType> *InsertionSort( NodeType<ItemType>* head)
{
    if( !head || !head->next )
        return head;
    
    NodeType<ItemType>* ptr = head->next;
    NodeType<ItemType> * result = head;
    result->next = NULL;
    
    while ( ptr )
    {
        NodeType <ItemType>*temp = ptr;
        ptr = ptr->next;
        result = SortedInsert(result,temp);
    }
    
    return result;
}

////
template <class ItemType>
void StackType<ItemType>::sort()
{
    
     topPtr = InsertionSort(topPtr);
}



template <class ItemType>
void StackType<ItemType>::Display()
{
    NodeType<ItemType> *temp;
    temp=topPtr;
    while(temp!=NULL){
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}


template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType<ItemType>* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
    
}
