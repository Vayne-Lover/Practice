//
//  main.cpp
//  TraversalList
//
//  Created by 姜况童 on 7/7/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
};
void AddToTail(ListNode** listNode,int n)
{
    ListNode* newNode=new ListNode();
    newNode->value=n;
    newNode->next=nullptr;
    if(*listNode==nullptr)
    {
        *listNode=newNode;
    }
    else
    {
        ListNode* Node=*listNode;
        while(Node->next!=nullptr)
        {
            Node=Node->next;
        }
        Node->next=newNode;
    }
}

int main(int argc, const char * argv[]) {
    ListNode *a=nullptr;
    ListNode *b=nullptr;
    AddToTail(&a, 2);
    AddToTail(&a, 6);
    AddToTail(&a, 9);
    AddToTail(&a, 11);
    return 0;
}
