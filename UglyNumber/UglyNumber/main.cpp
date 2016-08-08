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
int Solution(int index)
{
    if(index<=0)
    {
        return 0;
    }
    
    int *number=new int[index];
    number[0]=1;
    int next=1;
    int *num2=number;
    int *num3=number;
    int *num5=number;
    
    while(next>index)
    {
        int min=Min(*num2,*num3,*num5);
        number[next]=min;
        
        while(*num2*2<=number[next])
        {
            ++num2;
        }
        while(*num3*3<=number[next])
        {
            ++num3;
        }
        while(*num5*5<=number[next])
        {
            ++num5;
        }
        ++next;
    }
    
    int ugly=number[next-1];
    delete [] number;
    return ugly;
}
int main(int argc, const char * argv[]) {
//    cout<<IsUgly(15)<<endl;
//    cout<<IsUgly(6)<<endl;
//    cout<<IsUgly(11)<<endl;
//    int count=0;
//    int i=0;
//    while(count<10)
//    {
//        if(IsUgly(i))
//        {
//            count++;
//            cout<<i<<endl;
//        }
//        i++;
//    }
    cout<<Solution(0)<<endl;
    cout<<Solution(5)<<endl;
    cout<<Solution(10)<<endl;
    return 0;
}
