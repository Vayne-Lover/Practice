//
//  main.cpp
//  FindGreatestSumOfSubArray
//
//  Created by 姜况童 on 9/4/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
int Find(int* n,int len)
{
    if(n==nullptr||len<=0)
    {
        return 0;
    }
    int now=0;
    int max=0;
    for(int i=0;i<len;++i)
    {
        if(now<0)
            now=n[i];
        else
            now+=n[i];
        
        if(now>max)
            max=now;
    }
    return max;
}
int main(int argc, const char * argv[]) {
    int a[]={1,-2,3,10,-4,7,2,-5};
    int b[]={};
    cout<<Find(a, sizeof(a)/sizeof(int))<<endl;
    cout<<Find(b, sizeof(b)/sizeof(int))<<endl;
    return 0;
}
