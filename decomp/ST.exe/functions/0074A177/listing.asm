FUN_0074a177:
0074A177  56                        PUSH ESI
0074A178  8B F1                     MOV ESI,ECX
0074A17A  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
0074A17D  85 C9                     TEST ECX,ECX
0074A17F  74 05                     JZ 0x0074a186
0074A181  E8 52 4F 00 00            CALL 0x0074f0d8
LAB_0074a186:
0074A186  8B 06                     MOV EAX,dword ptr [ESI]
0074A188  6A 01                     PUSH 0x1
0074A18A  8B CE                     MOV ECX,ESI
0074A18C  FF 50 28                  CALL dword ptr [EAX + 0x28]
0074A18F  33 C0                     XOR EAX,EAX
0074A191  5E                        POP ESI
0074A192  C3                        RET
