#include <stdio.h>
float calculate_percentage(float total_marks, float max_marks) {
    return (total_marks / max_marks) * 100;
}
int main() {
    int roll_no;
    char name[100];
    float physics_marks, math_marks, chemistry_marks;
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Physics Marks: ");
    scanf("%f", &physics_marks);
    printf("Enter Math Marks: ");
    scanf("%f", &math_marks);
    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistry_marks);
    float total_marks = physics_marks + math_marks + chemistry_marks;
    float max_marks = 300;  
    float percentage = calculate_percentage(total_marks, max_marks);
    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics_marks);
    printf("Math Marks: %.2f\n", math_marks);
    printf("Chemistry Marks: %.2f\n", chemistry_marks);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}
