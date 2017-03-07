#!/usr/bin/python
# -*- coding: utf-8 -*-
class Solution():
    def solution(self, list1, list2, str1 ,str2):
        '''
        :param list1: string list
        :param list2: string list
        :param str1:  string
        :param str2:  string
        :return:      int
        '''
        li1=list1.split(", ")
        len1=len(li1)
        index1=li1.index(str1)
        li2 = list2.split(", ")
        len2=len(li2)
        li2+=["-1"]*(len1-len2)
        index2=li2.index(str2)
        if index1==index2:
            return index1
        else:
            return -1

if __name__ == "__main__":
    so = Solution()
    list1 = input()
    list2 = input()
    str1 = input()
    str2 = input()
    try:
        result = so.solution(list1, list2, str1, str2)
    except Exception as e:
        print(e)
    else:
        print(result)

#abc, def, ghi, jkl, mno, pqr, stu, vwx, yz0, 123
#200, 100, 50, 50, 50, 50, 50, 20, 10, 10
#ghi
#50
