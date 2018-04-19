//
//  main.cpp
//  QueyeLL
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "QueType.hpp"
#include "QueType.cpp"
using namespace std;

int main(){
    int ch,p;
    QueType<int> qu;
    
    if(qu.IsEmpty()){
        
        cout<<"THe Queue Is Empty"<<endl;
        
    }
    
    while (1) {
        cout <<"\n1.Enqueue 2.Dequeue 3.Is Empty? 4.is Full? 5.Display 6.Delete Con  \n\nEnter ur choice :";
        cin >> ch;
        switch (ch) {
                
            case 1:
                cout<<"How Many Items Do you want to input?";
                cin>>ch;
                cout<<"put Input:";
                for (int i=0; i<ch; i++) {
                    cin>>p;
                    qu.Enqueue(p);
                }
                break;
                
            case 2:
                p=1;
                qu.Dequeue(p);
                break;
                
            case 3:
                if (qu.IsEmpty()) {
                    cout<<"Queue is empty";
                } else {
                    cout<<"Queue is not Empty";
                }
                
            case 4:
                
                if (qu.IsFull()) {
                    cout<<"Queue is Full";
                }
                else {
                    cout<<"Queue is not Full";
                }
            case 5:
                qu.Display();
                break;
            case 6:
                qu.DelCons();
                break;
            default:
                break;
        }
        
    }
    
}
