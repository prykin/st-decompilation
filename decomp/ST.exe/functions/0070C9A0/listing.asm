FUN_0070c9a0:
0070C9A0  55                        PUSH EBP
0070C9A1  8B EC                     MOV EBP,ESP
0070C9A3  56                        PUSH ESI
0070C9A4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C9A7  56                        PUSH ESI
0070C9A8  E8 F3 85 FA FF            CALL 0x006b4fa0
0070C9AD  33 C9                     XOR ECX,ECX
0070C9AF  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0070C9B2  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
0070C9B6  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
0070C9BA  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0070C9BD  83 C1 1F                  ADD ECX,0x1f
0070C9C0  C1 E9 03                  SHR ECX,0x3
0070C9C3  2B D6                     SUB EDX,ESI
0070C9C5  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070C9CB  4A                        DEC EDX
0070C9CC  5E                        POP ESI
0070C9CD  0F AF CA                  IMUL ECX,EDX
0070C9D0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070C9D3  03 D0                     ADD EDX,EAX
0070C9D5  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
0070C9D8  5D                        POP EBP
0070C9D9  C3                        RET
