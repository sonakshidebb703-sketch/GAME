#include <stdio.h>

void showInstructions() {
    printf("HOW TO PLAY\n");
    printf("Connect the trail by entering the correct character in order.\n");
    printf("Correct answer: +10 points\n");
    printf("Wrong answer: Lose 1 life\n");
    printf("You have 3 lives.\n");
    printf("Complete the full sequence to win.\n");
}

void playGame() {
    char sequence[] = {'1', 'A', '2', 'B', '3', 'C', '4', 'D'};
    char input;
    int position = 0;
    int lives = 3;
    int score = 0;

    printf("TRAIL CONNECTOR\n");
    printf("Connect the trail in this order:\n");
    printf("1 -> A -> 2 -> B -> 3 -> C -> 4 -> D\n");

    while (position < 8 && lives > 0)
    {
        printf("Lives: %d | Score: %d\n", lives, score);
        printf("Enter next connector: ");
        scanf(" %c", &input);

        if (input == sequence[position])
        {
            printf("Correct! The trail continues.\n\n");
            score += 10;
            position++;
        }
        else
        {
            printf("Wrong connector! Expected: %c\n", sequence[position]);
            lives--;
            printf("You lost 1 life.\n\n");
        }
    }

    printf("RESULT ->\n");

    if (position == 8)
    {
        printf("TRAIL COMPLETE! YOU WIN!\n");
        printf("Final Score: %d\n", score);
        printf("Lives Remaining: %d\n", lives);
    }
    else
    {
        printf("GAME OVER!\n");
        printf("You could not complete the trail.\n");
        printf("Final Score: %d\n", score);
    }
}

int main()
{
    int choice;

    while (1) {
        printf("TRAIL CONNECTOR\n");
        printf("1. Start Game\n");
        printf("2. Instructions\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            playGame();
        else if (choice == 2)
            showInstructions();
        else if (choice == 3) {
            printf("Thank you for visiting!\n");
            break;
        }
        else
            printf("Invalid choice. Please enter correct choice.\n");
    }

    return 0;
}
