FUN_0074a1aa:
0074A1AA  56                        PUSH ESI
0074A1AB  8B F1                     MOV ESI,ECX
0074A1AD  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
0074A1B0  85 C9                     TEST ECX,ECX
0074A1B2  74 05                     JZ 0x0074a1b9
0074A1B4  E8 1F 4F 00 00            CALL 0x0074f0d8
LAB_0074a1b9:
0074A1B9  8B 06                     MOV EAX,dword ptr [ESI]
0074A1BB  8B CE                     MOV ECX,ESI
0074A1BD  FF 50 70                  CALL dword ptr [EAX + 0x70]
0074A1C0  33 C0                     XOR EAX,EAX
0074A1C2  5E                        POP ESI
0074A1C3  C3                        RET
