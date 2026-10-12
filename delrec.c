#include"header.c"
void dltrecord(sll **ptr)
{
        char ch,n,r;
        printf("enter your choice for del n for name or r for rollno\n");

        scanf(" %c",&ch);

        if(ch=='n')
        {
                if(*ptr==0)
                {
                        printf("No records found\n");
                        return;
                }
                char name[20];
                printf("enter name to delete\n");
                scanf("%s",name);

                sll *prev,*del=*ptr;
                while(del){
                        if(strcmp(del->name,name)==0){
                                if(del==*ptr)
                                        *ptr=del->next;
                                else
                                        prev->next=del->next;
                                free(del);
                                return;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("name not found\n");
        }
        else
        {
                if(*ptr==0)
                {
                        printf("No records found\n");
                        return;
                }
int rollno;
                printf("enter rollno to delete\n");
                scanf("%d",&rollno);

                sll *prev,*del=*ptr;
                while(del){
                        if(del->rollno==rollno){
                                if(del==*ptr)
                                        *ptr=del->next;
                                else
                                        prev->next=del->next;
                                free(del);
                                return;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("rollno not found\n");
        }
}
        
