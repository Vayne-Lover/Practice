//
//  main.cpp
//  StringToInt
//
//  Created by 姜况童 on 7/4/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void STI()
{
    string str,line;
    int i;
    getline(cin,line);
    stringstream ss(line);
    ss<<str;
    ss>>i;
    cout<<i<<endl;
}
int StringToInt(string st)//Don't consider big number
{
    string str(st);
    int i=0;
    bool flag=false;
    bool negative=false;
    bool positive=false;
    if(str.empty())
    {
        i=0;
        flag=true;
        return 0;
    }
    for(auto it=str.begin();it!=str.end();++it)
    {
        //cout<<*it<<" ";
        if(*str.begin()=='-'&&!negative)//if without negative it will ++ every time
        {
            //cout<<*it<<" ";
            negative=true;
            //++it;
            //cout<<*it<<" ";
            continue;
        }
        else if (*str.begin()=='+'&&!positive)
        {
            positive=true;
            continue;
        }
        else if(*it-'0'<0||*it-'9'>0)
        {
            i=0;
            flag=true;
            return 0;
        }
            i=i*10+*it-'0';
    }
    if(negative)
    {
        i=-i;
    }
    return i;
}
int main(int argc, const char * argv[]) {
    //STI();
    int answer=0;
    string str="0099239";
    answer=StringToInt(str);
    cout<<answer<<endl;
    return 0;
}
