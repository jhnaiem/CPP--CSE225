//
//  main.cpp
//  CIrcular queue
//
//  Created by Md. Jahid Hasan Naiem on 14/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "crqueu.hpp"
using namespace std;

int main() {
   queue q;
    int x,ch;
    do
    {
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Display";
        cout<<"\nEnter the choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"How Many Items Do you want to input?";
                cin>>ch;
                cout<<"put Input:";
                for (int i=0; i<ch; i++) {
                    cin>>x;
                    q.add(x);
                }
                break;
                case 2:
                q.remove();
                    break;
                case 3:
                q.display();
                break;
            
        }
    }while(ch!=4);
    
    return 0;
}

