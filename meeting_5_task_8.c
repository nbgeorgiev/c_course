#include <stdio.h>

int main()

{
   int GolfBalls = 20;
   float CashDesk;
   float PriceOneGame = 3.50;
  
   
   GolfBalls = GolfBalls - 2;
   CashDesk = 2*PriceOneGame;
   GolfBalls = GolfBalls - 5;
   CashDesk = CashDesk + 5*PriceOneGame;
   GolfBalls = GolfBalls - 3;
   CashDesk = CashDesk +3*PriceOneGame;
   GolfBalls = GolfBalls + 2;
   GolfBalls = GolfBalls - 4;
   CashDesk = CashDesk + 4*PriceOneGame;
   GolfBalls = GolfBalls - 6;
   CashDesk = CashDesk + 6*PriceOneGame;
   GolfBalls = GolfBalls + 5;
   GolfBalls = GolfBalls - 2;
   CashDesk = CashDesk + 2*PriceOneGame;
   int playerOnField = 20 - GolfBalls;
    
   printf("In the end of the day there are: %i available golf balls. \nThe money in the cash desk for the day are: %0.2f lv.\nThere are %i players on the field playing currently.", GolfBalls, CashDesk, playerOnField);
   return 0;
}