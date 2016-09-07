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
        *end=*begin;
        
        begin++,end--;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
