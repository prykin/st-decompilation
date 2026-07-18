FUN_007354c0:
007354C0  55                        PUSH EBP
007354C1  8B EC                     MOV EBP,ESP
007354C3  83 EC 5C                  SUB ESP,0x5c
007354C6  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
007354C9  50                        PUSH EAX
007354CA  8D 4D 20                  LEA ECX,[EBP + 0x20]
007354CD  51                        PUSH ECX
007354CE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007354D1  52                        PUSH EDX
007354D2  E8 89 05 00 00            CALL 0x00735a60
007354D7  83 C4 0C                  ADD ESP,0xc
007354DA  85 C0                     TEST EAX,EAX
007354DC  75 40                     JNZ 0x0073551e
007354DE  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
007354E1  0C 01                     OR AL,0x1
007354E3  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
007354E6  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007354E9  83 E1 E1                  AND ECX,0xffffffe1
007354EC  83 C9 02                  OR ECX,0x2
007354EF  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
007354F2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007354F5  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
007354F8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007354FB  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
007354FE  8D 4D 20                  LEA ECX,[EBP + 0x20]
00735501  51                        PUSH ECX
00735502  8D 55 10                  LEA EDX,[EBP + 0x10]
00735505  52                        PUSH EDX
00735506  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735509  50                        PUSH EAX
0073550A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073550D  51                        PUSH ECX
0073550E  8D 55 28                  LEA EDX,[EBP + 0x28]
00735511  52                        PUSH EDX
00735512  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00735515  50                        PUSH EAX
00735516  E8 75 00 00 00            CALL 0x00735590
0073551B  83 C4 18                  ADD ESP,0x18
LAB_0073551e:
0073551E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735521  51                        PUSH ECX
00735522  E8 D9 09 00 00            CALL 0x00735f00
00735527  83 C4 04                  ADD ESP,0x4
0073552A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073552D  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
00735534  75 34                     JNZ 0x0073556a
00735536  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073553A  74 2E                     JZ 0x0073556a
0073553C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0073553F  52                        PUSH EDX
00735540  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00735543  50                        PUSH EAX
00735544  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00735547  51                        PUSH ECX
00735548  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0073554B  52                        PUSH EDX
0073554C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073554F  50                        PUSH EAX
00735550  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00735553  51                        PUSH ECX
00735554  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00735557  52                        PUSH EDX
00735558  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073555B  50                        PUSH EAX
0073555C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073555F  51                        PUSH ECX
00735560  E8 7B 08 00 00            CALL 0x00735de0
00735565  83 C4 24                  ADD ESP,0x24
00735568  EB 20                     JMP 0x0073558a
LAB_0073556a:
0073556A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073556D  52                        PUSH EDX
0073556E  E8 0D 09 00 00            CALL 0x00735e80
00735573  83 C4 04                  ADD ESP,0x4
00735576  68 FF FF 00 00            PUSH 0xffff
0073557B  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0073557E  50                        PUSH EAX
0073557F  E8 EC 0C 00 00            CALL 0x00736270
00735584  83 C4 08                  ADD ESP,0x8
00735587  DD 45 20                  FLD double ptr [EBP + 0x20]
LAB_0073558a:
0073558A  8B E5                     MOV ESP,EBP
0073558C  5D                        POP EBP
0073558D  C3                        RET
