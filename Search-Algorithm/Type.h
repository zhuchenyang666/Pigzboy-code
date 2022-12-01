//
// Created by 86153 on 2022/12/1.
//

#ifndef SEARCH_TYPE_H
#define SEARCH_TYPE_H
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//二分查找递归算法
int BinarySearch(int a[],int number,int low,int high,int count);
//二分查找非递归算法
int BinaryNormalSearch(const int a[],int number,int low,int high,int count);
//顺序查找
int QueueSearch(int a[],int number,int length);
#endif //SEARCH_TYPE_H
