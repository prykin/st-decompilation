00530AA9  A1 D1 7D 80 00            MOV EAX,[0x00807dd1]
00530AAE  C1 E8 10                  SHR EAX,0x10
00530AB1  3D DD D0 00 00            CMP EAX,0xd0dd
00530AB6  75 04                     JNZ 0x00530abc
00530AB8  33 F6                     XOR ESI,ESI
00530ABA  EB 45                     JMP 0x00530b01
00530ABC  A1 1A 73 80 00            MOV EAX,[0x0080731a]
00530AC1  85 C0                     TEST EAX,EAX
00530AC3  74 3C                     JZ 0x00530b01
00530AC5  EB 35                     JMP 0x00530afc
00530AC7  A1 22 73 80 00            MOV EAX,[0x00807322]
00530ACC  85 C0                     TEST EAX,EAX
00530ACE  74 31                     JZ 0x00530b01
00530AD0  EB 2A                     JMP 0x00530afc
00530AD2  A1 1E 73 80 00            MOV EAX,[0x0080731e]
00530AD7  85 C0                     TEST EAX,EAX
00530AD9  74 26                     JZ 0x00530b01
00530ADB  EB 1F                     JMP 0x00530afc
00530ADD  A0 26 73 80 00            MOV AL,[0x00807326]
00530AE2  84 C0                     TEST AL,AL
00530AE4  74 1B                     JZ 0x00530b01
00530AE6  EB 14                     JMP 0x00530afc
00530AE8  A1 28 73 80 00            MOV EAX,[0x00807328]
00530AED  85 C0                     TEST EAX,EAX
00530AEF  74 10                     JZ 0x00530b01
00530AF1  EB 09                     JMP 0x00530afc
00530AF3  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00530AF8  85 C0                     TEST EAX,EAX
00530AFA  74 05                     JZ 0x00530b01
00530AFC  BE 03 00 00 00            MOV ESI,0x3
