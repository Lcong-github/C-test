# -*- coding: utf-8 -*-
"""
Created on Tue Jun  7 16:52:00 2022

@author: LCONG
"""

#排序
li = [54,26,93,17,77,31,44,55,20]
#1、冒泡排序
# =============================================================================
# def bouble_sort(alist):
#     for j in range(len(alist)-1,0,-1):  #j表示每次遍历需要比较的次数，逐渐减小
#         for i in range(j):
#             if alist[i] > alist[i+1]:   #如果前面的数比后面的数大，则交换位置
#                 alist[i],alist[i+1] = alist[i+1],alist[i]
#         print("第%s趟："%i,li)
# bouble_sort(li)
# print(li[len(li)-1 ])    #打印最大的一位数
# =============================================================================

#=============================================================================
# def bouble_s(li):
#     for i in range(len(li)-1):
#         m = 0
#         for j in range(i):
#             if li[j] > li[j+1]:
#                 li[j],li[j+1] = li[j+1],li[j]
                
#         print("第%s趟："%i,li)
#         if m == 1:
#             break
# bouble_s(li)
# print(li)
#=============================================================================

# =============================================================================
# #2、选择排序
# def select_sort(li):
#     for i in range(len(li)-1):  #第i趟
#         min_loc = i             #首先定义一个最小元素，假设为无序区的第一个
#         for j in range(i,len(li)): #无序区范围
#             if li[j] < li[min_loc]:
#                 min_loc = j     #最小数的下标
#         li[min_loc],li[i] = li[i],li[min_loc]#交换
#         print("第%s趟"%i,li)
# select_sort(li)
# 
# =============================================================================

#3、快速排序
#定义分区函数
def partition(li,left,right):
    tmp = li[left]      #存储最左边的数
    while left < right:
        """从右往左找"""
        while left < right and li[right] >= tmp:    #从左边找到比tmp小的数
            right -= 1      #指针向左移动
        li[left] = li[right] #跳出循环后，让li[lest] = li[right]
        """从左往右找"""
        while left < right and li[left] <= tmp: #从左找出比tmp大的数字
            left +=1
        li[right] = li[left]
    li[left] = tmp #将tmp归位
    return left

#定义快速排序
def quick_sort(li,left,right):
    if left < right:
        mid = partition(li,left,right)  #此时说明中间位置已经分好了
        quick_sort(li,mid+1,right)
        quick_sort(li,left,mid-1)

quick_sort(li,0,len(li)-1)
print(li)






