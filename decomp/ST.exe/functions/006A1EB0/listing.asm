FUN_006a1eb0:
006A1EB0  55                        PUSH EBP
006A1EB1  8B EC                     MOV EBP,ESP
006A1EB3  83 EC 14                  SUB ESP,0x14
006A1EB6  53                        PUSH EBX
006A1EB7  56                        PUSH ESI
006A1EB8  57                        PUSH EDI
006A1EB9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A1EBC  85 FF                     TEST EDI,EDI
006A1EBE  0F 8C 95 01 00 00         JL 0x006a2059
006A1EC4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1EC7  3B 38                     CMP EDI,dword ptr [EAX]
006A1EC9  0F 8D 8A 01 00 00         JGE 0x006a2059
006A1ECF  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006A1ED2  85 F6                     TEST ESI,ESI
006A1ED4  0F 8C 7F 01 00 00         JL 0x006a2059
006A1EDA  3B 70 04                  CMP ESI,dword ptr [EAX + 0x4]
006A1EDD  0F 8D 76 01 00 00         JGE 0x006a2059
006A1EE3  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A1EE6  85 DB                     TEST EBX,EBX
006A1EE8  0F 8C 6B 01 00 00         JL 0x006a2059
006A1EEE  83 FB 06                  CMP EBX,0x6
006A1EF1  0F 8D 62 01 00 00         JGE 0x006a2059
006A1EF7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1EFA  51                        PUSH ECX
006A1EFB  53                        PUSH EBX
006A1EFC  56                        PUSH ESI
006A1EFD  57                        PUSH EDI
006A1EFE  50                        PUSH EAX
006A1EFF  E8 AC FA D5 FF            CALL 0x004019b0
006A1F04  83 C4 14                  ADD ESP,0x14
006A1F07  85 C0                     TEST EAX,EAX
006A1F09  74 3A                     JZ 0x006a1f45
006A1F0B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1F0E  8D 55 EC                  LEA EDX,[EBP + -0x14]
006A1F11  52                        PUSH EDX
006A1F12  53                        PUSH EBX
006A1F13  56                        PUSH ESI
006A1F14  57                        PUSH EDI
006A1F15  50                        PUSH EAX
006A1F16  E8 31 22 D6 FF            CALL 0x0040414c
006A1F1B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1F1E  83 C4 14                  ADD ESP,0x14
006A1F21  0F BF C0                  MOVSX EAX,AX
006A1F24  85 C0                     TEST EAX,EAX
006A1F26  74 05                     JZ 0x006a1f2d
006A1F28  B9 FF 00 00 00            MOV ECX,0xff
LAB_006a1f2d:
006A1F2D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A1F30  52                        PUSH EDX
006A1F31  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A1F34  52                        PUSH EDX
006A1F35  51                        PUSH ECX
006A1F36  50                        PUSH EAX
006A1F37  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1F3A  56                        PUSH ESI
006A1F3B  57                        PUSH EDI
006A1F3C  50                        PUSH EAX
006A1F3D  E8 E7 17 D6 FF            CALL 0x00403729
006A1F42  83 C4 1C                  ADD ESP,0x1c
LAB_006a1f45:
006A1F45  B8 2C F8 7D 00            MOV EAX,0x7df82c
006A1F4A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A1F4D  EB 03                     JMP 0x006a1f52
LAB_006a1f4f:
006A1F4F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006a1f52:
006A1F52  8B 70 FC                  MOV ESI,dword ptr [EAX + -0x4]
006A1F55  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A1F58  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A1F5B  03 F7                     ADD ESI,EDI
006A1F5D  8B 38                     MOV EDI,dword ptr [EAX]
006A1F5F  8B C3                     MOV EAX,EBX
006A1F61  03 FA                     ADD EDI,EDX
006A1F63  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
006A1F67  C1 EA 08                  SHR EDX,0x8
006A1F6A  83 E2 0F                  AND EDX,0xf
006A1F6D  8B CB                     MOV ECX,EBX
006A1F6F  2B CA                     SUB ECX,EDX
006A1F71  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A1F74  3B D9                     CMP EBX,ECX
006A1F76  0F 8E C9 00 00 00         JLE 0x006a2045
LAB_006a1f7c:
006A1F7C  85 F6                     TEST ESI,ESI
006A1F7E  0F 8C A4 00 00 00         JL 0x006a2028
006A1F84  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A1F87  3B 31                     CMP ESI,dword ptr [ECX]
006A1F89  0F 8D 99 00 00 00         JGE 0x006a2028
006A1F8F  85 FF                     TEST EDI,EDI
006A1F91  0F 8C 91 00 00 00         JL 0x006a2028
006A1F97  3B 79 04                  CMP EDI,dword ptr [ECX + 0x4]
006A1F9A  0F 8D 88 00 00 00         JGE 0x006a2028
006A1FA0  85 C0                     TEST EAX,EAX
006A1FA2  0F 8C 80 00 00 00         JL 0x006a2028
006A1FA8  83 F8 06                  CMP EAX,0x6
006A1FAB  7D 7B                     JGE 0x006a2028
006A1FAD  8D 55 EC                  LEA EDX,[EBP + -0x14]
006A1FB0  52                        PUSH EDX
006A1FB1  50                        PUSH EAX
006A1FB2  57                        PUSH EDI
006A1FB3  56                        PUSH ESI
006A1FB4  51                        PUSH ECX
006A1FB5  E8 92 21 D6 FF            CALL 0x0040414c
006A1FBA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006A1FBD  83 C4 14                  ADD ESP,0x14
006A1FC0  0F BF C0                  MOVSX EAX,AX
006A1FC3  85 C0                     TEST EAX,EAX
006A1FC5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A1FC8  74 05                     JZ 0x006a1fcf
006A1FCA  BB FF 00 00 00            MOV EBX,0xff
LAB_006a1fcf:
006A1FCF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A1FD2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A1FD5  53                        PUSH EBX
006A1FD6  50                        PUSH EAX
006A1FD7  57                        PUSH EDI
006A1FD8  56                        PUSH ESI
006A1FD9  51                        PUSH ECX
006A1FDA  E8 D1 F9 D5 FF            CALL 0x004019b0
006A1FDF  83 C4 14                  ADD ESP,0x14
006A1FE2  85 C0                     TEST EAX,EAX
006A1FE4  74 3C                     JZ 0x006a2022
006A1FE6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A1FE9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A1FEC  53                        PUSH EBX
006A1FED  8D 45 EC                  LEA EAX,[EBP + -0x14]
006A1FF0  52                        PUSH EDX
006A1FF1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1FF4  50                        PUSH EAX
006A1FF5  51                        PUSH ECX
006A1FF6  52                        PUSH EDX
006A1FF7  E8 62 2D D6 FF            CALL 0x00404d5e
006A1FFC  83 C4 14                  ADD ESP,0x14
006A1FFF  85 C0                     TEST EAX,EAX
006A2001  75 1F                     JNZ 0x006a2022
006A2003  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A2006  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A2009  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A200C  50                        PUSH EAX
006A200D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2010  51                        PUSH ECX
006A2011  53                        PUSH EBX
006A2012  52                        PUSH EDX
006A2013  57                        PUSH EDI
006A2014  56                        PUSH ESI
006A2015  50                        PUSH EAX
006A2016  E8 EF 21 D6 FF            CALL 0x0040420a
006A201B  83 C4 1C                  ADD ESP,0x1c
006A201E  85 C0                     TEST EAX,EAX
006A2020  74 43                     JZ 0x006a2065
LAB_006a2022:
006A2022  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A2025  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006a2028:
006A2028  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A202B  48                        DEC EAX
006A202C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A202F  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
006A2033  8B CB                     MOV ECX,EBX
006A2035  C1 EA 08                  SHR EDX,0x8
006A2038  83 E2 0F                  AND EDX,0xf
006A203B  2B CA                     SUB ECX,EDX
006A203D  3B C1                     CMP EAX,ECX
006A203F  0F 8F 37 FF FF FF         JG 0x006a1f7c
LAB_006a2045:
006A2045  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A2048  83 C0 08                  ADD EAX,0x8
006A204B  3D 6C F8 7D 00            CMP EAX,0x7df86c
006A2050  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A2053  0F 8C F6 FE FF FF         JL 0x006a1f4f
LAB_006a2059:
006A2059  5F                        POP EDI
006A205A  5E                        POP ESI
006A205B  B8 01 00 00 00            MOV EAX,0x1
006A2060  5B                        POP EBX
006A2061  8B E5                     MOV ESP,EBP
006A2063  5D                        POP EBP
006A2064  C3                        RET
LAB_006a2065:
006A2065  5F                        POP EDI
006A2066  5E                        POP ESI
006A2067  33 C0                     XOR EAX,EAX
006A2069  5B                        POP EBX
006A206A  8B E5                     MOV ESP,EBP
006A206C  5D                        POP EBP
006A206D  C3                        RET
