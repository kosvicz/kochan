#include <stdio.h>

int main() {
    float val1, val2;
    char oper;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &val1, &oper, &val2);
    
    switch(oper) {
        case '+':
            printf("%.2f\n", val1 + val2);
            break;
        case '-':
            printf("%.2f\n", val1 - val2);
            break;
        case '*':
            printf("%.2f\n", val1 * val2);
            break;
        case '/':
            if(val2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n", val1 / val2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }

    return 0;
}

