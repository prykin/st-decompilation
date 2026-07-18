FUN_0073c550:
0073C550  55                        PUSH EBP
0073C551  8B EC                     MOV EBP,ESP
0073C553  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C556  8B 08                     MOV ECX,dword ptr [EAX]
0073C558  83 C1 08                  ADD ECX,0x8
0073C55B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C55E  89 0A                     MOV dword ptr [EDX],ECX
0073C560  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C563  8B 08                     MOV ECX,dword ptr [EAX]
0073C565  83 E9 08                  SUB ECX,0x8
0073C568  8B 01                     MOV EAX,dword ptr [ECX]
0073C56A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0073C56D  5D                        POP EBP
0073C56E  C3                        RET
