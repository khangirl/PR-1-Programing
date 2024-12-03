/*
if 
if else : nested 
ladder 

*/
#include <stdio.h>

int main() 
  {
    int score ;
    char grade ;
    
    printf("Enter you score : ");
    scanf("%d",&score);
    
    // ternary
    score<=100 && score>=0 
    ? 
        score<=100 && score>90 
        ? 
            grade = 'A'
                : 
                score<90 && score>=80 ? 
                    grade = 'B'
                    :
                        score<80 && score>=70 
                        ?
                            grade = 'C'
                        :
                        score<70 && score>=60 
                            ?
                                grade = 'D'
                            :
                                score<60 && score>=50 
                                ?
                                    grade = 'E'
                                :
                                    score<50 
                                    ?
                                        grade = 'F'
                                    : 
                                        printf("Invalid marks")
    :
        printf("Invalid score");
    
    
    switch(grade)
    {
        case 'A' :
            printf("Excellent work");
            break;

         case 'B' :
            printf("very good  work");
            break;

         case 'C' :
            printf(" good  work");
            break;

         case 'D' :
            printf(" Average work");
            break;

        case 'E' :
            printf(" poor  work");
            break;

         case 'F' :
            printf(" very poor work");
            break;
    
   default:
            printf("\n ERROR: ou! something went wronge...");
        break;
    }

    if(grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E')
    {
        printf("\n Congratulations! you are eligible for the next level %c",grade);
    }
    else
    {
        
        printf("\n Please try again next time%c",grade);
    }
}