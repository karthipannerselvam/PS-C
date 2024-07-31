#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ITEMS 100
#define MAX_LEN 100

int binarySearch(char inventory[][MAX_LEN], int n, char target[]) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = left + (right - left) / 2;

        int cmp = strcmp(inventory[mid], target);

        if (cmp == 0) {
            return mid; 
        } else if (cmp < 0) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    char inventory[MAX_ITEMS][MAX_LEN];
    char target[MAX_LEN];
    int n, i, index;

    printf("Enter the number of items: ");
    scanf("%d", &n);
    getchar(); 

    printf("Enter the inventory items:\n");
    for (i = 0; i < n; i++) {
        fgets(inventory[i], MAX_LEN, stdin);
        inventory[i][strcspn(inventory[i], "\n")] = '\0';
        int len = strlen(inventory[i]);
        while (len > 0 && isspace(inventory[i][len - 1])) {
            inventory[i][--len] = '\0';
        }
    }

    printf("Enter the target product: ");
    fgets(target, MAX_LEN, stdin);
    target[strcspn(target, "\n")] = '\0';

    index = binarySearch(inventory, n, target);

    if (index != -1) {
        printf("Index of target: %d\n", index);
    } else {
        printf("Target not found\n");
    }

    return 0;
}
