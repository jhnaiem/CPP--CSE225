//
//  main.cpp
//  SortedtypeLL
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "SortedType.hpp"
#include"SortedType.cpp"

using namespace std;

int main()
{
    SortedType<int> sor;
    int x,y,z;
    int d=0;
    int pr=0;
    while(1)
    {
        cout<<"\n1.Insert \n2.Length?\n3.Display"<<endl;
        cin>>x;
        switch(x)
        {
            case 1:
                cout<<"how many numbers to enter"<<endl;
                cin>>y;
                for(int i=0;i<y;i++){
                    cin>>z;
                    sor.InsertItem(z);
                }
                cout<<"Items:"<<endl;
                for(int i=0;i<y;i++){
                    sor.GetNextItem(d);
                    cout<<d<<endl;
                }
                break;
                
            case 2:
                int l=sor.LengthIs();
                cout<<"Length:"<<endl;
                cout<<l<<endl;
                
        }
        
    }
}

