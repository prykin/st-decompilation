FUN_006a55d0:
006A55D0  55                        PUSH EBP
006A55D1  8B EC                     MOV EBP,ESP
006A55D3  56                        PUSH ESI
006A55D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A55D7  85 F6                     TEST ESI,ESI
006A55D9  57                        PUSH EDI
006A55DA  74 2B                     JZ 0x006a5607
006A55DC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A55DF  57                        PUSH EDI
006A55E0  56                        PUSH ESI
006A55E1  FF 15 B8 BB 85 00         CALL dword ptr [0x0085bbb8]
006A55E7  85 C0                     TEST EAX,EAX
006A55E9  75 1C                     JNZ 0x006a5607
006A55EB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A55EE  85 C0                     TEST EAX,EAX
006A55F0  74 0C                     JZ 0x006a55fe
006A55F2  57                        PUSH EDI
006A55F3  56                        PUSH ESI
006A55F4  FF 15 A0 BB 85 00         CALL dword ptr [0x0085bba0]
006A55FA  85 C0                     TEST EAX,EAX
006A55FC  75 09                     JNZ 0x006a5607
LAB_006a55fe:
006A55FE  5F                        POP EDI
006A55FF  B8 01 00 00 00            MOV EAX,0x1
006A5604  5E                        POP ESI
006A5605  5D                        POP EBP
006A5606  C3                        RET
LAB_006a5607:
006A5607  5F                        POP EDI
006A5608  33 C0                     XOR EAX,EAX
006A560A  5E                        POP ESI
006A560B  5D                        POP EBP
006A560C  C3                        RET
