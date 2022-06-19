# -*- coding: utf-8 -*-
"""
Created on Fri Jun 17 16:03:54 2022

@author: LCONG
"""
# =============================================================================
# import pyttsx3
# import PyPDF2 
# pdfreader = PyPDF2.PdfFileReader(open('story.pdf','rb')) 
# speaker = pyttsx3.init() 
# for page_num in range(pdfreader.numPages):    
#     text = pdfreader.getPage(page_num).extractText()  ## extracting text from the PDF 
#     cleaned_text = text.strip().replace('\n',' ')  ## Removes unnecessary spaces and break lines 
#     print(cleaned_text)                ## Print the text from PDF 
#     #speaker.say(cleaned_text)        ## Let The Speaker Speak The Text 
#     speaker.save_to_file(cleaned_text,'story.mp3')  ## Saving Text In a audio file 'story.mp3' 
#     speaker.runAndWait() 
# speaker.stop() 
# =============================================================================



# =============================================================================
# # import random
# # file_name = '1.xlsx'
# # f = open(file_name, 'w')
# # for i in range(10):
# #     for j in range(20):
# #         number = random.randint(2,9)
# #         f.write(str(number))
# #         f.write('\t')
# #     f.write('\n')
# # f.close()
# 
# #生成随机数并写入文本
# import random
# import numpy as np
# file_name = '1.xlsx'
# f = open(file_name, 'w')
# for i in range(10):
#     for j in range(15):
#         number = random.randint(1,10)       #生成1到10之间的整型随机数
#         #number = random.random()             #生成0到1之间的随机浮点数
#         #number = random.uniform(1,10)           #生成1到10之间的随机浮点数
#         #number = random.choice([1, 2, 3, 4, 5, 6, 7, 8, 9, 0])  #从序列中随机选取一个数
#         #number = random.randrange(1,100,2)          # 生成从1到100的间隔为2的随机整数
#         #number = random.randrange(1,100,2)
#         #number = np.random.randint(1,50,5)
#         f.write(str(number))                #将int 型转str型并写入
#         f.write('\t')
#     f.write('\n')
# f.close()
# 
# =============================================================================


def fact(n):
    r=1
    for i in range(0,n):
        r=r*(i+1)
    return r
print(fact(10))







