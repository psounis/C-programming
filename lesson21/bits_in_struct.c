/* bits_in_struct.c  */
#include <stdio.h>
#include <string.h>

struct student 
{
   unsigned int active: 1;
   unsigned int type: 2;
   char name[80];
};

main()
{
    struct student bob;
    
    bob.active=0;
    bob.type=2;
    strcpy(bob.name, "Bob");
    
    printf("%d %d %s", bob.active, bob.type, bob.name);
}

