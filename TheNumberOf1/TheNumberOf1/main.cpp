//
//  main.cpp
//  TheNumberOf1
//
//  Created by 姜况童 on 7/8/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
int TheNumberOf1(int n)
{
    int count=0;
    unsigned int flag=1;
    while (flag) {
        if(flag&n)
        {
            count+=1;
        }
        flag=flag<<1;//Do 32 times
    }
    return count;
}
int TheNumberOfOne(int n)
{
    int count=0;
    while (n) {
        count+=1;
        n=n&(n-1);
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int n=1024;
    int n1=-1024;
    int number=TheNumberOf1(n);
    cout<<number<<endl;
    int number1=TheNumberOfOne(n1);
    cout<<number1<<endl;
    return 0;
}
