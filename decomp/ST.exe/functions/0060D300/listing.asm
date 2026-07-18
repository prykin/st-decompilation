FUN_0060d300:
0060D300  56                        PUSH ESI
0060D301  8B F1                     MOV ESI,ECX
0060D303  57                        PUSH EDI
0060D304  8B 86 44 02 00 00         MOV EAX,dword ptr [ESI + 0x244]
0060D30A  8D BE 44 02 00 00         LEA EDI,[ESI + 0x244]
0060D310  85 C0                     TEST EAX,EAX
0060D312  74 15                     JZ 0x0060d329
0060D314  E8 3E 7C DF FF            CALL 0x00404f57
0060D319  57                        PUSH EDI
0060D31A  E8 41 DD 09 00            CALL 0x006ab060
0060D31F  C7 86 3C 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23c],0x0
LAB_0060d329:
0060D329  5F                        POP EDI
0060D32A  5E                        POP ESI
0060D32B  C3                        RET
