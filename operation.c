#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"

Hash* initialize()
{
  Hash *hash_ptr;
  hash_ptr=(Hash*)malloc(sizeof(Hash)*AMAX);
  for(int i=0;i<AMAX;i++)
  {
      (hash_ptr+i)->head=(hash_ptr+i)->tail=NULL;
      (hash_ptr+i)->count=0;
       }
return hash_ptr;
}

Node* getnode(char word[],char meaning[])
{
     Node *newnode;
     newnode=(Node*)malloc(sizeof(Node));
     strcpy((newnode->word),word);
     strcpy((newnode->meaning),meaning);
     newnode->ptr=NULL;
     return newnode;
}

int insert(Hash *table,char word[],char meaning[])
{
    int key;
    Node *newnode;
    newnode=getnode(word,meaning);

    key=*(word+0)%AMAX;

    if((table+key)->count==0)
    {
        (table+key)->head=(table+key)->tail=newnode;
        (table+key)->count++;
    }
    else
        {
        newnode->ptr=(table+key)->head;
       (table+key)->head=newnode;
       (table+key)->count++;
    }

    return INSERT;
}

char* search(Hash *table,char word[])
{
    Node *temp;
    int key;
    key=*(word+0)%AMAX;
    if((table+key)->count==0)
        return "empty";
    else{
    temp=(table+key)->head;
    while(temp!=NULL)
    {
        if(!(strcmp(temp->word,word)))
            break;
    }
    if(temp==NULL)
        return "not found";
      else
        return temp->meaning;
    }
}
void display(Hash *table)
{

    Node *temp;
    for(int i=0;i<AMAX;i++)
    {
      temp=(table+i)->head;
      while(temp!=NULL)
      {
          printf("%s\n",temp->word);
          printf("%s\n",temp->meaning);
          temp=temp->ptr;
      }
      }


    }
    printf("\n");

}



