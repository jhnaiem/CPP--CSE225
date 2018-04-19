//
//  main.cpp
//  StackLLtemplate
//
//  Created by Md. Jahid Hasan Naiem on 7/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "StackType.cpp"
#include "StackType.hpp"
using namespace std;

int main() {
    StackType<int> sl;
    int ch,p;
    do
    {
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Display";
        cout<<"\n4.Sort?";
        cout<<"\nEnter the choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"How Many Items Do you want to input? ";
                cin>>ch;
                cout<<"put Input:\n";
                for (int i=0; i<ch; i++) {
                    cin>>p;
                    sl.Push(p);
                }
                break;
            case 2:
               sl.Pop();
                break;
            case 3:
                sl.Display();
                break;
            case 4:
                sl.sort();
                break;
        }
    }while(ch!=5);
    
    return 0;
}
