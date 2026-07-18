ccFntTy::WrArr:
00711DA0  55                        PUSH EBP
00711DA1  8B EC                     MOV EBP,ESP
00711DA3  83 EC 58                  SUB ESP,0x58
00711DA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711DA9  53                        PUSH EBX
00711DAA  56                        PUSH ESI
00711DAB  57                        PUSH EDI
00711DAC  85 C0                     TEST EAX,EAX
00711DAE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00711DB1  75 0B                     JNZ 0x00711dbe
00711DB3  33 C0                     XOR EAX,EAX
00711DB5  5F                        POP EDI
00711DB6  5E                        POP ESI
00711DB7  5B                        POP EBX
00711DB8  8B E5                     MOV ESP,EBP
00711DBA  5D                        POP EBP
00711DBB  C2 10 00                  RET 0x10
LAB_00711dbe:
00711DBE  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00711DC3  8D 55 AC                  LEA EDX,[EBP + -0x54]
00711DC6  8D 4D A8                  LEA ECX,[EBP + -0x58]
00711DC9  6A 00                     PUSH 0x0
00711DCB  52                        PUSH EDX
00711DCC  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00711DCF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00711DD5  E8 16 BA 01 00            CALL 0x0072d7f0
00711DDA  8B F0                     MOV ESI,EAX
00711DDC  83 C4 08                  ADD ESP,0x8
00711DDF  85 F6                     TEST ESI,ESI
00711DE1  0F 85 36 01 00 00         JNZ 0x00711f1d
00711DE7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00711DEA  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00711DED  57                        PUSH EDI
00711DEE  8B CE                     MOV ECX,ESI
00711DF0  E8 3B F7 FF FF            CALL 0x00711530
00711DF5  8B D8                     MOV EBX,EAX
00711DF7  57                        PUSH EDI
00711DF8  8B CE                     MOV ECX,ESI
00711DFA  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00711DFD  E8 7E F7 FF FF            CALL 0x00711580
00711E02  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00711E05  8B D0                     MOV EDX,EAX
00711E07  85 C9                     TEST ECX,ECX
00711E09  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00711E0C  7D 19                     JGE 0x00711e27
00711E0E  83 F9 FD                  CMP ECX,-0x3
00711E11  74 14                     JZ 0x00711e27
00711E13  83 F9 FE                  CMP ECX,-0x2
00711E16  74 0F                     JZ 0x00711e27
00711E18  3B 5E 68                  CMP EBX,dword ptr [ESI + 0x68]
00711E1B  7E 0A                     JLE 0x00711e27
00711E1D  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
00711E24  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_00711e27:
00711E27  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00711E2A  85 C0                     TEST EAX,EAX
00711E2C  7D 0C                     JGE 0x00711e3a
00711E2E  3B 56 6C                  CMP EDX,dword ptr [ESI + 0x6c]
00711E31  7E 07                     JLE 0x00711e3a
00711E33  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
LAB_00711e3a:
00711E3A  85 C9                     TEST ECX,ECX
00711E3C  7D 21                     JGE 0x00711e5f
00711E3E  83 F9 FD                  CMP ECX,-0x3
00711E41  74 1C                     JZ 0x00711e5f
00711E43  83 F9 FE                  CMP ECX,-0x2
00711E46  74 17                     JZ 0x00711e5f
00711E48  83 F9 FC                  CMP ECX,-0x4
00711E4B  74 12                     JZ 0x00711e5f
00711E4D  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00711E50  2B C3                     SUB EAX,EBX
00711E52  99                        CDQ
00711E53  2B C2                     SUB EAX,EDX
00711E55  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00711E58  D1 F8                     SAR EAX,0x1
00711E5A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00711E5D  EB 03                     JMP 0x00711e62
LAB_00711e5f:
00711E5F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00711e62:
00711E62  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00711E65  85 C0                     TEST EAX,EAX
00711E67  7D 0F                     JGE 0x00711e78
00711E69  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00711E6C  2B C2                     SUB EAX,EDX
00711E6E  99                        CDQ
00711E6F  2B C2                     SUB EAX,EDX
00711E71  D1 F8                     SAR EAX,0x1
00711E73  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00711E76  EB 03                     JMP 0x00711e7b
LAB_00711e78:
00711E78  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00711e7b:
00711E7B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00711E7E  33 DB                     XOR EBX,EBX
00711E80  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
00711E83  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
00711E86  89 5E 4C                  MOV dword ptr [ESI + 0x4c],EBX
00711E89  8B 17                     MOV EDX,dword ptr [EDI]
00711E8B  85 D2                     TEST EDX,EDX
00711E8D  74 73                     JZ 0x00711f02
00711E8F  8B D7                     MOV EDX,EDI
00711E91  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00711E94  EB 06                     JMP 0x00711e9c
LAB_00711e96:
00711E96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00711E99  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00711e9c:
00711E9C  8B 3A                     MOV EDI,dword ptr [EDX]
00711E9E  83 F9 FC                  CMP ECX,-0x4
00711EA1  74 19                     JZ 0x00711ebc
00711EA3  83 F9 FE                  CMP ECX,-0x2
00711EA6  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00711EA9  51                        PUSH ECX
00711EAA  74 09                     JZ 0x00711eb5
00711EAC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00711EAF  03 C3                     ADD EAX,EBX
00711EB1  50                        PUSH EAX
00711EB2  52                        PUSH EDX
00711EB3  EB 28                     JMP 0x00711edd
LAB_00711eb5:
00711EB5  03 C3                     ADD EAX,EBX
00711EB7  50                        PUSH EAX
00711EB8  6A FF                     PUSH -0x1
00711EBA  EB 21                     JMP 0x00711edd
LAB_00711ebc:
00711EBC  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
00711EBF  03 C3                     ADD EAX,EBX
00711EC1  52                        PUSH EDX
00711EC2  50                        PUSH EAX
00711EC3  57                        PUSH EDI
00711EC4  8B CE                     MOV ECX,ESI
00711EC6  E8 45 F2 FF FF            CALL 0x00711110
00711ECB  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00711ECE  8B C8                     MOV ECX,EAX
00711ED0  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00711ED3  03 C2                     ADD EAX,EDX
00711ED5  99                        CDQ
00711ED6  2B C2                     SUB EAX,EDX
00711ED8  D1 F8                     SAR EAX,0x1
00711EDA  2B C1                     SUB EAX,ECX
00711EDC  50                        PUSH EAX
LAB_00711edd:
00711EDD  57                        PUSH EDI
00711EDE  8B CE                     MOV ECX,ESI
00711EE0  E8 DB FA FF FF            CALL 0x007119c0
00711EE5  57                        PUSH EDI
00711EE6  8B CE                     MOV ECX,ESI
00711EE8  E8 D3 F2 FF FF            CALL 0x007111c0
00711EED  03 46 5C                  ADD EAX,dword ptr [ESI + 0x5c]
00711EF0  03 D8                     ADD EBX,EAX
00711EF2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00711EF5  83 C0 04                  ADD EAX,0x4
00711EF8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00711EFB  8B D0                     MOV EDX,EAX
00711EFD  83 38 00                  CMP dword ptr [EAX],0x0
00711F00  75 94                     JNZ 0x00711e96
LAB_00711f02:
00711F02  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00711F05  C7 46 4C 01 00 00 00      MOV dword ptr [ESI + 0x4c],0x1
00711F0C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00711F12  33 C0                     XOR EAX,EAX
00711F14  5F                        POP EDI
00711F15  5E                        POP ESI
00711F16  5B                        POP EBX
00711F17  8B E5                     MOV ESP,EBP
00711F19  5D                        POP EBP
00711F1A  C2 10 00                  RET 0x10
LAB_00711f1d:
00711F1D  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00711F20  68 B8 02 7F 00            PUSH 0x7f02b8
00711F25  68 CC 4C 7A 00            PUSH 0x7a4ccc
00711F2A  56                        PUSH ESI
00711F2B  6A 00                     PUSH 0x0
00711F2D  68 1C 07 00 00            PUSH 0x71c
00711F32  68 90 01 7F 00            PUSH 0x7f0190
00711F37  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00711F3C  E8 8F B5 F9 FF            CALL 0x006ad4d0
00711F41  83 C4 18                  ADD ESP,0x18
00711F44  85 C0                     TEST EAX,EAX
00711F46  74 01                     JZ 0x00711f49
00711F48  CC                        INT3
LAB_00711f49:
00711F49  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00711F4C  68 20 07 00 00            PUSH 0x720
00711F51  68 90 01 7F 00            PUSH 0x7f0190
00711F56  6A 00                     PUSH 0x0
00711F58  56                        PUSH ESI
00711F59  C7 41 4C 01 00 00 00      MOV dword ptr [ECX + 0x4c],0x1
00711F60  E8 DB 3E F9 FF            CALL 0x006a5e40
00711F65  8B C6                     MOV EAX,ESI
00711F67  5F                        POP EDI
00711F68  5E                        POP ESI
00711F69  5B                        POP EBX
00711F6A  8B E5                     MOV ESP,EBP
00711F6C  5D                        POP EBP
00711F6D  C2 10 00                  RET 0x10
