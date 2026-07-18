FUN_0073c570:
0073C570  55                        PUSH EBP
0073C571  8B EC                     MOV EBP,ESP
0073C573  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C576  8B 08                     MOV ECX,dword ptr [EAX]
0073C578  83 C1 04                  ADD ECX,0x4
0073C57B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C57E  89 0A                     MOV dword ptr [EDX],ECX
0073C580  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C583  8B 08                     MOV ECX,dword ptr [EAX]
0073C585  66 8B 41 FC               MOV AX,word ptr [ECX + -0x4]
0073C589  5D                        POP EBP
0073C58A  C3                        RET
