//
//  main.cpp
//  We are happy
//
//  Created by 姜况童 on 7/6/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <string>
using namespace std;
string Add(const string str)
{
    if(str.empty())
        return "null";
//    int count=0;
//    for(auto it=str.begin();it!=str.end();++it)
//    {
//        if(*it==' ')
//        {
//            count+=1;
//        }
//    }
//    int strLength=int(str.length())+count*2;
    vector<char> ch;
//    int tempCount=0;
    for(auto i=str.begin();i!=str.end();++i)
    {
        if(*i!=' ')
        ch.push_back(*i);
        else
        {
            ch.push_back('%');
            ch.push_back('2');
            ch.push_back('0');
        }
    }
    stringstream ss;
    for(auto i=ch.begin();i!=ch.end();++i)
    {
        ss<<*i;
    }
    string newString;
    ss>>newString;
    return newString;
}
int main(int argc, const char * argv[]) {
    string str="We are happy";
    string result=Add(str);
    cout<<result<<endl;
    return 0;
}
