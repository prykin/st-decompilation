FUN_0060d220:
0060D220  53                        PUSH EBX
0060D221  56                        PUSH ESI
0060D222  8B F1                     MOV ESI,ECX
0060D224  8B 86 40 02 00 00         MOV EAX,dword ptr [ESI + 0x240]
0060D22A  83 E8 00                  SUB EAX,0x0
0060D22D  74 35                     JZ 0x0060d264
0060D22F  48                        DEC EAX
0060D230  0F 85 94 00 00 00         JNZ 0x0060d2ca
0060D236  8B 86 44 02 00 00         MOV EAX,dword ptr [ESI + 0x244]
0060D23C  83 38 00                  CMP dword ptr [EAX],0x0
0060D23F  0F 84 85 00 00 00         JZ 0x0060d2ca
0060D245  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0060D248  83 C0 08                  ADD EAX,0x8
0060D24B  85 C9                     TEST ECX,ECX
0060D24D  74 06                     JZ 0x0060d255
0060D24F  50                        PUSH EAX
0060D250  E8 0B DE 09 00            CALL 0x006ab060
LAB_0060d255:
0060D255  8B 86 44 02 00 00         MOV EAX,dword ptr [ESI + 0x244]
0060D25B  5E                        POP ESI
0060D25C  5B                        POP EBX
0060D25D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060D263  C3                        RET
LAB_0060d264:
0060D264  8B 86 3C 02 00 00         MOV EAX,dword ptr [ESI + 0x23c]
0060D26A  33 DB                     XOR EBX,EBX
0060D26C  85 C0                     TEST EAX,EAX
0060D26E  7E 5A                     JLE 0x0060d2ca
0060D270  57                        PUSH EDI
0060D271  33 FF                     XOR EDI,EDI
LAB_0060d273:
0060D273  8B 8E 44 02 00 00         MOV ECX,dword ptr [ESI + 0x244]
0060D279  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
0060D27C  8B 0C 39                  MOV ECX,dword ptr [ECX + EDI*0x1]
0060D27F  85 C9                     TEST ECX,ECX
0060D281  74 38                     JZ 0x0060d2bb
0060D283  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
0060D286  83 C0 40                  ADD EAX,0x40
0060D289  85 C9                     TEST ECX,ECX
0060D28B  74 09                     JZ 0x0060d296
0060D28D  50                        PUSH EAX
0060D28E  E8 C7 88 DF FF            CALL 0x00405b5a
0060D293  83 C4 04                  ADD ESP,0x4
LAB_0060d296:
0060D296  8B 96 44 02 00 00         MOV EDX,dword ptr [ESI + 0x244]
0060D29C  8B 4C 3A 08               MOV ECX,dword ptr [EDX + EDI*0x1 + 0x8]
0060D2A0  8D 44 3A 08               LEA EAX,[EDX + EDI*0x1 + 0x8]
0060D2A4  85 C9                     TEST ECX,ECX
0060D2A6  74 06                     JZ 0x0060d2ae
0060D2A8  50                        PUSH EAX
0060D2A9  E8 B2 DD 09 00            CALL 0x006ab060
LAB_0060d2ae:
0060D2AE  8B 86 44 02 00 00         MOV EAX,dword ptr [ESI + 0x244]
0060D2B4  C7 04 38 00 00 00 00      MOV dword ptr [EAX + EDI*0x1],0x0
LAB_0060d2bb:
0060D2BB  8B 86 3C 02 00 00         MOV EAX,dword ptr [ESI + 0x23c]
0060D2C1  43                        INC EBX
0060D2C2  83 C7 44                  ADD EDI,0x44
0060D2C5  3B D8                     CMP EBX,EAX
0060D2C7  7C AA                     JL 0x0060d273
0060D2C9  5F                        POP EDI
LAB_0060d2ca:
0060D2CA  5E                        POP ESI
0060D2CB  5B                        POP EBX
0060D2CC  C3                        RET
