#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    total = physicsMarks + mathMarks + chemistryMarks;
    percentage = (total / 300) * 100;

    printf("\n-------- Summary --------\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
