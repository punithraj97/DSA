#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "header.h"


int main()
{

   BATCH *batch_one,*batch_two;
   OVERWEIGHT *underweight_batchone,*underweight_batchtwo;

   //initialization
   batch_one=initialization();
   batch_two=initialization();
   underweight_batchone=initialization_overweight();
   underweight_batchtwo=initialization_overweight();

   //checking
   assert(batch_one->count==0&&batch_one->head==NULL&&batch_one->tail==NULL);
   assert(batch_two->count==0&&batch_two->head==NULL&&batch_two->tail==NULL);
   assert(underweight_batchone->obess==0&&underweight_batchone->under_weight==0);


     //insert batch1
     assert(insert(batch_one,"punith",23,20.2,182));
     assert(insert(batch_one,"varun",26,33.2,162));
     assert(insert(batch_one,"deepak",29,18.2,152));
     assert(insert(batch_one,"sudeep",30,40.2,142));
     assert(insert(batch_one,"dilip",21,30.2,192));
     assert(insert(batch_one,"arun",16,25.2,172));
     assert(insert(batch_one,"darshan",26,30.2,200));

      //insert batch2
     assert(insert(batch_two,"anil",26,26.2,182));
     assert(insert(batch_two,"sunil",28,43.2,132));
     assert(insert(batch_two,"praveen",19,59.2,142));
     assert(insert(batch_two,"karthik",36,69.2,182));
     assert(insert(batch_two,"abhi",28,40.2,172));
     assert(insert(batch_two,"sachin",29,55.2,182));
     assert(insert(batch_two,"ganesh",31,60.2,100));

      //calculate under_weight and obess
    assert(calculate_underweight(batch_one,underweight_batchone));
    assert(calculate_underweight(batch_two,underweight_batchtwo));

     display(batch_one);

     printf("batchtwo\n");
      printf("\n");
     display(batch_two);





   return 0;
}

