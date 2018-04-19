//
//  SortedType.cpp
//  SortedtypeLL
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "SortedType.hpp"

#include <iostream>
using namespace std;

template <class ItemType> SortedType<ItemType>::SortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
template <class ItemType>
int SortedType<ItemType>::LengthIs()
{
    NodeType* tempPtr;
    tempPtr= listData;
    length=0;
    while (tempPtr!= NULL)
    {
        length++;
        tempPtr = tempPtr->next;
        
    }
    return length;
}


template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;
    
    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch)
    {
        if (location->info < item)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else moreToSearch = false;
    }
    newNode = new NodeType;
    newNode->info = item;
    
    if (predLoc == NULL)
    {
        newNode->next = listData;
        listData = newNode;
    }
    else
    {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}
template <class ItemType>
void SortedType<ItemType>::Display()
{
    NodeType* tempPtr;
    tempPtr= listData;
    while (tempPtr!= NULL)
    {
        cout<<tempPtr<<endl;
        tempPtr = tempPtr->next;
        
    }
}
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if (item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while (!(item==(location->next)->info))             location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}
template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType & item, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found)
    {
        if (item == location->info)             found = true;
        else if (item > location->info)
        {
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else             moreToSearch = false;
    }
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
}
template <class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}

template <class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}


template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType & item)
{
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}


