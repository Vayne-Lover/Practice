//
//  main.cpp
//  UglyNumber
//
//  Created by 姜况童 on 8/5/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
bool IsUgly(int n)
{
    if(n<=0)
    {
        return false;
    }
    while (n%2==0)
    {
        n/=2;
    }
    while (n%3==0)
    {
        n/=3;
    }
    while (n%5==0)
    {
        n/=5;
    }
    return n==1?true:false;
}
int Min(int a,int b,int c)
{
    int temp=(a<b)?a:b;
    int min=(temp<c)?temp:c;
    return min;
}
int main(int argc, const char * argv[]) {
//    cout<<IsUgly(15)<<endl;
//    cout<<IsUgly(6)<<endl;
//    cout<<IsUgly(11)<<endl;
    int count=0;
    int i=0;
    while(count<10)
    {
        if(IsUgly(i))
        {
            count++;
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}
