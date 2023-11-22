%{

    #include "y.tab.h"

%}

%%

[a-zA-Z_][a-zA-Z_0-9]* return id;
[0-9] return digit;

%%

int yywrap()

{

return 1;

}

