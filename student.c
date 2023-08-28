#include <stdio.h>
#include <string.h>
int i = 0;


struct sinfo {
    char name[50];
    int roll;
    float cgpa;

} st[55];


void addStudent()
{

    printf("Add the Students Details\n");
    printf("-------------------------\n");
    printf("Enter the name of student\n");
    scanf("%s", st[i].name);
    printf("Enter the roll of student\n");

    scanf("%d", &st[i].roll);
    printf("Enter the CGPA \n");
    scanf("%f", &st[i].cgpa);
}


void findRoll()
{
    int x;
    printf("Enter the Roll Number"
           " of the student\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll) {
            printf(
                "The Students Details are\n");
            printf(
                "The name is %s\n",
                st[i].name);
            printf(
                "The CGPA is %f\n",
                st[i].cgpa);

        }
}
}


void findName()
{
    char a[50];
    printf("Enter the Name of the student\n");
    scanf("%s", a);
    int c = 0;

    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].name, a)) {

            printf(
                "The Students Details are\n");
            printf(
                "The name is %s\n",
                st[i].name);
            printf(
                "The Roll Number is %d\n ",
                st[i].roll);
            printf(
                "The CGPA is %f\n",
                st[i].cgpa);
            c = 1;
        }
        else
            printf(
                "The First Name not Found\n");
    }
}





void deleteStudent()
{
    int a;
    printf("Enter the Roll Number"
           " which you want "
           "to delete\n");
    scanf("%d", &a);
    for (int j = 1; j <= i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The Roll Number"
           " is removed Successfully\n");
}

void updateStudent()
{

    printf("Enter the roll number"
           " to update the entry : ");
    long int x;
    scanf("%ld", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            printf("1. name\n"
                   "2. roll no.\n"
                   "3. CGPA\n");
            int z;
            scanf("%d", &z);
            switch (z) {
            case 1:
                printf("Enter the new name : \n");
                scanf("%s", st[j].name);
                break;
            case 2:
                printf("Enter the new "
                       "roll number : \n");
                scanf("%d", &st[j].roll);
                break;
            case 3:
                printf("Enter the new CGPA : \n");
                scanf("%f", &st[j].cgpa);
                break;


            printf("UPDATED SUCCESSFULLY.\n");
        }
    }
    }
}
void totStudent()
{

}
int main()

{
    int choice, count;
    while (i = 1) {
        printf("The Task that you "
               "want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by Name\n");
        printf("4. Find the Total number of Students\n");
        printf("5. Delete the Students Details by Roll Number\n");
        printf("6. Update the Students Details by Roll Number\n");
        printf("7. To Exit\n");
        printf("Enter your choice to "
               "find the task\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            findRoll();
            break;
        case 3:
            findName();
            break;
        case 4:
            totStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            updateStudent();
            break;
        case 7:
            exit(0);
            break;
        }
    }
}


