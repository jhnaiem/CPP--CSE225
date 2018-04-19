//
//  QueueType.hpp
//  QueueLL
//
//  Created by Md. Jahid Hasan Naiem on 6/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef QueueType_hpp
#define QueueType_hpp

#include <stdio.h>
template <class ItemType>
class QueueType {
    
private:
    int front;
    int rear;
    ItemType *items;
    int maxQue;
    
    
public:
    QueueType();
    QueueType(int max);
    ~QueueType();
    void MakeEmpty();
    void Display();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
};

#endif /* QueueType_hpp */
