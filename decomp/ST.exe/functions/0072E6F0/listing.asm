_strncmp:
0072E6F0  55                        PUSH EBP
0072E6F1  8B EC                     MOV EBP,ESP
0072E6F3  57                        PUSH EDI
0072E6F4  56                        PUSH ESI
0072E6F5  53                        PUSH EBX
0072E6F6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072E6F9  E3 26                     JECXZ 0x0072e721
0072E6FB  8B D9                     MOV EBX,ECX
0072E6FD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072E700  8B F7                     MOV ESI,EDI
0072E702  33 C0                     XOR EAX,EAX
0072E704  F2 AE                     SCASB.REPNE ES:EDI
0072E706  F7 D9                     NEG ECX
0072E708  03 CB                     ADD ECX,EBX
0072E70A  8B FE                     MOV EDI,ESI
0072E70C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0072E70F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0072E711  8A 46 FF                  MOV AL,byte ptr [ESI + -0x1]
0072E714  33 C9                     XOR ECX,ECX
0072E716  3A 47 FF                  CMP AL,byte ptr [EDI + -0x1]
0072E719  77 04                     JA 0x0072e71f
0072E71B  74 04                     JZ 0x0072e721
0072E71D  49                        DEC ECX
0072E71E  49                        DEC ECX
LAB_0072e71f:
0072E71F  F7 D1                     NOT ECX
LAB_0072e721:
0072E721  8B C1                     MOV EAX,ECX
0072E723  5B                        POP EBX
0072E724  5E                        POP ESI
0072E725  5F                        POP EDI
0072E726  C9                        LEAVE
0072E727  C3                        RET
