#include<sdio.h>
#include<sdlib.h>

typedef struct _node_
{
    char name[MAX];
    int age;
    float weight;
    float height;
    int bmi;
    struct _node_ *ptr;
}CANDIDATE;
typedef struct _batch_
{
   CANDIDATE *head,*tail;
   int count;
}BATCH;

typedef struct _overweight_
{  
   int obess;
   int under_weight;
} OVERWEIGHT;
   
BATCH* initialization();
OVERWEIGHT* initialization_overweight();
CANDIDATE* getnode(char*,int,float,float);
int insert(BATCH*,char*,int,float,float);
int calculate_underweight(BATCH*,OVERWEIGHT*);
void display(BATCH*);
   
