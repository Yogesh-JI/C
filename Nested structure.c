#inlcude<stdio.h>
struct address
{
    char *housename;
    char *city;
    char streetname;

};

struct employee
{
    int id;
    char *name;
    float salary;

    struct address add;
};

int main()
struct employee e;
printf("Enter the enployee id:");
scanf("%d",&e.id);
printf("Enter the enployee name:");
scanf("%d",&e.name);
printf("Enter the enployee salary:");
scanf("%d",&e.salary);
printf("Enter the housename:");
scanf("%d",&e.add.housename);
printf("Enter the employee city:");
scanf("%d",&e.add.city);
printf("Enter the  employee streetname:");
scanf("%d",&e.add.streetname);


printf("Details of the employee are:");
printf("\n\temployee id:%d",e.id);
printf("\n\temployee name:%d",e.name);
printf("\n\temployee salary:%d",e.salary);
printf("\n\temployee housename:%d",e.add.housename);
printf("\n\temployee city:%d",e.add.city);




