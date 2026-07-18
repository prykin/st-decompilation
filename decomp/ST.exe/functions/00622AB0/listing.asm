FUN_00622ab0:
00622AB0  55                        PUSH EBP
00622AB1  8B EC                     MOV EBP,ESP
00622AB3  83 EC 1C                  SUB ESP,0x1c
00622AB6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00622AB9  53                        PUSH EBX
00622ABA  8B D9                     MOV EBX,ECX
00622ABC  56                        PUSH ESI
00622ABD  57                        PUSH EDI
00622ABE  B9 42 00 00 00            MOV ECX,0x42
00622AC3  8B F0                     MOV ESI,EAX
00622AC5  8D BB 5E 02 00 00         LEA EDI,[EBX + 0x25e]
00622ACB  F3 A5                     MOVSD.REP ES:EDI,ESI
00622ACD  A4                        MOVSB ES:EDI,ESI
00622ACE  8D B0 09 01 00 00         LEA ESI,[EAX + 0x109]
00622AD4  C7 83 BA 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x2ba],0xffffffff
00622ADE  6A 44                     PUSH 0x44
00622AE0  8B 3E                     MOV EDI,dword ptr [ESI]
00622AE2  83 C6 04                  ADD ESI,0x4
00622AE5  8D 87 09 01 00 00         LEA EAX,[EDI + 0x109]
00622AEB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00622AEE  E8 7D 81 08 00            CALL 0x006aac70
00622AF3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00622AF6  33 C0                     XOR EAX,EAX
LAB_00622af8:
00622AF8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00622AFB  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00622B01  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
00622B04  83 C0 04                  ADD EAX,0x4
00622B07  83 F8 44                  CMP EAX,0x44
00622B0A  7C EC                     JL 0x00622af8
00622B0C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00622B0F  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00622B15  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00622B18  56                        PUSH ESI
00622B19  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
00622B1C  33 C0                     XOR EAX,EAX
00622B1E  52                        PUSH EDX
00622B1F  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00622B25  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00622B28  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00622B2B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00622B2E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00622B31  C7 45 F8 10 00 00 00      MOV dword ptr [EBP + -0x8],0x10
00622B38  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00622B3B  E8 65 21 DE FF            CALL 0x00404ca5
00622B40  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00622B43  50                        PUSH EAX
00622B44  E8 17 85 08 00            CALL 0x006ab060
00622B49  03 F7                     ADD ESI,EDI
00622B4B  8B CB                     MOV ECX,EBX
00622B4D  8B 3E                     MOV EDI,dword ptr [ESI]
00622B4F  83 C6 04                  ADD ESI,0x4
00622B52  56                        PUSH ESI
00622B53  E8 C7 29 DE FF            CALL 0x0040551f
00622B58  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00622B5B  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
00622B5E  5F                        POP EDI
00622B5F  5E                        POP ESI
00622B60  5B                        POP EBX
00622B61  8B E5                     MOV ESP,EBP
00622B63  5D                        POP EBP
00622B64  C2 04 00                  RET 0x4
