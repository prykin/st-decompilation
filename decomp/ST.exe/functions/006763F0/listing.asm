_GetEmbrGrpTobjGrpExch:
006763F0  55                        PUSH EBP
006763F1  8B EC                     MOV EBP,ESP
006763F3  83 EC 4C                  SUB ESP,0x4c
006763F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006763FB  53                        PUSH EBX
006763FC  56                        PUSH ESI
006763FD  33 DB                     XOR EBX,EBX
006763FF  57                        PUSH EDI
00676400  8D 55 B8                  LEA EDX,[EBP + -0x48]
00676403  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00676406  53                        PUSH EBX
00676407  52                        PUSH EDX
00676408  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0067640B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0067640E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00676411  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00676417  E8 D4 73 0B 00            CALL 0x0072d7f0
0067641C  8B F0                     MOV ESI,EAX
0067641E  83 C4 08                  ADD ESP,0x8
00676421  3B F3                     CMP ESI,EBX
00676423  0F 85 C8 00 00 00         JNZ 0x006764f1
00676429  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067642F  3B CB                     CMP ECX,EBX
00676431  74 0C                     JZ 0x0067643f
00676433  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00676436  53                        PUSH EBX
00676437  50                        PUSH EAX
00676438  E8 BC F8 D8 FF            CALL 0x00405cf9
0067643D  EB 02                     JMP 0x00676441
LAB_0067643f:
0067643F  33 C0                     XOR EAX,EAX
LAB_00676441:
00676441  3B C3                     CMP EAX,EBX
00676443  74 0E                     JZ 0x00676453
00676445  8B C8                     MOV ECX,EAX
00676447  E8 69 C9 D8 FF            CALL 0x00402db5
0067644C  8B F8                     MOV EDI,EAX
0067644E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00676451  EB 03                     JMP 0x00676456
LAB_00676453:
00676453  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00676456:
00676456  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00676459  85 C0                     TEST EAX,EAX
0067645B  76 78                     JBE 0x006764d5
0067645D  33 C9                     XOR ECX,ECX
0067645F  3B C8                     CMP ECX,EAX
00676461  73 0B                     JNC 0x0067646e
LAB_00676463:
00676463  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00676466  0F AF C1                  IMUL EAX,ECX
00676469  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
0067646C  EB 02                     JMP 0x00676470
LAB_0067646e:
0067646E  33 C0                     XOR EAX,EAX
LAB_00676470:
00676470  66 8B 08                  MOV CX,word ptr [EAX]
00676473  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00676476  6A 01                     PUSH 0x1
00676478  51                        PUSH ECX
00676479  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067647F  52                        PUSH EDX
00676480  E8 35 C4 D8 FF            CALL 0x004028ba
00676485  8B F0                     MOV ESI,EAX
00676487  85 F6                     TEST ESI,ESI
00676489  74 3A                     JZ 0x006764c5
0067648B  8B 06                     MOV EAX,dword ptr [ESI]
0067648D  8B CE                     MOV ECX,ESI
0067648F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00676492  83 F8 78                  CMP EAX,0x78
00676495  75 08                     JNZ 0x0067649f
00676497  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0067649D  EB 02                     JMP 0x006764a1
LAB_0067649f:
0067649F  33 C0                     XOR EAX,EAX
LAB_006764a1:
006764A1  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
006764A4  75 1F                     JNZ 0x006764c5
006764A6  8B 16                     MOV EDX,dword ptr [ESI]
006764A8  8B CE                     MOV ECX,ESI
006764AA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006764AD  83 F8 78                  CMP EAX,0x78
006764B0  75 08                     JNZ 0x006764ba
006764B2  8B B6 69 02 00 00         MOV ESI,dword ptr [ESI + 0x269]
006764B8  EB 03                     JMP 0x006764bd
LAB_006764ba:
006764BA  83 CE FF                  OR ESI,0xffffffff
LAB_006764bd:
006764BD  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
006764C0  75 03                     JNZ 0x006764c5
006764C2  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_006764c5:
006764C5  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006764C8  43                        INC EBX
006764C9  8B CB                     MOV ECX,EBX
006764CB  81 E1 FF FF 00 00         AND ECX,0xffff
006764D1  3B C8                     CMP ECX,EAX
006764D3  72 8E                     JC 0x00676463
LAB_006764d5:
006764D5  85 FF                     TEST EDI,EDI
006764D7  74 06                     JZ 0x006764df
006764D9  57                        PUSH EDI
006764DA  E8 31 7C 03 00            CALL 0x006ae110
LAB_006764df:
006764DF  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006764E2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006764E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006764EA  5F                        POP EDI
006764EB  5E                        POP ESI
006764EC  5B                        POP EBX
006764ED  8B E5                     MOV ESP,EBP
006764EF  5D                        POP EBP
006764F0  C3                        RET
LAB_006764f1:
006764F1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006764F4  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006764F7  3B C3                     CMP EAX,EBX
006764F9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006764FF  74 06                     JZ 0x00676507
00676501  50                        PUSH EAX
00676502  E8 09 7C 03 00            CALL 0x006ae110
LAB_00676507:
00676507  68 CC 2D 7D 00            PUSH 0x7d2dcc
0067650C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00676511  56                        PUSH ESI
00676512  53                        PUSH EBX
00676513  68 50 01 00 00            PUSH 0x150
00676518  68 58 2D 7D 00            PUSH 0x7d2d58
0067651D  E8 AE 6F 03 00            CALL 0x006ad4d0
00676522  83 C4 18                  ADD ESP,0x18
00676525  85 C0                     TEST EAX,EAX
00676527  74 01                     JZ 0x0067652a
00676529  CC                        INT3
LAB_0067652a:
0067652A  68 51 01 00 00            PUSH 0x151
0067652F  68 58 2D 7D 00            PUSH 0x7d2d58
00676534  53                        PUSH EBX
00676535  56                        PUSH ESI
00676536  E8 05 F9 02 00            CALL 0x006a5e40
0067653B  8B C6                     MOV EAX,ESI
0067653D  5F                        POP EDI
0067653E  5E                        POP ESI
0067653F  5B                        POP EBX
00676540  8B E5                     MOV ESP,EBP
00676542  5D                        POP EBP
00676543  C3                        RET
