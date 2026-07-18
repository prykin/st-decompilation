FUN_00755da0:
00755DA0  55                        PUSH EBP
00755DA1  8B EC                     MOV EBP,ESP
00755DA3  56                        PUSH ESI
00755DA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00755DA7  57                        PUSH EDI
00755DA8  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755DAB  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755DAE  51                        PUSH ECX
00755DAF  8B 44 C8 40               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x40]
00755DB3  50                        PUSH EAX
00755DB4  56                        PUSH ESI
00755DB5  E8 C6 DD FF FF            CALL 0x00753b80
00755DBA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00755DBD  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00755DC0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00755DC3  8B 4C D1 44               MOV ECX,dword ptr [ECX + EDX*0x8 + 0x44]
00755DC7  8B 54 01 10               MOV EDX,dword ptr [ECX + EAX*0x1 + 0x10]
00755DCB  89 17                     MOV dword ptr [EDI],EDX
00755DCD  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00755DD0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00755DD3  8B 4C D1 44               MOV ECX,dword ptr [ECX + EDX*0x8 + 0x44]
00755DD7  51                        PUSH ECX
00755DD8  50                        PUSH EAX
00755DD9  56                        PUSH ESI
00755DDA  E8 61 FF FF FF            CALL 0x00755d40
00755DDF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755DE2  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00755DE5  8B 44 D0 44               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x44]
00755DE9  50                        PUSH EAX
00755DEA  56                        PUSH ESI
00755DEB  E8 E0 03 00 00            CALL 0x007561d0
00755DF0  8B 0F                     MOV ECX,dword ptr [EDI]
00755DF2  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00755DF5  51                        PUSH ECX
00755DF6  83 C7 08                  ADD EDI,0x8
00755DF9  52                        PUSH EDX
00755DFA  57                        PUSH EDI
00755DFB  56                        PUSH ESI
00755DFC  E8 5F F7 FF FF            CALL 0x00755560
00755E01  5F                        POP EDI
00755E02  5E                        POP ESI
00755E03  5D                        POP EBP
00755E04  C2 08 00                  RET 0x8
