FUN_006c2140:
006C2140  55                        PUSH EBP
006C2141  8B EC                     MOV EBP,ESP
006C2143  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006C2148  85 C0                     TEST EAX,EAX
006C214A  74 0C                     JZ 0x006c2158
006C214C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C214F  8B 08                     MOV ECX,dword ptr [EAX]
006C2151  6A 00                     PUSH 0x0
006C2153  52                        PUSH EDX
006C2154  50                        PUSH EAX
006C2155  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
LAB_006c2158:
006C2158  5D                        POP EBP
006C2159  C2 04 00                  RET 0x4
