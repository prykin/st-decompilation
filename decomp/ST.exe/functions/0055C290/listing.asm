FUN_0055c290:
0055C290  55                        PUSH EBP
0055C291  8B EC                     MOV EBP,ESP
0055C293  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055C296  56                        PUSH ESI
0055C297  85 C0                     TEST EAX,EAX
0055C299  8B F1                     MOV ESI,ECX
0055C29B  74 14                     JZ 0x0055c2b1
0055C29D  50                        PUSH EAX
0055C29E  FF 15 38 C0 85 00         CALL dword ptr [0x0085c038]
0055C2A4  83 F8 01                  CMP EAX,0x1
0055C2A7  75 08                     JNZ 0x0055c2b1
0055C2A9  88 46 08                  MOV byte ptr [ESI + 0x8],AL
0055C2AC  5E                        POP ESI
0055C2AD  5D                        POP EBP
0055C2AE  C2 04 00                  RET 0x4
LAB_0055c2b1:
0055C2B1  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0055C2B7  50                        PUSH EAX
0055C2B8  8B CE                     MOV ECX,ESI
0055C2BA  E8 4D 9B EA FF            CALL 0x00405e0c
0055C2BF  5E                        POP ESI
0055C2C0  5D                        POP EBP
0055C2C1  C2 04 00                  RET 0x4
