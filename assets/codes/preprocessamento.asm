
SECAO DATA
DOIS:
CONST 2
OLD_DATA:   SPACE
NEW_DATA:
    SPACE
TMP_DATA:
	SPACE

secao   TEXT
INPUT 	OLD_DATA
LOAD 	OLD_DATA
L1:	DIV 	DOIS
STORE  NEW_DATA
MUL dois
STORE TMP_DATA
LOAD OLD_DATA
SUB TMP_DATA ;comentario qualquer
STORE TMP_DATA
OUTPUT		TMP_DATA
COPY NEW_DATA,	OLD_DATA
LOAD OLD_DATA
JMPP L1
stOp
