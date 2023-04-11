#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int starting_n = get_float("what is population of llamas now? ");
    int goal_n = get_double("what is goal population of llamas? ");

    int years=0;
    while (starting_n < goal_n);
    {
        starting_n = starting_n + starting_n / 3 - starting_n / 4 ;
        years++;
    }


    printf("The number of years it takes to reach %i llamas is %i year(s)!\n", goal_n, years);

}

