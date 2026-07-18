FUN_004b1cf0:
004B1CF0  55                        PUSH EBP
004B1CF1  8B EC                     MOV EBP,ESP
004B1CF3  83 EC 0C                  SUB ESP,0xc
004B1CF6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B1CF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B1CFC  53                        PUSH EBX
004B1CFD  56                        PUSH ESI
004B1CFE  8B 11                     MOV EDX,dword ptr [ECX]
004B1D00  57                        PUSH EDI
004B1D01  6A 00                     PUSH 0x0
004B1D03  50                        PUSH EAX
004B1D04  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1D07  52                        PUSH EDX
004B1D08  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1D0B  8B 08                     MOV ECX,dword ptr [EAX]
004B1D0D  8B 02                     MOV EAX,dword ptr [EDX]
004B1D0F  51                        PUSH ECX
004B1D10  50                        PUSH EAX
004B1D11  E8 66 0D F5 FF            CALL 0x00402a7c
004B1D16  8B D0                     MOV EDX,EAX
004B1D18  83 C4 14                  ADD ESP,0x14
004B1D1B  85 D2                     TEST EDX,EDX
004B1D1D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004B1D20  0F 85 75 01 00 00         JNZ 0x004b1e9b
004B1D26  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
004B1D2B  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
004B1D32  66 3B C1                  CMP AX,CX
004B1D35  7F 03                     JG 0x004b1d3a
004B1D37  66 8B C1                  MOV AX,CX
LAB_004b1d3a:
004B1D3A  0F BF C0                  MOVSX EAX,AX
004B1D3D  BB 01 00 00 00            MOV EBX,0x1
004B1D42  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004B1D45  3B C3                     CMP EAX,EBX
004B1D47  0F 8E 4E 01 00 00         JLE 0x004b1e9b
LAB_004b1d4d:
004B1D4D  0F BF 35 44 B2 7F 00      MOVSX ESI,word ptr [0x007fb244]
004B1D54  33 C9                     XOR ECX,ECX
004B1D56  4E                        DEC ESI
004B1D57  85 F6                     TEST ESI,ESI
004B1D59  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004B1D5C  0F 8E 30 01 00 00         JLE 0x004b1e92
LAB_004b1d62:
004B1D62  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1D65  8B 02                     MOV EAX,dword ptr [EDX]
004B1D67  8B F0                     MOV ESI,EAX
004B1D69  03 C3                     ADD EAX,EBX
004B1D6B  2B F3                     SUB ESI,EBX
004B1D6D  3B F0                     CMP ESI,EAX
004B1D6F  7F 7B                     JG 0x004b1dec
LAB_004b1d71:
004B1D71  85 F6                     TEST ESI,ESI
004B1D73  7C 6B                     JL 0x004b1de0
004B1D75  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B1D7C  3B F0                     CMP ESI,EAX
004B1D7E  7D 60                     JGE 0x004b1de0
004B1D80  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B1D83  8B 3A                     MOV EDI,dword ptr [EDX]
004B1D85  2B FB                     SUB EDI,EBX
004B1D87  78 27                     JS 0x004b1db0
004B1D89  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B1D90  3B F8                     CMP EDI,EAX
004B1D92  7D 1C                     JGE 0x004b1db0
004B1D94  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B1D97  6A 00                     PUSH 0x0
004B1D99  52                        PUSH EDX
004B1D9A  51                        PUSH ECX
004B1D9B  57                        PUSH EDI
004B1D9C  56                        PUSH ESI
004B1D9D  E8 DA 0C F5 FF            CALL 0x00402a7c
004B1DA2  83 C4 14                  ADD ESP,0x14
004B1DA5  85 C0                     TEST EAX,EAX
004B1DA7  0F 85 F7 00 00 00         JNZ 0x004b1ea4
004B1DAD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004b1db0:
004B1DB0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1DB3  8B 38                     MOV EDI,dword ptr [EAX]
004B1DB5  03 FB                     ADD EDI,EBX
004B1DB7  78 27                     JS 0x004b1de0
004B1DB9  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B1DC0  3B FA                     CMP EDI,EDX
004B1DC2  7D 1C                     JGE 0x004b1de0
004B1DC4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B1DC7  6A 00                     PUSH 0x0
004B1DC9  50                        PUSH EAX
004B1DCA  51                        PUSH ECX
004B1DCB  57                        PUSH EDI
004B1DCC  56                        PUSH ESI
004B1DCD  E8 AA 0C F5 FF            CALL 0x00402a7c
004B1DD2  83 C4 14                  ADD ESP,0x14
004B1DD5  85 C0                     TEST EAX,EAX
004B1DD7  0F 85 E5 00 00 00         JNZ 0x004b1ec2
004B1DDD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004b1de0:
004B1DE0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1DE3  46                        INC ESI
004B1DE4  8B 02                     MOV EAX,dword ptr [EDX]
004B1DE6  03 C3                     ADD EAX,EBX
004B1DE8  3B F0                     CMP ESI,EAX
004B1DEA  7E 85                     JLE 0x004b1d71
LAB_004b1dec:
004B1DEC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B1DEF  8B 02                     MOV EAX,dword ptr [EDX]
004B1DF1  8B F0                     MOV ESI,EAX
004B1DF3  2B F3                     SUB ESI,EBX
004B1DF5  8D 54 18 FF               LEA EDX,[EAX + EBX*0x1 + -0x1]
004B1DF9  46                        INC ESI
004B1DFA  3B F2                     CMP ESI,EDX
004B1DFC  7F 7A                     JG 0x004b1e78
LAB_004b1dfe:
004B1DFE  85 F6                     TEST ESI,ESI
004B1E00  7C 68                     JL 0x004b1e6a
004B1E02  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B1E09  3B F2                     CMP ESI,EDX
004B1E0B  7D 5D                     JGE 0x004b1e6a
004B1E0D  2B C3                     SUB EAX,EBX
004B1E0F  8B F8                     MOV EDI,EAX
004B1E11  78 27                     JS 0x004b1e3a
004B1E13  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B1E1A  3B F8                     CMP EDI,EAX
004B1E1C  7D 1C                     JGE 0x004b1e3a
004B1E1E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B1E21  6A 00                     PUSH 0x0
004B1E23  52                        PUSH EDX
004B1E24  51                        PUSH ECX
004B1E25  56                        PUSH ESI
004B1E26  57                        PUSH EDI
004B1E27  E8 50 0C F5 FF            CALL 0x00402a7c
004B1E2C  83 C4 14                  ADD ESP,0x14
004B1E2F  85 C0                     TEST EAX,EAX
004B1E31  0F 85 A9 00 00 00         JNZ 0x004b1ee0
004B1E37  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004b1e3a:
004B1E3A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B1E3D  8B 38                     MOV EDI,dword ptr [EAX]
004B1E3F  03 FB                     ADD EDI,EBX
004B1E41  78 27                     JS 0x004b1e6a
004B1E43  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B1E4A  3B FA                     CMP EDI,EDX
004B1E4C  7D 1C                     JGE 0x004b1e6a
004B1E4E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B1E51  6A 00                     PUSH 0x0
004B1E53  50                        PUSH EAX
004B1E54  51                        PUSH ECX
004B1E55  56                        PUSH ESI
004B1E56  57                        PUSH EDI
004B1E57  E8 20 0C F5 FF            CALL 0x00402a7c
004B1E5C  83 C4 14                  ADD ESP,0x14
004B1E5F  85 C0                     TEST EAX,EAX
004B1E61  0F 85 97 00 00 00         JNZ 0x004b1efe
004B1E67  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004b1e6a:
004B1E6A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B1E6D  46                        INC ESI
004B1E6E  8B 02                     MOV EAX,dword ptr [EDX]
004B1E70  8D 54 18 FF               LEA EDX,[EAX + EBX*0x1 + -0x1]
004B1E74  3B F2                     CMP ESI,EDX
004B1E76  7E 86                     JLE 0x004b1dfe
LAB_004b1e78:
004B1E78  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004B1E7F  41                        INC ECX
004B1E80  48                        DEC EAX
004B1E81  3B C8                     CMP ECX,EAX
004B1E83  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004B1E86  0F 8C D6 FE FF FF         JL 0x004b1d62
004B1E8C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004B1E8F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_004b1e92:
004B1E92  43                        INC EBX
004B1E93  3B D8                     CMP EBX,EAX
004B1E95  0F 8C B2 FE FF FF         JL 0x004b1d4d
LAB_004b1e9b:
004B1E9B  5F                        POP EDI
004B1E9C  5E                        POP ESI
004B1E9D  8B C2                     MOV EAX,EDX
004B1E9F  5B                        POP EBX
004B1EA0  8B E5                     MOV ESP,EBP
004B1EA2  5D                        POP EBP
004B1EA3  C3                        RET
LAB_004b1ea4:
004B1EA4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1EA7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B1EAA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B1EAD  89 31                     MOV dword ptr [ECX],ESI
004B1EAF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B1EB2  89 3A                     MOV dword ptr [EDX],EDI
004B1EB4  5F                        POP EDI
004B1EB5  89 01                     MOV dword ptr [ECX],EAX
004B1EB7  5E                        POP ESI
004B1EB8  B8 01 00 00 00            MOV EAX,0x1
004B1EBD  5B                        POP EBX
004B1EBE  8B E5                     MOV ESP,EBP
004B1EC0  5D                        POP EBP
004B1EC1  C3                        RET
LAB_004b1ec2:
004B1EC2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1EC5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1EC8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004B1ECB  89 32                     MOV dword ptr [EDX],ESI
004B1ECD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B1ED0  89 38                     MOV dword ptr [EAX],EDI
004B1ED2  5F                        POP EDI
004B1ED3  5E                        POP ESI
004B1ED4  89 0A                     MOV dword ptr [EDX],ECX
004B1ED6  B8 01 00 00 00            MOV EAX,0x1
004B1EDB  5B                        POP EBX
004B1EDC  8B E5                     MOV ESP,EBP
004B1EDE  5D                        POP EBP
004B1EDF  C3                        RET
LAB_004b1ee0:
004B1EE0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B1EE3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004B1EE6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004B1EE9  89 38                     MOV dword ptr [EAX],EDI
004B1EEB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B1EEE  89 31                     MOV dword ptr [ECX],ESI
004B1EF0  5F                        POP EDI
004B1EF1  89 10                     MOV dword ptr [EAX],EDX
004B1EF3  5E                        POP ESI
004B1EF4  B8 01 00 00 00            MOV EAX,0x1
004B1EF9  5B                        POP EBX
004B1EFA  8B E5                     MOV ESP,EBP
004B1EFC  5D                        POP EBP
004B1EFD  C3                        RET
LAB_004b1efe:
004B1EFE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1F01  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B1F04  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B1F07  89 39                     MOV dword ptr [ECX],EDI
004B1F09  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B1F0C  89 32                     MOV dword ptr [EDX],ESI
004B1F0E  5F                        POP EDI
004B1F0F  89 01                     MOV dword ptr [ECX],EAX
004B1F11  5E                        POP ESI
004B1F12  B8 01 00 00 00            MOV EAX,0x1
004B1F17  5B                        POP EBX
004B1F18  8B E5                     MOV ESP,EBP
004B1F1A  5D                        POP EBP
004B1F1B  C3                        RET
