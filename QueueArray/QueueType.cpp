//
//  QueueType.cpp
//  QueueLL
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "QueueType.hpp"
#include <iostream>
using namespace std;
template <class ItemType>
QueueType<ItemType>::QueueType(int max) {
    maxQue=max+1;
    front=maxQue-1;
    rear=maxQue-1;
    items=new ItemType[maxQue];
}
template <class ItemType>
QueueType<ItemType>::~QueueType() {
    delete []items;
}
template <class ItemType>
bool QueueType<ItemType>::IsEmpty(){
    return (front==rear);
}
template <class ItemType>
bool QueueType<ItemType>::IsFull(){
    return ((rear+1)%maxQue==front);
}

template <class ItemType>
void QueueType<ItemType>::Enqueue(ItemType newItem){
    if (IsFull()) {
        cout<<"FULL";
    }
    else if(rear<(maxQue-1)){
        rear=(rear+1)%maxQue;
        items[rear]=newItem;
    }
    else{
        rear=0;
        items[rear]=newItem;
        
    }
}

template <class ItemType>
void QueueType<ItemType>::Dequeue(ItemType& Item){
    if (IsEmpty()) {
        cout<<"EMPTY";
    } else {
        cout<<Item<<endl;;
        front=(front+1)%maxQue;
        Item=items[front];
        cout<<front<<endl;
        cout<<Item;
        
    }
}
template<class ItemType>
void QueueType<ItemType>::Display()
{
    if (front>rear) {
        for(int i=0;i<=rear;i++)
            cout <<items[i] <<" ";
    } else {
        for(int i=front+1;i<=rear;i++)
            cout <<items[i] <<" ";
    }
    
}

