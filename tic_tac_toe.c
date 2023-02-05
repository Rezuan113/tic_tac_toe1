#include<stdio.h>

int main()
{
   int player1=1, player2=0, arr[3][3];
    int i,j,x;
    for(i=0;i<3;i++){
        for(j=0; j<3;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]!=player1 && arr[i][j]!=player2){
                printf("Invalid input");
            }
        }
    }
    if((arr[0][0]==arr[0][1])&& (arr[0][1]==arr[0][2])){
       x=arr[0][0];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
   else if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])){
       x=arr[0][0];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
   else if((arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2])){
       x=arr[2][0];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }


   else if((arr[0][2]==arr[1][2])&&(arr[1][2]==arr[2][2])){
       x=arr[0][2];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
   else if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])){
       x=arr[0][2];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
   else if((arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1])){
       x=arr[0][1];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
   else if((arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2]))
    {
       x=arr[1][0];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
    else if((arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0]))
    {
       x=arr[0][0];
        if(player1==x){
        printf("player 1 wins");
      }
        else if(player2==x)   {
        printf("player 2 wins");
      }
    }
    else{
        printf("draw");
    }
    return 0;


}