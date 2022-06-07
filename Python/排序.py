# -*- coding: utf-8 -*-
"""
Created on Tue Jun  7 16:52:00 2022

@author: LCONG
"""

#排序
li = [54,26,93,17,77,31,44,55,20]
#1、冒泡排序
def bouble_sort(alist):
    for j in range(len(alist)-1,0,-1):  #j表示每次遍历需要比较的次数，逐渐减小
        for i in range(j):
            if alist[i] > alist[i+1]:   #如果前面的数比后面的数大，则交换位置
                alist[i],alist[i+1] = alist[i+1],alist[i]
bouble_sort(li)
print(li[len(li)-1])    #打印最大的一位数

