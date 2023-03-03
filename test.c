#include <stdio.h>
#include <string.h>

int main(){

char a[20];
printf("Welcome to our Socail Account!\n");
printf("Username: ");
scanf("%s",&a);

int followers=1000;
int b,c;
if(!strcmp(a, "Talha")){              //string compare fonksiyonu kullanarak yaptik
    printf("Password: ");
    scanf("%d",&b);
    if(b==1234){
        printf("Correct, Welcome Talha!\n");
        printf("Let's clear some haters from your account\n");
        printf("How many haters did you find it ? ");
        scanf("%d",&c);
        followers-=c;
        printf("Ok, now you have %d followers.",followers);


    }
}
else{
    printf("This username is incorrect");
}
}



