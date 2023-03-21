#include <stdio.h>
int stringlen(char str[]) {
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = stringlen(str);
    printf("Length of the string is:%d\n", length);
    return 0;
}
