#include<stdio.h>

int main() {
    char arr[100] = "jsdfghyiug4@#*&&sdjk";
    int countCharacterText = 0;                     
    int countCharacterNumber = 0;
    int countCharacterSpecial = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            countCharacterText++;
        } else if (arr[i] >= '0' && arr[i] <= '9') {
            countCharacterNumber++;
        } else {
            countCharacterSpecial++;
        }
    }
    printf("So ky tu chu: %d\n", countCharacterText);
    printf("So chu so: %d\n", countCharacterNumber);
    printf("So ky tu dac biet: %d\n", countCharacterSpecial);

    return 0;
}

