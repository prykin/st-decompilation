FUN_0074a1c9:
0074A1C9  53                        PUSH EBX
0074A1CA  56                        PUSH ESI
0074A1CB  8B F1                     MOV ESI,ECX
0074A1CD  57                        PUSH EDI
0074A1CE  33 DB                     XOR EBX,EBX
0074A1D0  8B 86 AC 00 00 00         MOV EAX,dword ptr [ESI + 0xac]
0074A1D6  8D BE AC 00 00 00         LEA EDI,[ESI + 0xac]
0074A1DC  3B C3                     CMP EAX,EBX
0074A1DE  74 08                     JZ 0x0074a1e8
0074A1E0  8B 08                     MOV ECX,dword ptr [EAX]
0074A1E2  50                        PUSH EAX
0074A1E3  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074A1E6  89 1F                     MOV dword ptr [EDI],EBX
LAB_0074a1e8:
0074A1E8  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
0074A1EB  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
0074A1EE  75 05                     JNZ 0x0074a1f5
0074A1F0  6A 01                     PUSH 0x1
0074A1F2  58                        POP EAX
0074A1F3  EB 27                     JMP 0x0074a21c
LAB_0074a1f5:
0074A1F5  39 5E 14                  CMP dword ptr [ESI + 0x14],EBX
0074A1F8  74 07                     JZ 0x0074a201
0074A1FA  B8 24 02 04 80            MOV EAX,0x80040224
0074A1FF  EB 1B                     JMP 0x0074a21c
LAB_0074a201:
0074A201  53                        PUSH EBX
0074A202  8B CE                     MOV ECX,ESI
0074A204  E8 14 06 00 00            CALL 0x0074a81d
0074A209  8B 06                     MOV EAX,dword ptr [ESI]
0074A20B  8B CE                     MOV ECX,ESI
0074A20D  FF 50 64                  CALL dword ptr [EAX + 0x64]
0074A210  8B 06                     MOV EAX,dword ptr [ESI]
0074A212  8B CE                     MOV ECX,ESI
0074A214  FF 50 70                  CALL dword ptr [EAX + 0x70]
0074A217  89 5E 60                  MOV dword ptr [ESI + 0x60],EBX
0074A21A  33 C0                     XOR EAX,EAX
LAB_0074a21c:
0074A21C  5F                        POP EDI
0074A21D  5E                        POP ESI
0074A21E  5B                        POP EBX
0074A21F  C3                        RET
