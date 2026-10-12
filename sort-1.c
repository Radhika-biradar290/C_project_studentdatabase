#include"header.c"
void sort(sll *ptr)
{
        char ch,n,p;
        printf("Enter name for n and percentage for p\n");
        scanf(" %c",&ch);

        if(ch=='n')
        {
                if(ptr==0)
                {
                        printf("No records found");
                        return;
                }
                int c=countnode(ptr);
                sll *p1,*p2,t;
                int i,j;
                for(i=0;i<c-1;i++)
                {
                        p1=ptr;
                        for(j=0;j<c-1-i;j++)
                        {
                                p2=p1->next;
                                if(strcmp(p1->name,p2->name)>0)
                                {
                                        t=*p1;
                                        (p1)->next=(p2)->next;
                                        (p2)->next=t.next;
                                        t=*p1;
                                        *p1=*p2;
                                        *p2=t;

                                }
                                p1=p1->next;
                        }

                }

        }

        else
                if(ptr==0)
                {
			printf("No records found");
                        return;
                }
        int c=countnode(ptr);
        sll *p1,*p2,t;
        int i,j;
        for(i=0;i<c-1;i++)
        {
                p1=ptr;
                for(j=0;j<c-1-i;j++)
                {
                        p2=p1->next;
                        if(p1->marks>p2->marks)
                        {
                                t=*p1;
                                (p1)->next=(p2)->next;
                                (p2)->next=t.next;
                                t=*p1;
                                *p1=*p2;
                                *p2=t;

                        }
                        p1=p1->next;
                }

        }
}

