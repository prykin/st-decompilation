FUN_005c6d40:
005C6D40  55                        PUSH EBP
005C6D41  8B EC                     MOV EBP,ESP
005C6D43  83 EC 50                  SUB ESP,0x50
005C6D46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C6D4B  53                        PUSH EBX
005C6D4C  56                        PUSH ESI
005C6D4D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005C6D50  33 DB                     XOR EBX,EBX
005C6D52  57                        PUSH EDI
005C6D53  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005C6D56  8D 4D B0                  LEA ECX,[EBP + -0x50]
005C6D59  53                        PUSH EBX
005C6D5A  52                        PUSH EDX
005C6D5B  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005C6D5E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C6D64  E8 87 6A 16 00            CALL 0x0072d7f0
005C6D69  8B F0                     MOV ESI,EAX
005C6D6B  83 C4 08                  ADD ESP,0x8
005C6D6E  3B F3                     CMP ESI,EBX
005C6D70  0F 85 FD 07 00 00         JNZ 0x005c7573
005C6D76  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C6D7B  3B C3                     CMP EAX,EBX
005C6D7D  74 28                     JZ 0x005c6da7
005C6D7F  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005C6D85  74 14                     JZ 0x005c6d9b
005C6D87  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C6D8A  83 F9 FF                  CMP ECX,-0x1
005C6D8D  74 18                     JZ 0x005c6da7
005C6D8F  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C6D92  51                        PUSH ECX
005C6D93  50                        PUSH EAX
005C6D94  E8 57 CD 0E 00            CALL 0x006b3af0
005C6D99  EB 0C                     JMP 0x005c6da7
LAB_005c6d9b:
005C6D9B  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C6DA1  51                        PUSH ECX
005C6DA2  E8 69 1D 0F 00            CALL 0x006b8b10
LAB_005c6da7:
005C6DA7  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005C6DAA  8B 86 5D 21 00 00         MOV EAX,dword ptr [ESI + 0x215d]
005C6DB0  3B C3                     CMP EAX,EBX
005C6DB2  74 09                     JZ 0x005c6dbd
005C6DB4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C6DB7  50                        PUSH EAX
005C6DB8  E8 F3 E8 11 00            CALL 0x006e56b0
LAB_005c6dbd:
005C6DBD  89 9E 5D 21 00 00         MOV dword ptr [ESI + 0x215d],EBX
005C6DC3  8D BE 8C 1F 00 00         LEA EDI,[ESI + 0x1f8c]
005C6DC9  C7 45 F8 0A 00 00 00      MOV dword ptr [EBP + -0x8],0xa
LAB_005c6dd0:
005C6DD0  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
LAB_005c6dd7:
005C6DD7  8B 07                     MOV EAX,dword ptr [EDI]
005C6DD9  3B C3                     CMP EAX,EBX
005C6DDB  74 0B                     JZ 0x005c6de8
005C6DDD  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C6DE0  50                        PUSH EAX
005C6DE1  E8 CA E8 11 00            CALL 0x006e56b0
005C6DE6  89 1F                     MOV dword ptr [EDI],EBX
LAB_005c6de8:
005C6DE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C6DEB  83 C7 04                  ADD EDI,0x4
005C6DEE  48                        DEC EAX
005C6DEF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C6DF2  75 E3                     JNZ 0x005c6dd7
005C6DF4  8B 86 1D 21 00 00         MOV EAX,dword ptr [ESI + 0x211d]
005C6DFA  3B C3                     CMP EAX,EBX
005C6DFC  74 0F                     JZ 0x005c6e0d
005C6DFE  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C6E01  50                        PUSH EAX
005C6E02  E8 A9 E8 11 00            CALL 0x006e56b0
005C6E07  89 9E 1D 21 00 00         MOV dword ptr [ESI + 0x211d],EBX
LAB_005c6e0d:
005C6E0D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C6E10  48                        DEC EAX
005C6E11  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005C6E14  75 BA                     JNZ 0x005c6dd0
005C6E16  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C6E1C  3B CB                     CMP ECX,EBX
005C6E1E  74 1A                     JZ 0x005c6e3a
005C6E20  E8 65 A4 E3 FF            CALL 0x0040128a
005C6E25  8B 96 E8 21 00 00         MOV EDX,dword ptr [ESI + 0x21e8]
005C6E2B  52                        PUSH EDX
005C6E2C  E8 7F 74 16 00            CALL 0x0072e2b0
005C6E31  83 C4 04                  ADD ESP,0x4
005C6E34  89 9E E8 21 00 00         MOV dword ptr [ESI + 0x21e8],EBX
LAB_005c6e3a:
005C6E3A  6A 33                     PUSH 0x33
005C6E3C  E8 EF 76 16 00            CALL 0x0072e530
005C6E41  83 C4 04                  ADD ESP,0x4
005C6E44  3B C3                     CMP EAX,EBX
005C6E46  BF 01 00 00 00            MOV EDI,0x1
005C6E4B  74 30                     JZ 0x005c6e7d
005C6E4D  83 C9 FF                  OR ECX,0xffffffff
005C6E50  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C6E54  88 18                     MOV byte ptr [EAX],BL
005C6E56  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005C6E59  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C6E5D  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005C6E60  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005C6E63  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005C6E66  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005C6E69  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005C6E6C  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C6E6F  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005C6E72  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005C6E75  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005C6E78  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005C6E7B  EB 02                     JMP 0x005c6e7f
LAB_005c6e7d:
005C6E7D  33 C0                     XOR EAX,EAX
LAB_005c6e7f:
005C6E7F  3B C3                     CMP EAX,EBX
005C6E81  89 86 E8 21 00 00         MOV dword ptr [ESI + 0x21e8],EAX
005C6E87  0F 84 B6 00 00 00         JZ 0x005c6f43
005C6E8D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C6E92  53                        PUSH EBX
005C6E93  57                        PUSH EDI
005C6E94  6A 10                     PUSH 0x10
005C6E96  57                        PUSH EDI
005C6E97  68 04 01 00 00            PUSH 0x104
005C6E9C  68 05 02 00 00            PUSH 0x205
005C6EA1  6A 38                     PUSH 0x38
005C6EA3  68 12 01 00 00            PUSH 0x112
005C6EA8  50                        PUSH EAX
005C6EA9  E8 42 8B 0F 00            CALL 0x006bf9f0
005C6EAE  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C6EB4  50                        PUSH EAX
005C6EB5  6A 38                     PUSH 0x38
005C6EB7  68 12 01 00 00            PUSH 0x112
005C6EBC  6A 02                     PUSH 0x2
005C6EBE  E8 DA D6 E3 FF            CALL 0x0040459d
005C6EC3  85 C0                     TEST EAX,EAX
005C6EC5  74 35                     JZ 0x005c6efc
005C6EC7  8B 86 E8 21 00 00         MOV EAX,dword ptr [ESI + 0x21e8]
005C6ECD  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005C6ED0  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C6ED7  8B 86 E8 21 00 00         MOV EAX,dword ptr [ESI + 0x21e8]
005C6EDD  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C6EE0  3B C3                     CMP EAX,EBX
005C6EE2  7C 0D                     JL 0x005c6ef1
005C6EE4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C6EEA  50                        PUSH EAX
005C6EEB  51                        PUSH ECX
005C6EEC  E8 3F C5 0E 00            CALL 0x006b3430
LAB_005c6ef1:
005C6EF1  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C6EF7  E8 F5 E6 E3 FF            CALL 0x004055f1
LAB_005c6efc:
005C6EFC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C6F02  68 04 01 00 00            PUSH 0x104
005C6F07  68 05 02 00 00            PUSH 0x205
005C6F0C  6A 38                     PUSH 0x38
005C6F0E  68 12 01 00 00            PUSH 0x112
005C6F13  52                        PUSH EDX
005C6F14  E8 67 F0 0E 00            CALL 0x006b5f80
005C6F19  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C6F1E  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005C6F21  51                        PUSH ECX
005C6F22  57                        PUSH EDI
005C6F23  68 04 01 00 00            PUSH 0x104
005C6F28  68 05 02 00 00            PUSH 0x205
005C6F2D  6A 38                     PUSH 0x38
005C6F2F  68 12 01 00 00            PUSH 0x112
005C6F34  6A 38                     PUSH 0x38
005C6F36  68 12 01 00 00            PUSH 0x112
005C6F3B  E8 58 B3 E3 FF            CALL 0x00402298
005C6F40  83 C4 20                  ADD ESP,0x20
LAB_005c6f43:
005C6F43  8B 86 6F 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c6f]
005C6F49  83 F8 FF                  CMP EAX,-0x1
005C6F4C  74 0D                     JZ 0x005c6f5b
005C6F4E  8B 96 B3 1C 00 00         MOV EDX,dword ptr [ESI + 0x1cb3]
005C6F54  50                        PUSH EAX
005C6F55  52                        PUSH EDX
005C6F56  E8 95 CB 0E 00            CALL 0x006b3af0
LAB_005c6f5b:
005C6F5B  8B 86 00 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d00]
005C6F61  83 F8 FF                  CMP EAX,-0x1
005C6F64  74 0D                     JZ 0x005c6f73
005C6F66  50                        PUSH EAX
005C6F67  8B 86 44 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d44]
005C6F6D  50                        PUSH EAX
005C6F6E  E8 7D CB 0E 00            CALL 0x006b3af0
LAB_005c6f73:
005C6F73  8B 86 91 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d91]
005C6F79  83 F8 FF                  CMP EAX,-0x1
005C6F7C  74 0D                     JZ 0x005c6f8b
005C6F7E  8B 8E D5 1D 00 00         MOV ECX,dword ptr [ESI + 0x1dd5]
005C6F84  50                        PUSH EAX
005C6F85  51                        PUSH ECX
005C6F86  E8 65 CB 0E 00            CALL 0x006b3af0
LAB_005c6f8b:
005C6F8B  8D BE CC 20 00 00         LEA EDI,[ESI + 0x20cc]
005C6F91  C7 45 F8 0A 00 00 00      MOV dword ptr [EBP + -0x8],0xa
LAB_005c6f98:
005C6F98  8B 17                     MOV EDX,dword ptr [EDI]
005C6F9A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C6F9F  52                        PUSH EDX
005C6FA0  50                        PUSH EAX
005C6FA1  E8 4A CB 0E 00            CALL 0x006b3af0
005C6FA6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C6FA9  83 C7 04                  ADD EDI,0x4
005C6FAC  48                        DEC EAX
005C6FAD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005C6FB0  75 E6                     JNZ 0x005c6f98
005C6FB2  8D BE 25 21 00 00         LEA EDI,[ESI + 0x2125]
005C6FB8  C7 45 F8 0E 00 00 00      MOV dword ptr [EBP + -0x8],0xe
LAB_005c6fbf:
005C6FBF  8B 07                     MOV EAX,dword ptr [EDI]
005C6FC1  3B C3                     CMP EAX,EBX
005C6FC3  74 0B                     JZ 0x005c6fd0
005C6FC5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C6FC8  50                        PUSH EAX
005C6FC9  E8 E2 E6 11 00            CALL 0x006e56b0
005C6FCE  89 1F                     MOV dword ptr [EDI],EBX
LAB_005c6fd0:
005C6FD0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C6FD3  83 C7 04                  ADD EDI,0x4
005C6FD6  48                        DEC EAX
005C6FD7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005C6FDA  75 E3                     JNZ 0x005c6fbf
005C6FDC  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C6FE2  3B CB                     CMP ECX,EBX
005C6FE4  74 1A                     JZ 0x005c7000
005C6FE6  E8 9F A2 E3 FF            CALL 0x0040128a
005C6FEB  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C6FF1  51                        PUSH ECX
005C6FF2  E8 B9 72 16 00            CALL 0x0072e2b0
005C6FF7  83 C4 04                  ADD ESP,0x4
005C6FFA  89 9E F4 21 00 00         MOV dword ptr [ESI + 0x21f4],EBX
LAB_005c7000:
005C7000  6A 33                     PUSH 0x33
005C7002  E8 29 75 16 00            CALL 0x0072e530
005C7007  83 C4 04                  ADD ESP,0x4
005C700A  3B C3                     CMP EAX,EBX
005C700C  74 35                     JZ 0x005c7043
005C700E  83 C9 FF                  OR ECX,0xffffffff
005C7011  BF 01 00 00 00            MOV EDI,0x1
005C7016  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C701A  88 18                     MOV byte ptr [EAX],BL
005C701C  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005C701F  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C7023  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005C7026  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005C7029  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005C702C  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005C702F  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005C7032  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C7035  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005C7038  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005C703B  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005C703E  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005C7041  EB 07                     JMP 0x005c704a
LAB_005c7043:
005C7043  33 C0                     XOR EAX,EAX
005C7045  BF 01 00 00 00            MOV EDI,0x1
LAB_005c704a:
005C704A  3B C3                     CMP EAX,EBX
005C704C  89 86 F4 21 00 00         MOV dword ptr [ESI + 0x21f4],EAX
005C7052  0F 84 C6 00 00 00         JZ 0x005c711e
005C7058  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C705E  53                        PUSH EBX
005C705F  57                        PUSH EDI
005C7060  6A 10                     PUSH 0x10
005C7062  57                        PUSH EDI
005C7063  68 8C 00 00 00            PUSH 0x8c
005C7068  68 05 02 00 00            PUSH 0x205
005C706D  68 49 01 00 00            PUSH 0x149
005C7072  68 12 01 00 00            PUSH 0x112
005C7077  52                        PUSH EDX
005C7078  E8 73 89 0F 00            CALL 0x006bf9f0
005C707D  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C7083  50                        PUSH EAX
005C7084  68 49 01 00 00            PUSH 0x149
005C7089  68 12 01 00 00            PUSH 0x112
005C708E  6A 02                     PUSH 0x2
005C7090  E8 08 D5 E3 FF            CALL 0x0040459d
005C7095  85 C0                     TEST EAX,EAX
005C7097  74 34                     JZ 0x005c70cd
005C7099  8B 86 F4 21 00 00         MOV EAX,dword ptr [ESI + 0x21f4]
005C709F  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005C70A2  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C70A9  8B 86 F4 21 00 00         MOV EAX,dword ptr [ESI + 0x21f4]
005C70AF  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C70B2  3B C3                     CMP EAX,EBX
005C70B4  7C 0C                     JL 0x005c70c2
005C70B6  50                        PUSH EAX
005C70B7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C70BC  50                        PUSH EAX
005C70BD  E8 6E C3 0E 00            CALL 0x006b3430
LAB_005c70c2:
005C70C2  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C70C8  E8 24 E5 E3 FF            CALL 0x004055f1
LAB_005c70cd:
005C70CD  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C70D3  68 8C 00 00 00            PUSH 0x8c
005C70D8  68 05 02 00 00            PUSH 0x205
005C70DD  68 49 01 00 00            PUSH 0x149
005C70E2  68 12 01 00 00            PUSH 0x112
005C70E7  51                        PUSH ECX
005C70E8  E8 93 EE 0E 00            CALL 0x006b5f80
005C70ED  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C70F3  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005C70F6  50                        PUSH EAX
005C70F7  57                        PUSH EDI
005C70F8  68 8C 00 00 00            PUSH 0x8c
005C70FD  68 05 02 00 00            PUSH 0x205
005C7102  68 49 01 00 00            PUSH 0x149
005C7107  68 12 01 00 00            PUSH 0x112
005C710C  68 49 01 00 00            PUSH 0x149
005C7111  68 12 01 00 00            PUSH 0x112
005C7116  E8 7D B1 E3 FF            CALL 0x00402298
005C711B  83 C4 20                  ADD ESP,0x20
LAB_005c711e:
005C711E  8B 8E 22 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e22]
005C7124  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C712A  51                        PUSH ECX
005C712B  52                        PUSH EDX
005C712C  E8 BF C9 0E 00            CALL 0x006b3af0
005C7131  38 9E E2 21 00 00         CMP byte ptr [ESI + 0x21e2],BL
005C7137  0F 84 27 02 00 00         JZ 0x005c7364
005C713D  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C7143  3C 06                     CMP AL,0x6
005C7145  0F 84 19 02 00 00         JZ 0x005c7364
005C714B  3C 07                     CMP AL,0x7
005C714D  0F 84 11 02 00 00         JZ 0x005c7364
005C7153  3C 0E                     CMP AL,0xe
005C7155  0F 84 09 02 00 00         JZ 0x005c7364
005C715B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C7160  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005C7166  3B C3                     CMP EAX,EBX
005C7168  74 09                     JZ 0x005c7173
005C716A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C716D  50                        PUSH EAX
005C716E  E8 3D E5 11 00            CALL 0x006e56b0
LAB_005c7173:
005C7173  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C7179  68 FF 00 00 00            PUSH 0xff
005C717E  89 99 89 03 00 00         MOV dword ptr [ECX + 0x389],EBX
005C7184  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C718A  8B 82 44 05 00 00         MOV EAX,dword ptr [EDX + 0x544]
005C7190  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C7193  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C7196  51                        PUSH ECX
005C7197  52                        PUSH EDX
005C7198  53                        PUSH EBX
005C7199  53                        PUSH EBX
005C719A  53                        PUSH EBX
005C719B  50                        PUSH EAX
005C719C  E8 CF CF 0E 00            CALL 0x006b4170
005C71A1  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C71A6  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005C71AC  3B C3                     CMP EAX,EBX
005C71AE  74 06                     JZ 0x005c71b6
005C71B0  50                        PUSH EAX
005C71B1  E8 BA E3 0E 00            CALL 0x006b5570
LAB_005c71b6:
005C71B6  6A 0A                     PUSH 0xa
005C71B8  6A 0A                     PUSH 0xa
005C71BA  53                        PUSH EBX
005C71BB  E8 30 E3 0E 00            CALL 0x006b54f0
005C71C0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C71C6  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005C71CC  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C71D2  3B CB                     CMP ECX,EBX
005C71D4  74 1A                     JZ 0x005c71f0
005C71D6  E8 AF A0 E3 FF            CALL 0x0040128a
005C71DB  8B 96 EC 21 00 00         MOV EDX,dword ptr [ESI + 0x21ec]
005C71E1  52                        PUSH EDX
005C71E2  E8 C9 70 16 00            CALL 0x0072e2b0
005C71E7  83 C4 04                  ADD ESP,0x4
005C71EA  89 9E EC 21 00 00         MOV dword ptr [ESI + 0x21ec],EBX
LAB_005c71f0:
005C71F0  6A 33                     PUSH 0x33
005C71F2  E8 39 73 16 00            CALL 0x0072e530
005C71F7  83 C4 04                  ADD ESP,0x4
005C71FA  3B C3                     CMP EAX,EBX
005C71FC  74 30                     JZ 0x005c722e
005C71FE  83 C9 FF                  OR ECX,0xffffffff
005C7201  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C7205  88 18                     MOV byte ptr [EAX],BL
005C7207  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005C720A  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C720E  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005C7211  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005C7214  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005C7217  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005C721A  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005C721D  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C7220  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005C7223  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005C7226  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005C7229  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005C722C  EB 02                     JMP 0x005c7230
LAB_005c722e:
005C722E  33 C0                     XOR EAX,EAX
LAB_005c7230:
005C7230  3B C3                     CMP EAX,EBX
005C7232  89 86 EC 21 00 00         MOV dword ptr [ESI + 0x21ec],EAX
005C7238  0F 84 B6 00 00 00         JZ 0x005c72f4
005C723E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C7243  53                        PUSH EBX
005C7244  57                        PUSH EDI
005C7245  6A 10                     PUSH 0x10
005C7247  57                        PUSH EDI
005C7248  68 21 01 00 00            PUSH 0x121
005C724D  68 F9 00 00 00            PUSH 0xf9
005C7252  68 B4 00 00 00            PUSH 0xb4
005C7257  6A 0A                     PUSH 0xa
005C7259  50                        PUSH EAX
005C725A  E8 91 87 0F 00            CALL 0x006bf9f0
005C725F  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C7265  50                        PUSH EAX
005C7266  68 B4 00 00 00            PUSH 0xb4
005C726B  6A 0A                     PUSH 0xa
005C726D  6A 04                     PUSH 0x4
005C726F  E8 29 D3 E3 FF            CALL 0x0040459d
005C7274  85 C0                     TEST EAX,EAX
005C7276  74 35                     JZ 0x005c72ad
005C7278  8B 86 EC 21 00 00         MOV EAX,dword ptr [ESI + 0x21ec]
005C727E  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005C7281  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C7288  8B 86 EC 21 00 00         MOV EAX,dword ptr [ESI + 0x21ec]
005C728E  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C7291  3B C3                     CMP EAX,EBX
005C7293  7C 0D                     JL 0x005c72a2
005C7295  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C729B  50                        PUSH EAX
005C729C  51                        PUSH ECX
005C729D  E8 8E C1 0E 00            CALL 0x006b3430
LAB_005c72a2:
005C72A2  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C72A8  E8 44 E3 E3 FF            CALL 0x004055f1
LAB_005c72ad:
005C72AD  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C72B3  68 21 01 00 00            PUSH 0x121
005C72B8  68 F9 00 00 00            PUSH 0xf9
005C72BD  68 B4 00 00 00            PUSH 0xb4
005C72C2  6A 0A                     PUSH 0xa
005C72C4  52                        PUSH EDX
005C72C5  E8 B6 EC 0E 00            CALL 0x006b5f80
005C72CA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C72CF  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005C72D2  51                        PUSH ECX
005C72D3  57                        PUSH EDI
005C72D4  68 21 01 00 00            PUSH 0x121
005C72D9  68 F9 00 00 00            PUSH 0xf9
005C72DE  68 B4 00 00 00            PUSH 0xb4
005C72E3  6A 0A                     PUSH 0xa
005C72E5  68 B4 00 00 00            PUSH 0xb4
005C72EA  6A 0A                     PUSH 0xa
005C72EC  E8 A7 AF E3 FF            CALL 0x00402298
005C72F1  83 C4 20                  ADD ESP,0x20
LAB_005c72f4:
005C72F4  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C72F9  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005C72FF  83 F9 FF                  CMP ECX,-0x1
005C7302  74 12                     JZ 0x005c7316
005C7304  8B 90 D5 03 00 00         MOV EDX,dword ptr [EAX + 0x3d5]
005C730A  51                        PUSH ECX
005C730B  52                        PUSH EDX
005C730C  E8 DF C7 0E 00            CALL 0x006b3af0
005C7311  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c7316:
005C7316  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005C731C  83 F9 FF                  CMP ECX,-0x1
005C731F  74 12                     JZ 0x005c7333
005C7321  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005C7327  51                        PUSH ECX
005C7328  50                        PUSH EAX
005C7329  E8 C2 C7 0E 00            CALL 0x006b3af0
005C732E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c7333:
005C7333  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005C7339  83 F9 FF                  CMP ECX,-0x1
005C733C  74 12                     JZ 0x005c7350
005C733E  51                        PUSH ECX
005C733F  8B 88 F7 04 00 00         MOV ECX,dword ptr [EAX + 0x4f7]
005C7345  51                        PUSH ECX
005C7346  E8 A5 C7 0E 00            CALL 0x006b3af0
005C734B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c7350:
005C7350  8B 90 40 05 00 00         MOV EDX,dword ptr [EAX + 0x540]
005C7356  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C735B  52                        PUSH EDX
005C735C  50                        PUSH EAX
005C735D  E8 8E C7 0E 00            CALL 0x006b3af0
005C7362  EB 24                     JMP 0x005c7388
LAB_005c7364:
005C7364  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005C736B  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005C736E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C7374  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005C7377  51                        PUSH ECX
005C7378  8B CE                     MOV ECX,ESI
005C737A  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005C7380  50                        PUSH EAX
005C7381  6A 02                     PUSH 0x2
005C7383  E8 F8 EC 11 00            CALL 0x006e6080
LAB_005c7388:
005C7388  38 9E E3 21 00 00         CMP byte ptr [ESI + 0x21e3],BL
005C738E  0F 84 86 01 00 00         JZ 0x005c751a
005C7394  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C739A  3C 06                     CMP AL,0x6
005C739C  74 0C                     JZ 0x005c73aa
005C739E  3C 07                     CMP AL,0x7
005C73A0  74 08                     JZ 0x005c73aa
005C73A2  3C 0E                     CMP AL,0xe
005C73A4  0F 85 70 01 00 00         JNZ 0x005c751a
LAB_005c73aa:
005C73AA  8D BE 60 1F 00 00         LEA EDI,[ESI + 0x1f60]
005C73B0  C7 45 F8 07 00 00 00      MOV dword ptr [EBP + -0x8],0x7
LAB_005c73b7:
005C73B7  8B 07                     MOV EAX,dword ptr [EDI]
005C73B9  3B C3                     CMP EAX,EBX
005C73BB  74 0B                     JZ 0x005c73c8
005C73BD  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C73C0  50                        PUSH EAX
005C73C1  E8 EA E2 11 00            CALL 0x006e56b0
005C73C6  89 1F                     MOV dword ptr [EDI],EBX
LAB_005c73c8:
005C73C8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C73CB  83 C7 04                  ADD EDI,0x4
005C73CE  48                        DEC EAX
005C73CF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005C73D2  75 E3                     JNZ 0x005c73b7
005C73D4  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C73DA  3B CB                     CMP ECX,EBX
005C73DC  74 1A                     JZ 0x005c73f8
005C73DE  E8 A7 9E E3 FF            CALL 0x0040128a
005C73E3  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C73E9  51                        PUSH ECX
005C73EA  E8 C1 6E 16 00            CALL 0x0072e2b0
005C73EF  83 C4 04                  ADD ESP,0x4
005C73F2  89 9E F0 21 00 00         MOV dword ptr [ESI + 0x21f0],EBX
LAB_005c73f8:
005C73F8  6A 33                     PUSH 0x33
005C73FA  E8 31 71 16 00            CALL 0x0072e530
005C73FF  83 C4 04                  ADD ESP,0x4
005C7402  3B C3                     CMP EAX,EBX
005C7404  74 35                     JZ 0x005c743b
005C7406  83 C9 FF                  OR ECX,0xffffffff
005C7409  BF 01 00 00 00            MOV EDI,0x1
005C740E  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C7412  88 18                     MOV byte ptr [EAX],BL
005C7414  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005C7417  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C741B  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005C741E  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005C7421  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005C7424  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005C7427  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005C742A  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C742D  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005C7430  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005C7433  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005C7436  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005C7439  EB 07                     JMP 0x005c7442
LAB_005c743b:
005C743B  33 C0                     XOR EAX,EAX
005C743D  BF 01 00 00 00            MOV EDI,0x1
LAB_005c7442:
005C7442  3B C3                     CMP EAX,EBX
005C7444  89 86 F0 21 00 00         MOV dword ptr [ESI + 0x21f0],EAX
005C744A  0F 84 B7 00 00 00         JZ 0x005c7507
005C7450  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C7456  53                        PUSH EBX
005C7457  57                        PUSH EDI
005C7458  6A 10                     PUSH 0x10
005C745A  57                        PUSH EDI
005C745B  68 23 01 00 00            PUSH 0x123
005C7460  68 F9 00 00 00            PUSH 0xf9
005C7465  68 B4 00 00 00            PUSH 0xb4
005C746A  6A 0A                     PUSH 0xa
005C746C  52                        PUSH EDX
005C746D  E8 7E 85 0F 00            CALL 0x006bf9f0
005C7472  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C7478  50                        PUSH EAX
005C7479  68 B4 00 00 00            PUSH 0xb4
005C747E  6A 0A                     PUSH 0xa
005C7480  6A 04                     PUSH 0x4
005C7482  E8 16 D1 E3 FF            CALL 0x0040459d
005C7487  85 C0                     TEST EAX,EAX
005C7489  74 34                     JZ 0x005c74bf
005C748B  8B 86 F0 21 00 00         MOV EAX,dword ptr [ESI + 0x21f0]
005C7491  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005C7494  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C749B  8B 86 F0 21 00 00         MOV EAX,dword ptr [ESI + 0x21f0]
005C74A1  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C74A4  3B C3                     CMP EAX,EBX
005C74A6  7C 0C                     JL 0x005c74b4
005C74A8  50                        PUSH EAX
005C74A9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C74AE  50                        PUSH EAX
005C74AF  E8 7C BF 0E 00            CALL 0x006b3430
LAB_005c74b4:
005C74B4  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C74BA  E8 32 E1 E3 FF            CALL 0x004055f1
LAB_005c74bf:
005C74BF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C74C5  68 21 01 00 00            PUSH 0x121
005C74CA  68 F9 00 00 00            PUSH 0xf9
005C74CF  68 B4 00 00 00            PUSH 0xb4
005C74D4  6A 0A                     PUSH 0xa
005C74D6  51                        PUSH ECX
005C74D7  E8 A4 EA 0E 00            CALL 0x006b5f80
005C74DC  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C74E2  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005C74E5  50                        PUSH EAX
005C74E6  57                        PUSH EDI
005C74E7  68 23 01 00 00            PUSH 0x123
005C74EC  68 F9 00 00 00            PUSH 0xf9
005C74F1  68 B4 00 00 00            PUSH 0xb4
005C74F6  6A 0A                     PUSH 0xa
005C74F8  68 B4 00 00 00            PUSH 0xb4
005C74FD  6A 0A                     PUSH 0xa
005C74FF  E8 94 AD E3 FF            CALL 0x00402298
005C7504  83 C4 20                  ADD ESP,0x20
LAB_005c7507:
005C7507  8B 8E 80 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f80]
005C750D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C7513  51                        PUSH ECX
005C7514  52                        PUSH EDX
005C7515  E8 D6 C5 0E 00            CALL 0x006b3af0
LAB_005c751a:
005C751A  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C751F  3B C3                     CMP EAX,EBX
005C7521  74 40                     JZ 0x005c7563
005C7523  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005C7529  74 2C                     JZ 0x005c7557
005C752B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C752E  83 F9 FF                  CMP ECX,-0x1
005C7531  74 30                     JZ 0x005c7563
005C7533  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005C7536  52                        PUSH EDX
005C7537  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005C753A  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C753D  52                        PUSH EDX
005C753E  6A FE                     PUSH -0x2
005C7540  51                        PUSH ECX
005C7541  50                        PUSH EAX
005C7542  E8 89 BF 0E 00            CALL 0x006b34d0
005C7547  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005C754A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C7550  5F                        POP EDI
005C7551  5E                        POP ESI
005C7552  5B                        POP EBX
005C7553  8B E5                     MOV ESP,EBP
005C7555  5D                        POP EBP
005C7556  C3                        RET
LAB_005c7557:
005C7557  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C755D  51                        PUSH ECX
005C755E  E8 FD 14 0F 00            CALL 0x006b8a60
LAB_005c7563:
005C7563  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005C7566  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C756C  5F                        POP EDI
005C756D  5E                        POP ESI
005C756E  5B                        POP EBX
005C756F  8B E5                     MOV ESP,EBP
005C7571  5D                        POP EBP
005C7572  C3                        RET
LAB_005c7573:
005C7573  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005C7576  68 08 D2 7C 00            PUSH 0x7cd208
005C757B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C7580  56                        PUSH ESI
005C7581  53                        PUSH EBX
005C7582  68 A4 03 00 00            PUSH 0x3a4
005C7587  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C758C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C7591  E8 3A 5F 0E 00            CALL 0x006ad4d0
005C7596  83 C4 18                  ADD ESP,0x18
005C7599  85 C0                     TEST EAX,EAX
005C759B  74 01                     JZ 0x005c759e
005C759D  CC                        INT3
LAB_005c759e:
005C759E  68 A4 03 00 00            PUSH 0x3a4
005C75A3  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C75A8  53                        PUSH EBX
005C75A9  56                        PUSH ESI
005C75AA  E8 91 E8 0D 00            CALL 0x006a5e40
005C75AF  5F                        POP EDI
005C75B0  5E                        POP ESI
005C75B1  5B                        POP EBX
005C75B2  8B E5                     MOV ESP,EBP
005C75B4  5D                        POP EBP
005C75B5  C3                        RET
