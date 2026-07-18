FUN_00716db0:
00716DB0  55                        PUSH EBP
00716DB1  8B EC                     MOV EBP,ESP
00716DB3  57                        PUSH EDI
00716DB4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00716DB7  8B 07                     MOV EAX,dword ptr [EDI]
00716DB9  85 C0                     TEST EAX,EAX
00716DBB  0F 84 8F 00 00 00         JZ 0x00716e50
00716DC1  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
00716DC4  56                        PUSH ESI
00716DC5  85 C9                     TEST ECX,ECX
00716DC7  74 3A                     JZ 0x00716e03
00716DC9  80 78 08 1D               CMP byte ptr [EAX + 0x8],0x1d
00716DCD  75 0B                     JNZ 0x00716dda
00716DCF  51                        PUSH ECX
00716DD0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00716DD3  E8 08 B3 FD FF            CALL 0x006f20e0
00716DD8  EB 1E                     JMP 0x00716df8
LAB_00716dda:
00716DDA  8B 08                     MOV ECX,dword ptr [EAX]
00716DDC  33 F6                     XOR ESI,ESI
00716DDE  85 C9                     TEST ECX,ECX
00716DE0  7E 16                     JLE 0x00716df8
LAB_00716de2:
00716DE2  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
00716DE5  8D 14 B1                  LEA EDX,[ECX + ESI*0x4]
00716DE8  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00716DEB  52                        PUSH EDX
00716DEC  E8 EF B2 FD FF            CALL 0x006f20e0
00716DF1  8B 07                     MOV EAX,dword ptr [EDI]
00716DF3  46                        INC ESI
00716DF4  3B 30                     CMP ESI,dword ptr [EAX]
00716DF6  7C EA                     JL 0x00716de2
LAB_00716df8:
00716DF8  8B 07                     MOV EAX,dword ptr [EDI]
00716DFA  83 C0 21                  ADD EAX,0x21
00716DFD  50                        PUSH EAX
00716DFE  E8 5D 42 F9 FF            CALL 0x006ab060
LAB_00716e03:
00716E03  8B 07                     MOV EAX,dword ptr [EDI]
00716E05  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
00716E08  85 C9                     TEST ECX,ECX
00716E0A  74 3D                     JZ 0x00716e49
00716E0C  80 78 08 1D               CMP byte ptr [EAX + 0x8],0x1d
00716E10  75 0E                     JNZ 0x00716e20
00716E12  8D 48 25                  LEA ECX,[EAX + 0x25]
00716E15  51                        PUSH ECX
00716E16  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00716E19  E8 C2 B2 FD FF            CALL 0x006f20e0
00716E1E  EB 1E                     JMP 0x00716e3e
LAB_00716e20:
00716E20  8B 08                     MOV ECX,dword ptr [EAX]
00716E22  33 F6                     XOR ESI,ESI
00716E24  85 C9                     TEST ECX,ECX
00716E26  7E 16                     JLE 0x00716e3e
LAB_00716e28:
00716E28  8B 50 29                  MOV EDX,dword ptr [EAX + 0x29]
00716E2B  8D 0C B2                  LEA ECX,[EDX + ESI*0x4]
00716E2E  51                        PUSH ECX
00716E2F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00716E32  E8 A9 B2 FD FF            CALL 0x006f20e0
00716E37  8B 07                     MOV EAX,dword ptr [EDI]
00716E39  46                        INC ESI
00716E3A  3B 30                     CMP ESI,dword ptr [EAX]
00716E3C  7C EA                     JL 0x00716e28
LAB_00716e3e:
00716E3E  8B 17                     MOV EDX,dword ptr [EDI]
00716E40  83 C2 29                  ADD EDX,0x29
00716E43  52                        PUSH EDX
00716E44  E8 17 42 F9 FF            CALL 0x006ab060
LAB_00716e49:
00716E49  57                        PUSH EDI
00716E4A  E8 11 42 F9 FF            CALL 0x006ab060
00716E4F  5E                        POP ESI
LAB_00716e50:
00716E50  5F                        POP EDI
00716E51  5D                        POP EBP
00716E52  C3                        RET
