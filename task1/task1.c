#include <stdio.h>

struct userData
{
    char name[30];
    char pass[30];
};
struct userData singleUser[60];
int count = 0;

// register
void registery()
{
    printf("Enter your username:  ");
    scanf("%s", singleUser[count].name);

    printf("Enter your password:  ");
    scanf("%s", singleUser[count].pass);

    count++;
}
// login
int login(char* userName, char* userPass)
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(userName, singleUser[i].name) == 0 && strcmp(userPass, singleUser[i].pass) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int chooseNum;
    char userName[30];
    char password[30];

    while (1)
    {
        printf("choose service: 1-> register  2-> login   ");
        scanf("%i",&chooseNum);
        switch (chooseNum){
            case 1:
                registery();
                break;

            case 2:
                printf("Enter your username:  ");
                scanf("%s", &userName);
                
                printf("Enter your password:  ");
                scanf("%s", &password);
                if(login(userName,password))
                {
                    printf("\nLogin Successful ,welcome user \n");
                }else{
                    printf("\nInvalid Username OR Password,try again!!! \n");
                }
                break;
        }

    }
    
    
        

    return 0;
}