FUN_006b73e0:
006B73E0  55                        PUSH EBP
006B73E1  8B EC                     MOV EBP,ESP
006B73E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B73E6  85 C0                     TEST EAX,EAX
006B73E8  74 0A                     JZ 0x006b73f4
006B73EA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B73ED  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006b73f0:
006B73F0  3B CA                     CMP ECX,EDX
006B73F2  75 FC                     JNZ 0x006b73f0
LAB_006b73f4:
006B73F4  5D                        POP EBP
006B73F5  C2 08 00                  RET 0x8
