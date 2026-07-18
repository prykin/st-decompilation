FUN_004c5f30:
004C5F30  55                        PUSH EBP
004C5F31  8B EC                     MOV EBP,ESP
004C5F33  51                        PUSH ECX
004C5F34  56                        PUSH ESI
004C5F35  8B F1                     MOV ESI,ECX
004C5F37  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004C5F3D  85 C0                     TEST EAX,EAX
004C5F3F  0F 85 E0 00 00 00         JNZ 0x004c6025
004C5F45  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C5F4B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C5F4E  6A 00                     PUSH 0x0
004C5F50  50                        PUSH EAX
004C5F51  51                        PUSH ECX
004C5F52  E8 EE FC F3 FF            CALL 0x00405c45
004C5F57  8B 8E B0 05 00 00         MOV ECX,dword ptr [ESI + 0x5b0]
004C5F5D  83 C4 0C                  ADD ESP,0xc
004C5F60  2B C8                     SUB ECX,EAX
004C5F62  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004C5F65  79 07                     JNS 0x004c5f6e
004C5F67  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004c5f6e:
004C5F6E  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004C5F74  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C5F77  53                        PUSH EBX
004C5F78  57                        PUSH EDI
004C5F79  6A 00                     PUSH 0x0
004C5F7B  52                        PUSH EDX
004C5F7C  50                        PUSH EAX
004C5F7D  E8 C3 FC F3 FF            CALL 0x00405c45
004C5F82  8B 9E B4 05 00 00         MOV EBX,dword ptr [ESI + 0x5b4]
004C5F88  83 C4 0C                  ADD ESP,0xc
004C5F8B  2B D8                     SUB EBX,EAX
004C5F8D  79 02                     JNS 0x004c5f91
004C5F8F  33 DB                     XOR EBX,EBX
LAB_004c5f91:
004C5F91  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C5F97  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C5F9A  6A 00                     PUSH 0x0
004C5F9C  51                        PUSH ECX
004C5F9D  52                        PUSH EDX
004C5F9E  E8 A2 FC F3 FF            CALL 0x00405c45
004C5FA3  8B 96 B0 05 00 00         MOV EDX,dword ptr [ESI + 0x5b0]
004C5FA9  8B F8                     MOV EDI,EAX
004C5FAB  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004C5FB2  03 FA                     ADD EDI,EDX
004C5FB4  83 C4 0C                  ADD ESP,0xc
004C5FB7  3B F8                     CMP EDI,EAX
004C5FB9  7C 03                     JL 0x004c5fbe
004C5FBB  8D 78 FF                  LEA EDI,[EAX + -0x1]
LAB_004c5fbe:
004C5FBE  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C5FC4  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C5FC7  6A 00                     PUSH 0x0
004C5FC9  50                        PUSH EAX
004C5FCA  51                        PUSH ECX
004C5FCB  E8 75 FC F3 FF            CALL 0x00405c45
004C5FD0  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004C5FD6  83 C4 0C                  ADD ESP,0xc
004C5FD9  03 C1                     ADD EAX,ECX
004C5FDB  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004C5FE2  3B C1                     CMP EAX,ECX
004C5FE4  7C 03                     JL 0x004c5fe9
004C5FE6  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_004c5fe9:
004C5FE9  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C5FEC  33 D2                     XOR EDX,EDX
004C5FEE  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004C5FF2  52                        PUSH EDX
004C5FF3  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C5FF6  51                        PUSH ECX
004C5FF7  52                        PUSH EDX
004C5FF8  6A 05                     PUSH 0x5
004C5FFA  50                        PUSH EAX
004C5FFB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C5FFE  57                        PUSH EDI
004C5FFF  53                        PUSH EBX
004C6000  50                        PUSH EAX
004C6001  E8 70 DF F3 FF            CALL 0x00403f76
004C6006  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004C6009  83 C4 20                  ADD ESP,0x20
004C600C  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004C6012  C7 86 D1 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x2d1],0x5
004C601C  5F                        POP EDI
004C601D  5B                        POP EBX
004C601E  33 C0                     XOR EAX,EAX
004C6020  5E                        POP ESI
004C6021  8B E5                     MOV ESP,EBP
004C6023  5D                        POP EBP
004C6024  C3                        RET
LAB_004c6025:
004C6025  33 C0                     XOR EAX,EAX
004C6027  5E                        POP ESI
004C6028  8B E5                     MOV ESP,EBP
004C602A  5D                        POP EBP
004C602B  C3                        RET
