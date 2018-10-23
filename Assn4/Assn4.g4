grammar Assn4;

assn4 
    :assign *EOF
    ;

assign
    : IDENTIFIER '=' exp 
    ;
exp
    : exp '+' term | term
    ;
term
    : term '*' factor | factor
    ;
factor
    : '('exp')' | IDENTIFIER
    ;

    
IDENTIFIER :[A-C];
WS         : [\r\n\t]+ -> skip;