//
//  main.cpp
//  ReverseList
//
//  Created by 姜况童 on 7/6/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <List>
using namespace std;
struct ListNode
{
    int value;
    ListNode* next;
};
void AddToTail(ListNode** listNode,int value)
{
    if(listNode==nullptr)
    {
        return;
    }
    ListNode* newNode=new ListNode();
    newNode->value=value;
    newNode->next=nullptr;
    
    if(*listNode==nullptr)
    {
        *listNode=newNode;
    }
    else
    {
        ListNode* tempNode=*listNode;
        while (tempNode->next!=nullptr)
        {
            tempNode=tempNode->next;
        }
        tempNode->next=newNode;
    }
}
void RemoveNode(ListNode** listNode,int value)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        return;
    }
    ListNode* deleteNode=nullptr;
    if((*listNode)->value==value)
    {
        deleteNode=*listNode;
        *listNode=(*listNode)->next;
    }
    else
    {
        ListNode* tempNode=*listNode;
        while (tempNode->next!=nullptr&&tempNode->next->value!=value)
        {
            tempNode=tempNode->next;
        }
        if(tempNode->next!=nullptr&&tempNode->next->value==value)
        {
            deleteNode=tempNode->next;
            tempNode->next=tempNode->next->next;
        }
    }
    if(deleteNode!=nullptr)
    {
        delete deleteNode;
        deleteNode=nullptr;
    }
}
ListNode* ReverseList(ListNode** listNode)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        return nullptr;
    }
    ListNode* reverseNode=nullptr;
    ListNode* nowNode=*listNode;
    ListNode* previousNode=nullptr;
    while (nowNode!=nullptr) {
        ListNode* nextNode=nowNode->next;
        if(nextNode==nullptr)
        {
            reverseNode=nowNode;
        }
        nowNode->next=previousNode;
        previousNode=nowNode;
        nowNode=nextNode;
    }
    return reverseNode;
}
int main(int argc, const char * argv[]) {
//    list<int> a;
//    for (int i=0; i<10; ++i) {
//        a.push_back(i);
//    }
//    a.reverse();
//    for (auto j=a.begin() ; j!=a.end();++j) {
//        cout<<*j<<endl;
//    }
    ListNode* a=nullptr;
    ListNode* d=nullptr;

    AddToTail(&a, 2);
    AddToTail(&a, 6);
    AddToTail(&a, 9);
    AddToTail(&a, 11);
    AddToTail(nullptr, 2);
    ListNode* b=ReverseList(&d);
    cout<<b<<endl;
    ListNode* c=ReverseList(&a);
    cout<<c->value<<endl;
    ReverseList(nullptr);
    return 0;
}
