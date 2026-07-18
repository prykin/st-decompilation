FUN_0074b810:
0074B810  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0074B814  56                        PUSH ESI
0074B815  85 C0                     TEST EAX,EAX
0074B817  57                        PUSH EDI
0074B818  75 07                     JNZ 0x0074b821
0074B81A  B8 03 40 00 80            MOV EAX,0x80004003
0074B81F  EB 28                     JMP 0x0074b849
LAB_0074b821:
0074B821  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074B825  6A 10                     PUSH 0x10
0074B827  59                        POP ECX
0074B828  BF B8 22 7A 00            MOV EDI,0x7a22b8
0074B82D  33 D2                     XOR EDX,EDX
0074B82F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B831  75 0E                     JNZ 0x0074b841
0074B833  50                        PUSH EAX
0074B834  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074B838  E8 69 00 00 00            CALL 0x0074b8a6
0074B83D  33 C0                     XOR EAX,EAX
0074B83F  EB 08                     JMP 0x0074b849
LAB_0074b841:
0074B841  83 20 00                  AND dword ptr [EAX],0x0
0074B844  B8 02 40 00 80            MOV EAX,0x80004002
LAB_0074b849:
0074B849  5F                        POP EDI
0074B84A  5E                        POP ESI
0074B84B  C2 0C 00                  RET 0xc
