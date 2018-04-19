//
//  crqueu.cpp
//  CIrcular queue
//
//  Created by Md. Jahid Hasan Naiem on 14/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include "crqueu.hpp"
using namespace std;
#include <iostream>

void queue::add (int item)
{
    if ((front == 0 && rear == sizeof (data) - 1) &&(front == rear + 1))
       
    {
       cout << "Queue Overflow \n";
        return;
       }
     if (front == -1)
        
    {
         front = 0;
         rear = 0;
         }
    
    else
    
    {
         if (rear == sizeof (data) - 1)
            rear = 0;
        
        else
           rear = rear + 1;
         }
    data[rear] = item;
}


// Function to delete element from Circular Queue
void queue::remove ()
{
    if (front == -1)
        
    {
        printf ("\nQueue is Empty");
       }
  //  int element = data[front];
   data[front] = -1;
     if (front == rear)
        
    {
         front = -1;
         rear = -1;
         }
    
    else if (front == sizeof (data) - 1)
       front = 0;
    
    else
         front++;
}
void queue::display()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout<<data[i];
    }
    else
    {
        for (int i = front; i < 10; i++)
            cout<<data[i];
        
        for (int i = 0; i <= rear; i++)
           cout<<data[i];
    }
}
