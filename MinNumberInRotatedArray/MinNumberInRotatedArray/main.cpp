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
int MinOrder(int* numbers,int id1,int id2)
{
    int result=numbers[id1];
    for(int i=id1+1;i<=id2;++i)
    {
        if(result>numbers[i])
        {
            result=numbers[i];
        }
    }
    return result;
}
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
        if(numbers[mid]==numbers[id1]&&numbers[mid]==numbers[id2])
        {
            return MinOrder(numbers,id1,id2);
        }
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
    
    return 0;
}
