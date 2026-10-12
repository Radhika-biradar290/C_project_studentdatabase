#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
        int rollno;
        char name[20];
        float marks;
        struct student *next;
}sll;
void addnew(sll **);
void dltrecord(sll **);
void showlist(sll *);
void modifyrecord(sll **);
void save(sll *);
void sort(sll *);
void deleteAll(sll **);
void reverse(sll **);
int countnode(sll *);

