#include "header.c"

void modifyrecord(sll **headerptr)
{
    sll *temp = *headerptr;
    int choice;
    int roll;
    float marks;
    char name[20];

    if (*headerptr == NULL)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\n------ MODIFY RECORD ------\n");
    printf("1. Modify Roll Number\n");
    printf("2. Modify Name\n");
    printf("3. Modify Marks\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:

            printf("Enter Existing Roll Number : ");
            scanf("%d",&roll);

            temp = *headerptr;

            while(temp)
            {
                if(temp->rollno == roll)
                {
                    printf("Enter New Roll Number : ");
                    scanf("%d",&temp->rollno);

                    printf("Roll Number Modified Successfully.\n");
                    return;
                }
 temp = temp->next;
            }

            printf("Roll Number Not Found.\n");
            break;


        case 2:

            printf("Enter Existing Name : ");
            scanf("%s",name);

            temp = *headerptr;

            while(temp)
            {
                if(strcmp(temp->name,name)==0)
                {
                    printf("Enter New Name : ");
                    scanf("%s",temp->name);

                    printf("Name Modified Successfully.\n");
                    return;
                }

                temp = temp->next;
            }

            printf("Name Not Found.\n");
            break;


        case 3:

            printf("Enter Existing Marks : ");
            scanf("%f",&marks);

            temp = *headerptr;

            while(temp)
            {
                if(temp->marks == marks)
if(temp->marks == marks)
                {
                    printf("Enter New Marks : ");
                    scanf("%f",&temp->marks);

                    printf("Marks Modified Successfully.\n");
                    return;
                }

                temp = temp->next;
            }

            printf("Marks Not Found.\n");
            break;


        default:
            printf("Invalid Choice.\n");
    }
}

