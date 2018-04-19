//
//  StackType.hpp
//  StackLLtemplate
//
//  Created by Md. Jahid Hasan Naiem on 7/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef StackType_hpp
#define StackType_hpp

#include <stdio.h>

template <class ItemType>
struct NodeType
{
    ItemType info;
    NodeType* next;
};
template <class ItemType>
NodeType<ItemType>*resu;
template <class ItemType>
class StackType
{
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    void Display();
    void sort();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType<ItemType>* topPtr;
};
#endif /* StackType_hpp */
