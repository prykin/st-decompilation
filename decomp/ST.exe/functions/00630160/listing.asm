FUN_00630160:
00630160  55                        PUSH EBP
00630161  8B EC                     MOV EBP,ESP
00630163  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00630166  33 C0                     XOR EAX,EAX
00630168  56                        PUSH ESI
00630169  8B 8C 91 E5 01 00 00      MOV ECX,dword ptr [ECX + EDX*0x4 + 0x1e5]
00630170  85 C9                     TEST ECX,ECX
00630172  74 1E                     JZ 0x00630192
00630174  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
00630177  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0063017A  3B D6                     CMP EDX,ESI
0063017C  75 14                     JNZ 0x00630192
0063017E  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00630181  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00630184  3B D6                     CMP EDX,ESI
00630186  75 0A                     JNZ 0x00630192
00630188  83 39 00                  CMP dword ptr [ECX],0x0
0063018B  7E 05                     JLE 0x00630192
0063018D  B8 01 00 00 00            MOV EAX,0x1
LAB_00630192:
00630192  5E                        POP ESI
00630193  5D                        POP EBP
00630194  C2 0C 00                  RET 0xc
