FUN_0074e17d:
0074E17D  53                        PUSH EBX
0074E17E  56                        PUSH ESI
0074E17F  57                        PUSH EDI
0074E180  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074E184  8B D9                     MOV EBX,ECX
0074E186  8B CF                     MOV ECX,EDI
0074E188  E8 2D FD FF FF            CALL 0x0074deba
0074E18D  8B F0                     MOV ESI,EAX
LAB_0074e18f:
0074E18F  85 F6                     TEST ESI,ESI
0074E191  74 2D                     JZ 0x0074e1c0
0074E193  56                        PUSH ESI
0074E194  8B CF                     MOV ECX,EDI
0074E196  E8 3C FD FF FF            CALL 0x0074ded7
0074E19B  50                        PUSH EAX
0074E19C  8B CB                     MOV ECX,EBX
0074E19E  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074E1A2  E8 7B FF FF FF            CALL 0x0074e122
0074E1A7  85 C0                     TEST EAX,EAX
0074E1A9  89 44 24 10               MOV dword ptr [ESP + 0x10],EAX
0074E1AD  74 0D                     JZ 0x0074e1bc
0074E1AF  85 F6                     TEST ESI,ESI
0074E1B1  75 05                     JNZ 0x0074e1b8
0074E1B3  8B 77 04                  MOV ESI,dword ptr [EDI + 0x4]
0074E1B6  EB D7                     JMP 0x0074e18f
LAB_0074e1b8:
0074E1B8  8B 36                     MOV ESI,dword ptr [ESI]
0074E1BA  EB D3                     JMP 0x0074e18f
LAB_0074e1bc:
0074E1BC  33 C0                     XOR EAX,EAX
0074E1BE  EB 03                     JMP 0x0074e1c3
LAB_0074e1c0:
0074E1C0  6A 01                     PUSH 0x1
0074E1C2  58                        POP EAX
LAB_0074e1c3:
0074E1C3  5F                        POP EDI
0074E1C4  5E                        POP ESI
0074E1C5  5B                        POP EBX
0074E1C6  C2 08 00                  RET 0x8
