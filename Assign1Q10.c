// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[10][50];
    int studentnum;

    printf("Enter the number of students (up to 10): ");
    scanf("%d", &studentnum);

    if (studentnum > 10) {
        printf("Maximum number of students allowed is 10.\n");
        return 1;
    }

    printf("Enter %d student names:\n", studentnum);
    for (int i = 0; i < studentnum; ++i) {
        scanf("%s", nameOfStudents[i]);
    }

    qsort(nameOfStudents, studentnum, sizeof(char[50]), compareNames);

    printf("\nSorted student names:\n");
    for (int i = 0; i < studentnum; ++i) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}