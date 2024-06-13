#include<stdio.h>            //rp ps rs
#include<stdlib.h>
#include<time.h>
int rps(char you , char comp){
if(comp==you){return 0;}
if(comp=='r'&&you=='p'){return 1;}
else if(comp=='p'&&you=='r'){return -1;}
if(comp=='p'&&you=='s'){return 1;}
else if(comp=='s'&&you=='p'){return -1;}
if(comp=='s'&&you=='r'){return 1;}
else if(comp=='r'&&you=='s'){return -1;}

}
int main()
{   printf("welcome to the ryuga's generated rock paper seizer game...\n\n");
    printf("befor you start.know the rulse.\n");
    printf("1/if your option and computer option got matched.it will be draw\n");
    printf("2/if you win 10 times and get 10 point you earn the victory or else computer will gain the glory\n");
    printf(".......");
    printf("rock=r...paper=p...seizer=s\n\n");
    do{   int ptrcomp=0,ptryou=0;
    do{printf("computer generatted it's own option\nnow it's your turn..........\n\n");
    char comp,you;
    srand(time(0));         /*this two liine will genrate a radom number */
    int random=rand()%100+1;/*between 1 to 100*/
    if(random>0&&random<=33){comp='r';}
    else if(random>33&&random<=66){comp='p';}
    else if(random>66){comp='s';}   //line 23 to 28 generates computer choice;
    printf("%c\n",comp);
    fflush(stdin);
    printf("rock(r)/paper(p)/seizer(s):");
    scanf("%c",& you);
    int result=rps(you,comp);
    if(result==0){printf("draw!\n");}
    else if(result==1){printf("computer chose: %c and you chose: %c\nyou won :>\n",comp,you);ptryou++;
    printf("your point:%d",ptryou);}
    else if(result==-1){printf("computer chose: %c and you chose: %c\ncomputer won :<\n",comp,you);ptrcomp++;
    printf("computer point:%d",ptrcomp);}
    printf("\n\n\n\n");
    if(ptrcomp==10){break;}
    if(ptryou==10){break;}
}while(1);
if(ptrcomp==10){printf("oops! computer gain 10 points\nyou lose ;<\n");}
else printf("hurray!you gain 10 points and won the victory\n");
char op;
fflush(stdin);
printf("do you want to play again?");
scanf("%c",&op);
if(op=='y'){continue;}
else break; 
}while(1);
return 0;
}