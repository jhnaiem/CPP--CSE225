//
//  QueType.cpp
//  CPP
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "QueType.hpp"
#include <iostream>
using namespace std;
template <class ItemType>
QueType<ItemType>::QueType()
{
    front = NULL;
    rear = NULL; }
template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == NULL);
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        cout<<"FULL"<<endl;
    else
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    } }


//Delete//////
template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
         cout<<"EMPTY"<<endl;
    else
    {
        NodeType* tempPtr;
        tempPtr = front;
        item = front->info;
        cout<<item<<endl;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete tempPtr;
    } }


template <class ItemType>
void QueType<ItemType>::Display()
{
    NodeType* tempPtr;
    tempPtr= front;
    while (tempPtr!= NULL)
    {
        cout<<tempPtr->info<<endl;
        tempPtr = tempPtr->next;
        
    }
}
//to remove consecutive duplicate entries from a given linked list
template <class ItemType>
void QueType<ItemType>::DelCons()
{
    NodeType* tempPtr;
    NodeType* location;
    tempPtr= front;
    while (tempPtr!= NULL)
    {
        if (tempPtr->next != NULL && tempPtr->info == tempPtr->next->info) {
            location=tempPtr->next->next;
            delete tempPtr->next;
            tempPtr->next=location;
        }
        else
        {
            tempPtr=tempPtr->next;
        }
//        cout<<tempPtr->info<<endl;
//        tempPtr = tempPtr->next;
        
    }
}
////
template <class ItemType>
void QueType<ItemType>::DelCons()
{
    NodeType* tempPtr;
    NodeType* location;
    tempPtr= front;
    int count1=0;
    int count0=0;
    while (tempPtr!= NULL)
    {
        if (tempPtr->next != NULL && tempPtr->info == 0) {
            location=tempPtr->next->next;
            tempPtr=location;
            count0++;
            if(count0==100)
            {
                cout<<"super lucky"
            }
            else
                cout<<"Better luck"<
            
        }
        
        tempPtr= front;
        else if (tempPtr->next != NULL && tempPtr->info == 1) {
            location=tempPtr->next->next;
            tempPtr=location;
            count1++;
            if(count1==100)
            {
                cout<<"super lucky"
            }
            else
                cout<<"Better luck"
        }
        
        
    }
}
////
template <class ItemType>
void QueType<ItemType>::DelCons()
{
    NodeType* tempPtr;
    NodeType* location;
    tempPtr= front;
    int count=0;
    while (tempPtr!= NULL)
    {
        if (tempPtr->next != NULL && tempPtr->info == tempPtr->next->info) {
            location=tempPtr->next->next;
            tempPtr->next=location;
            count++;
            if(count==100)
            {
                break;
                
            }
            
        }
        else
        {
            tempPtr=tempPtr->next;
        }
       
        
    }
    if(count==100)
    {
        cout<<"super lucky"
    }
    else
        cout<<"Better luck"
}

/////
template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL; }

template <class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}
