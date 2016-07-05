//
//  main.cpp
//  Hanoi
//
//  Created by 姜况童 on 7/5/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
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
int main(int argc, const char * argv[]) {
    //Hanoi(3, 'A', 'B', 'C');
    cout<<"Hello"<<endl;
    return 0;
}
