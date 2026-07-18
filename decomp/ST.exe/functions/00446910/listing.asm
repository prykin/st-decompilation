FUN_00446910:
00446910  55                        PUSH EBP
00446911  8B EC                     MOV EBP,ESP
00446913  83 EC 54                  SUB ESP,0x54
00446916  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044691A  53                        PUSH EBX
0044691B  56                        PUSH ESI
0044691C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044691F  57                        PUSH EDI
00446920  6A 00                     PUSH 0x0
00446922  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00446925  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00446928  C1 E1 04                  SHL ECX,0x4
0044692B  03 C8                     ADD ECX,EAX
0044692D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00446932  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00446935  8B 14 4D 16 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f5816]
0044693C  8D 4D AC                  LEA ECX,[EBP + -0x54]
0044693F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00446942  8D 55 B0                  LEA EDX,[EBP + -0x50]
00446945  52                        PUSH EDX
00446946  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044694C  E8 9F 6E 2E 00            CALL 0x0072d7f0
00446951  8B F0                     MOV ESI,EAX
00446953  83 C4 08                  ADD ESP,0x8
00446956  85 F6                     TEST ESI,ESI
00446958  75 74                     JNZ 0x004469ce
0044695A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0044695D  85 DB                     TEST EBX,EBX
0044695F  74 5B                     JZ 0x004469bc
00446961  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
00446964  85 FF                     TEST EDI,EDI
00446966  76 31                     JBE 0x00446999
00446968  85 FF                     TEST EDI,EDI
0044696A  7E 2D                     JLE 0x00446999
LAB_0044696c:
0044696C  8D 45 F0                  LEA EAX,[EBP + -0x10]
0044696F  8B D6                     MOV EDX,ESI
00446971  50                        PUSH EAX
00446972  8B CB                     MOV ECX,EBX
00446974  E8 F7 62 26 00            CALL 0x006acc70
00446979  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0044697C  51                        PUSH ECX
0044697D  E8 8E 77 26 00            CALL 0x006ae110
00446982  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00446985  52                        PUSH EDX
00446986  E8 85 77 26 00            CALL 0x006ae110
0044698B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044698E  50                        PUSH EAX
0044698F  E8 7C 77 26 00            CALL 0x006ae110
00446994  46                        INC ESI
00446995  3B F7                     CMP ESI,EDI
00446997  7C D3                     JL 0x0044696c
LAB_00446999:
00446999  53                        PUSH EBX
0044699A  E8 71 77 26 00            CALL 0x006ae110
0044699F  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004469A3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004469A6  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004469A9  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004469AC  C1 E1 04                  SHL ECX,0x4
004469AF  03 C8                     ADD ECX,EAX
004469B1  C7 04 4D 16 58 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f5816],0x0
LAB_004469bc:
004469BC  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004469BF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004469C5  5F                        POP EDI
004469C6  5E                        POP ESI
004469C7  5B                        POP EBX
004469C8  8B E5                     MOV ESP,EBP
004469CA  5D                        POP EBP
004469CB  C2 04 00                  RET 0x4
LAB_004469ce:
004469CE  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004469D1  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004469D7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004469DC  74 37                     JZ 0x00446a15
004469DE  68 0C 84 7A 00            PUSH 0x7a840c
004469E3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004469E8  6A 00                     PUSH 0x0
004469EA  6A 00                     PUSH 0x0
004469EC  68 B3 29 00 00            PUSH 0x29b3
004469F1  68 04 60 7A 00            PUSH 0x7a6004
004469F6  E8 D5 6A 26 00            CALL 0x006ad4d0
004469FB  83 C4 18                  ADD ESP,0x18
004469FE  85 C0                     TEST EAX,EAX
00446A00  74 01                     JZ 0x00446a03
00446A02  CC                        INT3
LAB_00446a03:
00446A03  68 B4 29 00 00            PUSH 0x29b4
00446A08  68 04 60 7A 00            PUSH 0x7a6004
00446A0D  6A 00                     PUSH 0x0
00446A0F  56                        PUSH ESI
00446A10  E8 2B F4 25 00            CALL 0x006a5e40
LAB_00446a15:
00446A15  5F                        POP EDI
00446A16  5E                        POP ESI
00446A17  5B                        POP EBX
00446A18  8B E5                     MOV ESP,EBP
00446A1A  5D                        POP EBP
00446A1B  C2 04 00                  RET 0x4
