//
//  binarysearchtree.hpp
//  binarysearchtree
//
//  Created by Md. Jahid Hasan Naiem on 1/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef binarysearchtree_hpp
#define binarysearchtree_hpp
#include <stdio.h>
template <class ItemType>
struct TreeNode
{
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};

enum OrderType {PRE_ORDER, IN_ORDER,
    POST_ORDER};
template <class ItemType>
class TreeType
{
public:
    int sum=0;
    TreeType();
    ~TreeType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void RetrieveItem(ItemType& item,bool& found);
    void InsertItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetTree(OrderType order);
    void GetNextItem(ItemType& item,OrderType order, bool& finished);
    void Print();
private:
    TreeNode<ItemType>* root;
};
#endif

