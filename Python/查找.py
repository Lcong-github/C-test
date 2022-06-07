# -*- coding: utf-8 -*-
"""
顺序查找基本思路：按顺序搜索列表。如果找到，返回索引，如果找不到，返回None

@author: LCONG
"""
li = [17,20,26,31,44,54,55,65,77,87]

def linear_search(val,li):
    """
    :param li:要搜索的列表
    :param val:要查找的值
    :return:返回索引
    """
    for i in range(len(li)):
        if li[i] == val:
            return i
    return None
print(linear_search(55,li))#调用函数


"""
二分法查找：每查找一次将列表折半
"""
#while循环
def Binary_search(val,li):
    left = 0
    right = len(li) - 1
    while left < right: #循环条件
        mid = (left+right)//2  #取列表中间的值
        if li[mid]==val:    #判断是否为查找值
            return mid
        elif li[mid] < val:     #判断查找值是否在右半部分
            left = mid+1        #取右半部分搜索
        else:
            right = mid-1       #去左半部分搜索
    return None
print(Binary_search(54,li))#调用函数


#递归
def binary_search(val,li): #主函数
    def bi_search(left,right):  #定义搜索范围
        if left > right:    #结束条件
            return None
        mid = (left+right)
        if li[mid] == val:
            return mid
        elif li[mid] < val:
            bi_search(mid+1,right)
        elif li[mid] > val:
            bi_search(left,mid-1)
print(binary_search(54,li))
        
    