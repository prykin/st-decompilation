FUN_00449ce0:
00449CE0  55                        PUSH EBP
00449CE1  8B EC                     MOV EBP,ESP
00449CE3  83 EC 48                  SUB ESP,0x48
00449CE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00449CEB  56                        PUSH ESI
00449CEC  8D 55 BC                  LEA EDX,[EBP + -0x44]
00449CEF  8D 4D B8                  LEA ECX,[EBP + -0x48]
00449CF2  6A 00                     PUSH 0x0
00449CF4  52                        PUSH EDX
00449CF5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00449CF8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00449CFE  E8 ED 3A 2E 00            CALL 0x0072d7f0
00449D03  8B F0                     MOV ESI,EAX
00449D05  83 C4 08                  ADD ESP,0x8
00449D08  85 F6                     TEST ESI,ESI
00449D0A  0F 85 AA 00 00 00         JNZ 0x00449dba
00449D10  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00449D13  85 C0                     TEST EAX,EAX
00449D15  75 1A                     JNZ 0x00449d31
00449D17  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00449D1C  68 CC 2E 00 00            PUSH 0x2ecc
00449D21  68 04 60 7A 00            PUSH 0x7a6004
00449D26  50                        PUSH EAX
00449D27  68 04 00 FE AF            PUSH 0xaffe0004
00449D2C  E8 0F C1 25 00            CALL 0x006a5e40
LAB_00449d31:
00449D31  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00449D34  66 81 FE FF FF            CMP SI,0xffff
00449D39  74 40                     JZ 0x00449d7b
00449D3B  8D 4D FC                  LEA ECX,[EBP + -0x4]
00449D3E  8B D6                     MOV EDX,ESI
00449D40  51                        PUSH ECX
00449D41  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
00449D47  81 E2 FF FF 00 00         AND EDX,0xffff
00449D4D  E8 1E 2F 26 00            CALL 0x006acc70
00449D52  83 F8 FC                  CMP EAX,-0x4
00449D55  74 30                     JZ 0x00449d87
00449D57  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00449D5A  85 C0                     TEST EAX,EAX
00449D5C  74 29                     JZ 0x00449d87
00449D5E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00449D64  68 CE 2E 00 00            PUSH 0x2ece
00449D69  68 04 60 7A 00            PUSH 0x7a6004
00449D6E  52                        PUSH EDX
00449D6F  68 06 00 FE AF            PUSH 0xaffe0006
00449D74  E8 C7 C0 25 00            CALL 0x006a5e40
00449D79  EB 0C                     JMP 0x00449d87
LAB_00449d7b:
00449D7B  A1 54 A1 7F 00            MOV EAX,[0x007fa154]
00449D80  66 8B 70 0C               MOV SI,word ptr [EAX + 0xc]
00449D84  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_00449d87:
00449D87  A1 54 A1 7F 00            MOV EAX,[0x007fa154]
00449D8C  8B D6                     MOV EDX,ESI
00449D8E  8D 4D 0C                  LEA ECX,[EBP + 0xc]
00449D91  81 E2 FF FF 00 00         AND EDX,0xffff
00449D97  51                        PUSH ECX
00449D98  52                        PUSH EDX
00449D99  50                        PUSH EAX
00449D9A  E8 A1 43 26 00            CALL 0x006ae140
00449D9F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00449DA2  56                        PUSH ESI
00449DA3  E8 40 76 FB FF            CALL 0x004013e8
00449DA8  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00449DAB  33 C0                     XOR EAX,EAX
00449DAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00449DB3  5E                        POP ESI
00449DB4  8B E5                     MOV ESP,EBP
00449DB6  5D                        POP EBP
00449DB7  C2 08 00                  RET 0x8
LAB_00449dba:
00449DBA  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00449DBD  68 08 87 7A 00            PUSH 0x7a8708
00449DC2  68 CC 4C 7A 00            PUSH 0x7a4ccc
00449DC7  56                        PUSH ESI
00449DC8  6A 00                     PUSH 0x0
00449DCA  68 D4 2E 00 00            PUSH 0x2ed4
00449DCF  68 04 60 7A 00            PUSH 0x7a6004
00449DD4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00449DDA  E8 F1 36 26 00            CALL 0x006ad4d0
00449DDF  83 C4 18                  ADD ESP,0x18
00449DE2  85 C0                     TEST EAX,EAX
00449DE4  74 01                     JZ 0x00449de7
00449DE6  CC                        INT3
LAB_00449de7:
00449DE7  68 D5 2E 00 00            PUSH 0x2ed5
00449DEC  68 04 60 7A 00            PUSH 0x7a6004
00449DF1  6A 00                     PUSH 0x0
00449DF3  56                        PUSH ESI
00449DF4  E8 47 C0 25 00            CALL 0x006a5e40
00449DF9  83 C8 FF                  OR EAX,0xffffffff
00449DFC  5E                        POP ESI
00449DFD  8B E5                     MOV ESP,EBP
00449DFF  5D                        POP EBP
00449E00  C2 08 00                  RET 0x8
