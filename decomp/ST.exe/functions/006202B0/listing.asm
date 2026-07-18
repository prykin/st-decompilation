FUN_006202b0:
006202B0  55                        PUSH EBP
006202B1  8B EC                     MOV EBP,ESP
006202B3  83 EC 0C                  SUB ESP,0xc
006202B6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006202BB  53                        PUSH EBX
006202BC  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006202BF  56                        PUSH ESI
006202C0  57                        PUSH EDI
006202C1  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
006202C7  33 C0                     XOR EAX,EAX
006202C9  8B F1                     MOV ESI,ECX
006202CB  A0 4D 87 80 00            MOV AL,[0x0080874d]
006202D0  3B C3                     CMP EAX,EBX
006202D2  0F 84 CB 00 00 00         JZ 0x006203a3
006202D8  3B BE CD 00 00 00         CMP EDI,dword ptr [ESI + 0xcd]
006202DE  0F 82 BF 00 00 00         JC 0x006203a3
006202E4  33 C9                     XOR ECX,ECX
006202E6  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
006202EC  49                        DEC ECX
006202ED  74 11                     JZ 0x00620300
006202EF  49                        DEC ECX
006202F0  74 07                     JZ 0x006202f9
006202F2  49                        DEC ECX
006202F3  75 19                     JNZ 0x0062030e
006202F5  6A 4D                     PUSH 0x4d
006202F7  EB 09                     JMP 0x00620302
LAB_006202f9:
006202F9  68 8F 00 00 00            PUSH 0x8f
006202FE  EB 02                     JMP 0x00620302
LAB_00620300:
00620300  6A 40                     PUSH 0x40
LAB_00620302:
00620302  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00620308  50                        PUSH EAX
00620309  E8 5D 15 DE FF            CALL 0x0040186b
LAB_0062030e:
0062030E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00620311  53                        PUSH EBX
00620312  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00620315  53                        PUSH EBX
00620316  51                        PUSH ECX
00620317  57                        PUSH EDI
00620318  8B CE                     MOV ECX,ESI
0062031A  E8 70 4B DE FF            CALL 0x00404e8f
0062031F  85 C0                     TEST EAX,EAX
00620321  7D 15                     JGE 0x00620338
00620323  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00620326  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00620329  52                        PUSH EDX
0062032A  53                        PUSH EBX
0062032B  50                        PUSH EAX
0062032C  57                        PUSH EDI
0062032D  8B CE                     MOV ECX,ESI
0062032F  E8 F9 11 DE FF            CALL 0x0040152d
00620334  85 C0                     TEST EAX,EAX
00620336  7D 05                     JGE 0x0062033d
LAB_00620338:
00620338  83 F8 02                  CMP EAX,0x2
0062033B  75 66                     JNZ 0x006203a3
LAB_0062033d:
0062033D  33 C0                     XOR EAX,EAX
0062033F  A0 4E 87 80 00            MOV AL,[0x0080874e]
00620344  48                        DEC EAX
00620345  74 14                     JZ 0x0062035b
00620347  48                        DEC EAX
00620348  74 0A                     JZ 0x00620354
0062034A  48                        DEC EAX
0062034B  75 56                     JNZ 0x006203a3
0062034D  B8 82 00 00 00            MOV EAX,0x82
00620352  EB 0C                     JMP 0x00620360
LAB_00620354:
00620354  B8 81 00 00 00            MOV EAX,0x81
00620359  EB 05                     JMP 0x00620360
LAB_0062035b:
0062035B  B8 80 00 00 00            MOV EAX,0x80
LAB_00620360:
00620360  33 C9                     XOR ECX,ECX
00620362  8D 55 F4                  LEA EDX,[EBP + -0xc]
00620365  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620368  6A 00                     PUSH 0x0
0062036A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062036D  52                        PUSH EDX
0062036E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00620371  83 C9 FF                  OR ECX,0xffffffff
00620374  50                        PUSH EAX
00620375  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620378  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062037B  6A 00                     PUSH 0x0
0062037D  6A 06                     PUSH 0x6
0062037F  B9 58 76 80 00            MOV ECX,0x807658
00620384  E8 4F 48 DE FF            CALL 0x00404bd8
00620389  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062038C  6A 28                     PUSH 0x28
0062038E  53                        PUSH EBX
0062038F  50                        PUSH EAX
00620390  8B CE                     MOV ECX,ESI
00620392  E8 CB 59 DE FF            CALL 0x00405d62
00620397  81 C7 FA 00 00 00         ADD EDI,0xfa
0062039D  89 BE C1 00 00 00         MOV dword ptr [ESI + 0xc1],EDI
LAB_006203a3:
006203A3  5F                        POP EDI
006203A4  5E                        POP ESI
006203A5  5B                        POP EBX
006203A6  8B E5                     MOV ESP,EBP
006203A8  5D                        POP EBP
006203A9  C2 14 00                  RET 0x14
