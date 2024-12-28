//Mark Sheet for students

#include <stdio.h>
#include <string.h>

int main()
{
    /*int English,Maths,Science,History,Islam,Tamil,Sinhala,Tamillit,ICT;
    float average, total;
    printf("Enter English marks for student:");
    scanf("%d", &English);
    printf("Enter Maths marks for student:");
    scanf("%d", &Maths);
    printf("Enter Science marks for student:");
    scanf("%d", &Science);
    printf("Enter History marks for student:");
    scanf("%d", &History);
    printf("Enter Islam marks for student:");
    scanf("%d", &Islam);
    printf("Enter Tamil marks for student:");
    scanf("%d", &Tamil);
    printf("Enter Sinhala marks for student:");
    scanf("%d", &Sinhala);
    printf("Enter Tamillit marks for student:");
    scanf("%d", &Tamillit);
    printf("Enter ICT marks for student:");
    scanf("%d", &ICT);
    total = English + Maths + Science + History + Islam + Tamil + Sinhala + Tamillit + ICT;
    average = total / 9;
*/
    

    char *subjects[ ] = {"English", "Maths", "Science", "History", "Islam", "Tamil", "Sinhala", "Tamillit", "ICT"};
    const int SUBJECTS = sizeof(subjects) / sizeof(subjects[0]);
    int marks[SUBJECTS];
    float total = 0, average;
    // Input marks for all subjects using a loop
    for (int i = 0; i < SUBJECTS; i++) {
        printf("Enter %s marks for the student: ", subjects[i]);
        scanf("%d", &marks[i]);
        total += marks[i]; // Calculate total during input
    }

    // Calculate average
    average = total / SUBJECTS;

    // Display results
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    // Display grade based on average
    if (average >= 75) {
        printf("Grade: A\n");
    } else if (average >= 60) {
        printf("Grade: B\n");
    } else if (average >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
    


    return 0;


}