__fload:
0073E981  55                        PUSH EBP
0073E982  8B EC                     MOV EBP,ESP
0073E984  83 C4 F4                  ADD ESP,-0xc
0073E987  53                        PUSH EBX
0073E988  66 8B 45 0E               MOV AX,word ptr [EBP + 0xe]
0073E98C  66 8B D8                  MOV BX,AX
0073E98F  66 25 F0 7F               AND AX,0x7ff0
0073E993  66 3D F0 7F               CMP AX,0x7ff0
0073E997  75 1E                     JNZ 0x0073e9b7
0073E999  66 81 CB FF 7F            OR BX,0x7fff
0073E99E  66 89 5D FE               MOV word ptr [EBP + -0x2],BX
0073E9A2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073E9A5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0073E9A8  0F A4 D8 0B               SHLD EAX,EBX,0xb
0073E9AC  89 45 FA                  MOV dword ptr [EBP + -0x6],EAX
0073E9AF  89 5D F6                  MOV dword ptr [EBP + -0xa],EBX
0073E9B2  DB 6D F6                  FLD extended double ptr [EBP + -0xa]
0073E9B5  EB 03                     JMP 0x0073e9ba
LAB_0073e9b7:
0073E9B7  DD 45 08                  FLD double ptr [EBP + 0x8]
LAB_0073e9ba:
0073E9BA  5B                        POP EBX
0073E9BB  C9                        LEAVE
0073E9BC  C3                        RET
