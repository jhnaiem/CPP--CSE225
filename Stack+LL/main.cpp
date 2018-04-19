//
//  main.cpp
//  Stack+LL
//
//  Created by Md. Jahid Hasan Naiem on 26/2/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "StackLL.h"
using namespace std;

int main() {
    StackLL s;
    int x,ch;
    do
    {
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Display";
        cout<<"\n4.Exit";
        cout<<"\nEnter the choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the element to be pushed";
                cin>>x;
                s.Push(x);
                cout<<"\nThe element is inserted";
                break;
//            case 2:
//                s.pop();
//                break;
            case 3:
                s.Display();
                break;
            case 4:
                
                break;
        }
    }while(ch!=4);
    
    return 0;
}

