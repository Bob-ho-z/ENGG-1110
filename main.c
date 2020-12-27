/**
* ENGG1110 Problem Solving by Programming
*
* Course Project
*
* I declare that the project here submitted is original
* except for source material explicitly acknowledged,
* and that the same or closely related material has not been
* previously submitted for another course.
* I also acknowledge that I am aware of University policy and
* regulations on honesty in academic work, and of the disciplinary
* guidelines and procedures applicable to breaches of such
* policy and regulations, as contained in the website.
*
* University Guideline on Academic Honesty:
* https://www.cuhk.edu.hk/policy/academichonesty/
*
* Student Name : He Zhanbo <your name>
* Student ID : 1155127221 <your student ID>
* Class/Section :LL01 <your class/section>
* Date : 5/4/2019 <date>
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct card {
    char suit;   // 'S'pade / 'H'eart / 'C'lub / 'D'iamond
    int  rank;   // A (1) / 2 - 10 / J (11) / Q (12) / K (13);
    int  status; // covered (0) or flipped (1) or chosen (-1), etc.
} TypeCard;
void printCard( TypeCard   aCard )
{
    if (aCard.status == 0)
        printf("XXX");
    else
    {
        /* display suit of a card */
        switch (aCard.suit) {
            case 'S':
            case 'H':
            case 'C':
            case 'D':
                printf("%c", aCard.suit);
                break;
            default:
                printf("?");
        }

        /* Enter your code here. */
        switch(aCard.rank){
            case 1:
                  printf(" A");
                  break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                 printf(" %d",aCard.rank);
                 break;
            case 10:
                 printf("%d",aCard.rank);
                 break;
            case 11:
                 printf(" J");
                 break;
            case 12:
                printf(" Q");
                break;
            case 13:
                printf(" K");
                break;
            default:
              printf("??");
        }
        /* display rank of a card */




    }
    printf("\t");
    return;
}
void showDesktop( TypeCard   desktop[4][14] )
{
    /* show all 4 x 13 cards in the desktop 2D TypeCard array */
    int i,j;
    /* Enter your code here. */
    for(i=0;i<4;i++)
    {
        for(j=1;j<14;j++)
        {
            printCard(desktop[i][j]);
            if(j==13)
            printf("\n");
        }
    }
    return;
}
void computerflipcard1 (int row1,int col1,TypeCard desktop[4][14])
{
     switch (col1)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("Computer chose 1st card (%d, %d) and it is ",row1,col1);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("Computer chose 1st card (%d,%d) and it is ",row1,col1);
       break;
   }
   desktop[row1][col1].status=1;
   printCard(desktop[row1][col1]);
   desktop[row1][col1].status=0;
   printf("\n");

}

void computerflipcard2 (int row2,int col2,TypeCard desktop[4][14])
{
     switch (col2)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("Computer chose 2nd card (%d, %d) and it is ",row2,col2);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("Computer chose 2nd card (%d,%d) and it is ",row2,col2);
       break;
   }
   desktop[row2][col2].status=1;
   printCard(desktop[row2][col2]);
   desktop[row2][col2].status=0;
   printf("\n");

}

void Mode2computer1flipcard1 (int row1,int col1,TypeCard desktop[4][14])
{
     switch (col1)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("Computer 1 chose 1st card (%d, %d) and it is ",row1,col1);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("Computer 1 chose 1st card (%d,%d) and it is ",row1,col1);
       break;
   }
   desktop[row1][col1].status=1;
   printCard(desktop[row1][col1]);
   desktop[row1][col1].status=0;
   printf("\n");

}

void Mode2computer1flipcard2 (int row1,int col1,TypeCard desktop[4][14])
{
     switch (col1)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("Computer 1 chose 2nd card (%d, %d) and it is ",row1,col1);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("Computer 1 chose 2nd card (%d,%d) and it is ",row1,col1);
       break;
   }
   desktop[row1][col1].status=1;
   printCard(desktop[row1][col1]);
   desktop[row1][col1].status=0;
   printf("\n");

}


void Mode2computer2flipcard1 (int row1,int col1,TypeCard desktop[4][14])
{
     switch (col1)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("Computer 2 chose 1st card (%d, %d) and it is ",row1,col1);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("Computer 2 chose 1st card (%d,%d) and it is ",row1,col1);
       break;
   }
   desktop[row1][col1].status=1;
   printCard(desktop[row1][col1]);
   desktop[row1][col1].status=0;
   printf("\n");

}

void Mode2computer2flipcard2 (int row1,int col1,TypeCard desktop[4][14])
{
     switch (col1)
     {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("Computer 2 chose 2nd card (%d, %d) and it is ",row1,col1);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("Computer 2 chose 2nd card (%d,%d) and it is ",row1,col1);
       break;
   }
   desktop[row1][col1].status=1;
   printCard(desktop[row1][col1]);
   desktop[row1][col1].status=0;
   printf("\n");

}




