#include <stdio.h>
#include <ctype.h>

int findCharacterType(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch)) {
            return 1; 
        } else {
            return 2; 
        }
    } else if (isdigit(ch)) {
        return 3; 
    } else if (isgraph(ch)) {
        return 4; 
    } else {
        return 5; 
    }
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    int result = findCharacterType(character);

    switch (result) {
        case 1:
            printf("Type: 'A' to 'Z'\n");
            break;
        case 2:
            printf("Type: 'a' to 'z'\n");
            break;
        case 3:
            printf("Type: '0' to '9'\n");
            break;
        case 4:
            printf("Type: Any other printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}
