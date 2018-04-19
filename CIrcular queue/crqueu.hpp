//
//  crqueu.hpp
//  CIrcular queue
//
//  Created by Md. Jahid Hasan Naiem on 14/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#ifndef crqueu_hpp
#define crqueu_hpp

#include <stdio.h>
class queue
{
    int data[10];
    int front, rear;
    public :
    queue(){front=-1;rear=-1;}
    void add(int item);
    void remove();
    void display();
};

#endif /* crqueu_hpp */
