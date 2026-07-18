FUN_00749e34:
00749E34  53                        PUSH EBX
00749E35  55                        PUSH EBP
00749E36  56                        PUSH ESI
00749E37  57                        PUSH EDI
00749E38  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
00749E3C  8D 5F 70                  LEA EBX,[EDI + 0x70]
00749E3F  53                        PUSH EBX
00749E40  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749E46  33 ED                     XOR EBP,EBP
00749E48  39 6F 08                  CMP dword ptr [EDI + 0x8],EBP
00749E4B  74 65                     JZ 0x00749eb2
00749E4D  8B 47 6C                  MOV EAX,dword ptr [EDI + 0x6c]
00749E50  39 68 18                  CMP dword ptr [EAX + 0x18],EBP
00749E53  75 05                     JNZ 0x00749e5a
00749E55  89 6F 08                  MOV dword ptr [EDI + 0x8],EBP
00749E58  EB 58                     JMP 0x00749eb2
LAB_00749e5a:
00749E5A  57                        PUSH EDI
00749E5B  E8 0A D2 FF FF            CALL 0x0074706a
00749E60  8B 47 6C                  MOV EAX,dword ptr [EDI + 0x6c]
00749E63  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
00749E69  3B C5                     CMP EAX,EBP
00749E6B  74 06                     JZ 0x00749e73
00749E6D  8B 08                     MOV ECX,dword ptr [EAX]
00749E6F  50                        PUSH EAX
00749E70  FF 51 18                  CALL dword ptr [ECX + 0x18]
LAB_00749e73:
00749E73  8D 77 F4                  LEA ESI,[EDI + -0xc]
00749E76  6A 01                     PUSH 0x1
00749E78  8B CE                     MOV ECX,ESI
00749E7A  E8 9E 09 00 00            CALL 0x0074a81d
00749E7F  8B 06                     MOV EAX,dword ptr [ESI]
00749E81  8B CE                     MOV ECX,ESI
00749E83  FF 90 80 00 00 00         CALL dword ptr [EAX + 0x80]
00749E89  8B 06                     MOV EAX,dword ptr [ESI]
00749E8B  55                        PUSH EBP
00749E8C  8B CE                     MOV ECX,ESI
00749E8E  FF 50 28                  CALL dword ptr [EAX + 0x28]
00749E91  8B 06                     MOV EAX,dword ptr [ESI]
00749E93  8B CE                     MOV ECX,ESI
00749E95  FF 50 64                  CALL dword ptr [EAX + 0x64]
00749E98  8B 06                     MOV EAX,dword ptr [ESI]
00749E9A  8B CE                     MOV ECX,ESI
00749E9C  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
00749E9F  FF 77 50                  PUSH dword ptr [EDI + 0x50]
00749EA2  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
00749EA8  8B CE                     MOV ECX,ESI
00749EAA  E8 B0 FE FF FF            CALL 0x00749d5f
00749EAF  89 6F 54                  MOV dword ptr [EDI + 0x54],EBP
LAB_00749eb2:
00749EB2  53                        PUSH EBX
00749EB3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749EB9  5F                        POP EDI
00749EBA  5E                        POP ESI
00749EBB  5D                        POP EBP
00749EBC  33 C0                     XOR EAX,EAX
00749EBE  5B                        POP EBX
00749EBF  C2 04 00                  RET 0x4
