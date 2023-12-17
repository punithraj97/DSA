#iclude<stdlib.h>
#include<stdio.h>
#include "header.h"

ARRAY initialize(int size)
{
    ARRAY test_list;
    //test_list=(ARRAY*)malloc(sizeof(ARRAY));
    test_list.csize=0;
    test_list.tsize=(size>0&&size<MAX)?size:MAX;
    return test_list;
}
int insert(ARRAY test,int data)
{

}
void display(ARRAY *test)
{

}
