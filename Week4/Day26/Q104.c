// Quiz Application
#include <stdio.h>
int main()
{
    int answer;
    int score = 0;
    char name[50];
    printf("\n**** C LANGUAGE QUIZ ****\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\nWelcome %s! Let's test your C knowledge.\n", name);
    // Question 1
    printf("\n1. Who is the father of C language?\n");
    printf("1) Dennis Ritchie\n2) Bjarne Stroustrup\n3) James Gosling\n4) Guido van Rossum\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer: Dennis Ritchie\n");
    }
    // Question 2
    printf("\n2. Which symbol is used to end a statement in C?\n");
    printf("1) .\n2) ,\n3) :\n4) ;\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer: ;\n");
    }
    // Question 3
    printf("\n3. Which function is used to print output in C?\n");
    printf("1) input()\n2) printf()\n3) print()\n4) scan()\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer: printf()\n");
    }
    // Question 4
    printf("\n4. Which header file is used for printf and scanf?\n");
    printf("1) stdlib.h\n2) math.h\n3) stdio.h\n4) conio.h\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer: stdio.h\n");
    }
    // Question 5
    printf("\n5. What is the size of int in C (generally)?\n");
    printf("1) 16 byte\n2) 2 bytes\n3) 8 bytes\n4) 4 bytes\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer: 4 bytes\n");
    }
    // Result
    printf("\n===== QUIZ RESULT =====\n");
    printf("Name: %s\n", name);
    printf("Score: %d / 5\n", score);

    if (score == 5)
        printf("Excellent! 💯 Master of C 🧠\n");
    else if (score >= 3)
        printf("Good job 👍 Keep practicing\n");
    else
        printf("Need improvement 📚 Study C basics\n");
    return 0;
}
