FUN_00753920:
00753920  55                        PUSH EBP
00753921  8B EC                     MOV EBP,ESP
00753923  83 EC 4C                  SUB ESP,0x4c
00753926  53                        PUSH EBX
00753927  56                        PUSH ESI
00753928  57                        PUSH EDI
00753929  6A 28                     PUSH 0x28
0075392B  E8 E0 72 F5 FF            CALL 0x006aac10
00753930  8B F0                     MOV ESI,EAX
00753932  85 F6                     TEST ESI,ESI
00753934  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00753937  75 09                     JNZ 0x00753942
00753939  5F                        POP EDI
0075393A  5E                        POP ESI
0075393B  5B                        POP EBX
0075393C  8B E5                     MOV ESP,EBP
0075393E  5D                        POP EBP
0075393F  C2 10 00                  RET 0x10
LAB_00753942:
00753942  A1 38 2C 7F 00            MOV EAX,[0x007f2c38]
00753947  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075394A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075394D  89 06                     MOV dword ptr [ESI],EAX
0075394F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753952  51                        PUSH ECX
00753953  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753956  52                        PUSH EDX
00753957  50                        PUSH EAX
00753958  51                        PUSH ECX
00753959  56                        PUSH ESI
0075395A  C7 46 04 01 01 00 00      MOV dword ptr [ESI + 0x4],0x101
00753961  E8 1A 18 00 00            CALL 0x00755180
00753966  8B F8                     MOV EDI,EAX
00753968  85 FF                     TEST EDI,EDI
0075396A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075396D  0F 85 39 01 00 00         JNZ 0x00753aac
00753973  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00753979  8D 4D B8                  LEA ECX,[EBP + -0x48]
0075397C  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075397F  57                        PUSH EDI
00753980  51                        PUSH ECX
00753981  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00753984  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00753989  E8 62 9E FD FF            CALL 0x0072d7f0
0075398E  83 C4 08                  ADD ESP,0x8
00753991  85 C0                     TEST EAX,EAX
00753993  0F 85 FE 00 00 00         JNZ 0x00753a97
00753999  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075399C  6A 20                     PUSH 0x20
0075399E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007539A1  8D 50 10                  LEA EDX,[EAX + 0x10]
007539A4  52                        PUSH EDX
007539A5  57                        PUSH EDI
007539A6  50                        PUSH EAX
007539A7  E8 44 10 F8 FF            CALL 0x006d49f0
007539AC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007539AF  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
007539B2  8D 48 10                  LEA ECX,[EAX + 0x10]
007539B5  3B 16                     CMP EDX,dword ptr [ESI]
007539B7  74 0A                     JZ 0x007539c3
007539B9  BF FB FF FF FF            MOV EDI,0xfffffffb
007539BE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
007539C1  EB 1A                     JMP 0x007539dd
LAB_007539c3:
007539C3  66 8B 48 14               MOV CX,word ptr [EAX + 0x14]
007539C7  66 33 4E 04               XOR CX,word ptr [ESI + 0x4]
007539CB  F6 C5 FF                  TEST CH,0xff
007539CE  74 0A                     JZ 0x007539da
007539D0  BF CB FF FF FF            MOV EDI,0xffffffcb
007539D5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
007539D8  EB 03                     JMP 0x007539dd
LAB_007539da:
007539DA  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_007539dd:
007539DD  85 FF                     TEST EDI,EDI
007539DF  0F 85 A7 00 00 00         JNZ 0x00753a8c
007539E5  8B 48 22                  MOV ECX,dword ptr [EAX + 0x22]
007539E8  85 C9                     TEST ECX,ECX
007539EA  75 07                     JNZ 0x007539f3
007539EC  C7 40 22 20 00 00 00      MOV dword ptr [EAX + 0x22],0x20
LAB_007539f3:
007539F3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007539F6  8B 58 22                  MOV EBX,dword ptr [EAX + 0x22]
007539F9  83 FB FF                  CMP EBX,-0x1
007539FC  75 6B                     JNZ 0x00753a69
007539FE  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00753A01  BB 20 00 00 00            MOV EBX,0x20
00753A06  83 C2 04                  ADD EDX,0x4
00753A09  53                        PUSH EBX
00753A0A  52                        PUSH EDX
00753A0B  50                        PUSH EAX
00753A0C  E8 1F 19 00 00            CALL 0x00755330
00753A11  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00753A14  53                        PUSH EBX
00753A15  89 41 26                  MOV dword ptr [ECX + 0x26],EAX
00753A18  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00753A1B  8B 50 4C                  MOV EDX,dword ptr [EAX + 0x4c]
00753A1E  03 D3                     ADD EDX,EBX
00753A20  52                        PUSH EDX
00753A21  53                        PUSH EBX
00753A22  50                        PUSH EAX
00753A23  E8 C8 0F F8 FF            CALL 0x006d49f0
00753A28  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00753A2B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753A2E  50                        PUSH EAX
00753A2F  8B 51 4C                  MOV EDX,dword ptr [ECX + 0x4c]
00753A32  52                        PUSH EDX
00753A33  E8 88 16 00 00            CALL 0x007550c0
00753A38  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00753A3B  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
00753A3E  0F BF 51 2E               MOVSX EDX,word ptr [ECX + 0x2e]
00753A42  52                        PUSH EDX
00753A43  53                        PUSH EBX
00753A44  56                        PUSH ESI
00753A45  E8 86 15 00 00            CALL 0x00754fd0
00753A4A  8B F8                     MOV EDI,EAX
00753A4C  85 FF                     TEST EDI,EDI
00753A4E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00753A51  75 59                     JNZ 0x00753aac
00753A53  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00753A56  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00753A59  53                        PUSH EBX
00753A5A  50                        PUSH EAX
00753A5B  51                        PUSH ECX
00753A5C  E8 6F 18 00 00            CALL 0x007552d0
00753A61  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00753A64  89 42 22                  MOV dword ptr [EDX + 0x22],EAX
00753A67  EB 10                     JMP 0x00753a79
LAB_00753a69:
00753A69  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
00753A6C  6A 20                     PUSH 0x20
00753A6E  83 C1 20                  ADD ECX,0x20
00753A71  51                        PUSH ECX
00753A72  53                        PUSH EBX
00753A73  50                        PUSH EAX
00753A74  E8 77 0F F8 FF            CALL 0x006d49f0
LAB_00753a79:
00753A79  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00753A7C  6A 00                     PUSH 0x0
00753A7E  6A 00                     PUSH 0x0
00753A80  56                        PUSH ESI
00753A81  8B 42 4C                  MOV EAX,dword ptr [EDX + 0x4c]
00753A84  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
00753A87  E8 94 D4 FF FF            CALL 0x00750f20
LAB_00753a8c:
00753A8C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00753A8F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00753A95  EB 11                     JMP 0x00753aa8
LAB_00753a97:
00753A97  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00753A9A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00753A9D  8B F8                     MOV EDI,EAX
00753A9F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00753AA5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00753aa8:
00753AA8  85 FF                     TEST EDI,EDI
00753AAA  74 24                     JZ 0x00753ad0
LAB_00753aac:
00753AAC  56                        PUSH ESI
00753AAD  E8 EE F7 FF FF            CALL 0x007532a0
00753AB2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00753AB7  6A 4E                     PUSH 0x4e
00753AB9  68 40 2C 7F 00            PUSH 0x7f2c40
00753ABE  50                        PUSH EAX
00753ABF  57                        PUSH EDI
00753AC0  E8 7B 23 F5 FF            CALL 0x006a5e40
00753AC5  33 C0                     XOR EAX,EAX
00753AC7  5F                        POP EDI
00753AC8  5E                        POP ESI
00753AC9  5B                        POP EBX
00753ACA  8B E5                     MOV ESP,EBP
00753ACC  5D                        POP EBP
00753ACD  C2 10 00                  RET 0x10
LAB_00753ad0:
00753AD0  8B C6                     MOV EAX,ESI
00753AD2  5F                        POP EDI
00753AD3  5E                        POP ESI
00753AD4  5B                        POP EBX
00753AD5  8B E5                     MOV ESP,EBP
00753AD7  5D                        POP EBP
00753AD8  C2 10 00                  RET 0x10
