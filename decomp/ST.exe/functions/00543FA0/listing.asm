CursorClassTy::CursDrawInit:
00543FA0  55                        PUSH EBP
00543FA1  8B EC                     MOV EBP,ESP
00543FA3  83 EC 48                  SUB ESP,0x48
00543FA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00543FAB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00543FAE  56                        PUSH ESI
00543FAF  8D 55 BC                  LEA EDX,[EBP + -0x44]
00543FB2  8D 4D B8                  LEA ECX,[EBP + -0x48]
00543FB5  6A 00                     PUSH 0x0
00543FB7  52                        PUSH EDX
00543FB8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00543FBB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543FC1  E8 2A 98 1E 00            CALL 0x0072d7f0
00543FC6  8B F0                     MOV ESI,EAX
00543FC8  83 C4 08                  ADD ESP,0x8
00543FCB  85 F6                     TEST ESI,ESI
00543FCD  75 63                     JNZ 0x00544032
00543FCF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00543FD2  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
00543FD8  85 C9                     TEST ECX,ECX
00543FDA  74 2B                     JZ 0x00544007
00543FDC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00543FDF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00543FE2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00543FE5  50                        PUSH EAX
00543FE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00543FE9  51                        PUSH ECX
00543FEA  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00543FF0  52                        PUSH EDX
00543FF1  50                        PUSH EAX
00543FF2  51                        PUSH ECX
00543FF3  E8 88 1F 17 00            CALL 0x006b5f80
00543FF8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00543FFB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544000  5E                        POP ESI
00544001  8B E5                     MOV ESP,EBP
00544003  5D                        POP EBP
00544004  C2 10 00                  RET 0x10
LAB_00544007:
00544007  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0054400A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0054400D  52                        PUSH EDX
0054400E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00544011  51                        PUSH ECX
00544012  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00544015  52                        PUSH EDX
00544016  8B 90 AD 00 00 00         MOV EDX,dword ptr [EAX + 0xad]
0054401C  51                        PUSH ECX
0054401D  52                        PUSH EDX
0054401E  E8 2D 4D 17 00            CALL 0x006b8d50
00544023  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00544026  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054402B  5E                        POP ESI
0054402C  8B E5                     MOV ESP,EBP
0054402E  5D                        POP EBP
0054402F  C2 10 00                  RET 0x10
LAB_00544032:
00544032  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00544035  68 68 7E 7C 00            PUSH 0x7c7e68
0054403A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054403F  56                        PUSH ESI
00544040  6A 00                     PUSH 0x0
00544042  68 D8 00 00 00            PUSH 0xd8
00544047  68 60 7D 7C 00            PUSH 0x7c7d60
0054404C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00544052  E8 79 94 16 00            CALL 0x006ad4d0
00544057  83 C4 18                  ADD ESP,0x18
0054405A  85 C0                     TEST EAX,EAX
0054405C  74 01                     JZ 0x0054405f
0054405E  CC                        INT3
LAB_0054405f:
0054405F  68 D9 00 00 00            PUSH 0xd9
00544064  68 60 7D 7C 00            PUSH 0x7c7d60
00544069  6A 00                     PUSH 0x0
0054406B  56                        PUSH ESI
0054406C  E8 CF 1D 16 00            CALL 0x006a5e40
00544071  5E                        POP ESI
00544072  8B E5                     MOV ESP,EBP
00544074  5D                        POP EBP
00544075  C2 10 00                  RET 0x10
