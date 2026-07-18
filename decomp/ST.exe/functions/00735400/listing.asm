FUN_00735400:
00735400  55                        PUSH EBP
00735401  8B EC                     MOV EBP,ESP
00735403  83 EC 5C                  SUB ESP,0x5c
00735406  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00735409  50                        PUSH EAX
0073540A  8D 4D 18                  LEA ECX,[EBP + 0x18]
0073540D  51                        PUSH ECX
0073540E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735411  52                        PUSH EDX
00735412  E8 49 06 00 00            CALL 0x00735a60
00735417  83 C4 0C                  ADD ESP,0xc
0073541A  85 C0                     TEST EAX,EAX
0073541C  75 28                     JNZ 0x00735446
0073541E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00735421  24 FE                     AND AL,0xfe
00735423  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00735426  8D 4D 18                  LEA ECX,[EBP + 0x18]
00735429  51                        PUSH ECX
0073542A  8D 55 10                  LEA EDX,[EBP + 0x10]
0073542D  52                        PUSH EDX
0073542E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735431  50                        PUSH EAX
00735432  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735435  51                        PUSH ECX
00735436  8D 55 20                  LEA EDX,[EBP + 0x20]
00735439  52                        PUSH EDX
0073543A  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0073543D  50                        PUSH EAX
0073543E  E8 4D 01 00 00            CALL 0x00735590
00735443  83 C4 18                  ADD ESP,0x18
LAB_00735446:
00735446  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735449  51                        PUSH ECX
0073544A  E8 B1 0A 00 00            CALL 0x00735f00
0073544F  83 C4 04                  ADD ESP,0x4
00735452  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735455  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
0073545C  75 30                     JNZ 0x0073548e
0073545E  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00735462  74 2A                     JZ 0x0073548e
00735464  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00735467  52                        PUSH EDX
00735468  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0073546B  50                        PUSH EAX
0073546C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0073546F  51                        PUSH ECX
00735470  6A 00                     PUSH 0x0
00735472  6A 00                     PUSH 0x0
00735474  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00735477  52                        PUSH EDX
00735478  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073547B  50                        PUSH EAX
0073547C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073547F  51                        PUSH ECX
00735480  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00735483  52                        PUSH EDX
00735484  E8 57 09 00 00            CALL 0x00735de0
00735489  83 C4 24                  ADD ESP,0x24
0073548C  EB 20                     JMP 0x007354ae
LAB_0073548e:
0073548E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735491  50                        PUSH EAX
00735492  E8 E9 09 00 00            CALL 0x00735e80
00735497  83 C4 04                  ADD ESP,0x4
0073549A  68 FF FF 00 00            PUSH 0xffff
0073549F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
007354A2  51                        PUSH ECX
007354A3  E8 C8 0D 00 00            CALL 0x00736270
007354A8  83 C4 08                  ADD ESP,0x8
007354AB  DD 45 18                  FLD double ptr [EBP + 0x18]
LAB_007354ae:
007354AE  8B E5                     MOV ESP,EBP
007354B0  5D                        POP EBP
007354B1  C3                        RET
