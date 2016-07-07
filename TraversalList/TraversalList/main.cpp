//
//  main.cpp
//  TraversalList
//
//  Created by 姜况童 on 7/7/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <stack>
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
void Traversal(ListNode** listNode)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        cerr<<"Error"<<endl;
        return ;
    }
    ListNode* tempNode=*listNode;
    while (tempNode!=nullptr)
    {
        cout<<tempNode->value<<endl;
        tempNode=tempNode->next;
    }
}
void FromEndToStart(ListNode** listNode)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        cerr<<"Error"<<endl;
        return ;
    }
    stack<int> sta;
    ListNode* tempNode=*listNode;
    while (tempNode!=nullptr)
    {
        sta.push(tempNode->value);
        tempNode=tempNode->next;
    }
    while (!sta.empty()) {
        cout<<sta.top()<<endl;
        sta.pop();
    }
}
int main(int argc, const char * argv[]) {//Use a temp to finish a traversal otherwise the list point will change
    ListNode *a=nullptr;
    ListNode *b=nullptr;
    AddToTail(&a, 2);
    AddToTail(&a, 6);
    AddToTail(&a, 9);
    AddToTail(&a, 11);
    Traversal(&a);
    Traversal(&b);
    FromEndToStart(&a);
    FromEndToStart(&b);
    return 0;
}
