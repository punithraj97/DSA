#include<stdio.h>
#include<stdlib.h>
#define MAX 30
#define AMAX 26
#define INSERT 1;

typedef struct _node_
{
    char word[MAX];
    char meaning[MAX];
    struct _node_ *ptr;
}Node;

typedef struct hash_table
{
    Node *head,*tail;
    int count;
}Hash;

Hash* initialize();
int insert(Hash*,char*,char*);
char* search(Hash*,char*);
void display(Hash*);


