//
//  StackType.cpp
//  stack
//
//  Created by Md. Jahid Hasan Naiem on 15/2/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "StackType.h"
#include <iostream>

using namespace std;

template<class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}

template<class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}

template<class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top ==  MAX_ITEMS-1);
}
template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() )
        throw FullStack();
    
    top++;
    items[top] = newItem;
}

template<class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStackException();
    top--;
}

template<class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStackException();
   return items[top];
}

template<class ItemType>
void StackType<ItemType>::Display()
{

for(int i=top;i>=0;i--)
cout <<items[i] <<" ";
}

