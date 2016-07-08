//
//  main.cpp
//  TheLastKNodeList
//
//  Created by 姜况童 on 7/8/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int value;
    ListNode* next;
};
void AddToTail(ListNode** listNode,int value)
{
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
        while (tempNode->next!=nullptr&&tempNode->value!=value)
        {
            tempNode=tempNode->next;
        }
        if(tempNode->next!=nullptr&&tempNode->value==value)
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
ListNode* LastKNode(ListNode** listNode,unsigned int k)//Take care 0
{
    ListNode* resultNode=nullptr;
    if(*listNode==nullptr||(*listNode)->next==nullptr||k==0)
    {
        //cerr<<"Nullptr"<<endl;
        return resultNode;
    }
    vector<ListNode*> vec;
    int vectorCount=0;
    ListNode* tempNode=*listNode;
    while (tempNode!=nullptr)
    {
        //cout<<tempNode<<" "<<tempNode->value<<endl;
        vec.push_back(tempNode);
        vectorCount+=1;
        tempNode=tempNode->next;
    }
    if(vectorCount<k)
    {
        //cerr<<"Less than k"<<endl;
        return resultNode;
    }
    else
    {
        //cout<<vectorCount<<" "<<vectorCount-k<<endl;
        resultNode=vec[vectorCount-k];
        return resultNode;
    }
}
ListNode* LastKNode1(ListNode** listNode,unsigned int k)//Take care 0
{
    ListNode* resultNode=nullptr;
    if(*listNode==nullptr||(*listNode)->next==nullptr||k==0)
    {
        return resultNode;
    }
    ListNode* tempNode=*listNode;
    ListNode* Node1=tempNode;
    ListNode* Node2=tempNode;
    int nodeCount=0;
    while (tempNode!=nullptr&&tempNode->next!=nullptr)
    {
        nodeCount+=1;
        if(nodeCount==k)
        {
            break;
        }
        tempNode=tempNode->next;
    }
    if(nodeCount<k)
    {
        return resultNode;
    }
    else
    {
        Node2=tempNode;
    }
    while(Node2->next!=nullptr)
    {
        Node1=Node1->next;
        Node2=Node2->next;
    }
    resultNode=Node1;
    return resultNode;
}
int main(int argc, const char * argv[]) {
    ListNode* a=nullptr;
    ListNode* b=nullptr;
    ListNode* c=nullptr;
    ListNode* temp=nullptr;
    AddToTail(&a, 2);
    AddToTail(&a, 6);
    AddToTail(&a, 9);
    AddToTail(&a, 11);
    AddToTail(&c, 3);
    AddToTail(&c, 5);
    AddToTail(&c, 6);
    temp=LastKNode1(&a, 1);
    cout<<temp<<" "<<temp->value<<endl;
    cout<<LastKNode(&a, 0)<<endl;
    cout<<LastKNode(&b, 2)<<endl;
    cout<<LastKNode(&c, 6)<<endl;
    temp=LastKNode1(&a, 1);
    cout<<temp<<" "<<temp->value<<endl;
    cout<<LastKNode1(&a, 0)<<endl;
    cout<<LastKNode1(&b, 2)<<endl;
    cout<<LastKNode1(&c, 6)<<endl;
    return 0;
}
