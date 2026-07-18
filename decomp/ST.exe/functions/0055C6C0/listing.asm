FUN_0055c6c0:
0055C6C0  55                        PUSH EBP
0055C6C1  8B EC                     MOV EBP,ESP
0055C6C3  8B C1                     MOV EAX,ECX
0055C6C5  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0055C6C8  84 C9                     TEST CL,CL
0055C6CA  74 47                     JZ 0x0055c713
0055C6CC  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0055C6CF  84 C9                     TEST CL,CL
0055C6D1  75 40                     JNZ 0x0055c713
0055C6D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055C6D6  83 F9 02                  CMP ECX,0x2
0055C6D9  7C 16                     JL 0x0055c6f1
0055C6DB  83 F9 04                  CMP ECX,0x4
0055C6DE  7E 05                     JLE 0x0055c6e5
0055C6E0  83 F9 07                  CMP ECX,0x7
0055C6E3  75 0C                     JNZ 0x0055c6f1
LAB_0055c6e5:
0055C6E5  8B 15 4C 17 81 00         MOV EDX,dword ptr [0x0081174c]
0055C6EB  85 D2                     TEST EDX,EDX
0055C6ED  74 24                     JZ 0x0055c713
0055C6EF  EB 0A                     JMP 0x0055c6fb
LAB_0055c6f1:
0055C6F1  8B 15 4C 17 81 00         MOV EDX,dword ptr [0x0081174c]
0055C6F7  85 D2                     TEST EDX,EDX
0055C6F9  74 18                     JZ 0x0055c713
LAB_0055c6fb:
0055C6FB  C7 40 1B 52 61 00 00      MOV dword ptr [EAX + 0x1b],0x6152
0055C702  89 48 1F                  MOV dword ptr [EAX + 0x1f],ECX
0055C705  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C70B  83 C0 0B                  ADD EAX,0xb
0055C70E  50                        PUSH EAX
0055C70F  8B 11                     MOV EDX,dword ptr [ECX]
0055C711  FF 12                     CALL dword ptr [EDX]
LAB_0055c713:
0055C713  5D                        POP EBP
0055C714  C2 04 00                  RET 0x4
