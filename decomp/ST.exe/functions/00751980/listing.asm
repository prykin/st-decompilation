FUN_00751980:
00751980  55                        PUSH EBP
00751981  8B EC                     MOV EBP,ESP
00751983  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751986  56                        PUSH ESI
00751987  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075198A  8D 45 0C                  LEA EAX,[EBP + 0xc]
0075198D  50                        PUSH EAX
0075198E  51                        PUSH ECX
0075198F  8B 16                     MOV EDX,dword ptr [ESI]
00751991  52                        PUSH EDX
00751992  E8 C9 01 00 00            CALL 0x00751b60
00751997  85 C0                     TEST EAX,EAX
00751999  75 1A                     JNZ 0x007519b5
0075199B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075199E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007519A1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007519A4  50                        PUSH EAX
007519A5  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007519A8  51                        PUSH ECX
007519A9  52                        PUSH EDX
007519AA  50                        PUSH EAX
007519AB  E8 B0 29 00 00            CALL 0x00754360
007519B0  5E                        POP ESI
007519B1  5D                        POP EBP
007519B2  C2 10 00                  RET 0x10
LAB_007519b5:
007519B5  83 E8 FC                  SUB EAX,-0x4
007519B8  5E                        POP ESI
007519B9  F7 D8                     NEG EAX
007519BB  1B C0                     SBB EAX,EAX
007519BD  83 E0 03                  AND EAX,0x3
007519C0  83 C0 FC                  ADD EAX,-0x4
007519C3  5D                        POP EBP
007519C4  C2 10 00                  RET 0x10
