#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char answer;
    int signal;
    int correct = 0;
    int wrong = 0;
    float accuracy;

    printf("SIGNAL & SWAT\n");
    printf("G = GO     -> Press G\n");
    printf("N = NO-GO  -> Press N\n");
    printf("You will receive 10 random signals.\n");
    printf("Respond as quickly and correctly as possible.\n\n");

    for (i = 1; i <= 10; i++) {
        signal = rand() % 2;

        printf("Signal %d: ", i);

        if (signal == 0) {
            printf("G (GO) -> ");
            scanf(" %c", &answer);

            if (answer == 'g' || answer == 'G') {
                printf("Correct!\n\n");
                correct++;
            } else {
                printf("Wrong! The correct response was G.\n\n");
                wrong++;
            }
        } else {
            printf("N (NO-GO) -> ");
            scanf(" %c", &answer);

            if (answer == 'n' || answer == 'N') {
                printf("Correct!\n\n");
                correct++;
            } else {
                printf("Wrong! The correct response was N.\n\n");
                wrong++;
            }
        }
    }

    accuracy = (correct / 10.0) * 100;

    printf("             RESULT\n");
    printf("Correct responses : %d\n", correct);
    printf("Wrong responses : %d\n", wrong);
    printf("Accuracy : %.1f%%\n", accuracy);

    if (accuracy == 100)
        printf("Performance: PERFECT! Excellent response.\n");
    else if (accuracy >= 80)
        printf("Performance: GREAT JOB!\n");
    else if (accuracy >= 60)
        printf("Performance: GOOD! Keep practicing.\n");
    else
        printf("Performance: KEEP PRACTICING!\n");

    return 0;
}
