FUN_0074e1c9:
0074E1C9  56                        PUSH ESI
0074E1CA  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074E1CE  85 F6                     TEST ESI,ESI
0074E1D0  75 05                     JNZ 0x0074e1d7
0074E1D2  6A 01                     PUSH 0x1
0074E1D4  58                        POP EAX
0074E1D5  EB 57                     JMP 0x0074e22e
LAB_0074e1d7:
0074E1D7  57                        PUSH EDI
0074E1D8  53                        PUSH EBX
0074E1D9  8B C6                     MOV EAX,ESI
0074E1DB  33 DB                     XOR EBX,EBX
LAB_0074e1dd:
0074E1DD  8B 00                     MOV EAX,dword ptr [EAX]
0074E1DF  43                        INC EBX
0074E1E0  85 C0                     TEST EAX,EAX
0074E1E2  75 F9                     JNZ 0x0074e1dd
0074E1E4  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0074E1E8  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0074E1EB  85 D2                     TEST EDX,EDX
0074E1ED  74 05                     JZ 0x0074e1f4
0074E1EF  8B 39                     MOV EDI,dword ptr [ECX]
0074E1F1  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
LAB_0074e1f4:
0074E1F4  8B 11                     MOV EDX,dword ptr [ECX]
0074E1F6  85 D2                     TEST EDX,EDX
0074E1F8  74 05                     JZ 0x0074e1ff
0074E1FA  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0074E1FD  89 3A                     MOV dword ptr [EDX],EDI
LAB_0074e1ff:
0074E1FF  33 FF                     XOR EDI,EDI
0074E201  39 38                     CMP dword ptr [EAX],EDI
0074E203  75 04                     JNZ 0x0074e209
0074E205  8B 11                     MOV EDX,dword ptr [ECX]
0074E207  89 10                     MOV dword ptr [EAX],EDX
LAB_0074e209:
0074E209  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0074E20C  3B D7                     CMP EDX,EDI
0074E20E  89 11                     MOV dword ptr [ECX],EDX
0074E210  75 03                     JNZ 0x0074e215
0074E212  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
LAB_0074e215:
0074E215  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0074E218  8B 11                     MOV EDX,dword ptr [ECX]
0074E21A  3B D7                     CMP EDX,EDI
0074E21C  74 02                     JZ 0x0074e220
0074E21E  89 3A                     MOV dword ptr [EDX],EDI
LAB_0074e220:
0074E220  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
0074E223  29 59 08                  SUB dword ptr [ECX + 0x8],EBX
0074E226  01 58 08                  ADD dword ptr [EAX + 0x8],EBX
0074E229  6A 01                     PUSH 0x1
0074E22B  58                        POP EAX
0074E22C  5B                        POP EBX
0074E22D  5F                        POP EDI
LAB_0074e22e:
0074E22E  5E                        POP ESI
0074E22F  C2 08 00                  RET 0x8
