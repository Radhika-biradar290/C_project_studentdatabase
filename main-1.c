#include"header.c"
int main()
{
        sll *headptr=0;
        char op;
        while(1)
        {
                printf("--------------------STUDENTS RECORD MENU---------------------\n");
                printf("\t a/A:addnew\n\t d/D:dltrecord\n\t s/S:showlist\n\t m/M:modifyrecord\n\t v/V:save\n\t e/E:exit\n\t t/T:sort\n\t l/L:deleteAll\n\t r/R:reverse\n\t \nEnter your choice:\n");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'a':
                        case 'A':addnew(&headptr);break;
                        case 'd':
                        case 'D':dltrecord(&headptr);break;
                        case 's':
                        case 'S':showlist(headptr);break;
                        case 'm':
                        case 'M':modifyrecord(&headptr);break;
                        case 'v':
                        case 'V':save(headptr);break;
                        case 'e':
                        case 'E':exit(0);break;
                        case 't':
                        case 'T':sort(headptr);break;
                        case 'l':
                        case 'L':deleteAll(&headptr);break;
                        case 'r':
                        case 'R':reverse(&headptr);break;
                        default:printf("unknown choice\n");
                }
        }
}
int countnode(sll *ptr)
{
        int c=0;
        while(ptr)
        {
                c++;
		ptr=ptr->next;
        }
        return c;
}


