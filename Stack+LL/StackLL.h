//
//  StackLL.hpp
//  Stack+LL
//
//  Created by Md. Jahid Hasan Naiem on 26/2/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef StackLL_hpp
#define StackLL_hpp


struct Node {
    int data;
    Node* next;
    
};
class StackLL
{
    
private:
    Node *t;
    Node* topPtr;
public:
    StackLL();
    void Push(int x);
    void Display();
    
};

#endif /* StackLL_hpp */
