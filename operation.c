#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "header.h"

BATCH* initialization()
{
    BATCH *batch;
    batch=(BATCH*)malloc(sizeof(BATCH));
    batch->head=batch->tail=NULL;
    batch->count=0;
    return batch;
}

OVERWEIGHT* initialization_overweight()
{
    OVERWEIGHT *overweight;
    overweight=(OVERWEIGHT*)malloc(sizeof(OVERWEIGHT));
    overweight->obess=0;
    overweight->under_weight=0;
    return overweight;


}

CANDIDATE* getnode(char name[],int age,float weight,float height)
{
     CANDIDATE *newnode;
     newnode=(CANDIDATE*)malloc(sizeof(CANDIDATE));
     strcpy((newnode->name),name);
     newnode->age=age;
     newnode->weight=weight;
     newnode->height=height;
     newnode->ptr=NULL;
     newnode->bmi=((newnode->weight)/(newnode->height*newnode->height))*10000;
     return newnode;
}
int insert(BATCH *batch,char name[],int age,float weight,float height)
{
     CANDIDATE *newnode;
     newnode=getnode(name,age,weight,height);

    if(batch->count==0)
    {
        batch->head=batch->tail=newnode;
        batch->count++;
       return INSERT;
    }

    else if(newnode->bmi<batch->head->bmi)
    {
        newnode->ptr=batch->head;
        batch->head=newnode;
         batch->count++;
        return INSERT;
    }

    else
        {
        CANDIDATE *temp;
        temp=batch->head;
        while(temp->ptr!=NULL&&(temp->ptr->bmi)<(newnode->bmi))
        {
            temp=temp->ptr;
        }

        if(temp->ptr==NULL)
        {
            temp->ptr=newnode;
            batch->tail=newnode;
             batch->count++;
            return INSERT;
        }
        else{
           newnode->ptr=temp->ptr;
           temp->ptr=newnode;
            batch->count++;
            return INSERT;
        }
    }

}

int calculate_underweight(BATCH *batch,OVERWEIGHT *over)
{
    if(batch->count==0)
    {
        over->obess=0;
        over->under_weight=0;
        return 1;
    }
    else
        {
           CANDIDATE *temp;

       temp=batch->head;
       while(temp!=NULL)
       {
           if(temp->bmi<18.5)
             over->under_weight++;

           else  if(temp->bmi>30)
            over->obess++;

            temp=temp->ptr;
        }
       return 1;

    }
    }

    void display(BATCH *batch)
    {
        CANDIDATE *temp;
        temp=batch->head;

        while(temp!=NULL)
        {
            printf("candidate name=%s\n",temp->name);
            printf("candidate age=%d\n",temp->age);
            printf("candidate height=%f\n",temp->height);
            printf("candidate weight=%f\n",temp->weight);
            printf("candidate bmi=%f\n",temp->bmi);
            temp=temp->ptr;
            printf("\n");
        }


    }
