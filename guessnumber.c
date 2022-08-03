#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int l,o;
    system("cls");
    srand(time(NULL));
    l = (rand()%5)+1;
    printf("TEST YOUR LUCK (1-5): ");
    scanf("%d",&o);
    if(o==l){
        win();
    }
    else{
        lose();
    }
    return 0;
}
void win()
{
    char ch;
    printf("You win!\n");
    printf("Want to play again? (Y/N): ");
    scanf(" %c",&ch);
    if(ch=='Y' || ch=='y'){
        main();
    }
    else if(ch=='N' || ch=='n'){
        printf("Press any key to exit...");
        getch();
    }
}
void lose()
{
    char ch;
    printf("You lose!\n");
    printf("Want to play again? (Y/N): ");
    scanf(" %c",&ch);
    if(ch=='Y' || ch=='y'){
        main();
    }
    else if(ch=='N' || ch=='n'){
        printf("Press any key to exit...");
        getch();
    }
}
