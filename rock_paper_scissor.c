#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int userS=0,compS=0,Mtie=0;
void end(){
    printf("\n\n\n\t\t================== Successfully Exit.. ======================\n\n\n\n");
}
void check(int user,int comp){
    int ch;
    if(user==comp){
        printf("\t\t\t---------------");
        printf("\n\t\t\t| Match tie... |\n");
        printf("\t\t\t---------------\n");
        Mtie++;
    }
        else if(user==1)
        {
            if(comp==2){
                
                printf("\t\t\t---------------");
                printf("\n\t\t\t| You Win :) |\n");
                printf("\t\t\t---------------\n");
                userS++;
            }
            else{
                printf("\t\t\t---------------");
                printf("\n\t\t\t| You Lose :( |\n");
                printf("\t\t\t---------------\n");
                compS++;
            }
        }
        else if(user==2){
            if(comp==3){
                        printf("\t\t\t---------------");
                  printf("\n\t\t\t| You Win :) |");
                 printf("\t\t\t---------------\n");
                userS++;
            }
            else{
                
                printf("\t\t\t---------------");
                printf("\n\t\t\t| You Lose :(  |\n");
                printf("\t\t\t---------------\n");
                compS++;
            }
        }
        else if(user==3){
            if(comp==1){
                 printf("\t\t\t---------------");
                 printf("\n\t\t\t| You Win :) |\n");
                  printf("\t\t\t---------------\n");
                userS++;
            }
            else{
                  printf("\t\t\t-------------");
                  printf("\t\t\t| You Lose :( |\n");
                  printf("\t\t\t-------------\n");
                compS++;
            }
        }
        else if(user==4){
                    end();
        }

            fflush(stdin);

            printf("\n\n\nDo you want to play again or view scorceBooard [yes of press 1 or No any key]..");
         scanf("%d", &ch);
            if (ch == 1){
               main();
           }
           else{
        printf("\n   User win  : %d\n", userS);
        printf("Computer win : %d\n",compS);
        printf("Matches Teied : %d", Mtie);
         printf("\n-------------------------------------------\n");
         printf("Total Matches : %d\n\n", userS+compS+Mtie);
            end();
           }     
}

    int main()
{
         system("color 0b");
  system("cls");
  int user,computer;
    printf("\t================== Welcome to Rock,Paper and Scissor Game ====================");
   printf("\n Please Select the option: ");
   printf("\n1. Scissor");
   printf("\n2. Paper");
   printf("\n3. Rock");
   printf("\n4. Quit\n");
   printf("\n\nYou choose : ");
    scanf("%d", &user);

    srand(time(0));
    computer=(rand()%3)+1;
        check(user,computer);
    return 0;
}