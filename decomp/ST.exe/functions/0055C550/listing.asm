FUN_0055c550:
0055C550  8B C1                     MOV EAX,ECX
0055C552  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0055C555  84 C9                     TEST CL,CL
0055C557  75 1F                     JNZ 0x0055c578
0055C559  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C55F  85 C9                     TEST ECX,ECX
0055C561  74 15                     JZ 0x0055c578
0055C563  C7 40 1B 51 61 00 00      MOV dword ptr [EAX + 0x1b],0x6151
0055C56A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C570  83 C0 0B                  ADD EAX,0xb
0055C573  8B 11                     MOV EDX,dword ptr [ECX]
0055C575  50                        PUSH EAX
0055C576  FF 12                     CALL dword ptr [EDX]
LAB_0055c578:
0055C578  C2 04 00                  RET 0x4
