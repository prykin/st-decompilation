FUN_006777d0:
006777D0  55                        PUSH EBP
006777D1  8B EC                     MOV EBP,ESP
006777D3  51                        PUSH ECX
006777D4  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
006777D9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006777E0  85 C0                     TEST EAX,EAX
006777E2  75 06                     JNZ 0x006777ea
006777E4  33 C0                     XOR EAX,EAX
006777E6  8B E5                     MOV ESP,EBP
006777E8  5D                        POP EBP
006777E9  C3                        RET
LAB_006777ea:
006777EA  53                        PUSH EBX
006777EB  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006777EE  56                        PUSH ESI
006777EF  57                        PUSH EDI
006777F0  85 DB                     TEST EBX,EBX
006777F2  7D 02                     JGE 0x006777f6
006777F4  33 DB                     XOR EBX,EBX
LAB_006777f6:
006777F6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006777F9  85 C9                     TEST ECX,ECX
006777FB  7D 02                     JGE 0x006777ff
006777FD  33 C9                     XOR ECX,ECX
LAB_006777ff:
006777FF  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00677802  85 FF                     TEST EDI,EDI
00677804  7F 07                     JG 0x0067780d
00677806  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
LAB_0067780d:
0067780D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00677810  85 D2                     TEST EDX,EDX
00677812  7F 07                     JG 0x0067781b
00677814  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
LAB_0067781b:
0067781B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067781E  8D B0 23 FF FF FF         LEA ESI,[EAX + 0xffffff23]
00677824  83 FE 05                  CMP ESI,0x5
00677827  77 3D                     JA 0x00677866
switchD_00677829::switchD:
00677829  FF 24 B5 70 78 67 00      JMP dword ptr [ESI*0x4 + 0x677870]
switchD_00677829::caseD_dd:
00677830  52                        PUSH EDX
00677831  57                        PUSH EDI
00677832  51                        PUSH ECX
00677833  8D 4D 0C                  LEA ECX,[EBP + 0xc]
00677836  53                        PUSH EBX
00677837  8D 55 10                  LEA EDX,[EBP + 0x10]
0067783A  51                        PUSH ECX
0067783B  52                        PUSH EDX
0067783C  50                        PUSH EAX
0067783D  E8 09 A7 D8 FF            CALL 0x00401f4b
00677842  83 C4 1C                  ADD ESP,0x1c
00677845  85 C0                     TEST EAX,EAX
00677847  75 1D                     JNZ 0x00677866
00677849  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067784C  5F                        POP EDI
0067784D  5E                        POP ESI
0067784E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00677851  5B                        POP EBX
00677852  8B E5                     MOV ESP,EBP
00677854  5D                        POP EBP
00677855  C3                        RET
switchD_00677829::caseD_e1:
00677856  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067785C  6A 00                     PUSH 0x0
0067785E  E8 14 99 D8 FF            CALL 0x00401177
00677863  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
switchD_00677829::caseD_df:
00677866  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00677869  5F                        POP EDI
0067786A  5E                        POP ESI
0067786B  5B                        POP EBX
0067786C  8B E5                     MOV ESP,EBP
0067786E  5D                        POP EBP
0067786F  C3                        RET
