//
//  main.cpp
//  binarysearchtree
//
//  Created by Md. Jahid Hasan Naiem on 1/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "binarysearchtree.hpp"
#include"binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> bst;
    int x,y,z,E;
//    int d=0;
    int pr=0;
    while(1)
    {
        cout<<"\n1.Insert \n2.Delete?\n3.Display 4.Retr"<<endl;
        cin>>x;
        switch(x)
        {
            case 1:
                cout<<"how many numbers to enter"<<endl;
                cin>>y;
                for(int i=0;i<y;i++){
                    cin>>z;
                    bst.InsertItem(z);
                }
//                cout<<"Items:"<<endl;
//                for(int i=0;i<y;i++){
//                    sor.GetNextItem(d);
//                    cout<<d<<endl;
               // }
                break;
                
            case 2:
        cout<<"Insert the item you want to delete?"<<endl;
        cin>>E;
        bst.DeleteItem(E);
                cout<<"Deleted"<<endl;
                break;
            case 3:
                bst.Print();
                pr=bst.sum;
                cout<<"\n SUM: "<<pr<<endl;
                break;
            case 4:
                int s=4;
                bool f=false;
                bst.RetrieveItem(s, f);
                if (f) {
                    cout<<"FOUND"<<endl;
                    
                }
                break;
                
        }
        
    }
}
