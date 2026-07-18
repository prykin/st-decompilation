FUN_00752cf0:
00752CF0  55                        PUSH EBP
00752CF1  8B EC                     MOV EBP,ESP
00752CF3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00752CF6  56                        PUSH ESI
00752CF7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00752CFA  57                        PUSH EDI
00752CFB  85 C0                     TEST EAX,EAX
00752CFD  75 06                     JNZ 0x00752d05
00752CFF  56                        PUSH ESI
00752D00  E8 9B 22 F6 FF            CALL 0x006b4fa0
LAB_00752d05:
00752D05  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00752D08  33 C9                     XOR ECX,ECX
00752D0A  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
00752D0E  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00752D11  0F AF CA                  IMUL ECX,EDX
00752D14  8B 76 08                  MOV ESI,dword ptr [ESI + 0x8]
00752D17  57                        PUSH EDI
00752D18  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00752D1B  83 C1 1F                  ADD ECX,0x1f
00752D1E  57                        PUSH EDI
00752D1F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00752D22  C1 E9 03                  SHR ECX,0x3
00752D25  57                        PUSH EDI
00752D26  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
00752D2C  56                        PUSH ESI
00752D2D  52                        PUSH EDX
00752D2E  8B D1                     MOV EDX,ECX
00752D30  F7 DA                     NEG EDX
00752D32  4E                        DEC ESI
00752D33  52                        PUSH EDX
00752D34  0F AF F1                  IMUL ESI,ECX
00752D37  03 F0                     ADD ESI,EAX
00752D39  56                        PUSH ESI
00752D3A  E8 21 FD FF FF            CALL 0x00752a60
00752D3F  5F                        POP EDI
00752D40  5E                        POP ESI
00752D41  5D                        POP EBP
00752D42  C2 14 00                  RET 0x14
