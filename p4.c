#include <stdio.h>
#include <string.h>

// Function for sorting array (Bubble Sort)
void sortArray(int a[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

// Function for searching (Linear Search)
void searchArray(int a[], int n, int key) {
    int i, found = 0;
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Element found at position %d", i+1);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Element not found");
}

// String concatenation
void concatString(char s1[], char s2[]) {
    strcat(s1, s2);
    printf("Concatenated string: %s", s1);
}

// String comparison
void compareString(char s1[], char s2[]) {
    if(strcmp(s1, s2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}

int main() {
    int choice, subChoice;

    printf("1. Array Operations\n2. String Operations\nEnter choice: ");
    scanf("%d", &choice);

    // ARRAY PART
    if(choice == 1) {
        int n, a[50], i, key;

        printf("Enter size: ");
        scanf("%d", &n);

        if(n <= 0) {
            printf("Invalid size");
            return 0;
        }

        printf("Enter elements: ");
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        printf("1. Sort\n2. Search\nEnter choice: ");
        scanf("%d", &subChoice);

        if(subChoice == 1) {
            sortArray(a, n);
        }
        else if(subChoice == 2) {
            printf("Enter element to search: ");
            scanf("%d", &key);
            searchArray(a, n, key);
        }
        else {
            printf("Invalid choice");
        }
    }

    // STRING PART
    else if(choice == 2) {
        char s1[100], s2[100];

        printf("Enter first string: ");
        scanf("%s", s1);
        printf("Enter second string: ");
        scanf("%s", s2);

        printf("1. Concatenate\n2. Compare\nEnter choice: ");
        scanf("%d", &subChoice);

        if(subChoice == 1) {
            concatString(s1, s2);
        }
        else if(subChoice == 2) {
            compareString(s1, s2);
        }
        else {
            printf("Invalid choice");
        }
    }

    else {
        printf("Invalid main choice");
    }

    return 0;
}