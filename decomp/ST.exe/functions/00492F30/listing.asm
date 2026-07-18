FUN_00492f30:
00492F30  53                        PUSH EBX
00492F31  56                        PUSH ESI
00492F32  8B F1                     MOV ESI,ECX
00492F34  57                        PUSH EDI
00492F35  66 8B 86 07 06 00 00      MOV AX,word ptr [ESI + 0x607]
00492F3C  66 8B 8E 05 06 00 00      MOV CX,word ptr [ESI + 0x605]
00492F43  8D BE 0D 06 00 00         LEA EDI,[ESI + 0x60d]
00492F49  66 8B 96 03 06 00 00      MOV DX,word ptr [ESI + 0x603]
00492F50  8D 9E 0B 06 00 00         LEA EBX,[ESI + 0x60b]
00492F56  57                        PUSH EDI
00492F57  53                        PUSH EBX
00492F58  8D 9E 09 06 00 00         LEA EBX,[ESI + 0x609]
00492F5E  66 40                     INC AX
00492F60  53                        PUSH EBX
00492F61  6A 02                     PUSH 0x2
00492F63  50                        PUSH EAX
00492F64  51                        PUSH ECX
00492F65  52                        PUSH EDX
00492F66  50                        PUSH EAX
00492F67  51                        PUSH ECX
00492F68  52                        PUSH EDX
00492F69  8B CE                     MOV ECX,ESI
00492F6B  E8 98 19 F7 FF            CALL 0x00404908
00492F70  85 C0                     TEST EAX,EAX
00492F72  75 22                     JNZ 0x00492f96
00492F74  66 8B 86 03 06 00 00      MOV AX,word ptr [ESI + 0x603]
00492F7B  66 8B 8E 05 06 00 00      MOV CX,word ptr [ESI + 0x605]
00492F82  66 8B 96 07 06 00 00      MOV DX,word ptr [ESI + 0x607]
00492F89  66 89 03                  MOV word ptr [EBX],AX
00492F8C  66 89 8E 0B 06 00 00      MOV word ptr [ESI + 0x60b],CX
00492F93  66 89 17                  MOV word ptr [EDI],DX
LAB_00492f96:
00492F96  5F                        POP EDI
00492F97  5E                        POP ESI
00492F98  5B                        POP EBX
00492F99  C3                        RET
