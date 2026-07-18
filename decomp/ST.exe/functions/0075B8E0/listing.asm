FUN_0075b8e0:
0075B8E0  55                        PUSH EBP
0075B8E1  8B EC                     MOV EBP,ESP
0075B8E3  56                        PUSH ESI
0075B8E4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075B8E7  6A 48                     PUSH 0x48
0075B8E9  6A 01                     PUSH 0x1
0075B8EB  8B 06                     MOV EAX,dword ptr [ESI]
0075B8ED  56                        PUSH ESI
0075B8EE  FF 10                     CALL dword ptr [EAX]
0075B8F0  89 86 AA 01 00 00         MOV dword ptr [ESI + 0x1aa],EAX
0075B8F6  C7 00 20 B9 75 00         MOV dword ptr [EAX],0x75b920
0075B8FC  C7 40 04 30 BA 75 00      MOV dword ptr [EAX + 0x4],0x75ba30
0075B903  83 C0 28                  ADD EAX,0x28
0075B906  B9 04 00 00 00            MOV ECX,0x4
0075B90B  33 D2                     XOR EDX,EDX
0075B90D  5E                        POP ESI
LAB_0075b90e:
0075B90E  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0075B911  89 10                     MOV dword ptr [EAX],EDX
0075B913  83 C0 04                  ADD EAX,0x4
0075B916  49                        DEC ECX
0075B917  75 F5                     JNZ 0x0075b90e
0075B919  5D                        POP EBP
0075B91A  C2 04 00                  RET 0x4
