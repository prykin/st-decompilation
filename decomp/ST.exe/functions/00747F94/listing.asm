FUN_00747f94:
00747F94  55                        PUSH EBP
00747F95  8B EC                     MOV EBP,ESP
00747F97  53                        PUSH EBX
00747F98  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00747F9B  56                        PUSH ESI
00747F9C  57                        PUSH EDI
00747F9D  85 DB                     TEST EBX,EBX
00747F9F  74 06                     JZ 0x00747fa7
00747FA1  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00747FA5  75 0A                     JNZ 0x00747fb1
LAB_00747fa7:
00747FA7  B8 03 40 00 80            MOV EAX,0x80004003
00747FAC  E9 ED 00 00 00            JMP 0x0074809e
LAB_00747fb1:
00747FB1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00747FB4  8B 77 5C                  MOV ESI,dword ptr [EDI + 0x5c]
00747FB7  56                        PUSH ESI
00747FB8  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00747FBB  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00747FC1  83 7F 0C 00               CMP dword ptr [EDI + 0xc],0x0
00747FC5  74 11                     JZ 0x00747fd8
00747FC7  56                        PUSH ESI
00747FC8  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747FCE  B8 04 02 04 80            MOV EAX,0x80040204
00747FD3  E9 C6 00 00 00            JMP 0x0074809e
LAB_00747fd8:
00747FD8  8B 47 64                  MOV EAX,dword ptr [EDI + 0x64]
00747FDB  83 78 14 00               CMP dword ptr [EAX + 0x14],0x0
00747FDF  74 11                     JZ 0x00747ff2
00747FE1  56                        PUSH ESI
00747FE2  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747FE8  B8 24 02 04 80            MOV EAX,0x80040224
00747FED  E9 AC 00 00 00            JMP 0x0074809e
LAB_00747ff2:
00747FF2  8B 47 F4                  MOV EAX,dword ptr [EDI + -0xc]
00747FF5  8D 77 F4                  LEA ESI,[EDI + -0xc]
00747FF8  53                        PUSH EBX
00747FF9  8B CE                     MOV ECX,ESI
00747FFB  FF 50 28                  CALL dword ptr [EAX + 0x28]
00747FFE  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00748001  85 C0                     TEST EAX,EAX
00748003  8B 06                     MOV EAX,dword ptr [ESI]
00748005  7D 07                     JGE 0x0074800e
00748007  8B CE                     MOV ECX,ESI
00748009  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0074800C  EB 35                     JMP 0x00748043
LAB_0074800e:
0074800E  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00748011  8B CE                     MOV ECX,ESI
00748013  FF 50 20                  CALL dword ptr [EAX + 0x20]
00748016  85 C0                     TEST EAX,EAX
00748018  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074801B  74 34                     JZ 0x00748051
0074801D  8B 06                     MOV EAX,dword ptr [ESI]
0074801F  8B CE                     MOV ECX,ESI
00748021  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00748024  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00748028  7D 12                     JGE 0x0074803c
0074802A  81 7D 0C 05 40 00 80      CMP dword ptr [EBP + 0xc],0x80004005
00748031  74 09                     JZ 0x0074803c
00748033  81 7D 0C 57 00 07 80      CMP dword ptr [EBP + 0xc],0x80070057
0074803A  75 07                     JNZ 0x00748043
LAB_0074803c:
0074803C  C7 45 0C 2A 02 04 80      MOV dword ptr [EBP + 0xc],0x8004022a
LAB_00748043:
00748043  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748046  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074804C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074804F  EB 4D                     JMP 0x0074809e
LAB_00748051:
00748051  89 5F 0C                  MOV dword ptr [EDI + 0xc],EBX
00748054  8B 03                     MOV EAX,dword ptr [EBX]
00748056  53                        PUSH EBX
00748057  FF 50 04                  CALL dword ptr [EAX + 0x4]
0074805A  8B 06                     MOV EAX,dword ptr [ESI]
0074805C  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074805F  8B CE                     MOV ECX,ESI
00748061  FF 50 24                  CALL dword ptr [EAX + 0x24]
00748064  8B 06                     MOV EAX,dword ptr [ESI]
00748066  53                        PUSH EBX
00748067  8B CE                     MOV ECX,ESI
00748069  FF 50 30                  CALL dword ptr [EAX + 0x30]
0074806C  8B D8                     MOV EBX,EAX
0074806E  85 DB                     TEST EBX,EBX
00748070  7D 21                     JGE 0x00748093
00748072  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00748075  50                        PUSH EAX
00748076  8B 08                     MOV ECX,dword ptr [EAX]
00748078  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074807B  83 67 0C 00               AND dword ptr [EDI + 0xc],0x0
0074807F  8B 06                     MOV EAX,dword ptr [ESI]
00748081  8B CE                     MOV ECX,ESI
00748083  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00748086  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748089  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074808F  8B C3                     MOV EAX,EBX
00748091  EB 0B                     JMP 0x0074809e
LAB_00748093:
00748093  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748096  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074809C  33 C0                     XOR EAX,EAX
LAB_0074809e:
0074809E  5F                        POP EDI
0074809F  5E                        POP ESI
007480A0  5B                        POP EBX
007480A1  5D                        POP EBP
007480A2  C2 0C 00                  RET 0xc
