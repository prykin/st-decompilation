FUN_006c18b0:
006C18B0  55                        PUSH EBP
006C18B1  8B EC                     MOV EBP,ESP
006C18B3  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006C18B8  85 C0                     TEST EAX,EAX
006C18BA  74 08                     JZ 0x006c18c4
006C18BC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C18BF  A3 10 DE 7E 00            MOV [0x007ede10],EAX
LAB_006c18c4:
006C18C4  5D                        POP EBP
006C18C5  C2 04 00                  RET 0x4
