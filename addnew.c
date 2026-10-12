#include"header.c"
void addnew(sll **ptr)
{
        static int roll=1;
        sll *n=malloc(sizeof(sll));

        n->rollno = roll++;
        printf("Roll no:%d\n",n->rollno);
        printf("Enter name and marks\n");
        scanf("%s %f",n->name,&n->marks);
        n->next=*ptr;
        *ptr=n;
}
                                                                              
                                                                              
                                                                              
                                                                              
       
