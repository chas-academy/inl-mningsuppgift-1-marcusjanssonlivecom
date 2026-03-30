#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int diceRollArray[100];
    int sum = 0;

    int diceCounterArray[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 100; i++)
    {
        int randNumber = (rand() % 6)+1;

        //Adds the number to the list of numbers
        diceRollArray[i] = randNumber;

        //Stores occurences of specific numbers
        diceCounterArray[randNumber] += 1;

        //Adds value to the total sum
        sum += randNumber;
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",
        diceCounterArray[1], 
        diceCounterArray[2], 
        diceCounterArray[3], 
        diceCounterArray[4], 
        diceCounterArray[5], 
        diceCounterArray[6]);
    
    printf("%d\n", sum);

    printf("%.1f", sum/100.0);
    
    return 0;
}
