FUN_00749212:
00749212  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00749216  53                        PUSH EBX
00749217  56                        PUSH ESI
00749218  57                        PUSH EDI
00749219  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0074921D  83 20 00                  AND dword ptr [EAX],0x0
00749220  8D 77 F4                  LEA ESI,[EDI + -0xc]
00749223  8D 47 04                  LEA EAX,[EDI + 0x4]
00749226  F7 DE                     NEG ESI
00749228  1B F6                     SBB ESI,ESI
0074922A  23 F0                     AND ESI,EAX
LAB_0074922c:
0074922C  56                        PUSH ESI
0074922D  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749233  83 7F 44 00               CMP dword ptr [EDI + 0x44],0x0
00749237  74 36                     JZ 0x0074926f
00749239  8B 5F 1C                  MOV EBX,dword ptr [EDI + 0x1c]
0074923C  85 DB                     TEST EBX,EBX
0074923E  74 0D                     JZ 0x0074924d
00749240  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00749243  FF 4F 20                  DEC dword ptr [EDI + 0x20]
00749246  85 DB                     TEST EBX,EBX
00749248  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
0074924B  75 03                     JNZ 0x00749250
LAB_0074924d:
0074924D  FF 47 28                  INC dword ptr [EDI + 0x28]
LAB_00749250:
00749250  56                        PUSH ESI
00749251  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749257  85 DB                     TEST EBX,EBX
00749259  75 22                     JNZ 0x0074927d
0074925B  F6 44 24 20 04            TEST byte ptr [ESP + 0x20],0x4
00749260  75 2C                     JNZ 0x0074928e
00749262  6A FF                     PUSH -0x1
00749264  FF 77 24                  PUSH dword ptr [EDI + 0x24]
00749267  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0074926D  EB BD                     JMP 0x0074922c
LAB_0074926f:
0074926F  56                        PUSH ESI
00749270  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749276  B8 11 02 04 80            MOV EAX,0x80040211
0074927B  EB 16                     JMP 0x00749293
LAB_0074927d:
0074927D  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
00749281  C7 43 44 01 00 00 00      MOV dword ptr [EBX + 0x44],0x1
00749288  89 18                     MOV dword ptr [EAX],EBX
0074928A  33 C0                     XOR EAX,EAX
0074928C  EB 05                     JMP 0x00749293
LAB_0074928e:
0074928E  B8 2E 02 04 80            MOV EAX,0x8004022e
LAB_00749293:
00749293  5F                        POP EDI
00749294  5E                        POP ESI
00749295  5B                        POP EBX
00749296  C2 14 00                  RET 0x14
