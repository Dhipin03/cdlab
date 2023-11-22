%{

    #include<stdio.h>

    int valid=1;   

%}
%token id digit

%%
start :id s;
s:id s
  |digit s
  |
  ;
%%
int yyerror()

{

    valid=0;

    printf("\nInvalid identifier!\n");

    return 0;

}

int main()

{

    printf("\nEnter the expression:\n");

    yyparse();

    if(valid)

    {

        printf("\nValid identifier!\n");

    }

}
