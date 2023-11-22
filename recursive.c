#include <stdio.h>
#include <ctype.h>

int i = 0, e = 1;
char input[100];

void E();
void Eprime();
void T();
void Tprime();
void F();

int main() {
    printf("Enter the string: ");
    scanf("%s", input);
    E();
    if (e == 1)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}

void E() {
    T();
    Eprime();
}

void Eprime() {
    if (input[i] == '+' || input[i] == '-') {
        i++;
        T();
        Eprime();
    }
}

void T() {
    F();
    Tprime();
}

void Tprime() {
    if (input[i] == '*' || input[i] == '/') {
        i++;
        F();
        Tprime();
    }
}

void F() {
    if (isalnum(input[i])) {
        i++;
    } else if (input[i] == '(') {
        i++;
        E();
        if (input[i] == ')') {
            i++;
        } else {
            e = 0;
        }
    } else {
        e = 0;
    }
}
