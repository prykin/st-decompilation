FUN_006b6d50:
006B6D50  55                        PUSH EBP
006B6D51  8B EC                     MOV EBP,ESP
006B6D53  83 EC 5C                  SUB ESP,0x5c
006B6D56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B6D59  53                        PUSH EBX
006B6D5A  33 DB                     XOR EBX,EBX
006B6D5C  56                        PUSH ESI
006B6D5D  89 18                     MOV dword ptr [EAX],EBX
006B6D5F  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006B6D65  57                        PUSH EDI
006B6D66  8D 45 A8                  LEA EAX,[EBP + -0x58]
006B6D69  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006B6D6C  53                        PUSH EBX
006B6D6D  50                        PUSH EAX
006B6D6E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006B6D71  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006B6D74  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006B6D77  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006B6D7A  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006B6D7D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B6D83  E8 68 6A 07 00            CALL 0x0072d7f0
006B6D88  83 C4 08                  ADD ESP,0x8
006B6D8B  3B C3                     CMP EAX,EBX
006B6D8D  0F 85 60 02 00 00         JNZ 0x006b6ff3
006B6D93  53                        PUSH EBX
006B6D94  53                        PUSH EBX
006B6D95  8D 4D FC                  LEA ECX,[EBP + -0x4]
006B6D98  53                        PUSH EBX
006B6D99  51                        PUSH ECX
006B6D9A  53                        PUSH EBX
006B6D9B  E8 1E 69 07 00            CALL 0x0072d6be
006B6DA0  3B C3                     CMP EAX,EBX
006B6DA2  74 17                     JZ 0x006b6dbb
006B6DA4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B6DAA  68 BF 02 00 00            PUSH 0x2bf
006B6DAF  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6DB4  52                        PUSH EDX
006B6DB5  50                        PUSH EAX
006B6DB6  E8 85 F0 FE FF            CALL 0x006a5e40
LAB_006b6dbb:
006B6DBB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B6DBE  8D 55 F8                  LEA EDX,[EBP + -0x8]
006B6DC1  52                        PUSH EDX
006B6DC2  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006B6DC5  8B 08                     MOV ECX,dword ptr [EAX]
006B6DC7  53                        PUSH EBX
006B6DC8  53                        PUSH EBX
006B6DC9  50                        PUSH EAX
006B6DCA  FF 51 20                  CALL dword ptr [ECX + 0x20]
006B6DCD  3D 1E 00 77 88            CMP EAX,0x8877001e
006B6DD2  74 20                     JZ 0x006b6df4
006B6DD4  3B C3                     CMP EAX,EBX
006B6DD6  75 05                     JNZ 0x006b6ddd
006B6DD8  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006b6ddd:
006B6DDD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6DE3  68 C5 02 00 00            PUSH 0x2c5
006B6DE8  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6DED  51                        PUSH ECX
006B6DEE  50                        PUSH EAX
006B6DEF  E8 4C F0 FE FF            CALL 0x006a5e40
LAB_006b6df4:
006B6DF4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B6DF7  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006B6DFA  52                        PUSH EDX
006B6DFB  E8 70 3E FF FF            CALL 0x006aac70
006B6E00  8B F8                     MOV EDI,EAX
006B6E02  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B6E05  8D 55 F8                  LEA EDX,[EBP + -0x8]
006B6E08  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006B6E0B  89 07                     MOV dword ptr [EDI],EAX
006B6E0D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B6E10  52                        PUSH EDX
006B6E11  57                        PUSH EDI
006B6E12  8B 08                     MOV ECX,dword ptr [EAX]
006B6E14  53                        PUSH EBX
006B6E15  50                        PUSH EAX
006B6E16  FF 51 20                  CALL dword ptr [ECX + 0x20]
006B6E19  3B C3                     CMP EAX,EBX
006B6E1B  74 17                     JZ 0x006b6e34
006B6E1D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6E23  68 CE 02 00 00            PUSH 0x2ce
006B6E28  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6E2D  51                        PUSH ECX
006B6E2E  50                        PUSH EAX
006B6E2F  E8 0C F0 FE FF            CALL 0x006a5e40
LAB_006b6e34:
006B6E34  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006B6E37  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B6E3A  8D 77 10                  LEA ESI,[EDI + 0x10]
006B6E3D  6A 10                     PUSH 0x10
006B6E3F  68 A8 EC 79 00            PUSH 0x79eca8
006B6E44  56                        PUSH ESI
006B6E45  89 42 28                  MOV dword ptr [EDX + 0x28],EAX
006B6E48  E8 A3 78 07 00            CALL 0x0072e6f0
006B6E4D  83 C4 0C                  ADD ESP,0xc
006B6E50  85 C0                     TEST EAX,EAX
006B6E52  75 07                     JNZ 0x006b6e5b
006B6E54  BB 01 00 00 00            MOV EBX,0x1
006B6E59  EB 4F                     JMP 0x006b6eaa
LAB_006b6e5b:
006B6E5B  6A 10                     PUSH 0x10
006B6E5D  68 98 EC 79 00            PUSH 0x79ec98
006B6E62  56                        PUSH ESI
006B6E63  E8 88 78 07 00            CALL 0x0072e6f0
006B6E68  83 C4 0C                  ADD ESP,0xc
006B6E6B  85 C0                     TEST EAX,EAX
006B6E6D  75 07                     JNZ 0x006b6e76
006B6E6F  BB 02 00 00 00            MOV EBX,0x2
006B6E74  EB 34                     JMP 0x006b6eaa
LAB_006b6e76:
006B6E76  6A 10                     PUSH 0x10
006B6E78  68 88 EC 79 00            PUSH 0x79ec88
006B6E7D  56                        PUSH ESI
006B6E7E  E8 6D 78 07 00            CALL 0x0072e6f0
006B6E83  83 C4 0C                  ADD ESP,0xc
006B6E86  85 C0                     TEST EAX,EAX
006B6E88  75 07                     JNZ 0x006b6e91
006B6E8A  BB 03 00 00 00            MOV EBX,0x3
006B6E8F  EB 19                     JMP 0x006b6eaa
LAB_006b6e91:
006B6E91  6A 10                     PUSH 0x10
006B6E93  68 78 EC 79 00            PUSH 0x79ec78
006B6E98  56                        PUSH ESI
006B6E99  E8 52 78 07 00            CALL 0x0072e6f0
006B6E9E  83 C4 0C                  ADD ESP,0xc
006B6EA1  85 C0                     TEST EAX,EAX
006B6EA3  75 05                     JNZ 0x006b6eaa
006B6EA5  BB 04 00 00 00            MOV EBX,0x4
LAB_006b6eaa:
006B6EAA  85 DB                     TEST EBX,EBX
006B6EAC  74 0E                     JZ 0x006b6ebc
006B6EAE  83 FB 01                  CMP EBX,0x1
006B6EB1  74 09                     JZ 0x006b6ebc
006B6EB3  A1 C4 4E 85 00            MOV EAX,[0x00854ec4]
006B6EB8  85 C0                     TEST EAX,EAX
006B6EBA  74 0C                     JZ 0x006b6ec8
LAB_006b6ebc:
006B6EBC  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006B6EBF  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B6EC2  80 CD 20                  OR CH,0x20
006B6EC5  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_006b6ec8:
006B6EC8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B6ECB  57                        PUSH EDI
006B6ECC  6A 00                     PUSH 0x0
006B6ECE  6A 00                     PUSH 0x0
006B6ED0  8B 08                     MOV ECX,dword ptr [EAX]
006B6ED2  50                        PUSH EAX
006B6ED3  FF 51 30                  CALL dword ptr [ECX + 0x30]
006B6ED6  85 C0                     TEST EAX,EAX
006B6ED8  74 17                     JZ 0x006b6ef1
006B6EDA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B6EE0  68 DE 02 00 00            PUSH 0x2de
006B6EE5  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6EEA  52                        PUSH EDX
006B6EEB  50                        PUSH EAX
006B6EEC  E8 4F EF FE FF            CALL 0x006a5e40
LAB_006b6ef1:
006B6EF1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B6EF4  8D 55 F4                  LEA EDX,[EBP + -0xc]
006B6EF7  6A 00                     PUSH 0x0
006B6EF9  52                        PUSH EDX
006B6EFA  8B 08                     MOV ECX,dword ptr [EAX]
006B6EFC  6A 00                     PUSH 0x0
006B6EFE  50                        PUSH EAX
006B6EFF  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006B6F02  85 C0                     TEST EAX,EAX
006B6F04  74 17                     JZ 0x006b6f1d
006B6F06  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6F0C  68 E1 02 00 00            PUSH 0x2e1
006B6F11  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6F16  51                        PUSH ECX
006B6F17  50                        PUSH EAX
006B6F18  E8 23 EF FE FF            CALL 0x006a5e40
LAB_006b6f1d:
006B6F1D  6A 54                     PUSH 0x54
006B6F1F  E8 EC 3C FF FF            CALL 0x006aac10
006B6F24  8B F0                     MOV ESI,EAX
006B6F26  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B6F29  56                        PUSH ESI
006B6F2A  68 C8 EC 79 00            PUSH 0x79ecc8
006B6F2F  8B 10                     MOV EDX,dword ptr [EAX]
006B6F31  50                        PUSH EAX
006B6F32  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006B6F35  FF 12                     CALL dword ptr [EDX]
006B6F37  85 C0                     TEST EAX,EAX
006B6F39  74 17                     JZ 0x006b6f52
006B6F3B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6F41  68 E5 02 00 00            PUSH 0x2e5
006B6F46  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6F4B  51                        PUSH ECX
006B6F4C  50                        PUSH EAX
006B6F4D  E8 EE EE FE FF            CALL 0x006a5e40
LAB_006b6f52:
006B6F52  89 5E 28                  MOV dword ptr [ESI + 0x28],EBX
006B6F55  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006B6F58  83 C2 18                  ADD EDX,0x18
006B6F5B  8D 46 08                  LEA EAX,[ESI + 0x8]
006B6F5E  56                        PUSH ESI
006B6F5F  8B 0A                     MOV ECX,dword ptr [EDX]
006B6F61  89 08                     MOV dword ptr [EAX],ECX
006B6F63  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006B6F66  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006B6F69  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006B6F6C  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006B6F6F  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
006B6F72  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006B6F75  E8 36 F5 FF FF            CALL 0x006b64b0
006B6F7A  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006B6F7D  50                        PUSH EAX
006B6F7E  E8 0D EF FE FF            CALL 0x006a5e90
006B6F83  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006B6F86  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006B6F89  52                        PUSH EDX
006B6F8A  E8 21 DA 00 00            CALL 0x006c49b0
006B6F8F  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006B6F92  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B6F95  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006B6F98  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
006B6F9B  A8 02                     TEST AL,0x2
006B6F9D  74 26                     JZ 0x006b6fc5
006B6F9F  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
006B6FA2  56                        PUSH ESI
006B6FA3  83 CB 01                  OR EBX,0x1
006B6FA6  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
006B6FA9  E8 82 F8 FF FF            CALL 0x006b6830
006B6FAE  85 C0                     TEST EAX,EAX
006B6FB0  74 34                     JZ 0x006b6fe6
006B6FB2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6FB8  68 F0 02 00 00            PUSH 0x2f0
006B6FBD  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6FC2  51                        PUSH ECX
006B6FC3  EB 1B                     JMP 0x006b6fe0
LAB_006b6fc5:
006B6FC5  56                        PUSH ESI
006B6FC6  E8 A5 F9 FF FF            CALL 0x006b6970
006B6FCB  85 C0                     TEST EAX,EAX
006B6FCD  74 17                     JZ 0x006b6fe6
006B6FCF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B6FD5  68 F3 02 00 00            PUSH 0x2f3
006B6FDA  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6FDF  52                        PUSH EDX
LAB_006b6fe0:
006B6FE0  50                        PUSH EAX
006B6FE1  E8 5A EE FE FF            CALL 0x006a5e40
LAB_006b6fe6:
006B6FE6  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006B6FE9  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006B6FEC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B6FF1  EB 17                     JMP 0x006b700a
LAB_006b6ff3:
006B6FF3  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006B6FF6  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006B6FF9  56                        PUSH ESI
006B6FFA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B7000  8B D8                     MOV EBX,EAX
006B7002  E8 39 07 00 00            CALL 0x006b7740
006B7007  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_006b700a:
006B700A  57                        PUSH EDI
006B700B  E8 80 EE FE FF            CALL 0x006a5e90
006B7010  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B7013  33 FF                     XOR EDI,EDI
006B7015  3B C7                     CMP EAX,EDI
006B7017  74 09                     JZ 0x006b7022
006B7019  8B 10                     MOV EDX,dword ptr [EAX]
006B701B  50                        PUSH EAX
006B701C  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B701F  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_006b7022:
006B7022  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7025  3B C7                     CMP EAX,EDI
006B7027  74 09                     JZ 0x006b7032
006B7029  8B 08                     MOV ECX,dword ptr [EAX]
006B702B  50                        PUSH EAX
006B702C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B702F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006b7032:
006B7032  3B DF                     CMP EBX,EDI
006B7034  75 10                     JNZ 0x006b7046
006B7036  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B7039  8B C3                     MOV EAX,EBX
006B703B  89 32                     MOV dword ptr [EDX],ESI
006B703D  5F                        POP EDI
006B703E  5E                        POP ESI
006B703F  5B                        POP EBX
006B7040  8B E5                     MOV ESP,EBP
006B7042  5D                        POP EBP
006B7043  C2 08 00                  RET 0x8
LAB_006b7046:
006B7046  81 FB 2E 04 77 88         CMP EBX,0x8877042e
006B704C  74 16                     JZ 0x006b7064
006B704E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B7053  68 09 03 00 00            PUSH 0x309
006B7058  68 C4 DB 7E 00            PUSH 0x7edbc4
006B705D  50                        PUSH EAX
006B705E  53                        PUSH EBX
006B705F  E8 DC ED FE FF            CALL 0x006a5e40
LAB_006b7064:
006B7064  5F                        POP EDI
006B7065  8B C3                     MOV EAX,EBX
006B7067  5E                        POP ESI
006B7068  5B                        POP EBX
006B7069  8B E5                     MOV ESP,EBP
006B706B  5D                        POP EBP
006B706C  C2 08 00                  RET 0x8
