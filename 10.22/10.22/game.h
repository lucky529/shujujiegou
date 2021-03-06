#ifndef __GAME_H__

#define __GAME_H__

#include<time.h>

#include<stdlib.h>

#include<stdio.h>



#define EASY_Count 10

#define ROW 9

#define COL 9

#define ROWS ROW+2

#define COLS COL+2

void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set);

void DisplayBoard(char arr[ROWS][COLS],int row,int col);

void Setmine(char arr[ROWS][COLS],int row,int col);

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

int GetmineCount(char arr[ROWS][COLS],int x,int y);

void SafeMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

#endif