FUN_005718d0:
005718D0  55                        PUSH EBP
005718D1  8B EC                     MOV EBP,ESP
005718D3  81 EC 60 01 00 00         SUB ESP,0x160
005718D9  8B 81 FA 4E 00 00         MOV EAX,dword ptr [ECX + 0x4efa]
005718DF  56                        PUSH ESI
005718E0  85 C0                     TEST EAX,EAX
005718E2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005718E5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005718EC  0F 85 E1 00 00 00         JNZ 0x005719d3
005718F2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005718F7  8D 55 A8                  LEA EDX,[EBP + -0x58]
005718FA  8D 4D A4                  LEA ECX,[EBP + -0x5c]
005718FD  6A 00                     PUSH 0x0
005718FF  52                        PUSH EDX
00571900  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00571903  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00571909  E8 E2 BE 1B 00            CALL 0x0072d7f0
0057190E  83 C4 08                  ADD ESP,0x8
00571911  85 C0                     TEST EAX,EAX
00571913  0F 85 B1 00 00 00         JNZ 0x005719ca
00571919  50                        PUSH EAX
0057191A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0057191F  50                        PUSH EAX
00571920  E8 1B BE 14 00            CALL 0x006bd740
00571925  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0057192A  8D 4D E8                  LEA ECX,[EBP + -0x18]
0057192D  51                        PUSH ECX
0057192E  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
00571931  52                        PUSH EDX
00571932  50                        PUSH EAX
00571933  E8 F8 2C 15 00            CALL 0x006c4630
00571938  A1 38 67 80 00            MOV EAX,[0x00806738]
0057193D  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
00571943  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
00571949  50                        PUSH EAX
0057194A  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0057194F  51                        PUSH ECX
00571950  52                        PUSH EDX
00571951  6A 00                     PUSH 0x0
00571953  6A 00                     PUSH 0x0
00571955  50                        PUSH EAX
00571956  E8 25 2F 15 00            CALL 0x006c4880
0057195B  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00571961  8D 4D E8                  LEA ECX,[EBP + -0x18]
00571964  51                        PUSH ECX
00571965  52                        PUSH EDX
00571966  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00571969  E8 72 2B 15 00            CALL 0x006c44e0
0057196E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00571971  85 C0                     TEST EAX,EAX
00571973  74 48                     JZ 0x005719bd
00571975  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00571978  33 C0                     XOR EAX,EAX
0057197A  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
00571980  66 8B 86 38 11 00 00      MOV AX,word ptr [ESI + 0x1138]
00571987  8D 4E 60                  LEA ECX,[ESI + 0x60]
0057198A  50                        PUSH EAX
0057198B  51                        PUSH ECX
0057198C  68 E8 A2 7C 00            PUSH 0x7ca2e8
00571991  52                        PUSH EDX
00571992  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00571998  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057199B  83 C4 10                  ADD ESP,0x10
0057199E  8D 8D A0 FE FF FF         LEA ECX,[EBP + 0xfffffea0]
005719A4  6A 00                     PUSH 0x0
005719A6  50                        PUSH EAX
005719A7  51                        PUSH ECX
005719A8  E8 83 28 15 00            CALL 0x006c4230
005719AD  66 FF 86 38 11 00 00      INC word ptr [ESI + 0x1138]
005719B4  8D 55 FC                  LEA EDX,[EBP + -0x4]
005719B7  52                        PUSH EDX
005719B8  E8 A3 96 13 00            CALL 0x006ab060
LAB_005719bd:
005719BD  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005719C0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005719C5  5E                        POP ESI
005719C6  8B E5                     MOV ESP,EBP
005719C8  5D                        POP EBP
005719C9  C3                        RET
LAB_005719ca:
005719CA  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005719CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_005719d3:
005719D3  5E                        POP ESI
005719D4  8B E5                     MOV ESP,EBP
005719D6  5D                        POP EBP
005719D7  C3                        RET
