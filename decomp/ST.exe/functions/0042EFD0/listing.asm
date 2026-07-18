FUN_0042efd0:
0042EFD0  55                        PUSH EBP
0042EFD1  8B EC                     MOV EBP,ESP
0042EFD3  83 EC 4C                  SUB ESP,0x4c
0042EFD6  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042EFDA  56                        PUSH ESI
0042EFDB  57                        PUSH EDI
0042EFDC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042EFDF  6A 00                     PUSH 0x0
0042EFE1  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042EFE4  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042EFE7  C1 E1 04                  SHL ECX,0x4
0042EFEA  03 C8                     ADD ECX,EAX
0042EFEC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042EFF1  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0042EFF4  8B 14 4D 25 4E 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f4e25]
0042EFFB  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0042EFFE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0042F001  8D 55 B8                  LEA EDX,[EBP + -0x48]
0042F004  52                        PUSH EDX
0042F005  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042F00B  E8 E0 E7 2F 00            CALL 0x0072d7f0
0042F010  8B F0                     MOV ESI,EAX
0042F012  83 C4 08                  ADD ESP,0x8
0042F015  85 F6                     TEST ESI,ESI
0042F017  75 7F                     JNZ 0x0042f098
0042F019  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042F01C  85 C0                     TEST EAX,EAX
0042F01E  75 1A                     JNZ 0x0042f03a
0042F020  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042F025  68 90 06 00 00            PUSH 0x690
0042F02A  68 04 60 7A 00            PUSH 0x7a6004
0042F02F  50                        PUSH EAX
0042F030  68 04 00 FE AF            PUSH 0xaffe0004
0042F035  E8 06 6E 27 00            CALL 0x006a5e40
LAB_0042f03a:
0042F03A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0042F03D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042F040  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042F043  81 E6 FF FF 00 00         AND ESI,0xffff
0042F049  51                        PUSH ECX
0042F04A  8B D6                     MOV EDX,ESI
0042F04C  8B CF                     MOV ECX,EDI
0042F04E  E8 1D DC 27 00            CALL 0x006acc70
0042F053  83 F8 FC                  CMP EAX,-0x4
0042F056  74 22                     JZ 0x0042f07a
0042F058  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042F05B  85 C0                     TEST EAX,EAX
0042F05D  74 1B                     JZ 0x0042f07a
0042F05F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0042F065  68 92 06 00 00            PUSH 0x692
0042F06A  68 04 60 7A 00            PUSH 0x7a6004
0042F06F  52                        PUSH EDX
0042F070  68 06 00 FE AF            PUSH 0xaffe0006
0042F075  E8 C6 6D 27 00            CALL 0x006a5e40
LAB_0042f07a:
0042F07A  8D 45 10                  LEA EAX,[EBP + 0x10]
0042F07D  50                        PUSH EAX
0042F07E  56                        PUSH ESI
0042F07F  57                        PUSH EDI
0042F080  E8 BB F0 27 00            CALL 0x006ae140
0042F085  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0042F088  33 C0                     XOR EAX,EAX
0042F08A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042F090  5F                        POP EDI
0042F091  5E                        POP ESI
0042F092  8B E5                     MOV ESP,EBP
0042F094  5D                        POP EBP
0042F095  C2 0C 00                  RET 0xc
LAB_0042f098:
0042F098  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0042F09B  68 28 66 7A 00            PUSH 0x7a6628
0042F0A0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042F0A5  56                        PUSH ESI
0042F0A6  6A 00                     PUSH 0x0
0042F0A8  68 95 06 00 00            PUSH 0x695
0042F0AD  68 04 60 7A 00            PUSH 0x7a6004
0042F0B2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042F0B8  E8 13 E4 27 00            CALL 0x006ad4d0
0042F0BD  83 C4 18                  ADD ESP,0x18
0042F0C0  85 C0                     TEST EAX,EAX
0042F0C2  74 01                     JZ 0x0042f0c5
0042F0C4  CC                        INT3
LAB_0042f0c5:
0042F0C5  68 96 06 00 00            PUSH 0x696
0042F0CA  68 04 60 7A 00            PUSH 0x7a6004
0042F0CF  6A 00                     PUSH 0x0
0042F0D1  56                        PUSH ESI
0042F0D2  E8 69 6D 27 00            CALL 0x006a5e40
0042F0D7  5F                        POP EDI
0042F0D8  83 C8 FF                  OR EAX,0xffffffff
0042F0DB  5E                        POP ESI
0042F0DC  8B E5                     MOV ESP,EBP
0042F0DE  5D                        POP EBP
0042F0DF  C2 0C 00                  RET 0xc
