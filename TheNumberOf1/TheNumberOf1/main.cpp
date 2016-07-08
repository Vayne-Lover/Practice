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
    unsigned flag=1;
    while (flag) {
        if(flag&n)
        {
            count+=1;
        }
        flag=flag<<1;
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int n=0;
    int number=TheNumberOf1(n);
    cout<<number<<endl;
    return 0;
}
