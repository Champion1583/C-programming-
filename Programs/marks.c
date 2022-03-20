#include <stdio.h>
struct marks
{
    char name[15];
    int marksMaths;
    int marksScience;
    int marksSST;
    int marksEnglish;
    int marksTotal;
} student;

int main()
{
    printf("Please enter your name: ");
    scanf("%s", &(student.name));
    printf("Enter your marks in Maths: ");
    scanf("%d", &(student.marksMaths));
    printf("Enter your marks in Science: ");
    scanf("%d", &(student.marksScience));
    printf("Enter your marks in SST: ");
    scanf("%d", &(student.marksSST));
    printf("Enter your marks in English: ");
    scanf("%d", &(student.marksEnglish));
    student.marksTotal = (student.marksEnglish) + (student.marksMaths) + (student.marksSST) + (student.marksScience);
    float percentage = (student.marksTotal) / 4;
    printf("Total Marks obtained by %s: %d\nPercentage: %.2f%%", (student.name), (student.marksTotal), percentage);
    return 0;
}