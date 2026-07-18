__aulldiv:
00735220  53                        PUSH EBX
00735221  56                        PUSH ESI
00735222  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
00735226  0B C0                     OR EAX,EAX
00735228  75 18                     JNZ 0x00735242
0073522A  8B 4C 24 14               MOV ECX,dword ptr [ESP + 0x14]
0073522E  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
00735232  33 D2                     XOR EDX,EDX
00735234  F7 F1                     DIV ECX
00735236  8B D8                     MOV EBX,EAX
00735238  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0073523C  F7 F1                     DIV ECX
0073523E  8B D3                     MOV EDX,EBX
00735240  EB 41                     JMP 0x00735283
LAB_00735242:
00735242  8B C8                     MOV ECX,EAX
00735244  8B 5C 24 14               MOV EBX,dword ptr [ESP + 0x14]
00735248  8B 54 24 10               MOV EDX,dword ptr [ESP + 0x10]
0073524C  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
LAB_00735250:
00735250  D1 E9                     SHR ECX,0x1
00735252  D1 DB                     RCR EBX,0x1
00735254  D1 EA                     SHR EDX,0x1
00735256  D1 D8                     RCR EAX,0x1
00735258  0B C9                     OR ECX,ECX
0073525A  75 F4                     JNZ 0x00735250
0073525C  F7 F3                     DIV EBX
0073525E  8B F0                     MOV ESI,EAX
00735260  F7 64 24 18               MUL dword ptr [ESP + 0x18]
00735264  8B C8                     MOV ECX,EAX
00735266  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0073526A  F7 E6                     MUL ESI
0073526C  03 D1                     ADD EDX,ECX
0073526E  72 0E                     JC 0x0073527e
00735270  3B 54 24 10               CMP EDX,dword ptr [ESP + 0x10]
00735274  77 08                     JA 0x0073527e
00735276  72 07                     JC 0x0073527f
00735278  3B 44 24 0C               CMP EAX,dword ptr [ESP + 0xc]
0073527C  76 01                     JBE 0x0073527f
LAB_0073527e:
0073527E  4E                        DEC ESI
LAB_0073527f:
0073527F  33 D2                     XOR EDX,EDX
00735281  8B C6                     MOV EAX,ESI
LAB_00735283:
00735283  5E                        POP ESI
00735284  5B                        POP EBX
00735285  C2 10 00                  RET 0x10
