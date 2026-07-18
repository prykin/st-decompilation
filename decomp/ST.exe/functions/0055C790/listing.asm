FUN_0055c790:
0055C790  55                        PUSH EBP
0055C791  8B EC                     MOV EBP,ESP
0055C793  8B C1                     MOV EAX,ECX
0055C795  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0055C798  84 C9                     TEST CL,CL
0055C79A  74 2C                     JZ 0x0055c7c8
0055C79C  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0055C79F  84 C9                     TEST CL,CL
0055C7A1  75 25                     JNZ 0x0055c7c8
0055C7A3  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C7A9  85 C9                     TEST ECX,ECX
0055C7AB  74 1B                     JZ 0x0055c7c8
0055C7AD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055C7B0  C7 40 1B 54 61 00 00      MOV dword ptr [EAX + 0x1b],0x6154
0055C7B7  89 48 1F                  MOV dword ptr [EAX + 0x1f],ECX
0055C7BA  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C7C0  83 C0 0B                  ADD EAX,0xb
0055C7C3  8B 11                     MOV EDX,dword ptr [ECX]
0055C7C5  50                        PUSH EAX
0055C7C6  FF 12                     CALL dword ptr [EDX]
LAB_0055c7c8:
0055C7C8  5D                        POP EBP
0055C7C9  C2 04 00                  RET 0x4
