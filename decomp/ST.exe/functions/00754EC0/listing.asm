FUN_00754ec0:
00754EC0  55                        PUSH EBP
00754EC1  8B EC                     MOV EBP,ESP
00754EC3  53                        PUSH EBX
00754EC4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00754EC7  56                        PUSH ESI
00754EC8  57                        PUSH EDI
00754EC9  85 DB                     TEST EBX,EBX
00754ECB  74 5B                     JZ 0x00754f28
00754ECD  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00754ED0  85 C0                     TEST EAX,EAX
00754ED2  74 54                     JZ 0x00754f28
00754ED4  8B 78 4C                  MOV EDI,dword ptr [EAX + 0x4c]
00754ED7  85 FF                     TEST EDI,EDI
00754ED9  74 13                     JZ 0x00754eee
LAB_00754edb:
00754EDB  57                        PUSH EDI
00754EDC  53                        PUSH EBX
00754EDD  E8 7E 24 00 00            CALL 0x00757360
00754EE2  8B F0                     MOV ESI,EAX
00754EE4  85 F6                     TEST ESI,ESI
00754EE6  75 23                     JNZ 0x00754f0b
00754EE8  8B 3F                     MOV EDI,dword ptr [EDI]
00754EEA  85 FF                     TEST EDI,EDI
00754EEC  75 ED                     JNZ 0x00754edb
LAB_00754eee:
00754EEE  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00754EF1  F6 40 08 10               TEST byte ptr [EAX + 0x8],0x10
00754EF5  74 31                     JZ 0x00754f28
00754EF7  8D 48 10                  LEA ECX,[EAX + 0x10]
00754EFA  6A 20                     PUSH 0x20
00754EFC  51                        PUSH ECX
00754EFD  6A 00                     PUSH 0x0
00754EFF  50                        PUSH EAX
00754F00  E8 5B F9 F7 FF            CALL 0x006d4860
00754F05  8B F0                     MOV ESI,EAX
00754F07  85 F6                     TEST ESI,ESI
00754F09  74 1D                     JZ 0x00754f28
LAB_00754f0b:
00754F0B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00754F11  6A 20                     PUSH 0x20
00754F13  68 D0 2C 7F 00            PUSH 0x7f2cd0
00754F18  52                        PUSH EDX
00754F19  56                        PUSH ESI
00754F1A  E8 21 0F F5 FF            CALL 0x006a5e40
00754F1F  8B C6                     MOV EAX,ESI
00754F21  5F                        POP EDI
00754F22  5E                        POP ESI
00754F23  5B                        POP EBX
00754F24  5D                        POP EBP
00754F25  C2 04 00                  RET 0x4
LAB_00754f28:
00754F28  5F                        POP EDI
00754F29  5E                        POP ESI
00754F2A  33 C0                     XOR EAX,EAX
00754F2C  5B                        POP EBX
00754F2D  5D                        POP EBP
00754F2E  C2 04 00                  RET 0x4
