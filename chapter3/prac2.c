#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter the marks for subject 1:\n");
    scanf("%d", &marks1);
    printf("Enter the marks for subject 2:\n");
    scanf("%d", &marks2);
    printf("Enter the marks for subject 3:\n");
    scanf("%d", &marks3);

    // Check if any subject has marks below 33
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You failed in individual subject\n");
    }
    // Check if the average is below 40
    else if (((marks1 + marks2 + marks3) / 3) < 40)
    {
        printf("You failed cumulatively\n");
    }
    // Passed case
    else
    {
        printf("You passed\n");
    }
    
    return 0;
}
