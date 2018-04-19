//
//  StackLL.cpp
//  Stack+LL
//
//  Created by Md. Jahid Hasan Naiem on 26/2/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "StackLL.h"
#include<iostream>
using namespace std;

StackLL::StackLL()
{
    topPtr=NULL;
    
}
void StackLL::Push(int n){
    Node *temp;
    temp=new Node;
    if(temp==NULL)
        cout<<"\nStack is empty";
    else{
    temp->data=n;
    temp->next=topPtr;
    topPtr=temp;
    }
    
}
void StackLL::Display(){
    t=topPtr;
    while(t!=NULL){
        topPtr=t->next;
        cout<<t->data;
        break;
    }
}
