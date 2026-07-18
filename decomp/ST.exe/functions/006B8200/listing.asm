FUN_006b8200:
006B8200  55                        PUSH EBP
006B8201  8B EC                     MOV EBP,ESP
006B8203  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B8206  56                        PUSH ESI
006B8207  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B820A  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006B820D  3B F0                     CMP ESI,EAX
006B820F  73 24                     JNC 0x006b8235
006B8211  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B8214  3B C8                     CMP ECX,EAX
006B8216  73 1D                     JNC 0x006b8235
006B8218  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
006B821B  53                        PUSH EBX
006B821C  57                        PUSH EDI
006B821D  8B 1C 88                  MOV EBX,dword ptr [EAX + ECX*0x4]
006B8220  8B 3C B0                  MOV EDI,dword ptr [EAX + ESI*0x4]
006B8223  89 1C B0                  MOV dword ptr [EAX + ESI*0x4],EBX
006B8226  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
006B8229  89 3C 88                  MOV dword ptr [EAX + ECX*0x4],EDI
006B822C  5F                        POP EDI
006B822D  5B                        POP EBX
006B822E  33 C0                     XOR EAX,EAX
006B8230  5E                        POP ESI
006B8231  5D                        POP EBP
006B8232  C2 0C 00                  RET 0xc
LAB_006b8235:
006B8235  B8 FC FF FF FF            MOV EAX,0xfffffffc
006B823A  5E                        POP ESI
006B823B  5D                        POP EBP
006B823C  C2 0C 00                  RET 0xc
