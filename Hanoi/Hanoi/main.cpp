//
//  main.cpp
//  Hanoi
//
//  Created by 姜况童 on 7/5/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
void Move(char a,char b)
{
    cout<<a<<"->"<<b<<endl;
}
void Hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        Move(a, c);
    }
    else
    {
        Hanoi(n-1, a, c, b);
        Move(a, c);
        Hanoi(n-1, b, a, c);
    }
}
void Hanoi1(int n,char a,char b,char c)
{
    if(n>0)
    {
        Hanoi1(n-1, a, c, b);
        cout<<a<<"->"<<b<<endl;
        Hanoi1(n-1, c, b, a);
    }
}
stack<int> sta[4];
void initStack()
{
    for (int i=4; i>0; --i)
    {
        sta[1].push(i);
    }
}
void StackHanoi(int n,int a,int b,int c)
{
    if(n>0)
    {
        StackHanoi(n-1, a, c, b);
        int temp=sta[a].top();//Take care there should be a,b rather than 1,2
        sta[a].pop();
        sta[b].push(temp);
        StackHanoi(n-1, c, b, a);
    }
}
int main(int argc, const char * argv[]) {
    //Hanoi(3, 'A', 'B', 'C');
    //Hanoi1(3, 'a', 'b', 'c');
    initStack();
    StackHanoi(4, 1, 2, 3);
    while(!sta[2].empty())
    {
        cout<<sta[2].top()<<endl;
        sta[2].pop();
    }
    return 0;
}
