FUN_0054cdd0:
0054CDD0  55                        PUSH EBP
0054CDD1  8B EC                     MOV EBP,ESP
0054CDD3  83 EC 54                  SUB ESP,0x54
0054CDD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054CDDB  56                        PUSH ESI
0054CDDC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0054CDDF  57                        PUSH EDI
0054CDE0  8D 55 B0                  LEA EDX,[EBP + -0x50]
0054CDE3  8D 4D AC                  LEA ECX,[EBP + -0x54]
0054CDE6  6A 00                     PUSH 0x0
0054CDE8  52                        PUSH EDX
0054CDE9  C7 45 F4 FC FF FF FF      MOV dword ptr [EBP + -0xc],0xfffffffc
0054CDF0  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0054CDF3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054CDF9  E8 F2 09 1E 00            CALL 0x0072d7f0
0054CDFE  8B F0                     MOV ESI,EAX
0054CE00  83 C4 08                  ADD ESP,0x8
0054CE03  85 F6                     TEST ESI,ESI
0054CE05  75 6A                     JNZ 0x0054ce71
0054CE07  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054CE0A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0054CE0D  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054CE10  50                        PUSH EAX
0054CE11  51                        PUSH ECX
0054CE12  8B CF                     MOV ECX,EDI
0054CE14  E8 23 83 EB FF            CALL 0x0040513c
0054CE19  85 C0                     TEST EAX,EAX
0054CE1B  75 26                     JNZ 0x0054ce43
0054CE1D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0054CE20  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0054CE23  52                        PUSH EDX
0054CE24  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0054CE27  8D 4D F8                  LEA ECX,[EBP + -0x8]
0054CE2A  50                        PUSH EAX
0054CE2B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054CE2E  51                        PUSH ECX
0054CE2F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054CE32  52                        PUSH EDX
0054CE33  50                        PUSH EAX
0054CE34  51                        PUSH ECX
0054CE35  8B CF                     MOV ECX,EDI
0054CE37  E8 C4 93 19 00            CALL 0x006e6200
0054CE3C  8B F0                     MOV ESI,EAX
0054CE3E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0054CE41  EB 03                     JMP 0x0054ce46
LAB_0054ce43:
0054CE43  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0054ce46:
0054CE46  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0054CE49  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054CE4C  85 C0                     TEST EAX,EAX
0054CE4E  74 02                     JZ 0x0054ce52
0054CE50  89 08                     MOV dword ptr [EAX],ECX
LAB_0054ce52:
0054CE52  85 F6                     TEST ESI,ESI
0054CE54  75 08                     JNZ 0x0054ce5e
0054CE56  51                        PUSH ECX
0054CE57  8B CF                     MOV ECX,EDI
0054CE59  E8 40 44 EB FF            CALL 0x0040129e
LAB_0054ce5e:
0054CE5E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0054CE61  8B C6                     MOV EAX,ESI
0054CE63  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054CE69  5F                        POP EDI
0054CE6A  5E                        POP ESI
0054CE6B  8B E5                     MOV ESP,EBP
0054CE6D  5D                        POP EBP
0054CE6E  C2 18 00                  RET 0x18
LAB_0054ce71:
0054CE71  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054CE74  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0054CE77  51                        PUSH ECX
0054CE78  68 88 84 7C 00            PUSH 0x7c8488
0054CE7D  6A 00                     PUSH 0x0
0054CE7F  6A 00                     PUSH 0x0
0054CE81  68 28 01 00 00            PUSH 0x128
0054CE86  68 30 84 7C 00            PUSH 0x7c8430
0054CE8B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054CE90  E8 3B 06 16 00            CALL 0x006ad4d0
0054CE95  83 C4 18                  ADD ESP,0x18
0054CE98  85 C0                     TEST EAX,EAX
0054CE9A  74 01                     JZ 0x0054ce9d
0054CE9C  CC                        INT3
LAB_0054ce9d:
0054CE9D  68 29 01 00 00            PUSH 0x129
0054CEA2  68 30 84 7C 00            PUSH 0x7c8430
0054CEA7  6A 00                     PUSH 0x0
0054CEA9  56                        PUSH ESI
0054CEAA  E8 91 8F 15 00            CALL 0x006a5e40
0054CEAF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054CEB2  5F                        POP EDI
0054CEB3  5E                        POP ESI
0054CEB4  8B E5                     MOV ESP,EBP
0054CEB6  5D                        POP EBP
0054CEB7  C2 18 00                  RET 0x18
