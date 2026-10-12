#include"header.c"
void showlist(sll *ptr)
{
        if(ptr==0)
        {
                printf("No records present\n");
                return;
        }
        while(ptr)
        {
                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
}
                                                                              
                                                                              
                                                                             
                                                                              
                                                                              
 
