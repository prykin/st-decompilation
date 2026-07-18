FUN_00751bf0:
00751BF0  55                        PUSH EBP
00751BF1  8B EC                     MOV EBP,ESP
00751BF3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751BF6  56                        PUSH ESI
00751BF7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00751BFA  8D 45 0C                  LEA EAX,[EBP + 0xc]
00751BFD  50                        PUSH EAX
00751BFE  51                        PUSH ECX
00751BFF  8B 16                     MOV EDX,dword ptr [ESI]
00751C01  52                        PUSH EDX
00751C02  E8 E9 27 00 00            CALL 0x007543f0
00751C07  85 C0                     TEST EAX,EAX
00751C09  75 1A                     JNZ 0x00751c25
00751C0B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00751C0E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00751C11  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00751C14  50                        PUSH EAX
00751C15  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00751C18  51                        PUSH ECX
00751C19  52                        PUSH EDX
00751C1A  50                        PUSH EAX
00751C1B  E8 40 27 00 00            CALL 0x00754360
00751C20  5E                        POP ESI
00751C21  5D                        POP EBP
00751C22  C2 10 00                  RET 0x10
LAB_00751c25:
00751C25  83 E8 FC                  SUB EAX,-0x4
00751C28  5E                        POP ESI
00751C29  F7 D8                     NEG EAX
00751C2B  1B C0                     SBB EAX,EAX
00751C2D  83 E0 03                  AND EAX,0x3
00751C30  83 C0 FC                  ADD EAX,-0x4
00751C33  5D                        POP EBP
00751C34  C2 10 00                  RET 0x10
