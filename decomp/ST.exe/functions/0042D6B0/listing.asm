STAllPlayersC::RemoveActiveTV:
0042D6B0  55                        PUSH EBP
0042D6B1  8B EC                     MOV EBP,ESP
0042D6B3  53                        PUSH EBX
0042D6B4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0042D6B7  0F BE D3                  MOVSX EDX,BL
0042D6BA  56                        PUSH ESI
0042D6BB  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0042D6BE  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
0042D6C1  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0042D6C4  C1 E0 04                  SHL EAX,0x4
0042D6C7  03 C2                     ADD EAX,EDX
0042D6C9  D1 E0                     SHL EAX,0x1
0042D6CB  8B 90 23 50 7F 00         MOV EDX,dword ptr [EAX + 0x7f5023]
0042D6D1  8B F2                     MOV ESI,EDX
0042D6D3  83 EE 00                  SUB ESI,0x0
0042D6D6  74 36                     JZ 0x0042d70e
0042D6D8  4E                        DEC ESI
0042D6D9  74 2B                     JZ 0x0042d706
0042D6DB  68 5C 64 7A 00            PUSH 0x7a645c
0042D6E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042D6E5  6A 00                     PUSH 0x0
0042D6E7  6A 00                     PUSH 0x0
0042D6E9  68 70 04 00 00            PUSH 0x470
0042D6EE  68 04 60 7A 00            PUSH 0x7a6004
0042D6F3  E8 D8 FD 27 00            CALL 0x006ad4d0
0042D6F8  83 C4 18                  ADD ESP,0x18
0042D6FB  85 C0                     TEST EAX,EAX
0042D6FD  74 3A                     JZ 0x0042d739
0042D6FF  CC                        INT3
LAB_0042d706:
0042D706  8D B0 D3 4F 7F 00         LEA ESI,[EAX + 0x7f4fd3]
0042D70C  EB 06                     JMP 0x0042d714
LAB_0042d70e:
0042D70E  8D B0 83 4F 7F 00         LEA ESI,[EAX + 0x7f4f83]
LAB_0042d714:
0042D714  6A 01                     PUSH 0x1
0042D716  6A 00                     PUSH 0x0
0042D718  52                        PUSH EDX
0042D719  53                        PUSH EBX
0042D71A  E8 C8 5B FD FF            CALL 0x004032e7
0042D71F  8B 46 0A                  MOV EAX,dword ptr [ESI + 0xa]
0042D722  85 C0                     TEST EAX,EAX
0042D724  74 0D                     JZ 0x0042d733
0042D726  50                        PUSH EAX
0042D727  E8 E4 09 28 00            CALL 0x006ae110
0042D72C  C7 46 0A 00 00 00 00      MOV dword ptr [ESI + 0xa],0x0
LAB_0042d733:
0042D733  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0042d739:
0042D739  5E                        POP ESI
0042D73A  5B                        POP EBX
0042D73B  5D                        POP EBP
0042D73C  C2 04 00                  RET 0x4
