#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "header.h"

int main()
{
    ARRAY test;
    test = initialize(10);
    assert(test->csize==0&&test->tsize==10);

    return 0;
}
