#include <stdio.h>
#include <string.h>

void sort(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void printAnagrams(int n, char words[n][100]) {
    char sortWord[n][100];
    int flag[n];

    for (int i = 0; i < n; i++) {
        flag[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        strcpy(sortWord[i], words[i]);
        sort(sortWord[i]);
    }


    for (int i = 0; i < n; i++) {
        if (flag[i] == 1) continue;
        printf("%s ", words[i]);

        for (int j = 0; j < n; j++) {
            if (i != j && strcmp(sortWord[i], sortWord[j]) == 0) {
                printf("%s ", words[j]);
                flag[j] = 1;
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    char words[n][100];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    
    printAnagrams(n, words);

    return 0;
}