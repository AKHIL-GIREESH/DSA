#include <stdio.h>
#include <string.h>

char expString[50], popVal, opArray[50], preFix[50];
int top = -1; n;

void PUSH(char element) {
    top++;
    opArray[top] = element;
}

char POP() {
    popVal = opArray[top];
    top--;
    return popVal;
}

int ISP(char operator) {
    if (operator == '(')
        return 0;
    else if (operator == '+' || operator == '-')
        return 1;
    else if (operator == '*' || operator == '/')
        return 2;
    else if (operator == '^')
        return 3;
    return -1; // Return -1 for unrecognized operators.
}

int ICP(char operator) {
    if (operator == '(')
        return 4;
    else if (operator == '+' || operator == '-')
        return 1;
    else if (operator == '*' || operator == '/')
        return 2;
    else if (operator == '^')
        return 3;
    return -1; // Return -1 for unrecognized operators.
}

void reverseString(char *str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int len, i = 0, j = 0;
    char element, x;

    printf("Input the Infix Expression: ");
    scanf("%s", expString);

    reverseString(expString);
    len = strlen(expString);
    expString[len] = '(';
    expString[len + 1] = '\0';
    PUSH(')');

    while (top!=-1) {
        element = expString[i];
        i++;

        if (element == ' ')
            continue;

        if (element == '(') {
            x = POP();
            while (x != ')') {
                preFix[j] = x;
                j++;
                x = POP();
            }
        } else if (element == ')' || element == '^' || element == '*' || element == '/' || element == '+' || element == '-') {
            x = POP();
            while (ISP(x) > ICP(element)) {
                preFix[j] = x;
                j++;
                x = POP();
            }
            PUSH(x);
            PUSH(element);
        } else {
            preFix[j] = element;
            j++;
        }
    }

    reverseString(preFix);
    //preFix[j] = '\0';

    printf("Prefix Expression: %s\n", preFix);

    return 0;
} 