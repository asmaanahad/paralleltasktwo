#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

union{
    struct{
        int x; //flag
        bool is_active;
    } s1;
} active;
int main(){
 union active ;
 active.s1.is_active=true ;

 char user_name[50];
 printf("Enter Username :\t");
 scanf("%s",&user_name);

 int password;
 printf("Enter Password :\t");
 scanf("%d",&password);

 if(active.s1.is_active)
 {
     printf("Enter Number of Flag :\t");
     scanf("%d",&active.s1.x);
     if(active.s1.x==1)
     {
         char Username[50];
         printf("Enter Username To Login :\t");
         scanf("%s",&Username);

         int Password;
         printf("Enter Password To Login :\t");
         scanf("%d",&Password);

         if( strcmp(&Username,user_name)==0 && Password == password){
            printf("Login success");
          }else{
            printf("Username Or Password is Wrong");
           }
      }else{
           printf("Flag is Wrong");
        }
 }else{
printf("Not Active !");
}








}
