FUN_006f1ce0:
006F1CE0  55                        PUSH EBP
006F1CE1  8B EC                     MOV EBP,ESP
006F1CE3  81 EC 78 03 00 00         SUB ESP,0x378
006F1CE9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F1CEE  53                        PUSH EBX
006F1CEF  56                        PUSH ESI
006F1CF0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006F1CF3  33 DB                     XOR EBX,EBX
006F1CF5  57                        PUSH EDI
006F1CF6  8D 55 AC                  LEA EDX,[EBP + -0x54]
006F1CF9  8D 4D A8                  LEA ECX,[EBP + -0x58]
006F1CFC  53                        PUSH EBX
006F1CFD  52                        PUSH EDX
006F1CFE  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F1D01  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F1D04  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1D07  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006F1D0A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1D10  E8 DB BA 03 00            CALL 0x0072d7f0
006F1D15  8B F0                     MOV ESI,EAX
006F1D17  83 C4 08                  ADD ESP,0x8
006F1D1A  3B F3                     CMP ESI,EBX
006F1D1C  0F 85 EB 02 00 00         JNZ 0x006f200d
006F1D22  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
006F1D25  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F1D28  88 85 8C FD FF FF         MOV byte ptr [EBP + 0xfffffd8c],AL
006F1D2E  8B FE                     MOV EDI,ESI
006F1D30  83 C9 FF                  OR ECX,0xffffffff
006F1D33  33 C0                     XOR EAX,EAX
006F1D35  F2 AE                     SCASB.REPNE ES:EDI
006F1D37  F7 D1                     NOT ECX
006F1D39  49                        DEC ECX
006F1D3A  8D BD A4 FD FF FF         LEA EDI,[EBP + 0xfffffda4]
006F1D40  66 89 8D A2 FD FF FF      MOV word ptr [EBP + 0xfffffda2],CX
006F1D47  53                        PUSH EBX
006F1D48  0F BF C9                  MOVSX ECX,CX
006F1D4B  8B D1                     MOV EDX,ECX
006F1D4D  8D 85 8C FD FF FF         LEA EAX,[EBP + 0xfffffd8c]
006F1D53  C1 E9 02                  SHR ECX,0x2
006F1D56  F3 A5                     MOVSD.REP ES:EDI,ESI
006F1D58  8B CA                     MOV ECX,EDX
006F1D5A  53                        PUSH EBX
006F1D5B  83 E1 03                  AND ECX,0x3
006F1D5E  50                        PUSH EAX
006F1D5F  F3 A4                     MOVSB.REP ES:EDI,ESI
006F1D61  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006F1D64  8B 0F                     MOV ECX,dword ptr [EDI]
006F1D66  51                        PUSH ECX
006F1D67  E8 14 FC 05 00            CALL 0x00751980
006F1D6C  8B F0                     MOV ESI,EAX
006F1D6E  83 FE FC                  CMP ESI,-0x4
006F1D71  75 17                     JNZ 0x006f1d8a
006F1D73  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006F1D79  68 DB 01 00 00            PUSH 0x1db
006F1D7E  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1D83  52                        PUSH EDX
006F1D84  50                        PUSH EAX
006F1D85  E8 B6 40 FB FF            CALL 0x006a5e40
LAB_006f1d8a:
006F1D8A  8B 07                     MOV EAX,dword ptr [EDI]
006F1D8C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006F1D8F  F7 41 08 00 00 10 00      TEST dword ptr [ECX + 0x8],0x100000
006F1D96  0F 85 1D 01 00 00         JNZ 0x006f1eb9
006F1D9C  56                        PUSH ESI
006F1D9D  8B CF                     MOV ECX,EDI
006F1D9F  E8 0C FF FF FF            CALL 0x006f1cb0
006F1DA4  8A 8D 91 FD FF FF         MOV CL,byte ptr [EBP + 0xfffffd91]
006F1DAA  BB 01 00 00 00            MOV EBX,0x1
006F1DAF  3A CB                     CMP CL,BL
006F1DB1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F1DB4  74 6E                     JZ 0x006f1e24
006F1DB6  80 F9 02                  CMP CL,0x2
006F1DB9  74 69                     JZ 0x006f1e24
006F1DBB  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F1DBE  85 F6                     TEST ESI,ESI
006F1DC0  75 17                     JNZ 0x006f1dd9
006F1DC2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F1DC5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F1DC8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1DCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1DD0  5F                        POP EDI
006F1DD1  5E                        POP ESI
006F1DD2  5B                        POP EBX
006F1DD3  8B E5                     MOV ESP,EBP
006F1DD5  5D                        POP EBP
006F1DD6  C2 10 00                  RET 0x10
LAB_006f1dd9:
006F1DD9  8B 3E                     MOV EDI,dword ptr [ESI]
006F1DDB  85 FF                     TEST EDI,EDI
006F1DDD  75 18                     JNZ 0x006f1df7
006F1DDF  8B 95 8D FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd8d]
006F1DE5  52                        PUSH EDX
006F1DE6  E8 25 8E FB FF            CALL 0x006aac10
006F1DEB  8B F8                     MOV EDI,EAX
006F1DED  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1DF0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006F1DF3  89 3E                     MOV dword ptr [ESI],EDI
006F1DF5  EB 03                     JMP 0x006f1dfa
LAB_006f1df7:
006F1DF7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006f1dfa:
006F1DFA  8B 8D 8D FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8d]
006F1E00  8B F0                     MOV ESI,EAX
006F1E02  8B C1                     MOV EAX,ECX
006F1E04  C1 E9 02                  SHR ECX,0x2
006F1E07  F3 A5                     MOVSD.REP ES:EDI,ESI
006F1E09  8B C8                     MOV ECX,EAX
006F1E0B  83 E1 03                  AND ECX,0x3
006F1E0E  F3 A4                     MOVSB.REP ES:EDI,ESI
006F1E10  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F1E13  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1E18  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1E1B  5F                        POP EDI
006F1E1C  5E                        POP ESI
006F1E1D  5B                        POP EBX
006F1E1E  8B E5                     MOV ESP,EBP
006F1E20  5D                        POP EBP
006F1E21  C2 10 00                  RET 0x10
LAB_006f1e24:
006F1E24  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F1E27  85 FF                     TEST EDI,EDI
006F1E29  75 19                     JNZ 0x006f1e44
006F1E2B  8B 8D 92 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd92]
006F1E31  51                        PUSH ECX
006F1E32  E8 D9 8D FB FF            CALL 0x006aac10
006F1E37  8B D0                     MOV EDX,EAX
006F1E39  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1E3C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F1E3F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1E42  EB 26                     JMP 0x006f1e6a
LAB_006f1e44:
006F1E44  8B 0F                     MOV ECX,dword ptr [EDI]
006F1E46  85 C9                     TEST ECX,ECX
006F1E48  75 1B                     JNZ 0x006f1e65
006F1E4A  8B 95 92 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd92]
006F1E50  52                        PUSH EDX
006F1E51  E8 BA 8D FB FF            CALL 0x006aac10
006F1E56  8B D0                     MOV EDX,EAX
006F1E58  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1E5B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F1E5E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1E61  89 17                     MOV dword ptr [EDI],EDX
006F1E63  EB 05                     JMP 0x006f1e6a
LAB_006f1e65:
006F1E65  8B D1                     MOV EDX,ECX
006F1E67  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006f1e6a:
006F1E6A  8B 8D 91 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd91]
006F1E70  81 E1 FF 00 00 00         AND ECX,0xff
006F1E76  49                        DEC ECX
006F1E77  74 0C                     JZ 0x006f1e85
006F1E79  49                        DEC ECX
006F1E7A  75 16                     JNZ 0x006f1e92
006F1E7C  52                        PUSH EDX
006F1E7D  50                        PUSH EAX
006F1E7E  E8 6D F8 05 00            CALL 0x007516f0
006F1E83  EB 0A                     JMP 0x006f1e8f
LAB_006f1e85:
006F1E85  52                        PUSH EDX
006F1E86  50                        PUSH EAX
006F1E87  E8 44 FB 05 00            CALL 0x007519d0
006F1E8C  83 C4 08                  ADD ESP,0x8
LAB_006f1e8f:
006F1E8F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006f1e92:
006F1E92  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F1E95  8B 8D 92 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd92]
006F1E9B  3B C1                     CMP EAX,ECX
006F1E9D  0F 84 56 01 00 00         JZ 0x006f1ff9
006F1EA3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006F1EA9  68 EC 01 00 00            PUSH 0x1ec
006F1EAE  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1EB3  51                        PUSH ECX
006F1EB4  E9 39 01 00 00            JMP 0x006f1ff2
LAB_006f1eb9:
006F1EB9  8A 85 91 FD FF FF         MOV AL,byte ptr [EBP + 0xfffffd91]
006F1EBF  BB 01 00 00 00            MOV EBX,0x1
006F1EC4  3A C3                     CMP AL,BL
006F1EC6  74 69                     JZ 0x006f1f31
006F1EC8  3C 02                     CMP AL,0x2
006F1ECA  74 65                     JZ 0x006f1f31
006F1ECC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F1ECF  85 F6                     TEST ESI,ESI
006F1ED1  75 14                     JNZ 0x006f1ee7
006F1ED3  8B 95 8D FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd8d]
006F1ED9  52                        PUSH EDX
006F1EDA  E8 31 8D FB FF            CALL 0x006aac10
006F1EDF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F1EE2  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1EE5  EB 1F                     JMP 0x006f1f06
LAB_006f1ee7:
006F1EE7  8B 06                     MOV EAX,dword ptr [ESI]
006F1EE9  85 C0                     TEST EAX,EAX
006F1EEB  75 16                     JNZ 0x006f1f03
006F1EED  8B 85 8D FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd8d]
006F1EF3  50                        PUSH EAX
006F1EF4  E8 17 8D FB FF            CALL 0x006aac10
006F1EF9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F1EFC  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1EFF  89 06                     MOV dword ptr [ESI],EAX
006F1F01  EB 03                     JMP 0x006f1f06
LAB_006f1f03:
006F1F03  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f1f06:
006F1F06  8B 8D 8D FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8d]
006F1F0C  8D 95 8C FD FF FF         LEA EDX,[EBP + 0xfffffd8c]
006F1F12  51                        PUSH ECX
006F1F13  50                        PUSH EAX
006F1F14  8B 07                     MOV EAX,dword ptr [EDI]
006F1F16  52                        PUSH EDX
006F1F17  50                        PUSH EAX
006F1F18  E8 63 FA 05 00            CALL 0x00751980
006F1F1D  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F1F20  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1F25  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1F28  5F                        POP EDI
006F1F29  5E                        POP ESI
006F1F2A  5B                        POP EBX
006F1F2B  8B E5                     MOV ESP,EBP
006F1F2D  5D                        POP EBP
006F1F2E  C2 10 00                  RET 0x10
LAB_006f1f31:
006F1F31  8B 8D 8D FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8d]
006F1F37  51                        PUSH ECX
006F1F38  E8 D3 8C FB FF            CALL 0x006aac10
006F1F3D  8B 95 8D FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd8d]
006F1F43  8B 0F                     MOV ECX,dword ptr [EDI]
006F1F45  52                        PUSH EDX
006F1F46  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F1F49  50                        PUSH EAX
006F1F4A  8D 85 8C FD FF FF         LEA EAX,[EBP + 0xfffffd8c]
006F1F50  50                        PUSH EAX
006F1F51  51                        PUSH ECX
006F1F52  E8 29 FA 05 00            CALL 0x00751980
006F1F57  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F1F5A  85 F6                     TEST ESI,ESI
006F1F5C  75 16                     JNZ 0x006f1f74
006F1F5E  8B 95 92 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd92]
006F1F64  52                        PUSH EDX
006F1F65  E8 A6 8C FB FF            CALL 0x006aac10
006F1F6A  8B C8                     MOV ECX,EAX
006F1F6C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1F6F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F1F72  EB 23                     JMP 0x006f1f97
LAB_006f1f74:
006F1F74  8B 06                     MOV EAX,dword ptr [ESI]
006F1F76  85 C0                     TEST EAX,EAX
006F1F78  75 18                     JNZ 0x006f1f92
006F1F7A  8B 85 92 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd92]
006F1F80  50                        PUSH EAX
006F1F81  E8 8A 8C FB FF            CALL 0x006aac10
006F1F86  8B C8                     MOV ECX,EAX
006F1F88  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1F8B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F1F8E  89 0E                     MOV dword ptr [ESI],ECX
006F1F90  EB 05                     JMP 0x006f1f97
LAB_006f1f92:
006F1F92  8B C8                     MOV ECX,EAX
006F1F94  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006f1f97:
006F1F97  8B 85 91 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd91]
006F1F9D  25 FF 00 00 00            AND EAX,0xff
006F1FA2  48                        DEC EAX
006F1FA3  74 0F                     JZ 0x006f1fb4
006F1FA5  48                        DEC EAX
006F1FA6  75 1C                     JNZ 0x006f1fc4
006F1FA8  51                        PUSH ECX
006F1FA9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F1FAC  51                        PUSH ECX
006F1FAD  E8 3E F7 05 00            CALL 0x007516f0
006F1FB2  EB 0D                     JMP 0x006f1fc1
LAB_006f1fb4:
006F1FB4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F1FB7  51                        PUSH ECX
006F1FB8  52                        PUSH EDX
006F1FB9  E8 12 FA 05 00            CALL 0x007519d0
006F1FBE  83 C4 08                  ADD ESP,0x8
LAB_006f1fc1:
006F1FC1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006f1fc4:
006F1FC4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1FC7  85 C0                     TEST EAX,EAX
006F1FC9  74 09                     JZ 0x006f1fd4
006F1FCB  8D 45 F8                  LEA EAX,[EBP + -0x8]
006F1FCE  50                        PUSH EAX
006F1FCF  E8 8C 90 FB FF            CALL 0x006ab060
LAB_006f1fd4:
006F1FD4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006F1FD7  8B 85 92 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd92]
006F1FDD  3B C8                     CMP ECX,EAX
006F1FDF  74 18                     JZ 0x006f1ff9
006F1FE1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006F1FE7  68 0A 02 00 00            PUSH 0x20a
006F1FEC  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1FF1  52                        PUSH EDX
LAB_006f1ff2:
006F1FF2  6A CD                     PUSH -0x33
006F1FF4  E8 47 3E FB FF            CALL 0x006a5e40
LAB_006f1ff9:
006F1FF9  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F1FFC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2001  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2004  5F                        POP EDI
006F2005  5E                        POP ESI
006F2006  5B                        POP EBX
006F2007  8B E5                     MOV ESP,EBP
006F2009  5D                        POP EBP
006F200A  C2 10 00                  RET 0x10
LAB_006f200d:
006F200D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2010  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006F2013  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006F2016  3B C3                     CMP EAX,EBX
006F2018  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F201E  74 0D                     JZ 0x006f202d
006F2020  3B FB                     CMP EDI,EBX
006F2022  74 09                     JZ 0x006f202d
006F2024  8D 55 FC                  LEA EDX,[EBP + -0x4]
006F2027  52                        PUSH EDX
006F2028  E8 33 90 FB FF            CALL 0x006ab060
LAB_006f202d:
006F202D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F2030  3B C3                     CMP EAX,EBX
006F2032  74 06                     JZ 0x006f203a
006F2034  3B FB                     CMP EDI,EBX
006F2036  74 02                     JZ 0x006f203a
006F2038  89 18                     MOV dword ptr [EAX],EBX
LAB_006f203a:
006F203A  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006F203D  8B 07                     MOV EAX,dword ptr [EDI]
006F203F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006F2042  F7 41 08 00 00 10 00      TEST dword ptr [ECX + 0x8],0x100000
006F2049  74 0E                     JZ 0x006f2059
006F204B  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
006F204E  74 09                     JZ 0x006f2059
006F2050  8D 55 F8                  LEA EDX,[EBP + -0x8]
006F2053  52                        PUSH EDX
006F2054  E8 07 90 FB FF            CALL 0x006ab060
LAB_006f2059:
006F2059  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
006F205C  75 05                     JNZ 0x006f2063
006F205E  83 FE FC                  CMP ESI,-0x4
006F2061  74 66                     JZ 0x006f20c9
LAB_006f2063:
006F2063  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F2066  81 C7 31 02 00 00         ADD EDI,0x231
006F206C  50                        PUSH EAX
006F206D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F2070  25 FF 00 00 00            AND EAX,0xff
006F2075  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006F2078  8D 85 88 FC FF FF         LEA EAX,[EBP + 0xfffffc88]
006F207E  8D 14 4D A4 F0 7E 00      LEA EDX,[ECX*0x2 + 0x7ef0a4]
006F2085  52                        PUSH EDX
006F2086  57                        PUSH EDI
006F2087  68 B4 FB 7E 00            PUSH 0x7efbb4
006F208C  50                        PUSH EAX
006F208D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F2093  8D 8D 88 FC FF FF         LEA ECX,[EBP + 0xfffffc88]
006F2099  51                        PUSH ECX
006F209A  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F209F  56                        PUSH ESI
006F20A0  53                        PUSH EBX
006F20A1  68 21 02 00 00            PUSH 0x221
006F20A6  68 A4 FA 7E 00            PUSH 0x7efaa4
006F20AB  E8 20 B4 FB FF            CALL 0x006ad4d0
006F20B0  83 C4 2C                  ADD ESP,0x2c
006F20B3  85 C0                     TEST EAX,EAX
006F20B5  74 01                     JZ 0x006f20b8
006F20B7  CC                        INT3
LAB_006f20b8:
006F20B8  68 23 02 00 00            PUSH 0x223
006F20BD  68 A4 FA 7E 00            PUSH 0x7efaa4
006F20C2  53                        PUSH EBX
006F20C3  56                        PUSH ESI
006F20C4  E8 77 3D FB FF            CALL 0x006a5e40
LAB_006f20c9:
006F20C9  5F                        POP EDI
006F20CA  5E                        POP ESI
006F20CB  33 C0                     XOR EAX,EAX
006F20CD  5B                        POP EBX
006F20CE  8B E5                     MOV ESP,EBP
006F20D0  5D                        POP EBP
006F20D1  C2 10 00                  RET 0x10
