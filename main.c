#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "header.h"

int main()
{

Hash *hash_ptr;

hash_ptr=initialize();
for(int i=0;i<AMAX;i++)
  {
      assert((hash_ptr+i)->head==NULL && (hash_ptr+i)->tail==NULL);
      assert((hash_ptr+i)->count==0);
}


assert(insert(hash_ptr,"Depak","name"));
assert(insert(hash_ptr,"punith","name"));
assert(insert(hash_ptr,"abhishek","name"));
assert(insert(hash_ptr,"varun","name"));
assert(insert(hash_ptr,"punithkumar","name"));
assert(insert(hash_ptr,"raju","name"));
assert(insert(hash_ptr,"sudeep","name"));
assert(insert(hash_ptr,"varun","name"));
assert(insert(hash_ptr,"sandeep","name"));
assert(insert(hash_ptr,"dishu","name"));
assert(insert(hash_ptr,"mango","fruit"));
assert(insert(hash_ptr,"tiger","animal"));
assert(insert(hash_ptr,"lion","animal"));
assert(insert(hash_ptr,"rose","flower"));
assert(insert(hash_ptr,"lotus","flower"));
assert(insert(hash_ptr,"carrat","vegitable"));
assert(insert(hash_ptr,"Zeebra","animal"));
assert(insert(hash_ptr,"splender","vehicle"));
assert(insert(hash_ptr,"Innova crysta","car"));
assert(insert(hash_ptr,"jam","food"));
assert(insert(hash_ptr,"money","everything"));
assert(insert(hash_ptr,"Druva","Boss"));




printf("%s\n",search(hash_ptr,"Depak"));
printf("%s\n",search(hash_ptr,"Druva"));
printf("%s\n",search(hash_ptr,"tiger"));
printf("%s\n",search(hash_ptr,"lion"));
printf("%s\n",search(hash_ptr,"jam"));
printf("%s\n",search(hash_ptr,"money"));
printf("%s\n",search(hash_ptr,""));

//display(hash_ptr);


    return 0;
}
