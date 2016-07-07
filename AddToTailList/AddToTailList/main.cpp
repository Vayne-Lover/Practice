//
//  main.cpp
//  AddToTailList
//
//  Created by 姜况童 on 7/6/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include<list>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
};
void AddToTail(ListNode** listNode,int n)//Take care if you just use i it won't be same as &i
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
    AddToTail(&a, 2);
    cout<<a->value<<endl;
    return 0;
}
