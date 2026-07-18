FUN_00750fb0:
00750FB0  55                        PUSH EBP
00750FB1  8B EC                     MOV EBP,ESP
00750FB3  56                        PUSH ESI
00750FB4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00750FB7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00750FBA  57                        PUSH EDI
00750FBB  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750FBE  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
00750FC1  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00750FC4  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
00750FC7  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00750FCA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00750FCD  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
00750FD0  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750FD3  33 C0                     XOR EAX,EAX
00750FD5  89 41 40                  MOV dword ptr [ECX + 0x40],EAX
00750FD8  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00750FDB  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
00750FDE  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750FE1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750FE4  8B 78 34                  MOV EDI,dword ptr [EAX + 0x34]
00750FE7  03 79 24                  ADD EDI,dword ptr [ECX + 0x24]
00750FEA  0F BF 57 08               MOVSX EDX,word ptr [EDI + 0x8]
00750FEE  52                        PUSH EDX
00750FEF  56                        PUSH ESI
00750FF0  E8 8B 2C 00 00            CALL 0x00753c80
00750FF5  85 C0                     TEST EAX,EAX
00750FF7  7C 42                     JL 0x0075103b
00750FF9  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
00750FFD  50                        PUSH EAX
00750FFE  56                        PUSH ESI
00750FFF  E8 7C 2C 00 00            CALL 0x00753c80
00751004  8B 44 38 10               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x10]
00751008  83 F8 FF                  CMP EAX,-0x1
0075100B  74 2E                     JZ 0x0075103b
LAB_0075100d:
0075100D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00751010  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00751013  42                        INC EDX
00751014  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
00751017  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075101A  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0075101D  52                        PUSH EDX
0075101E  50                        PUSH EAX
0075101F  56                        PUSH ESI
00751020  E8 5B 2B 00 00            CALL 0x00753b80
00751025  8B F8                     MOV EDI,EAX
00751027  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
0075102B  50                        PUSH EAX
0075102C  56                        PUSH ESI
0075102D  E8 4E 2C 00 00            CALL 0x00753c80
00751032  8B 44 38 10               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x10]
00751036  83 F8 FF                  CMP EAX,-0x1
00751039  75 D2                     JNZ 0x0075100d
LAB_0075103b:
0075103B  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
0075103E  0F BF 4F 08               MOVSX ECX,word ptr [EDI + 0x8]
00751042  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00751045  5F                        POP EDI
00751046  89 4C D6 44               MOV dword ptr [ESI + EDX*0x8 + 0x44],ECX
0075104A  5E                        POP ESI
0075104B  5D                        POP EBP
0075104C  C2 0C 00                  RET 0xc
