//
// Created by 86153 on 2022/11/24.
//

#ifndef ACMATRIX_TYPE_H
#define ACMATRIX_TYPE_H
#include<stdio.h>
#include "stdlib.h"
#include "string.h"
#define Need 5
#define OK 1
#define ERROR 0
#define WRONG -1
typedef struct ACMatrix
{
    int topNumber,arcNumber;
    int Matrix[Need][Need];
    char topName[Need];
}ACMatrix;
int Create(ACMatrix *M);
int FindLow(ACMatrix *M,char name);
void Out(ACMatrix *M);
int Traverse(ACMatrix *M,int m,int *visit);
int CalculateN(ACMatrix *M);
void Delete(ACMatrix *M);
void Insert(ACMatrix *M);
void Menu();
int Judge(ACMatrix *M);
void Destroy(ACMatrix *M);
#endif //ACMATRIX_TYPE_H
