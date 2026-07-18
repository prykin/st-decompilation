FUN_0070c390:
0070C390  55                        PUSH EBP
0070C391  8B EC                     MOV EBP,ESP
0070C393  53                        PUSH EBX
0070C394  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0070C397  56                        PUSH ESI
0070C398  57                        PUSH EDI
0070C399  66 83 7B 0E 08            CMP word ptr [EBX + 0xe],0x8
0070C39E  8B 73 20                  MOV ESI,dword ptr [EBX + 0x20]
0070C3A1  74 07                     JZ 0x0070c3aa
0070C3A3  5F                        POP EDI
0070C3A4  5E                        POP ESI
0070C3A5  33 C0                     XOR EAX,EAX
0070C3A7  5B                        POP EBX
0070C3A8  5D                        POP EBP
0070C3A9  C3                        RET
LAB_0070c3aa:
0070C3AA  85 F6                     TEST ESI,ESI
0070C3AC  75 05                     JNZ 0x0070c3b3
0070C3AE  BE 00 01 00 00            MOV ESI,0x100
LAB_0070c3b3:
0070C3B3  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
0070C3BA  50                        PUSH EAX
0070C3BB  E8 50 E8 F9 FF            CALL 0x006aac10
0070C3C0  8B F8                     MOV EDI,EAX
0070C3C2  85 FF                     TEST EDI,EDI
0070C3C4  75 05                     JNZ 0x0070c3cb
0070C3C6  5F                        POP EDI
0070C3C7  5E                        POP ESI
0070C3C8  5B                        POP EBX
0070C3C9  5D                        POP EBP
0070C3CA  C3                        RET
LAB_0070c3cb:
0070C3CB  85 F6                     TEST ESI,ESI
0070C3CD  76 20                     JBE 0x0070c3ef
0070C3CF  8D 57 02                  LEA EDX,[EDI + 0x2]
0070C3D2  8D 4B 29                  LEA ECX,[EBX + 0x29]
LAB_0070c3d5:
0070C3D5  8A 41 FF                  MOV AL,byte ptr [ECX + -0x1]
0070C3D8  83 C1 04                  ADD ECX,0x4
0070C3DB  88 42 FE                  MOV byte ptr [EDX + -0x2],AL
0070C3DE  8A 41 FC                  MOV AL,byte ptr [ECX + -0x4]
0070C3E1  88 42 FF                  MOV byte ptr [EDX + -0x1],AL
0070C3E4  8A 41 FD                  MOV AL,byte ptr [ECX + -0x3]
0070C3E7  88 02                     MOV byte ptr [EDX],AL
0070C3E9  83 C2 04                  ADD EDX,0x4
0070C3EC  4E                        DEC ESI
0070C3ED  75 E6                     JNZ 0x0070c3d5
LAB_0070c3ef:
0070C3EF  8B C7                     MOV EAX,EDI
0070C3F1  5F                        POP EDI
0070C3F2  5E                        POP ESI
0070C3F3  5B                        POP EBX
0070C3F4  5D                        POP EBP
0070C3F5  C3                        RET
