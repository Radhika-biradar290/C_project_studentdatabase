#include"header.c"
void save(sll *ptr)
{
        if(ptr==0)
        {
                printf("no records present\n");
                return;
        }
        FILE *fp;
        fp=fopen("student.data","w");
        while(ptr)
        {
                fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        printf("Data save in file\n");
        fclose(fp);
}

