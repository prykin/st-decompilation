FUN_006a1c80:
006A1C80  55                        PUSH EBP
006A1C81  8B EC                     MOV EBP,ESP
006A1C83  83 EC 08                  SUB ESP,0x8
006A1C86  53                        PUSH EBX
006A1C87  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A1C8A  56                        PUSH ESI
006A1C8B  57                        PUSH EDI
006A1C8C  85 DB                     TEST EBX,EBX
006A1C8E  0F 8C 9F 01 00 00         JL 0x006a1e33
006A1C94  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A1C97  3B 1F                     CMP EBX,dword ptr [EDI]
006A1C99  0F 8D 94 01 00 00         JGE 0x006a1e33
006A1C9F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006A1CA2  85 F6                     TEST ESI,ESI
006A1CA4  0F 8C 89 01 00 00         JL 0x006a1e33
006A1CAA  3B 77 04                  CMP ESI,dword ptr [EDI + 0x4]
006A1CAD  0F 8D 80 01 00 00         JGE 0x006a1e33
006A1CB3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A1CB6  85 C0                     TEST EAX,EAX
006A1CB8  0F 8C 75 01 00 00         JL 0x006a1e33
006A1CBE  83 F8 06                  CMP EAX,0x6
006A1CC1  0F 8D 6C 01 00 00         JGE 0x006a1e33
006A1CC7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1CCA  51                        PUSH ECX
006A1CCB  50                        PUSH EAX
006A1CCC  56                        PUSH ESI
006A1CCD  53                        PUSH EBX
006A1CCE  57                        PUSH EDI
006A1CCF  E8 DC FC D5 FF            CALL 0x004019b0
006A1CD4  83 C4 14                  ADD ESP,0x14
006A1CD7  85 C0                     TEST EAX,EAX
006A1CD9  0F 84 54 01 00 00         JZ 0x006a1e33
006A1CDF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A1CE2  8D 55 F8                  LEA EDX,[EBP + -0x8]
006A1CE5  52                        PUSH EDX
006A1CE6  50                        PUSH EAX
006A1CE7  56                        PUSH ESI
006A1CE8  53                        PUSH EBX
006A1CE9  57                        PUSH EDI
006A1CEA  E8 5D 24 D6 FF            CALL 0x0040414c
006A1CEF  0F BF D0                  MOVSX EDX,AX
006A1CF2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A1CF5  83 C4 14                  ADD ESP,0x14
006A1CF8  F6 C4 20                  TEST AH,0x20
006A1CFB  8B 45 FA                  MOV EAX,dword ptr [EBP + -0x6]
006A1CFE  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006A1D01  75 14                     JNZ 0x006a1d17
006A1D03  F6 C4 10                  TEST AH,0x10
006A1D06  75 0F                     JNZ 0x006a1d17
006A1D08  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A1D0B  C7 45 14 01 00 00 00      MOV dword ptr [EBP + 0x14],0x1
006A1D12  F6 C5 10                  TEST CH,0x10
006A1D15  74 07                     JZ 0x006a1d1e
LAB_006a1d17:
006A1D17  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
LAB_006a1d1e:
006A1D1E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1D21  83 F9 01                  CMP ECX,0x1
006A1D24  75 0C                     JNZ 0x006a1d32
006A1D26  F7 D0                     NOT EAX
006A1D28  C1 E8 0D                  SHR EAX,0xd
006A1D2B  23 C1                     AND EAX,ECX
006A1D2D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006A1D30  EB 07                     JMP 0x006a1d39
LAB_006a1d32:
006A1D32  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
LAB_006a1d39:
006A1D39  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A1D3C  85 C0                     TEST EAX,EAX
006A1D3E  0F 85 DA 00 00 00         JNZ 0x006a1e1e
006A1D44  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A1D47  85 C0                     TEST EAX,EAX
006A1D49  0F 85 CF 00 00 00         JNZ 0x006a1e1e
006A1D4F  81 F9 FF 00 00 00         CMP ECX,0xff
006A1D55  75 77                     JNZ 0x006a1dce
006A1D57  85 D2                     TEST EDX,EDX
006A1D59  75 73                     JNZ 0x006a1dce
006A1D5B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1D5E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1D61  51                        PUSH ECX
006A1D62  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A1D65  52                        PUSH EDX
006A1D66  50                        PUSH EAX
006A1D67  6A 00                     PUSH 0x0
006A1D69  6A 00                     PUSH 0x0
006A1D6B  56                        PUSH ESI
006A1D6C  53                        PUSH EBX
006A1D6D  57                        PUSH EDI
006A1D6E  E8 20 32 D6 FF            CALL 0x00404f93
006A1D73  83 C4 20                  ADD ESP,0x20
006A1D76  85 C0                     TEST EAX,EAX
006A1D78  0F 84 97 00 00 00         JZ 0x006a1e15
006A1D7E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1D81  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1D84  51                        PUSH ECX
006A1D85  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A1D88  52                        PUSH EDX
006A1D89  50                        PUSH EAX
006A1D8A  6A 00                     PUSH 0x0
006A1D8C  6A 00                     PUSH 0x0
006A1D8E  56                        PUSH ESI
006A1D8F  53                        PUSH EBX
006A1D90  57                        PUSH EDI
006A1D91  E8 C7 F4 D5 FF            CALL 0x0040125d
006A1D96  83 C4 20                  ADD ESP,0x20
006A1D99  85 C0                     TEST EAX,EAX
006A1D9B  74 78                     JZ 0x006a1e15
006A1D9D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1DA0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1DA3  51                        PUSH ECX
006A1DA4  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A1DA7  52                        PUSH EDX
006A1DA8  50                        PUSH EAX
006A1DA9  6A 01                     PUSH 0x1
006A1DAB  6A 00                     PUSH 0x0
006A1DAD  56                        PUSH ESI
006A1DAE  53                        PUSH EBX
006A1DAF  57                        PUSH EDI
006A1DB0  E8 DE 31 D6 FF            CALL 0x00404f93
006A1DB5  83 C4 20                  ADD ESP,0x20
006A1DB8  85 C0                     TEST EAX,EAX
006A1DBA  74 59                     JZ 0x006a1e15
006A1DBC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1DBF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1DC2  51                        PUSH ECX
006A1DC3  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A1DC6  52                        PUSH EDX
006A1DC7  50                        PUSH EAX
006A1DC8  6A 01                     PUSH 0x1
006A1DCA  6A 00                     PUSH 0x0
006A1DCC  EB 38                     JMP 0x006a1e06
LAB_006a1dce:
006A1DCE  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A1DD1  50                        PUSH EAX
006A1DD2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A1DD5  50                        PUSH EAX
006A1DD6  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A1DD9  50                        PUSH EAX
006A1DDA  51                        PUSH ECX
006A1DDB  52                        PUSH EDX
006A1DDC  56                        PUSH ESI
006A1DDD  53                        PUSH EBX
006A1DDE  57                        PUSH EDI
006A1DDF  E8 AF 31 D6 FF            CALL 0x00404f93
006A1DE4  83 C4 20                  ADD ESP,0x20
006A1DE7  85 C0                     TEST EAX,EAX
006A1DE9  75 07                     JNZ 0x006a1df2
006A1DEB  5F                        POP EDI
006A1DEC  5E                        POP ESI
006A1DED  5B                        POP EBX
006A1DEE  8B E5                     MOV ESP,EBP
006A1DF0  5D                        POP EBP
006A1DF1  C3                        RET
LAB_006a1df2:
006A1DF2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1DF5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1DF8  51                        PUSH ECX
006A1DF9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1DFC  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A1DFF  52                        PUSH EDX
006A1E00  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A1E03  50                        PUSH EAX
006A1E04  51                        PUSH ECX
006A1E05  52                        PUSH EDX
LAB_006a1e06:
006A1E06  56                        PUSH ESI
006A1E07  53                        PUSH EBX
006A1E08  57                        PUSH EDI
006A1E09  E8 4F F4 D5 FF            CALL 0x0040125d
006A1E0E  83 C4 20                  ADD ESP,0x20
006A1E11  85 C0                     TEST EAX,EAX
006A1E13  75 1E                     JNZ 0x006a1e33
LAB_006a1e15:
006A1E15  5F                        POP EDI
006A1E16  5E                        POP ESI
006A1E17  33 C0                     XOR EAX,EAX
006A1E19  5B                        POP EBX
006A1E1A  8B E5                     MOV ESP,EBP
006A1E1C  5D                        POP EBP
006A1E1D  C3                        RET
LAB_006a1e1e:
006A1E1E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A1E21  50                        PUSH EAX
006A1E22  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A1E25  50                        PUSH EAX
006A1E26  51                        PUSH ECX
006A1E27  52                        PUSH EDX
006A1E28  56                        PUSH ESI
006A1E29  53                        PUSH EBX
006A1E2A  57                        PUSH EDI
006A1E2B  E8 F9 18 D6 FF            CALL 0x00403729
006A1E30  83 C4 1C                  ADD ESP,0x1c
LAB_006a1e33:
006A1E33  5F                        POP EDI
006A1E34  5E                        POP ESI
006A1E35  B8 01 00 00 00            MOV EAX,0x1
006A1E3A  5B                        POP EBX
006A1E3B  8B E5                     MOV ESP,EBP
006A1E3D  5D                        POP EBP
006A1E3E  C3                        RET
