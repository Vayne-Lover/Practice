//
//  main.cpp
//  MinNumberInRotatedArray
//
//  Created by 姜况童 on 8/11/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <exception>
using namespace std;
int Min(int* numbers,int length)
{
    if(numbers==nullptr||length<=0)
    {
        throw new std::exception("Invalid parameters");
    }
    int id1=0;
    int id2=length-1;
    int mid=id1;
    while(numbers[id1]>=numbers[id2])
    {
        if(id2-id1==1)
        {
            mid=id2;
            return numbers[mid];
        }
        
        mid=(id1+id2)/2;
        if(numbers[mid]>=numbers[id1])
        {
            id1=mid;
        }
        else if (numbers[mid]<=numbers[id2])
        {
            id2=mid;
        }
    }
    return numbers[mid];
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
