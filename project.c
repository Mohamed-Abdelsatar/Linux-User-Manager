#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[]){
char username[100] , newusername[100] , oldusername[100] , groupname[100] , newgroupname[100] , oldgroupname[100] , com[200] , t , MAXX[100] , MINN[100] , Date[100] , War[100];
while(1){
printf(" 1.Add user \n 2.Delete user \n 3.Add group \n 4.Delete group \n 5.Change group name \n 6.Change information of users \n 7.Assign specific users to specific groups \n 8.Set Maximum number of days between password change \n 9.Set Minimum number of days between password change \n 10.set account expires\n 11.Set Number of days of warning before password expires \n 12.Show password expiration status \n 13.Exit \n");
int c;
printf(" Enter your choice : ");
scanf("%d" ,&c);
t=getchar();
switch(c){
case 1: strcpy(com , "sudo adduser ");
        printf(" Enter user name : ");
        gets(username);
        strcat(com , username);
        system(com);
        break;
        
case 2: strcpy(com , "sudo deluser ");
        printf(" Enter user name : ");
        gets(username);
        strcat(com , username);
        system(com);
        break;
        
case 3: strcpy(com , "sudo addgroup ");
        printf(" Enter group name : ");
        gets(groupname);
        strcat(com , groupname);
        system(com);
        break;
        
case 4: strcpy(com , "sudo delgroup ");
        printf(" Enter group name : ");
        gets(groupname);
        strcat(com , groupname);
        system(com);
        break;    
           
case 5: strcpy(com , "sudo groupmod -n ");
        printf(" Enter the new name : ");
        gets(newgroupname);
        strcat(com , newgroupname);
        strcat(com , " ");
        printf(" Enter the old name : ");
        gets(oldgroupname);
        strcat(com , oldgroupname);
        system(com);
        break;  
        
case 6: strcpy(com,"sudo usermod -md /home/NewHome -l ");
        printf(" Enter the new name : ");
        gets(newusername);
        strcat(com,newusername);
        printf(" Enter the old name : ");
        gets(oldusername);
        strcat(com," ");
        strcat(com,oldusername);
        system(com);
        break;  
        
case 7: strcpy(com,"sudo usermod -g ");
        printf(" Enter the group name : ");
        gets(groupname);
        strcat(com,groupname);
        printf(" Enter the user name : ");
        gets(username);
        strcat(com," ");
        strcat(com,username);
        system(com);
        break;
case 8: 
printf(" Enter the user name : ");
gets(username);
strcpy(com,"sudo chage -M ");
printf("Enter Max Days\n");
gets(MAXX);
strcat (com , MAXX);
strcat(com , " ");
strcat(com , username);
system(com);
break;

case 9: 
printf(" Enter the user name : ");
gets(username);
strcpy(com,"sudo chage -m ");
printf("Enter Min Days\n");
gets(MINN);
strcat (com , MINN);
strcat(com , " ");
strcat(com , username);
system(com);
break;

case 10: 
printf(" Enter the user name : ");
gets(username);
strcpy(com,"sudo chage -E ");
printf("Enter Date for Account Expires as YYYY-MM-DD \n");
gets(Date);
strcat (com , Date);
strcat(com , " ");
strcat(com , username);
system(com);
break;

case 11: 
printf(" Enter the user name : ");
gets(username);
strcpy(com,"sudo chage -W ");
printf("Enter Number of days \n");
gets(War);
strcat (com , War);
strcat(com , " ");
strcat(com , username);
system(com);
break;
case 12: printf("Enter user name : ");
         gets(username);
         strcpy(com,"sudo chage -l ");
         strcat(com , username);
         system(com);
         break;
case 13: exit(0);

default: printf("Wrong choice\n");
        



}
}
return 0;
}
