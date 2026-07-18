FUN_0074e0d6:
0074E0D6  53                        PUSH EBX
0074E0D7  56                        PUSH ESI
0074E0D8  57                        PUSH EDI
0074E0D9  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074E0DD  8B D9                     MOV EBX,ECX
0074E0DF  8B CF                     MOV ECX,EDI
0074E0E1  E8 D1 FD FF FF            CALL 0x0074deb7
0074E0E6  8B F0                     MOV ESI,EAX
LAB_0074e0e8:
0074E0E8  85 F6                     TEST ESI,ESI
0074E0EA  74 2D                     JZ 0x0074e119
0074E0EC  56                        PUSH ESI
0074E0ED  8B CF                     MOV ECX,EDI
0074E0EF  E8 E3 FD FF FF            CALL 0x0074ded7
0074E0F4  50                        PUSH EAX
0074E0F5  8B CB                     MOV ECX,EBX
0074E0F7  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074E0FB  E8 79 FF FF FF            CALL 0x0074e079
0074E100  85 C0                     TEST EAX,EAX
0074E102  89 44 24 10               MOV dword ptr [ESP + 0x10],EAX
0074E106  74 0D                     JZ 0x0074e115
0074E108  85 F6                     TEST ESI,ESI
0074E10A  75 04                     JNZ 0x0074e110
0074E10C  8B 37                     MOV ESI,dword ptr [EDI]
0074E10E  EB D8                     JMP 0x0074e0e8
LAB_0074e110:
0074E110  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
0074E113  EB D3                     JMP 0x0074e0e8
LAB_0074e115:
0074E115  33 C0                     XOR EAX,EAX
0074E117  EB 03                     JMP 0x0074e11c
LAB_0074e119:
0074E119  6A 01                     PUSH 0x1
0074E11B  58                        POP EAX
LAB_0074e11c:
0074E11C  5F                        POP EDI
0074E11D  5E                        POP ESI
0074E11E  5B                        POP EBX
0074E11F  C2 08 00                  RET 0x8
