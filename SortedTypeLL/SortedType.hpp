//
//  SortedType.hpp
//  SortedtypeLL
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef SortedType_hpp
#define SortedType_hpp

#include <stdio.h>

template <class ItemType>
class SortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void Display();
    void GetNextItem(ItemType&);
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


#endif /* SortedType_hpp */
