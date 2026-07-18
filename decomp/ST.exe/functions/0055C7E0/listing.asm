FUN_0055c7e0:
0055C7E0  55                        PUSH EBP
0055C7E1  8B EC                     MOV EBP,ESP
0055C7E3  8B C1                     MOV EAX,ECX
0055C7E5  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0055C7E8  84 C9                     TEST CL,CL
0055C7EA  74 2C                     JZ 0x0055c818
0055C7EC  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0055C7EF  84 C9                     TEST CL,CL
0055C7F1  75 25                     JNZ 0x0055c818
0055C7F3  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C7F9  85 C9                     TEST ECX,ECX
0055C7FB  74 1B                     JZ 0x0055c818
0055C7FD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055C800  C7 40 1B 55 61 00 00      MOV dword ptr [EAX + 0x1b],0x6155
0055C807  89 48 1F                  MOV dword ptr [EAX + 0x1f],ECX
0055C80A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C810  83 C0 0B                  ADD EAX,0xb
0055C813  8B 11                     MOV EDX,dword ptr [ECX]
0055C815  50                        PUSH EAX
0055C816  FF 12                     CALL dword ptr [EDX]
LAB_0055c818:
0055C818  5D                        POP EBP
0055C819  C2 04 00                  RET 0x4
