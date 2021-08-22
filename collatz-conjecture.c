/*********************************************
The unsolvable problem - Collatz Conjecture :

The Collatz conjecture is a conjecture in mathematics that concerns sequences defined as follows:

Start with any positive integer n. Then each term is obtained from the previous term as follows:

- If the previous term is even, the next term is one half of the previous term.
- If the previous term is odd, the next term is 3 times the previous term plus 1.
- The conjecture is that, no matter what value of n, the sequence will always reach 1 & then loop
  between 4 2 and 1 forever.

For a very detailed introduction to the conjecture please take a look at this video by Veritasium -
https://www.youtube.com/watch?v=094y1Z2wpJg

- "Mathematics is just not right enough, for such questions"
**********************************************/
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint64_t x=0, flag=4;

    printf("Enter the number\n");
    scanf("%d", &x);

    while(x >= 1)
    {
        if((x%2U) == 0U)
        {
            printf("computing /2 on even x = %d\n", x);
            x /= 2;
        }else if((x%2U) != 0U)
        {
            if (x == 1U)
            {
                printf("Entered infinite loop as X reached 1, terminating in %d\n", flag);
                --flag;

                if(flag == 0)
                {
                    break;
                }
            }else
            {
                printf("computing 3x+1 on odd x = %d\n", x);
                x = (3*x + 1U);
            }
        }
    }

    printf("Terminated\n");
    return 0;
}
