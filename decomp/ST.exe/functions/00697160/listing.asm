FUN_00697160:
00697160  55                        PUSH EBP
00697161  8B EC                     MOV EBP,ESP
00697163  83 EC 08                  SUB ESP,0x8
00697166  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00697169  8D 45 F8                  LEA EAX,[EBP + -0x8]
0069716C  56                        PUSH ESI
0069716D  50                        PUSH EAX
0069716E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00697171  52                        PUSH EDX
00697172  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00697175  50                        PUSH EAX
00697176  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00697179  52                        PUSH EDX
0069717A  50                        PUSH EAX
0069717B  33 F6                     XOR ESI,ESI
0069717D  E8 CA CF D6 FF            CALL 0x0040414c
00697182  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00697185  83 C4 14                  ADD ESP,0x14
00697188  F6 C4 20                  TEST AH,0x20
0069718B  74 09                     JZ 0x00697196
0069718D  A8 0F                     TEST AL,0xf
0069718F  B8 01 00 00 00            MOV EAX,0x1
00697194  74 02                     JZ 0x00697198
LAB_00697196:
00697196  8B C6                     MOV EAX,ESI
LAB_00697198:
00697198  5E                        POP ESI
00697199  8B E5                     MOV ESP,EBP
0069719B  5D                        POP EBP
0069719C  C2 0C 00                  RET 0xc
