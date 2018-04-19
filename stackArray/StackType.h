//
//  StackType.hpp
//  stack
//
//  Created by Md. Jahid Hasan Naiem on 15/2/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef StackType_hpp_INCLUDED
#define StackType_hpp_INCLUDED

const  int MAX_ITEMS=5;


template <class ItemeType>

class StackType
{
    
    
public:
    class EmptyStackException{  };;
    class FullStack{ };
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemeType);
    void Pop();
  void Display();
    ItemeType Top();
private:
    int top;
    ItemeType items[MAX_ITEMS];
};
#endif /* StackType_hpp */

