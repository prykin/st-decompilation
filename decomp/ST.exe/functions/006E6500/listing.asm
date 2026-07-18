FUN_006e6500:
006E6500  55                        PUSH EBP
006E6501  8B EC                     MOV EBP,ESP
006E6503  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6506  85 C0                     TEST EAX,EAX
006E6508  75 15                     JNZ 0x006e651f
006E650A  81 C1 56 04 00 00         ADD ECX,0x456
006E6510  89 01                     MOV dword ptr [ECX],EAX
006E6512  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006E6515  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006E6518  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006E651B  5D                        POP EBP
006E651C  C2 04 00                  RET 0x4
LAB_006e651f:
006E651F  8B 10                     MOV EDX,dword ptr [EAX]
006E6521  81 C1 56 04 00 00         ADD ECX,0x456
006E6527  89 11                     MOV dword ptr [ECX],EDX
006E6529  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006E652C  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006E652F  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E6532  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006E6535  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E6538  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006E653B  5D                        POP EBP
006E653C  C2 04 00                  RET 0x4
