//
//  main.cpp
//  Graph
//
//  Created by Md. Jahid Hasan Naiem on 3/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "Graphtype.cpp"
#include "Graphtype.hpp"

using namespace std;

int main()
{
    GraphType<string>gt(5);
    int x,y,z,E;
    int d=0;
    int pr=0;
    while(1)
    {
        cout<<"\n1.ADD? \n2.Delete?\n3.Display"<<endl;
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
                
                
        }
        
    }
}

