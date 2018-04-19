//
//  main.cpp
//  stack
//
//  Created by Md. Jahid Hasan Naiem on 15/2/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include "StackType.cpp"
using namespace std;


int main() {
    int ch;
    StackType<int> st;
    
    if(st.IsEmpty()){

        cout<<"THe Stack Is Empty"<<endl;

    } while(1)
    {
        cout <<"\n1.push  2.pop 3.Is Empty? 4.Display 5.is Full? 3.exit\nEnter ur choice :";
        cin >> ch;
        switch(ch)
        {
            case 1:  cout <<"enter the element: ";
                cin >> ch;
                st.Push(ch);
                break;
            case 2:  st.Pop();  break;
            case 3:st.IsEmpty(); break;
            case 4:st.IsFull(); break;
                
            case 5:st.Display(); break;
            case 7:  exit(0);
        }
    }
    
    return 0;
}

