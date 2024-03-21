#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void bitStuffing(int N, int arr[])
{
    printf("Stuffed bits: 01111110 ");

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            printf("1");

            if (count == 5)
            {
                printf("0");
                count = 0;
            }
        }
        else
        {
            count = 0;
            printf("0");
        }
    }

    printf(" 01111110\n");
}

void bitDestuffing(int N, int arr[])
{
    printf("De-stuffed bits: 01111110 ");

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            printf("1");

            if (count == 5)
            {
                i++;
                count = 0;
            }
        }
        else
        {
            count = 0;
            printf("0");
        }
    }

    printf(" 01111110\n"); // Trailer
}

int main()
{
    int N;
    printf("Enter the number of bits (maximum %d): ", MAX_SIZE);
    scanf("%d", &N);

    if (N > 0 && N <= MAX_SIZE)
    {
        int arr[MAX_SIZE];
        printf("Enter the bit sequence (0 or 1): ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Stuffing-\n");
        bitStuffing(N, arr);

        printf("De Stuffing-\n");
        bitDestuffing(N, arr);
    }
    else
    {
        printf("Invalid input size. Please enter a number between 1 and %d.\n", MAX_SIZE);
    }

    return 0;
}
