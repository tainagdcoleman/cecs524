grammar Amb;


// s
//     : a
//     ;
// a
//     : a '+' IDENTIFIER | IDENTIFIER
//     ;

s
    : a
    ;
a
    : IDENTIFIER '+' a  | IDENTIFIER
    ;

IDENTIFIER : [a-c];
WS : [\r\n\t]+ -> skip;