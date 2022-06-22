a
            push(val);
        }
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}

int main()
{

    int i;

    /* declare character array to store postfix expression */
    char postfix[POSTFIXSIZE];
    printf("ASSUMPTION: There are only four operators(*, /, +, -) in an expression and operand is single digit only.\n");
    printf(" \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");

    /* take input of postfix expression from user */

    for (i = 0; i <= POSTFIXSIZE - 1; i++) {
        scanf("%c", &postfix[i]);

        if (postfix[i] == ')') /* is there any way to eliminate this if */
        {
            break;
        } /* and break statement */
    }

    /* call function to evaluate postfix expression */

    EvalPostfix(postfix);

    return 0;
}
