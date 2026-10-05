/*
   8. Modify Programming Project 7 so that it prompts for five quiz grades
      for each of five students, then computes the total score and average
      score for each student, and the average score, high score, and low
      score foreach quiz.
*/

#include <stdio.h>

#define N 5

int main(void)
{
    int quiz_grades[N][N],
        student_totals[N] = {0},
        quiz_totals[N] = {0},
        quiz_highs[N] = {0},
        quiz_lows[N];

    // Reading scores into grid
    for (int quiz = 0; quiz < N; quiz++)
    {
        printf("Enter %d grades for student %d: ",
               N, quiz + 1);

        for (int grade = 0; grade < N; grade++)
        {
            scanf("%d", &quiz_grades[quiz][grade]);

            int quiz_grade = quiz_grades[quiz][grade];

            student_totals[quiz] += quiz_grade;
            quiz_totals[grade] += quiz_grade;
        }
    }

    // Filling low scores array with 10s
    for (int grade = 0; grade < N; grade++)
        quiz_lows[grade] = 10;

    // Computing high quiz scores
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int curr_grade = quiz_grades[j][i];

            // Checking highest for every test score
            if (curr_grade > quiz_highs[i])
                quiz_highs[i] = curr_grade;
        }
    }

    // Computing low quiz scores
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int curr_grade = quiz_grades[j][i];

            // Checking lowest for every test score
            if (curr_grade < quiz_lows[i])
                quiz_lows[i] = curr_grade;
        }
    }

    // Printing total and average score per student
    for (int student = 0; student < N; student++)
    {
        int total = student_totals[student];

        printf("\nStats of student %d:", student + 1);
        printf("\nTotal score: %d", total);
        printf("\nAverage score: %.2f\n", (float) total / N);
    }

    // Printing quiz-related info
    for (int quiz = 0; quiz < N; quiz++)
    {
        float quiz_avg = (float) quiz_totals[quiz] / N;

        printf("\nStats of quiz %d:", quiz + 1);
        printf("\nAverage score: %.2f", quiz_avg);
        printf("\nHighest score: %d", quiz_highs[quiz]);
        printf("\nLowest score: %d\n", quiz_lows[quiz]);
    }
    
    return 0;
}