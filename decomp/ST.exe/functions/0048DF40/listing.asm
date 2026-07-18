FUN_0048df40:
0048DF40  53                        PUSH EBX
0048DF41  56                        PUSH ESI
0048DF42  8B F1                     MOV ESI,ECX
0048DF44  57                        PUSH EDI
0048DF45  66 8B 86 E1 04 00 00      MOV AX,word ptr [ESI + 0x4e1]
0048DF4C  66 8B 8E DF 04 00 00      MOV CX,word ptr [ESI + 0x4df]
0048DF53  8D BE 00 05 00 00         LEA EDI,[ESI + 0x500]
0048DF59  66 8B 96 DD 04 00 00      MOV DX,word ptr [ESI + 0x4dd]
0048DF60  8D 9E FE 04 00 00         LEA EBX,[ESI + 0x4fe]
0048DF66  57                        PUSH EDI
0048DF67  53                        PUSH EBX
0048DF68  8D 9E FC 04 00 00         LEA EBX,[ESI + 0x4fc]
0048DF6E  66 40                     INC AX
0048DF70  53                        PUSH EBX
0048DF71  6A 02                     PUSH 0x2
0048DF73  50                        PUSH EAX
0048DF74  51                        PUSH ECX
0048DF75  52                        PUSH EDX
0048DF76  50                        PUSH EAX
0048DF77  51                        PUSH ECX
0048DF78  52                        PUSH EDX
0048DF79  8B CE                     MOV ECX,ESI
0048DF7B  E8 88 69 F7 FF            CALL 0x00404908
0048DF80  85 C0                     TEST EAX,EAX
0048DF82  75 24                     JNZ 0x0048dfa8
0048DF84  66 8B 96 E1 04 00 00      MOV DX,word ptr [ESI + 0x4e1]
0048DF8B  66 8B 86 DD 04 00 00      MOV AX,word ptr [ESI + 0x4dd]
0048DF92  66 8B 8E DF 04 00 00      MOV CX,word ptr [ESI + 0x4df]
0048DF99  66 42                     INC DX
0048DF9B  66 89 03                  MOV word ptr [EBX],AX
0048DF9E  66 89 8E FE 04 00 00      MOV word ptr [ESI + 0x4fe],CX
0048DFA5  66 89 17                  MOV word ptr [EDI],DX
LAB_0048dfa8:
0048DFA8  5F                        POP EDI
0048DFA9  5E                        POP ESI
0048DFAA  5B                        POP EBX
0048DFAB  C3                        RET
