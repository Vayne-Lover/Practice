//
//  main.cpp
//  StringPermutation
//
//  Created by 姜况童 on 8/4/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
void Permutation(char*a,char*b)
{
    if(*b=='\0')
    {
        cout<<a<<endl;
    }
    else
    {
        for(auto it=b;*it!='\0';++it)
        {
            char t=*it;
            *it=*b;
            *b=t;
            Permutation(a, b+1);
            t=*it;
            *it=*b;
            *b=t;
        }
    }
}
void StringPermutation(char* a)
{
    if(a==nullptr)
    {
        return ;
    }
    Permutation(a,a);
}
int main(int argc, const char * argv[]) {
    
    return 0;
}
