FUN_00703d40:
00703D40  55                        PUSH EBP
00703D41  8B EC                     MOV EBP,ESP
00703D43  83 EC 18                  SUB ESP,0x18
00703D46  8B 45 4C                  MOV EAX,dword ptr [EBP + 0x4c]
00703D49  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
00703D4C  C1 F8 03                  SAR EAX,0x3
00703D4F  03 C8                     ADD ECX,EAX
00703D51  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00703D54  53                        PUSH EBX
00703D55  48                        DEC EAX
00703D56  56                        PUSH ESI
00703D57  57                        PUSH EDI
00703D58  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00703D62  89 4D 44                  MOV dword ptr [EBP + 0x44],ECX
00703D65  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00703D68  0F 88 DD 06 00 00         JS 0x0070444b
LAB_00703d6e:
00703D6E  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00703D71  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00703D74  83 F8 01                  CMP EAX,0x1
00703D77  75 4A                     JNZ 0x00703dc3
00703D79  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00703D7C  48                        DEC EAX
00703D7D  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00703D80  0F 88 C5 06 00 00         JS 0x0070444b
00703D86  33 C0                     XOR EAX,EAX
00703D88  8A 02                     MOV AL,byte ptr [EDX]
00703D8A  42                        INC EDX
00703D8B  85 C0                     TEST EAX,EAX
00703D8D  74 2D                     JZ 0x00703dbc
00703D8F  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
LAB_00703d92:
00703D92  A8 80                     TEST AL,0x80
00703D94  74 16                     JZ 0x00703dac
00703D96  A8 40                     TEST AL,0x40
00703D98  74 06                     JZ 0x00703da0
00703D9A  42                        INC EDX
00703D9B  83 E0 3F                  AND EAX,0x3f
00703D9E  EB 0F                     JMP 0x00703daf
LAB_00703da0:
00703DA0  8B F0                     MOV ESI,EAX
00703DA2  83 E6 3F                  AND ESI,0x3f
00703DA5  03 D6                     ADD EDX,ESI
00703DA7  83 E0 3F                  AND EAX,0x3f
00703DAA  EB 03                     JMP 0x00703daf
LAB_00703dac:
00703DAC  83 E0 7F                  AND EAX,0x7f
LAB_00703daf:
00703DAF  2B C8                     SUB ECX,EAX
00703DB1  85 C9                     TEST ECX,ECX
00703DB3  7E 07                     JLE 0x00703dbc
00703DB5  33 C0                     XOR EAX,EAX
00703DB7  8A 02                     MOV AL,byte ptr [EDX]
00703DB9  42                        INC EDX
00703DBA  EB D6                     JMP 0x00703d92
LAB_00703dbc:
00703DBC  C7 45 3C 02 00 00 00      MOV dword ptr [EBP + 0x3c],0x2
LAB_00703dc3:
00703DC3  33 C0                     XOR EAX,EAX
00703DC5  8A 02                     MOV AL,byte ptr [EDX]
00703DC7  42                        INC EDX
00703DC8  85 C0                     TEST EAX,EAX
00703DCA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00703DCD  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
00703DD0  0F 84 29 06 00 00         JZ 0x007043ff
00703DD6  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
00703DD9  BA 80 00 00 00            MOV EDX,0x80
00703DDE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00703DE1  8B 4D 4C                  MOV ECX,dword ptr [EBP + 0x4c]
00703DE4  83 E1 07                  AND ECX,0x7
00703DE7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00703DEA  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00703DED  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
00703DF0  D3 FA                     SAR EDX,CL
00703DF2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00703DF5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00703DF8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00703DFB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00703dfe:
00703DFE  A8 80                     TEST AL,0x80
00703E00  74 1D                     JZ 0x00703e1f
00703E02  83 E0 3F                  AND EAX,0x3f
00703E05  3B C7                     CMP EAX,EDI
00703E07  7F 2F                     JG 0x00703e38
00703E09  F6 45 F0 40               TEST byte ptr [EBP + -0x10],0x40
00703E0D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00703E10  74 06                     JZ 0x00703e18
00703E12  41                        INC ECX
00703E13  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00703E16  EB 0E                     JMP 0x00703e26
LAB_00703e18:
00703E18  03 C8                     ADD ECX,EAX
00703E1A  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00703E1D  EB 07                     JMP 0x00703e26
LAB_00703e1f:
00703E1F  83 E0 7F                  AND EAX,0x7f
00703E22  3B C7                     CMP EAX,EDI
00703E24  7F 12                     JG 0x00703e38
LAB_00703e26:
00703E26  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00703E29  2B F8                     SUB EDI,EAX
00703E2B  33 C0                     XOR EAX,EAX
00703E2D  8A 01                     MOV AL,byte ptr [ECX]
00703E2F  41                        INC ECX
00703E30  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00703E33  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00703E36  EB C6                     JMP 0x00703dfe
LAB_00703e38:
00703E38  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00703E3B  2B C7                     SUB EAX,EDI
00703E3D  81 E1 C0 00 00 00         AND ECX,0xc0
00703E43  80 F9 80                  CMP CL,0x80
00703E46  75 03                     JNZ 0x00703e4b
00703E48  01 7D 24                  ADD dword ptr [EBP + 0x24],EDI
LAB_00703e4b:
00703E4B  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00703E4E  3B C1                     CMP EAX,ECX
00703E50  8B F9                     MOV EDI,ECX
00703E52  0F 8F FD 02 00 00         JG 0x00704155
00703E58  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00703E5B  81 E1 80 00 00 00         AND ECX,0x80
LAB_00703e61:
00703E61  2B F8                     SUB EDI,EAX
00703E63  85 C9                     TEST ECX,ECX
00703E65  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00703E68  0F 84 71 02 00 00         JZ 0x007040df
00703E6E  F6 45 F0 40               TEST byte ptr [EBP + -0x10],0x40
00703E72  0F 84 27 01 00 00         JZ 0x00703f9f
00703E78  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00703E7B  41                        INC ECX
00703E7C  85 F6                     TEST ESI,ESI
00703E7E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00703E81  7E 5C                     JLE 0x00703edf
00703E83  83 FE 01                  CMP ESI,0x1
00703E86  75 06                     JNZ 0x00703e8e
00703E88  BE 02 00 00 00            MOV ESI,0x2
00703E8D  48                        DEC EAX
LAB_00703e8e:
00703E8E  85 C0                     TEST EAX,EAX
00703E90  0F 8E 8A 02 00 00         JLE 0x00704120
00703E96  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703E99  84 11                     TEST byte ptr [ECX],DL
00703E9B  75 1E                     JNZ 0x00703ebb
00703E9D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703EA0  33 C9                     XOR ECX,ECX
00703EA2  66 8B 0E                  MOV CX,word ptr [ESI]
00703EA5  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00703EA8  3B F1                     CMP ESI,ECX
00703EAA  77 0F                     JA 0x00703ebb
00703EAC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703EAF  33 C9                     XOR ECX,ECX
00703EB1  8A 0E                     MOV CL,byte ptr [ESI]
00703EB3  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00703EB6  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00703EB9  88 0B                     MOV byte ptr [EBX],CL
LAB_00703ebb:
00703EBB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703EBE  83 C6 02                  ADD ESI,0x2
00703EC1  43                        INC EBX
00703EC2  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00703EC5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703EC8  46                        INC ESI
00703EC9  D1 EA                     SHR EDX,0x1
00703ECB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00703ECE  75 0C                     JNZ 0x00703edc
00703ED0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703ED3  BA 80 00 00 00            MOV EDX,0x80
00703ED8  41                        INC ECX
00703ED9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00703edc:
00703EDC  33 F6                     XOR ESI,ESI
00703EDE  48                        DEC EAX
LAB_00703edf:
00703EDF  85 C0                     TEST EAX,EAX
00703EE1  0F 8E 39 02 00 00         JLE 0x00704120
LAB_00703ee7:
00703EE7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703EEA  84 11                     TEST byte ptr [ECX],DL
00703EEC  75 1E                     JNZ 0x00703f0c
00703EEE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703EF1  33 C9                     XOR ECX,ECX
00703EF3  66 8B 0E                  MOV CX,word ptr [ESI]
00703EF6  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00703EF9  3B F1                     CMP ESI,ECX
00703EFB  77 0F                     JA 0x00703f0c
00703EFD  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703F00  33 C9                     XOR ECX,ECX
00703F02  8A 0E                     MOV CL,byte ptr [ESI]
00703F04  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00703F07  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00703F0A  88 0B                     MOV byte ptr [EBX],CL
LAB_00703f0c:
00703F0C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703F0F  83 C6 02                  ADD ESI,0x2
00703F12  43                        INC EBX
00703F13  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00703F16  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703F19  46                        INC ESI
00703F1A  D1 EA                     SHR EDX,0x1
00703F1C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00703F1F  75 0C                     JNZ 0x00703f2d
00703F21  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703F24  BA 80 00 00 00            MOV EDX,0x80
00703F29  41                        INC ECX
00703F2A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00703f2d:
00703F2D  48                        DEC EAX
00703F2E  BE 01 00 00 00            MOV ESI,0x1
00703F33  85 C0                     TEST EAX,EAX
00703F35  0F 8E E5 01 00 00         JLE 0x00704120
00703F3B  48                        DEC EAX
00703F3C  BE 02 00 00 00            MOV ESI,0x2
00703F41  85 C0                     TEST EAX,EAX
00703F43  0F 8E D7 01 00 00         JLE 0x00704120
00703F49  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703F4C  84 11                     TEST byte ptr [ECX],DL
00703F4E  75 1E                     JNZ 0x00703f6e
00703F50  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703F53  33 C9                     XOR ECX,ECX
00703F55  66 8B 0E                  MOV CX,word ptr [ESI]
00703F58  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00703F5B  3B F1                     CMP ESI,ECX
00703F5D  77 0F                     JA 0x00703f6e
00703F5F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703F62  33 C9                     XOR ECX,ECX
00703F64  8A 0E                     MOV CL,byte ptr [ESI]
00703F66  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00703F69  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00703F6C  88 0B                     MOV byte ptr [EBX],CL
LAB_00703f6e:
00703F6E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703F71  83 C6 02                  ADD ESI,0x2
00703F74  43                        INC EBX
00703F75  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00703F78  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703F7B  46                        INC ESI
00703F7C  D1 EA                     SHR EDX,0x1
00703F7E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00703F81  75 0C                     JNZ 0x00703f8f
00703F83  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703F86  BA 80 00 00 00            MOV EDX,0x80
00703F8B  41                        INC ECX
00703F8C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00703f8f:
00703F8F  33 F6                     XOR ESI,ESI
00703F91  48                        DEC EAX
00703F92  85 C0                     TEST EAX,EAX
00703F94  0F 8F 4D FF FF FF         JG 0x00703ee7
00703F9A  E9 81 01 00 00            JMP 0x00704120
LAB_00703f9f:
00703F9F  85 F6                     TEST ESI,ESI
00703FA1  7E 6A                     JLE 0x0070400d
00703FA3  83 FE 01                  CMP ESI,0x1
00703FA6  75 0D                     JNZ 0x00703fb5
00703FA8  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00703FAB  46                        INC ESI
00703FAC  48                        DEC EAX
00703FAD  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00703FB0  BE 02 00 00 00            MOV ESI,0x2
LAB_00703fb5:
00703FB5  85 C0                     TEST EAX,EAX
00703FB7  0F 8E 63 01 00 00         JLE 0x00704120
00703FBD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703FC0  84 11                     TEST byte ptr [ECX],DL
00703FC2  75 1E                     JNZ 0x00703fe2
00703FC4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703FC7  33 C9                     XOR ECX,ECX
00703FC9  66 8B 0E                  MOV CX,word ptr [ESI]
00703FCC  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00703FCF  3B F1                     CMP ESI,ECX
00703FD1  77 0F                     JA 0x00703fe2
00703FD3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703FD6  33 C9                     XOR ECX,ECX
00703FD8  8A 0E                     MOV CL,byte ptr [ESI]
00703FDA  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00703FDD  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00703FE0  88 0B                     MOV byte ptr [EBX],CL
LAB_00703fe2:
00703FE2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00703FE5  83 C6 02                  ADD ESI,0x2
00703FE8  43                        INC EBX
00703FE9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00703FEC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703FEF  46                        INC ESI
00703FF0  D1 EA                     SHR EDX,0x1
00703FF2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00703FF5  75 0C                     JNZ 0x00704003
00703FF7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00703FFA  BA 80 00 00 00            MOV EDX,0x80
00703FFF  41                        INC ECX
00704000  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00704003:
00704003  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00704006  46                        INC ESI
00704007  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
0070400A  33 F6                     XOR ESI,ESI
0070400C  48                        DEC EAX
LAB_0070400d:
0070400D  85 C0                     TEST EAX,EAX
0070400F  0F 8E 0B 01 00 00         JLE 0x00704120
LAB_00704015:
00704015  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704018  84 11                     TEST byte ptr [ECX],DL
0070401A  75 1E                     JNZ 0x0070403a
0070401C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070401F  33 C9                     XOR ECX,ECX
00704021  66 8B 0E                  MOV CX,word ptr [ESI]
00704024  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704027  3B F1                     CMP ESI,ECX
00704029  77 0F                     JA 0x0070403a
0070402B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070402E  33 C9                     XOR ECX,ECX
00704030  8A 0E                     MOV CL,byte ptr [ESI]
00704032  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704035  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704038  88 0B                     MOV byte ptr [EBX],CL
LAB_0070403a:
0070403A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070403D  83 C6 02                  ADD ESI,0x2
00704040  43                        INC EBX
00704041  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00704044  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00704047  46                        INC ESI
00704048  D1 EA                     SHR EDX,0x1
0070404A  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0070404D  75 0C                     JNZ 0x0070405b
0070404F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704052  BA 80 00 00 00            MOV EDX,0x80
00704057  41                        INC ECX
00704058  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0070405b:
0070405B  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0070405E  46                        INC ESI
0070405F  48                        DEC EAX
00704060  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704063  BE 01 00 00 00            MOV ESI,0x1
00704068  85 C0                     TEST EAX,EAX
0070406A  0F 8E B0 00 00 00         JLE 0x00704120
00704070  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00704073  46                        INC ESI
00704074  48                        DEC EAX
00704075  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704078  BE 02 00 00 00            MOV ESI,0x2
0070407D  85 C0                     TEST EAX,EAX
0070407F  0F 8E 9B 00 00 00         JLE 0x00704120
00704085  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704088  84 11                     TEST byte ptr [ECX],DL
0070408A  75 1E                     JNZ 0x007040aa
0070408C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070408F  33 C9                     XOR ECX,ECX
00704091  66 8B 0E                  MOV CX,word ptr [ESI]
00704094  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704097  3B F1                     CMP ESI,ECX
00704099  77 0F                     JA 0x007040aa
0070409B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070409E  33 C9                     XOR ECX,ECX
007040A0  8A 0E                     MOV CL,byte ptr [ESI]
007040A2  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007040A5  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007040A8  88 0B                     MOV byte ptr [EBX],CL
LAB_007040aa:
007040AA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007040AD  83 C6 02                  ADD ESI,0x2
007040B0  43                        INC EBX
007040B1  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007040B4  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007040B7  46                        INC ESI
007040B8  D1 EA                     SHR EDX,0x1
007040BA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
007040BD  75 0C                     JNZ 0x007040cb
007040BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007040C2  BA 80 00 00 00            MOV EDX,0x80
007040C7  41                        INC ECX
007040C8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_007040cb:
007040CB  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
007040CE  46                        INC ESI
007040CF  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
007040D2  33 F6                     XOR ESI,ESI
007040D4  48                        DEC EAX
007040D5  85 C0                     TEST EAX,EAX
007040D7  0F 8F 38 FF FF FF         JG 0x00704015
007040DD  EB 41                     JMP 0x00704120
LAB_007040df:
007040DF  48                        DEC EAX
007040E0  78 3E                     JS 0x00704120
007040E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007040E5  40                        INC EAX
007040E6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007040E9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_007040ec:
007040EC  83 FE 01                  CMP ESI,0x1
007040EF  74 15                     JZ 0x00704106
007040F1  43                        INC EBX
007040F2  40                        INC EAX
007040F3  83 C1 02                  ADD ECX,0x2
007040F6  D1 EA                     SHR EDX,0x1
007040F8  75 0C                     JNZ 0x00704106
007040FA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
007040FD  BA 80 00 00 00            MOV EDX,0x80
00704102  47                        INC EDI
00704103  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_00704106:
00704106  46                        INC ESI
00704107  83 FE 02                  CMP ESI,0x2
0070410A  7E 02                     JLE 0x0070410e
0070410C  33 F6                     XOR ESI,ESI
LAB_0070410e:
0070410E  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00704111  4F                        DEC EDI
00704112  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00704115  75 D5                     JNZ 0x007040ec
00704117  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0070411A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070411D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00704120:
00704120  85 FF                     TEST EDI,EDI
00704122  7E 2F                     JLE 0x00704153
00704124  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
00704127  33 C0                     XOR EAX,EAX
00704129  8A 07                     MOV AL,byte ptr [EDI]
0070412B  8B C8                     MOV ECX,EAX
0070412D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00704130  81 E1 80 00 00 00         AND ECX,0x80
00704136  47                        INC EDI
00704137  85 C9                     TEST ECX,ECX
00704139  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
0070413C  74 05                     JZ 0x00704143
0070413E  83 E0 3F                  AND EAX,0x3f
00704141  EB 03                     JMP 0x00704146
LAB_00704143:
00704143  83 E0 7F                  AND EAX,0x7f
LAB_00704146:
00704146  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00704149  3B C7                     CMP EAX,EDI
0070414B  0F 8E 10 FD FF FF         JLE 0x00703e61
00704151  EB 02                     JMP 0x00704155
LAB_00704153:
00704153  33 C0                     XOR EAX,EAX
LAB_00704155:
00704155  2B C7                     SUB EAX,EDI
00704157  85 FF                     TEST EDI,EDI
00704159  0F 8E 49 02 00 00         JLE 0x007043a8
0070415F  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
00704162  F6 C1 80                  TEST CL,0x80
00704165  0F 84 3D 02 00 00         JZ 0x007043a8
0070416B  F6 C1 40                  TEST CL,0x40
0070416E  0F 84 14 01 00 00         JZ 0x00704288
00704174  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704177  41                        INC ECX
00704178  85 F6                     TEST ESI,ESI
0070417A  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
0070417D  7E 55                     JLE 0x007041d4
0070417F  83 FE 01                  CMP ESI,0x1
00704182  75 01                     JNZ 0x00704185
00704184  4F                        DEC EDI
LAB_00704185:
00704185  85 FF                     TEST EDI,EDI
00704187  0F 8E 1B 02 00 00         JLE 0x007043a8
0070418D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704190  84 11                     TEST byte ptr [ECX],DL
00704192  75 1E                     JNZ 0x007041b2
00704194  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00704197  33 C9                     XOR ECX,ECX
00704199  66 8B 0E                  MOV CX,word ptr [ESI]
0070419C  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
0070419F  3B F1                     CMP ESI,ECX
007041A1  77 0F                     JA 0x007041b2
007041A3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007041A6  33 C9                     XOR ECX,ECX
007041A8  8A 0E                     MOV CL,byte ptr [ESI]
007041AA  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007041AD  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007041B0  88 0B                     MOV byte ptr [EBX],CL
LAB_007041b2:
007041B2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007041B5  83 C6 02                  ADD ESI,0x2
007041B8  43                        INC EBX
007041B9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007041BC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007041BF  46                        INC ESI
007041C0  D1 EA                     SHR EDX,0x1
007041C2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
007041C5  75 0C                     JNZ 0x007041d3
007041C7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007041CA  BA 80 00 00 00            MOV EDX,0x80
007041CF  41                        INC ECX
007041D0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_007041d3:
007041D3  4F                        DEC EDI
LAB_007041d4:
007041D4  85 FF                     TEST EDI,EDI
007041D6  0F 8E CC 01 00 00         JLE 0x007043a8
LAB_007041dc:
007041DC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007041DF  84 11                     TEST byte ptr [ECX],DL
007041E1  75 1E                     JNZ 0x00704201
007041E3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007041E6  33 C9                     XOR ECX,ECX
007041E8  66 8B 0E                  MOV CX,word ptr [ESI]
007041EB  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
007041EE  3B F1                     CMP ESI,ECX
007041F0  77 0F                     JA 0x00704201
007041F2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007041F5  33 C9                     XOR ECX,ECX
007041F7  8A 0E                     MOV CL,byte ptr [ESI]
007041F9  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007041FC  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007041FF  88 0B                     MOV byte ptr [EBX],CL
LAB_00704201:
00704201  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00704204  83 C6 02                  ADD ESI,0x2
00704207  43                        INC EBX
00704208  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0070420B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070420E  46                        INC ESI
0070420F  D1 EA                     SHR EDX,0x1
00704211  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00704214  75 0C                     JNZ 0x00704222
00704216  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704219  BA 80 00 00 00            MOV EDX,0x80
0070421E  41                        INC ECX
0070421F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00704222:
00704222  4F                        DEC EDI
00704223  85 FF                     TEST EDI,EDI
00704225  0F 8E 7D 01 00 00         JLE 0x007043a8
0070422B  4F                        DEC EDI
0070422C  85 FF                     TEST EDI,EDI
0070422E  0F 8E 74 01 00 00         JLE 0x007043a8
00704234  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704237  84 11                     TEST byte ptr [ECX],DL
00704239  75 1E                     JNZ 0x00704259
0070423B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070423E  33 C9                     XOR ECX,ECX
00704240  66 8B 0E                  MOV CX,word ptr [ESI]
00704243  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704246  3B F1                     CMP ESI,ECX
00704248  77 0F                     JA 0x00704259
0070424A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070424D  33 C9                     XOR ECX,ECX
0070424F  8A 0E                     MOV CL,byte ptr [ESI]
00704251  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704254  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704257  88 0B                     MOV byte ptr [EBX],CL
LAB_00704259:
00704259  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070425C  83 C6 02                  ADD ESI,0x2
0070425F  43                        INC EBX
00704260  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00704263  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00704266  46                        INC ESI
00704267  D1 EA                     SHR EDX,0x1
00704269  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0070426C  75 0C                     JNZ 0x0070427a
0070426E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704271  BA 80 00 00 00            MOV EDX,0x80
00704276  41                        INC ECX
00704277  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0070427a:
0070427A  4F                        DEC EDI
0070427B  85 FF                     TEST EDI,EDI
0070427D  0F 8F 59 FF FF FF         JG 0x007041dc
00704283  E9 20 01 00 00            JMP 0x007043a8
LAB_00704288:
00704288  85 F6                     TEST ESI,ESI
0070428A  7E 63                     JLE 0x007042ef
0070428C  83 FE 01                  CMP ESI,0x1
0070428F  75 08                     JNZ 0x00704299
00704291  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00704294  46                        INC ESI
00704295  4F                        DEC EDI
00704296  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_00704299:
00704299  85 FF                     TEST EDI,EDI
0070429B  0F 8E 07 01 00 00         JLE 0x007043a8
007042A1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007042A4  84 11                     TEST byte ptr [ECX],DL
007042A6  75 1E                     JNZ 0x007042c6
007042A8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007042AB  33 C9                     XOR ECX,ECX
007042AD  66 8B 0E                  MOV CX,word ptr [ESI]
007042B0  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
007042B3  3B F1                     CMP ESI,ECX
007042B5  77 0F                     JA 0x007042c6
007042B7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007042BA  33 C9                     XOR ECX,ECX
007042BC  8A 0E                     MOV CL,byte ptr [ESI]
007042BE  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007042C1  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007042C4  88 0B                     MOV byte ptr [EBX],CL
LAB_007042c6:
007042C6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007042C9  83 C6 02                  ADD ESI,0x2
007042CC  43                        INC EBX
007042CD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007042D0  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007042D3  46                        INC ESI
007042D4  D1 EA                     SHR EDX,0x1
007042D6  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
007042D9  75 0C                     JNZ 0x007042e7
007042DB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007042DE  BA 80 00 00 00            MOV EDX,0x80
007042E3  41                        INC ECX
007042E4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_007042e7:
007042E7  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
007042EA  46                        INC ESI
007042EB  4F                        DEC EDI
007042EC  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_007042ef:
007042EF  85 FF                     TEST EDI,EDI
007042F1  0F 8E B1 00 00 00         JLE 0x007043a8
LAB_007042f7:
007042F7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007042FA  84 11                     TEST byte ptr [ECX],DL
007042FC  75 1E                     JNZ 0x0070431c
007042FE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00704301  33 C9                     XOR ECX,ECX
00704303  66 8B 0E                  MOV CX,word ptr [ESI]
00704306  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704309  3B F1                     CMP ESI,ECX
0070430B  77 0F                     JA 0x0070431c
0070430D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00704310  33 C9                     XOR ECX,ECX
00704312  8A 0E                     MOV CL,byte ptr [ESI]
00704314  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704317  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
0070431A  88 0B                     MOV byte ptr [EBX],CL
LAB_0070431c:
0070431C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070431F  83 C6 02                  ADD ESI,0x2
00704322  43                        INC EBX
00704323  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00704326  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00704329  46                        INC ESI
0070432A  D1 EA                     SHR EDX,0x1
0070432C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0070432F  75 0C                     JNZ 0x0070433d
00704331  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704334  BA 80 00 00 00            MOV EDX,0x80
00704339  41                        INC ECX
0070433A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0070433d:
0070433D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704340  41                        INC ECX
00704341  4F                        DEC EDI
00704342  85 FF                     TEST EDI,EDI
00704344  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704347  7E 5F                     JLE 0x007043a8
00704349  41                        INC ECX
0070434A  4F                        DEC EDI
0070434B  85 FF                     TEST EDI,EDI
0070434D  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704350  7E 56                     JLE 0x007043a8
00704352  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00704355  84 11                     TEST byte ptr [ECX],DL
00704357  75 1E                     JNZ 0x00704377
00704359  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070435C  33 C9                     XOR ECX,ECX
0070435E  66 8B 0E                  MOV CX,word ptr [ESI]
00704361  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704364  3B F1                     CMP ESI,ECX
00704366  77 0F                     JA 0x00704377
00704368  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070436B  33 C9                     XOR ECX,ECX
0070436D  8A 0E                     MOV CL,byte ptr [ESI]
0070436F  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704372  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704375  88 0B                     MOV byte ptr [EBX],CL
LAB_00704377:
00704377  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070437A  83 C6 02                  ADD ESI,0x2
0070437D  43                        INC EBX
0070437E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00704381  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00704384  46                        INC ESI
00704385  D1 EA                     SHR EDX,0x1
00704387  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0070438A  75 0C                     JNZ 0x00704398
0070438C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070438F  BA 80 00 00 00            MOV EDX,0x80
00704394  41                        INC ECX
00704395  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00704398:
00704398  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0070439B  41                        INC ECX
0070439C  4F                        DEC EDI
0070439D  85 FF                     TEST EDI,EDI
0070439F  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
007043A2  0F 8F 4F FF FF FF         JG 0x007042f7
LAB_007043a8:
007043A8  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
007043AB  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
007043AE  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
007043B1  2B CF                     SUB ECX,EDI
007043B3  2B CE                     SUB ECX,ESI
007043B5  3B C1                     CMP EAX,ECX
007043B7  7D 37                     JGE 0x007043f0
007043B9  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
LAB_007043bc:
007043BC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007043BF  2B C8                     SUB ECX,EAX
007043C1  81 E2 C0 00 00 00         AND EDX,0xc0
007043C7  80 FA 80                  CMP DL,0x80
007043CA  75 02                     JNZ 0x007043ce
007043CC  03 F0                     ADD ESI,EAX
LAB_007043ce:
007043CE  33 D2                     XOR EDX,EDX
007043D0  8A 16                     MOV DL,byte ptr [ESI]
007043D2  8B C2                     MOV EAX,EDX
007043D4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007043D7  24 80                     AND AL,0x80
007043D9  46                        INC ESI
007043DA  84 C0                     TEST AL,AL
007043DC  8B C2                     MOV EAX,EDX
007043DE  74 09                     JZ 0x007043e9
007043E0  83 E0 3F                  AND EAX,0x3f
007043E3  F6 C2 40                  TEST DL,0x40
007043E6  74 01                     JZ 0x007043e9
007043E8  46                        INC ESI
LAB_007043e9:
007043E9  3B C1                     CMP EAX,ECX
007043EB  7C CF                     JL 0x007043bc
007043ED  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_007043f0:
007043F0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007043F3  25 C0 00 00 00            AND EAX,0xc0
007043F8  3C 80                     CMP AL,0x80
007043FA  75 03                     JNZ 0x007043ff
007043FC  01 4D 24                  ADD dword ptr [EBP + 0x24],ECX
LAB_007043ff:
007043FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00704402  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00704405  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00704408  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0070440B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0070440E  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
00704411  03 C1                     ADD EAX,ECX
00704413  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
00704416  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00704419  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070441C  03 F8                     ADD EDI,EAX
0070441E  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00704421  03 DA                     ADD EBX,EDX
00704423  03 F1                     ADD ESI,ECX
00704425  40                        INC EAX
00704426  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00704429  83 F8 02                  CMP EAX,0x2
0070442C  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
0070442F  89 75 44                  MOV dword ptr [EBP + 0x44],ESI
00704432  89 45 3C                  MOV dword ptr [EBP + 0x3c],EAX
00704435  7E 07                     JLE 0x0070443e
00704437  C7 45 3C 00 00 00 00      MOV dword ptr [EBP + 0x3c],0x0
LAB_0070443e:
0070443E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00704441  48                        DEC EAX
00704442  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00704445  0F 89 23 F9 FF FF         JNS 0x00703d6e
LAB_0070444b:
0070444B  5F                        POP EDI
0070444C  5E                        POP ESI
0070444D  5B                        POP EBX
0070444E  8B E5                     MOV ESP,EBP
00704450  5D                        POP EBP
00704451  C2 48 00                  RET 0x48
