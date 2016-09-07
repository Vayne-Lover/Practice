//
//  main.cpp
//  LeftRotateString
//
//  Created by 姜况童 on 9/6/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
void Reverse(char* begin,char* end)
{
    if(begin==nullptr || end==nullptr)
    {
        return;
    }
    
    while(begin<end)
    {
        char temp=*begin;
        *begin=*end;
        *end=temp;
        
        begin++,end--;
    }
}
char* LeftRotateString(char* str,int n,int len)
{
    if(str!=nullptr)
    {
        if(len>n&&n>0)
        {
            char* start1=str;
            char* end1=str+n-1;
            char* start2=str+n;
            char* end2=str+len-1;
            Reverse(start1, end1);
            Reverse(start2, end2);
            Reverse(start1, end2);
        }
    }
    return str;
}
int main(int argc, const char * argv[]) {
    
    return 0;
}
