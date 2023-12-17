#include<stdlib.h>
#define MAX 20
struct _array_
{
    int array[MAX];
    int csize,tsize;
};
typedef struct _array_ ARRAY;


ARRAY initialize(int);
int insert(ARRAY,int);
void display(ARRAY);