int main()
{
     /* given initial card arrangement, DO NOT modify */
    TypeCard desktop[4][14] = {
        /* the first element (column 0) of each row is UNUSED */
        /* row: 0 - 3; col: 1 - 13 */
        {{}, {'S', 1}, {'S', 2}, {'S', 3}, {'S', 4}, {'S', 5}, {'S', 6}, {'S', 7}, {'S', 8}, {'S', 9}, {'S', 10}, {'S', 11}, {'S', 12}, {'S', 13}},
        {{}, {'H', 1}, {'H', 2}, {'H', 3}, {'H', 4}, {'H', 5}, {'H', 6}, {'H', 7}, {'H', 8}, {'H', 9}, {'H', 10}, {'H', 11}, {'H', 12}, {'H', 13}},
        {{}, {'C', 13}, {'C', 12}, {'C', 11}, {'C', 10}, {'C', 9}, {'C', 8}, {'C', 7}, {'C', 6}, {'C', 5}, {'C', 4}, {'C', 3}, {'C', 2}, {'C', 1}},
        {{}, {'D', 1}, {'D', 2}, {'D', 3}, {'D', 4}, {'D', 5}, {'D', 6}, {'D', 7}, {'D', 8}, {'D', 9}, {'D', 10}, {'D', 11}, {'D', 12}, {'D', 13}}
    };

    int i,choice=1,row,col,row1,col1,row2,col2,human=0,computer=0,count=0;
    int computer1=0,computer2=0;
    TypeCard tmp;
        for(i=0;i<30;i++)
        {
        printf("*");
        }
    printf("\n");
    printf("* Welcome to Concentration! *");
    printf("\n");
    for(i=0;i<30;i++)
         {
           printf("*");
         }
    printf("\n");
    while(choice!=0)
    {
      printf("Please choose a mode of the game:\n");
      printf("1. Human vs. Computer\n");
      printf("2. Computer vs. Computer\n");
      printf("0. Quit\n");
      printf("Your choice:");
      scanf("%d",&choice);
      printf("\n");
        if(choice==1)
        {
         showDesktop(desktop);
         for(i=0;i<1000;i++)
            {
             row1=rand()%4;
             col1=1+rand()%13;
             row2=rand()%4;
             col2=1+rand()%13;
             tmp=desktop[row1][col1];
             desktop[row1][col1]=desktop[row2][col2];
             desktop[row2][col2]=tmp;
            }
         printf("\n");
         while((human+computer)<52)
         {
         printf("Please input 1st card: ");
         scanf("%d%d",&row1,&col1);
         while((!(row1>=0&&row1<=3))||(!(col1>=1&&col1<=13))||(desktop[row1][col1].status==1))
            {
                if((!(row1>=0&&row1<=3))||(!(col1>=1&&col1<=13)))
                {
                  printf("Row and column must be within 0 - 3 and 1 - 13\n");
                }
                if(desktop[row1][col1].status==1)
                {
                    printf("The card must not be flipped already\n");
                }
                printf("Please input 1st card: ");
                scanf("%d%d",&row1,&col1);

            }

         switch (col1){
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("User chose 1st card (%d, %d) and it is ",row1,col1);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("User chose 1st card (%d,%d) and it is ",row1,col1);
       break;
   }
   desktop[row1][col1].status=1;
   printCard(desktop[row1][col1]);
   desktop[row1][col1].status=0;
   printf("\n");
   printf("Please input 2nd card: ");
   scanf("%d%d",&row2,&col2);
         while((!(row2>=0&&row2<=3))||(!(col2>=1&&col2<=13))||(desktop[row2][col2].status==1)||(row1==row2&&col1==col2))
            {
                if((!(row2>=0&&row2<=3))||(!(col2>=1&&col2<=13)))
                {
                  printf("Row and column must be within 0 - 3 and 1 - 13\n");


                }
                if(desktop[row2][col2].status==1)
                {
                    printf("The card must not be flipped already\n");
                }
                if(row1==row2&&col1==col2)
                {
                    printf("The second card cannot be the same as first\n");
                }
                printf("Please input 2nd card: ");
                scanf("%d%d",&row2,&col2);

            }
      switch (col2){
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
       case 6:
       case 7:
       case 8:
       case 9:
       printf("User chose 2nd card (%d, %d) and it is ",row2,col2);
       break;
       case 10:
       case 11:
       case 12:
       case 13:
       printf("User chose 2nd card (%d,%d) and it is ",row2,col2);
       break;

        }
      desktop[row2][col2].status=1;
      printCard(desktop[row2][col2]);
      desktop[row2][col2].status=0;
      count++;
      printf("\n");

        if(desktop[row1][col1].rank==desktop[row2][col2].rank)
         {
          printf("You got a matched pair!\n\n");
          desktop[row2][col2].status=1;
          desktop[row1][col1].status=1;
          human=human+2;
         }
         else
         {
             printf("\n");
         }
       showDesktop(desktop);
       printf("\n");
        if(human+computer==52)
         {
             printf("Flipped cards: %d; Human: %d; Computer: %d;\n\n",human+computer ,human,computer);
             break;
         }

       //computer flip
       srand(time(0));
       row1=rand()%4;
       col1=1+rand()%13;
       while((desktop[row1][col1].status==1))
       {
        row1=rand()%4;
        col1=1+rand()%13;
       }
       computerflipcard1(row1,col1,desktop);


       row2=rand()%4;
       col2=1+rand()%13;
       while((desktop[row2][col2].status==1)||(row1==row2&&col1==col2))
       {
        row2=rand()%4;
        col2=1+rand()%13;
       }
       computerflipcard2(row2,col2,desktop);
       count++;
       if(desktop[row1][col1].rank==desktop[row2][col2].rank)
         {
          printf("computer got a matched pair!\n\n");
          desktop[row2][col2].status=1;
          desktop[row1][col1].status=1;
          computer=computer+2;
         }
         else
         {
             printf("\n");
         }
       showDesktop(desktop);
       printf("\n\n");
       printf("Flipped cards: %d; You: %d; Computer: %d;\n\n",human+computer ,human,computer);

         }
      printf("*** End of Game ***\n");
      printf("%d turns played\n",count);

      if(human>computer)
      {
          printf("You win!\n\n\n");
      }
      if(human<computer)
      {
          printf("Computer wins!\n\n\n");
      }
      if(human==computer)
      {
          printf("A tie!\n\n\n");
      }



      }

        if(choice==2)
        {
            showDesktop(desktop);
          for(i=0;i<1000;i++)
            {
             row1=rand()%4;
             col1=1+rand()%13;
             row2=rand()%4;
             col2=1+rand()%13;
             tmp=desktop[row1][col1];
             desktop[row1][col1]=desktop[row2][col2];
             desktop[row2][col2]=tmp;
            }
         printf("\n");

          srand(time(0));
    while((computer1+computer2)<52)
          {

           row1=rand()%4;
           col1=1+rand()%13;
       while((desktop[row1][col1].status==1))
       {
        row1=rand()%4;
        col1=1+rand()%13;
       }
       Mode2computer1flipcard1(row1,col1,desktop);


         row2=rand()%4;
       col2=1+rand()%13;
       while((desktop[row2][col2].status==1)||(row1==row2&&col1==col2))
       {
        row2=rand()%4;
        col2=1+rand()%13;
       }
       Mode2computer1flipcard2(row2,col2,desktop);
       count++;
       if(desktop[row1][col1].rank==desktop[row2][col2].rank)
         {
          printf("computer 1 got a matched pair!\n\n");
          desktop[row2][col2].status=1;
          desktop[row1][col1].status=1;
          computer1=computer1+2;

         }


         else
         {
             printf("\n");
         }

          if(computer1+computer2==52)
         {
             printf("Flipped cards: %d; Computer1: %d; Computer2: %d;\n\n",computer1+computer2 ,computer1,computer2);
             break;
         }


        row1=rand()%4;
       col1=1+rand()%13;
       while((desktop[row1][col1].status==1))
       {
        row1=rand()%4;
        col1=1+rand()%13;
       }
       Mode2computer2flipcard1(row1,col1,desktop);


       row2=rand()%4;
       col2=1+rand()%13;
       while((desktop[row2][col2].status==1)||(row1==row2&&col1==col2))
       {
        row2=rand()%4;
        col2=1+rand()%13;
       }
       Mode2computer2flipcard2(row2,col2,desktop);
       count++;
             if(desktop[row1][col1].rank==desktop[row2][col2].rank)
         {
          printf("computer 2 got a matched pair!\n\n");
          desktop[row2][col2].status=1;
          desktop[row1][col1].status=1;
          computer2=computer2+2;
         }
         else
         {
             printf("\n");
         }

        printf("Flipped cards: %d; Computer1: %d; Computer2: %d;\n\n",computer1+computer2 ,computer1,computer2);

          }

          printf("*** End of Game ***\n");
          printf("%d turns played!\n",count);

        if(computer1>computer2)
      {
          printf("Computer 1 wins!\n\n\n");
      }
      if(computer1<computer2)
      {
          printf("Computer 2 wins!\n\n\n");
      }
      if(computer1==computer2)
      {
          printf("A tie!\n\n\n");
      }




        }

        for(row=0;row<4;row++)
        {
            for(col=1;col<14;col++)
            {
                desktop[row][col].status=0;
            }
        }
        human=0;
        computer=0;
        count=0;
        computer1=0;
        computer2=0;



    }
  return 0;
}
