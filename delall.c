#include"header.c"
void deleteAll(sll **ptr)
{
        if(*ptr==0)
                return;
        sll *del;
        while(*ptr)
        {
                del=*ptr;
                *ptr=(*ptr)->next;
                free(del);
        }
        printf("All nodes deleted");
}


                                                                              
     
