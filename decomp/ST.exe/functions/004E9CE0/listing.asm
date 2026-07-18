FUN_004e9ce0:
004E9CE0  55                        PUSH EBP
004E9CE1  8B EC                     MOV EBP,ESP
004E9CE3  83 EC 60                  SUB ESP,0x60
004E9CE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004E9CEB  53                        PUSH EBX
004E9CEC  56                        PUSH ESI
004E9CED  57                        PUSH EDI
004E9CEE  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004E9CF1  33 FF                     XOR EDI,EDI
004E9CF3  8D 55 A4                  LEA EDX,[EBP + -0x5c]
004E9CF6  8D 4D A0                  LEA ECX,[EBP + -0x60]
004E9CF9  57                        PUSH EDI
004E9CFA  52                        PUSH EDX
004E9CFB  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004E9CFE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004E9D04  E8 E7 3A 24 00            CALL 0x0072d7f0
004E9D09  8B F0                     MOV ESI,EAX
004E9D0B  83 C4 08                  ADD ESP,0x8
004E9D0E  3B F7                     CMP ESI,EDI
004E9D10  0F 85 6E 05 00 00         JNZ 0x004ea284
004E9D16  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004E9D19  8B 86 6C 04 00 00         MOV EAX,dword ptr [ESI + 0x46c]
004E9D1F  48                        DEC EAX
004E9D20  83 F8 04                  CMP EAX,0x4
004E9D23  0F 87 49 05 00 00         JA 0x004ea272
switchD_004e9d29::switchD:
004E9D29  FF 24 85 CC A2 4E 00      JMP dword ptr [EAX*0x4 + 0x4ea2cc]
switchD_004e9d29::caseD_1:
004E9D30  39 BE DC 03 00 00         CMP dword ptr [ESI + 0x3dc],EDI
004E9D36  0F 85 36 05 00 00         JNZ 0x004ea272
004E9D3C  8B 8E 74 04 00 00         MOV ECX,dword ptr [ESI + 0x474]
004E9D42  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004E9D48  3B C1                     CMP EAX,ECX
004E9D4A  75 28                     JNZ 0x004e9d74
004E9D4C  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004E9D52  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
004E9D58  3B C2                     CMP EAX,EDX
004E9D5A  75 18                     JNZ 0x004e9d74
004E9D5C  8B 96 7C 04 00 00         MOV EDX,dword ptr [ESI + 0x47c]
004E9D62  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E9D68  42                        INC EDX
004E9D69  3B C2                     CMP EAX,EDX
004E9D6B  75 07                     JNZ 0x004e9d74
004E9D6D  B8 01 00 00 00            MOV EAX,0x1
004E9D72  EB 02                     JMP 0x004e9d76
LAB_004e9d74:
004E9D74  33 C0                     XOR EAX,EAX
LAB_004e9d76:
004E9D76  3B C7                     CMP EAX,EDI
004E9D78  75 2A                     JNZ 0x004e9da4
004E9D7A  8B 86 7C 04 00 00         MOV EAX,dword ptr [ESI + 0x47c]
004E9D80  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
004E9D86  40                        INC EAX
004E9D87  57                        PUSH EDI
004E9D88  50                        PUSH EAX
004E9D89  52                        PUSH EDX
004E9D8A  51                        PUSH ECX
004E9D8B  8B CE                     MOV ECX,ESI
004E9D8D  E8 98 B6 F1 FF            CALL 0x0040542a
004E9D92  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004E9D95  33 C0                     XOR EAX,EAX
004E9D97  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004E9D9D  5F                        POP EDI
004E9D9E  5E                        POP ESI
004E9D9F  5B                        POP EBX
004E9DA0  8B E5                     MOV ESP,EBP
004E9DA2  5D                        POP EBP
004E9DA3  C3                        RET
LAB_004e9da4:
004E9DA4  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004E9DA7  C7 86 6C 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x46c],0x2
004E9DB1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004E9DB7  33 C0                     XOR EAX,EAX
004E9DB9  5F                        POP EDI
004E9DBA  5E                        POP ESI
004E9DBB  5B                        POP EBX
004E9DBC  8B E5                     MOV ESP,EBP
004E9DBE  5D                        POP EBP
004E9DBF  C3                        RET
switchD_004e9d29::caseD_2:
004E9DC0  8B 8E 70 04 00 00         MOV ECX,dword ptr [ESI + 0x470]
004E9DC6  8D 45 FC                  LEA EAX,[EBP + -0x4]
004E9DC9  50                        PUSH EAX
004E9DCA  51                        PUSH ECX
004E9DCB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E9DD1  E8 FA C4 1F 00            CALL 0x006e62d0
004E9DD6  85 C0                     TEST EAX,EAX
004E9DD8  0F 85 F3 00 00 00         JNZ 0x004e9ed1
004E9DDE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E9DE1  56                        PUSH ESI
004E9DE2  E8 78 86 F1 FF            CALL 0x0040245f
004E9DE7  85 C0                     TEST EAX,EAX
004E9DE9  0F 84 83 04 00 00         JZ 0x004ea272
004E9DEF  8D 55 F8                  LEA EDX,[EBP + -0x8]
004E9DF2  8D 45 F4                  LEA EAX,[EBP + -0xc]
004E9DF5  52                        PUSH EDX
004E9DF6  8D 4D F0                  LEA ECX,[EBP + -0x10]
004E9DF9  50                        PUSH EAX
004E9DFA  51                        PUSH ECX
004E9DFB  8B CE                     MOV ECX,ESI
004E9DFD  C7 86 8C 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x48c],0x1
004E9E07  C7 86 6C 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x46c],0x3
004E9E11  E8 CD 93 F1 FF            CALL 0x004031e3
004E9E16  8A 56 62                  MOV DL,byte ptr [ESI + 0x62]
004E9E19  66 8B 8E 78 04 00 00      MOV CX,word ptr [ESI + 0x478]
004E9E20  66 8B 86 7C 04 00 00      MOV AX,word ptr [ESI + 0x47c]
004E9E27  52                        PUSH EDX
004E9E28  66 8B 96 74 04 00 00      MOV DX,word ptr [ESI + 0x474]
004E9E2F  66 69 C9 C9 00            IMUL CX,CX,0xc9
004E9E34  66 69 D2 C9 00            IMUL DX,DX,0xc9
004E9E39  66 40                     INC AX
004E9E3B  81 C1 C8 00 00 00         ADD ECX,0xc8
004E9E41  81 C2 C8 00 00 00         ADD EDX,0xc8
004E9E47  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E9E4A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E9E4D  C1 E0 03                  SHL EAX,0x3
004E9E50  50                        PUSH EAX
004E9E51  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E9E54  51                        PUSH ECX
004E9E55  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E9E58  52                        PUSH EDX
004E9E59  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004E9E5C  50                        PUSH EAX
004E9E5D  51                        PUSH ECX
004E9E5E  52                        PUSH EDX
004E9E5F  8B CE                     MOV ECX,ESI
004E9E61  E8 EF 85 F1 FF            CALL 0x00402455
004E9E66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E9E69  8D BE 88 04 00 00         LEA EDI,[ESI + 0x488]
004E9E6F  8D 9E 84 04 00 00         LEA EBX,[ESI + 0x484]
004E9E75  8D 86 80 04 00 00         LEA EAX,[ESI + 0x480]
004E9E7B  57                        PUSH EDI
004E9E7C  53                        PUSH EBX
004E9E7D  50                        PUSH EAX
004E9E7E  E8 3B 9F F1 FF            CALL 0x00403dbe
004E9E83  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004E9E86  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E9E89  50                        PUSH EAX
004E9E8A  E8 F1 B4 F1 FF            CALL 0x00405380
004E9E8F  A1 CC 0B 80 00            MOV EAX,[0x00800bcc]
004E9E94  85 C0                     TEST EAX,EAX
004E9E96  75 05                     JNZ 0x004e9e9d
004E9E98  E8 F8 A4 F1 FF            CALL 0x00404395
LAB_004e9e9d:
004E9E9D  8B 0F                     MOV ECX,dword ptr [EDI]
004E9E9F  8B 13                     MOV EDX,dword ptr [EBX]
004E9EA1  8B 86 80 04 00 00         MOV EAX,dword ptr [ESI + 0x480]
004E9EA7  51                        PUSH ECX
004E9EA8  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E9EAE  52                        PUSH EDX
004E9EAF  50                        PUSH EAX
004E9EB0  E8 CD 76 F1 FF            CALL 0x00401582
004E9EB5  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004E9EB8  C7 86 94 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x494],0x1
004E9EC2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004E9EC8  33 C0                     XOR EAX,EAX
004E9ECA  5F                        POP EDI
004E9ECB  5E                        POP ESI
004E9ECC  5B                        POP EBX
004E9ECD  8B E5                     MOV ESP,EBP
004E9ECF  5D                        POP EBP
004E9ED0  C3                        RET
LAB_004e9ed1:
004E9ED1  8B CE                     MOV ECX,ESI
004E9ED3  E8 C6 AF F1 FF            CALL 0x00404e9e
004E9ED8  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004E9EDB  33 C0                     XOR EAX,EAX
004E9EDD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004E9EE3  5F                        POP EDI
004E9EE4  5E                        POP ESI
004E9EE5  5B                        POP EBX
004E9EE6  8B E5                     MOV ESP,EBP
004E9EE8  5D                        POP EBP
004E9EE9  C3                        RET
switchD_004e9d29::caseD_3:
004E9EEA  8D 4D E8                  LEA ECX,[EBP + -0x18]
004E9EED  8D 55 EC                  LEA EDX,[EBP + -0x14]
004E9EF0  51                        PUSH ECX
004E9EF1  52                        PUSH EDX
004E9EF2  8B CE                     MOV ECX,ESI
004E9EF4  E8 4E 89 F1 FF            CALL 0x00402847
004E9EF9  83 F8 FF                  CMP EAX,-0x1
004E9EFC  74 66                     JZ 0x004e9f64
004E9EFE  3B C7                     CMP EAX,EDI
004E9F00  0F 85 6C 03 00 00         JNZ 0x004ea272
004E9F06  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004E9F0A  C7 86 6C 04 00 00 04 00 00 00  MOV dword ptr [ESI + 0x46c],0x4
004E9F14  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E9F19  57                        PUSH EDI
004E9F1A  52                        PUSH EDX
004E9F1B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E9F21  89 BE 90 04 00 00         MOV dword ptr [ESI + 0x490],EDI
004E9F27  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004E9F2B  89 8E 9C 04 00 00         MOV dword ptr [ESI + 0x49c],ECX
004E9F31  50                        PUSH EAX
004E9F32  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004E9F36  51                        PUSH ECX
004E9F37  57                        PUSH EDI
004E9F38  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E9F3E  89 BE 98 04 00 00         MOV dword ptr [ESI + 0x498],EDI
004E9F44  E8 83 B3 F1 FF            CALL 0x004052cc
004E9F49  50                        PUSH EAX
004E9F4A  E8 56 B2 F1 FF            CALL 0x004051a5
004E9F4F  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004E9F52  83 C4 18                  ADD ESP,0x18
004E9F55  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004E9F5B  33 C0                     XOR EAX,EAX
004E9F5D  5F                        POP EDI
004E9F5E  5E                        POP ESI
004E9F5F  5B                        POP EBX
004E9F60  8B E5                     MOV ESP,EBP
004E9F62  5D                        POP EBP
004E9F63  C3                        RET
LAB_004e9f64:
004E9F64  68 64 15 7C 00            PUSH 0x7c1564
004E9F69  68 CC 4C 7A 00            PUSH 0x7a4ccc
004E9F6E  6A FB                     PUSH -0x5
004E9F70  57                        PUSH EDI
004E9F71  68 9A 01 00 00            PUSH 0x19a
004E9F76  68 3C 15 7C 00            PUSH 0x7c153c
004E9F7B  E8 50 35 1C 00            CALL 0x006ad4d0
004E9F80  83 C4 18                  ADD ESP,0x18
004E9F83  85 C0                     TEST EAX,EAX
004E9F85  74 01                     JZ 0x004e9f88
004E9F87  CC                        INT3
LAB_004e9f88:
004E9F88  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004E9F8E  68 9A 01 00 00            PUSH 0x19a
004E9F93  68 3C 15 7C 00            PUSH 0x7c153c
004E9F98  52                        PUSH EDX
004E9F99  6A FB                     PUSH -0x5
004E9F9B  E8 A0 BE 1B 00            CALL 0x006a5e40
004E9FA0  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004E9FA3  33 C0                     XOR EAX,EAX
004E9FA5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004E9FAB  5F                        POP EDI
004E9FAC  5E                        POP ESI
004E9FAD  5B                        POP EBX
004E9FAE  8B E5                     MOV ESP,EBP
004E9FB0  5D                        POP EBP
004E9FB1  C3                        RET
switchD_004e9d29::caseD_4:
004E9FB2  8B 86 9C 04 00 00         MOV EAX,dword ptr [ESI + 0x49c]
004E9FB8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E9FBE  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
004E9FC4  8D 50 15                  LEA EDX,[EAX + 0x15]
004E9FC7  3B CA                     CMP ECX,EDX
004E9FC9  72 74                     JC 0x004ea03f
004E9FCB  39 BE 90 04 00 00         CMP dword ptr [ESI + 0x490],EDI
004E9FD1  75 6C                     JNZ 0x004ea03f
004E9FD3  57                        PUSH EDI
004E9FD4  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E9FDA  E8 ED B2 F1 FF            CALL 0x004052cc
004E9FDF  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004E9FE5  50                        PUSH EAX
004E9FE6  E8 05 0C 20 00            CALL 0x006eabf0
004E9FEB  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004E9FF1  3B CF                     CMP ECX,EDI
004E9FF3  74 12                     JZ 0x004ea007
004E9FF5  57                        PUSH EDI
004E9FF6  E8 D1 B2 F1 FF            CALL 0x004052cc
004E9FFB  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EA001  50                        PUSH EAX
004EA002  E8 E9 0B 20 00            CALL 0x006eabf0
LAB_004ea007:
004EA007  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004EA00D  3B CF                     CMP ECX,EDI
004EA00F  74 12                     JZ 0x004ea023
004EA011  57                        PUSH EDI
004EA012  E8 B5 B2 F1 FF            CALL 0x004052cc
004EA017  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EA01D  50                        PUSH EAX
004EA01E  E8 CD 0B 20 00            CALL 0x006eabf0
LAB_004ea023:
004EA023  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004EA026  C7 86 90 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x490],0x1
004EA030  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EA036  33 C0                     XOR EAX,EAX
004EA038  5F                        POP EDI
004EA039  5E                        POP ESI
004EA03A  5B                        POP EBX
004EA03B  8B E5                     MOV ESP,EBP
004EA03D  5D                        POP EBP
004EA03E  C3                        RET
LAB_004ea03f:
004EA03F  8D 50 64                  LEA EDX,[EAX + 0x64]
004EA042  3B CA                     CMP ECX,EDX
004EA044  72 73                     JC 0x004ea0b9
004EA046  39 BE 98 04 00 00         CMP dword ptr [ESI + 0x498],EDI
004EA04C  75 6B                     JNZ 0x004ea0b9
004EA04E  66 8B 86 88 04 00 00      MOV AX,word ptr [ESI + 0x488]
004EA055  66 8B 96 84 04 00 00      MOV DX,word ptr [ESI + 0x484]
004EA05C  66 69 C0 C8 00            IMUL AX,AX,0xc8
004EA061  66 69 D2 C9 00            IMUL DX,DX,0xc9
004EA066  83 C0 64                  ADD EAX,0x64
004EA069  57                        PUSH EDI
004EA06A  0F BF C8                  MOVSX ECX,AX
004EA06D  51                        PUSH ECX
004EA06E  66 8B 8E 80 04 00 00      MOV CX,word ptr [ESI + 0x480]
004EA075  66 69 C9 C9 00            IMUL CX,CX,0xc9
004EA07A  83 C2 64                  ADD EDX,0x64
004EA07D  83 C1 64                  ADD ECX,0x64
004EA080  0F BF C2                  MOVSX EAX,DX
004EA083  0F BF D1                  MOVSX EDX,CX
004EA086  50                        PUSH EAX
004EA087  52                        PUSH EDX
004EA088  57                        PUSH EDI
004EA089  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004EA08F  E8 38 B2 F1 FF            CALL 0x004052cc
004EA094  50                        PUSH EAX
004EA095  E8 0B B1 F1 FF            CALL 0x004051a5
004EA09A  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004EA09D  83 C4 18                  ADD ESP,0x18
004EA0A0  C7 86 98 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x498],0x1
004EA0AA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EA0B0  33 C0                     XOR EAX,EAX
004EA0B2  5F                        POP EDI
004EA0B3  5E                        POP ESI
004EA0B4  5B                        POP EBX
004EA0B5  8B E5                     MOV ESP,EBP
004EA0B7  5D                        POP EBP
004EA0B8  C3                        RET
LAB_004ea0b9:
004EA0B9  83 C0 79                  ADD EAX,0x79
004EA0BC  3B C8                     CMP ECX,EAX
004EA0BE  0F 82 AE 01 00 00         JC 0x004ea272
004EA0C4  39 BE 94 04 00 00         CMP dword ptr [ESI + 0x494],EDI
004EA0CA  74 26                     JZ 0x004ea0f2
004EA0CC  8B 86 88 04 00 00         MOV EAX,dword ptr [ESI + 0x488]
004EA0D2  8B 8E 84 04 00 00         MOV ECX,dword ptr [ESI + 0x484]
004EA0D8  8B 96 80 04 00 00         MOV EDX,dword ptr [ESI + 0x480]
004EA0DE  50                        PUSH EAX
004EA0DF  51                        PUSH ECX
004EA0E0  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004EA0E6  52                        PUSH EDX
004EA0E7  E8 E8 7C F1 FF            CALL 0x00401dd4
004EA0EC  89 BE 94 04 00 00         MOV dword ptr [ESI + 0x494],EDI
LAB_004ea0f2:
004EA0F2  8B CE                     MOV ECX,ESI
004EA0F4  E8 53 A5 F1 FF            CALL 0x0040464c
004EA0F9  8B 86 80 04 00 00         MOV EAX,dword ptr [ESI + 0x480]
004EA0FF  8B 96 88 04 00 00         MOV EDX,dword ptr [ESI + 0x488]
004EA105  8B 8E 84 04 00 00         MOV ECX,dword ptr [ESI + 0x484]
004EA10B  89 86 B0 05 00 00         MOV dword ptr [ESI + 0x5b0],EAX
004EA111  66 8B C2                  MOV AX,DX
004EA114  89 96 B8 05 00 00         MOV dword ptr [ESI + 0x5b8],EDX
004EA11A  66 8B 96 B0 05 00 00      MOV DX,word ptr [ESI + 0x5b0]
004EA121  6A 01                     PUSH 0x1
004EA123  50                        PUSH EAX
004EA124  89 8E B4 05 00 00         MOV dword ptr [ESI + 0x5b4],ECX
004EA12A  51                        PUSH ECX
004EA12B  52                        PUSH EDX
004EA12C  8B CE                     MOV ECX,ESI
004EA12E  E8 2C 88 F1 FF            CALL 0x0040295f
004EA133  85 C0                     TEST EAX,EAX
004EA135  74 17                     JZ 0x004ea14e
004EA137  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004EA13C  68 B3 01 00 00            PUSH 0x1b3
004EA141  68 3C 15 7C 00            PUSH 0x7c153c
004EA146  50                        PUSH EAX
004EA147  6A FB                     PUSH -0x5
004EA149  E8 F2 BC 1B 00            CALL 0x006a5e40
LAB_004ea14e:
004EA14E  66 8B 8E B8 05 00 00      MOV CX,word ptr [ESI + 0x5b8]
004EA155  66 8B 96 B4 05 00 00      MOV DX,word ptr [ESI + 0x5b4]
004EA15C  66 8B 86 B0 05 00 00      MOV AX,word ptr [ESI + 0x5b0]
004EA163  51                        PUSH ECX
004EA164  52                        PUSH EDX
004EA165  50                        PUSH EAX
004EA166  8B CE                     MOV ECX,ESI
004EA168  E8 21 86 F1 FF            CALL 0x0040278e
004EA16D  6A 01                     PUSH 0x1
004EA16F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004EA175  E8 52 B1 F1 FF            CALL 0x004052cc
004EA17A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EA180  50                        PUSH EAX
004EA181  E8 6A 0A 20 00            CALL 0x006eabf0
004EA186  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EA18C  3B CF                     CMP ECX,EDI
004EA18E  74 13                     JZ 0x004ea1a3
004EA190  6A 01                     PUSH 0x1
004EA192  E8 35 B1 F1 FF            CALL 0x004052cc
004EA197  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EA19D  50                        PUSH EAX
004EA19E  E8 4D 0A 20 00            CALL 0x006eabf0
LAB_004ea1a3:
004EA1A3  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004EA1A9  3B CF                     CMP ECX,EDI
004EA1AB  74 13                     JZ 0x004ea1c0
004EA1AD  6A 01                     PUSH 0x1
004EA1AF  E8 18 B1 F1 FF            CALL 0x004052cc
004EA1B4  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EA1BA  50                        PUSH EAX
004EA1BB  E8 30 0A 20 00            CALL 0x006eabf0
LAB_004ea1c0:
004EA1C0  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004EA1C6  39 3C 85 78 27 79 00      CMP dword ptr [EAX*0x4 + 0x792778],EDI
004EA1CD  74 29                     JZ 0x004ea1f8
004EA1CF  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004EA1D2  57                        PUSH EDI
004EA1D3  50                        PUSH EAX
004EA1D4  51                        PUSH ECX
004EA1D5  E8 6B BA F1 FF            CALL 0x00405c45
004EA1DA  83 C4 0C                  ADD ESP,0xc
004EA1DD  85 C0                     TEST EAX,EAX
004EA1DF  74 17                     JZ 0x004ea1f8
004EA1E1  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004EA1E7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004EA1EA  57                        PUSH EDI
004EA1EB  52                        PUSH EDX
004EA1EC  50                        PUSH EAX
004EA1ED  E8 53 BA F1 FF            CALL 0x00405c45
004EA1F2  83 C4 0C                  ADD ESP,0xc
004EA1F5  50                        PUSH EAX
004EA1F6  EB 02                     JMP 0x004ea1fa
LAB_004ea1f8:
004EA1F8  6A 05                     PUSH 0x5
LAB_004ea1fa:
004EA1FA  8B CE                     MOV ECX,ESI
004EA1FC  E8 A0 81 F1 FF            CALL 0x004023a1
004EA201  C7 86 6C 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x46c],0x5
004EA20B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EA211  33 C0                     XOR EAX,EAX
004EA213  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004EA219  89 BE 90 04 00 00         MOV dword ptr [ESI + 0x490],EDI
004EA21F  89 96 9C 04 00 00         MOV dword ptr [ESI + 0x49c],EDX
004EA225  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004EA228  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EA22E  5F                        POP EDI
004EA22F  5E                        POP ESI
004EA230  5B                        POP EBX
004EA231  8B E5                     MOV ESP,EBP
004EA233  5D                        POP EBP
004EA234  C3                        RET
switchD_004e9d29::caseD_5:
004EA235  39 BE 8C 04 00 00         CMP dword ptr [ESI + 0x48c],EDI
004EA23B  74 23                     JZ 0x004ea260
004EA23D  8B 8E 70 04 00 00         MOV ECX,dword ptr [ESI + 0x470]
004EA243  8D 45 FC                  LEA EAX,[EBP + -0x4]
004EA246  50                        PUSH EAX
004EA247  51                        PUSH ECX
004EA248  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EA24E  E8 7D C0 1F 00            CALL 0x006e62d0
004EA253  85 C0                     TEST EAX,EAX
004EA255  75 09                     JNZ 0x004ea260
004EA257  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004EA25A  56                        PUSH ESI
004EA25B  E8 11 A7 F1 FF            CALL 0x00404971
LAB_004ea260:
004EA260  89 BE 6C 04 00 00         MOV dword ptr [ESI + 0x46c],EDI
004EA266  89 BE 70 04 00 00         MOV dword ptr [ESI + 0x470],EDI
004EA26C  89 BE 8C 04 00 00         MOV dword ptr [ESI + 0x48c],EDI
switchD_004e9d29::default:
004EA272  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004EA275  33 C0                     XOR EAX,EAX
004EA277  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EA27D  5F                        POP EDI
004EA27E  5E                        POP ESI
004EA27F  5B                        POP EBX
004EA280  8B E5                     MOV ESP,EBP
004EA282  5D                        POP EBP
004EA283  C3                        RET
LAB_004ea284:
004EA284  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004EA287  68 1C 15 7C 00            PUSH 0x7c151c
004EA28C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EA291  56                        PUSH ESI
004EA292  57                        PUSH EDI
004EA293  68 D5 01 00 00            PUSH 0x1d5
004EA298  68 3C 15 7C 00            PUSH 0x7c153c
004EA29D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EA2A2  E8 29 32 1C 00            CALL 0x006ad4d0
004EA2A7  83 C4 18                  ADD ESP,0x18
004EA2AA  85 C0                     TEST EAX,EAX
004EA2AC  74 01                     JZ 0x004ea2af
004EA2AE  CC                        INT3
LAB_004ea2af:
004EA2AF  68 D6 01 00 00            PUSH 0x1d6
004EA2B4  68 3C 15 7C 00            PUSH 0x7c153c
004EA2B9  57                        PUSH EDI
004EA2BA  56                        PUSH ESI
004EA2BB  E8 80 BB 1B 00            CALL 0x006a5e40
004EA2C0  8B C6                     MOV EAX,ESI
004EA2C2  5F                        POP EDI
004EA2C3  5E                        POP ESI
004EA2C4  5B                        POP EBX
004EA2C5  8B E5                     MOV ESP,EBP
004EA2C7  5D                        POP EBP
004EA2C8  C3                        RET
