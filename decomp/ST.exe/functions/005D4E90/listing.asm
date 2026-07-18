FUN_005d4e90:
005D4E90  55                        PUSH EBP
005D4E91  8B EC                     MOV EBP,ESP
005D4E93  83 EC 54                  SUB ESP,0x54
005D4E96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D4E9B  53                        PUSH EBX
005D4E9C  56                        PUSH ESI
005D4E9D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005D4EA0  57                        PUSH EDI
005D4EA1  8D 55 B0                  LEA EDX,[EBP + -0x50]
005D4EA4  8D 4D AC                  LEA ECX,[EBP + -0x54]
005D4EA7  6A 00                     PUSH 0x0
005D4EA9  52                        PUSH EDX
005D4EAA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005D4EAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D4EB3  E8 38 89 15 00            CALL 0x0072d7f0
005D4EB8  8B F0                     MOV ESI,EAX
005D4EBA  83 C4 08                  ADD ESP,0x8
005D4EBD  85 F6                     TEST ESI,ESI
005D4EBF  0F 85 B3 01 00 00         JNZ 0x005d5078
005D4EC5  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005D4EC8  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D4ECF  75 0B                     JNZ 0x005d4edc
005D4ED1  8B 87 3F 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f3f]
005D4ED7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D4EDA  EB 09                     JMP 0x005d4ee5
LAB_005d4edc:
005D4EDC  8B 8F 43 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f43]
005D4EE2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_005d4ee5:
005D4EE5  B8 E3 07 00 00            MOV EAX,0x7e3
005D4EEA  C7 47 29 02 00 00 00      MOV dword ptr [EDI + 0x29],0x2
005D4EF1  C7 47 2D 20 00 00 00      MOV dword ptr [EDI + 0x2d],0x20
005D4EF8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005D4EFF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_005d4f02:
005D4F02  33 DB                     XOR EBX,EBX
LAB_005d4f04:
005D4F04  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
005D4F07  83 3C 97 00               CMP dword ptr [EDI + EDX*0x4],0x0
005D4F0B  0F 84 35 01 00 00         JZ 0x005d5046
005D4F11  8B 87 84 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f84]
005D4F17  85 C0                     TEST EAX,EAX
005D4F19  74 1D                     JZ 0x005d4f38
005D4F1B  8B 8F 88 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f88]
005D4F21  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D4F24  03 CE                     ADD ECX,ESI
005D4F26  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
005D4F29  3B CE                     CMP ECX,ESI
005D4F2B  73 0B                     JNC 0x005d4f38
005D4F2D  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005D4F30  0F AF F1                  IMUL ESI,ECX
005D4F33  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005D4F36  EB 02                     JMP 0x005d4f3a
LAB_005d4f38:
005D4F38  33 F6                     XOR ESI,ESI
LAB_005d4f3a:
005D4F3A  8B 14 97                  MOV EDX,dword ptr [EDI + EDX*0x4]
005D4F3D  C7 47 31 00 00 00 00      MOV dword ptr [EDI + 0x31],0x0
005D4F44  85 F6                     TEST ESI,ESI
005D4F46  89 57 25                  MOV dword ptr [EDI + 0x25],EDX
005D4F49  0F 84 E8 00 00 00         JZ 0x005d5037
005D4F4F  83 FB 05                  CMP EBX,0x5
005D4F52  0F 87 DF 00 00 00         JA 0x005d5037
switchD_005d4f58::switchD:
005D4F58  FF 24 9D B8 50 5D 00      JMP dword ptr [EBX*0x4 + 0x5d50b8]
switchD_005d4f58::caseD_0:
005D4F5F  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
005D4F62  85 C0                     TEST EAX,EAX
005D4F64  74 06                     JZ 0x005d4f6c
005D4F66  50                        PUSH EAX
005D4F67  E8 A4 91 0D 00            CALL 0x006ae110
LAB_005d4f6c:
005D4F6C  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D4F73  75 13                     JNZ 0x005d4f88
005D4F75  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D4F78  33 C0                     XOR EAX,EAX
005D4F7A  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D4F7D  6A FF                     PUSH -0x1
005D4F7F  50                        PUSH EAX
005D4F80  51                        PUSH ECX
005D4F81  E8 E4 F6 E2 FF            CALL 0x0040466a
005D4F86  EB 16                     JMP 0x005d4f9e
LAB_005d4f88:
005D4F88  8B 15 5C 99 80 00         MOV EDX,dword ptr [0x0080995c]
005D4F8E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D4F91  33 C0                     XOR EAX,EAX
005D4F93  52                        PUSH EDX
005D4F94  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
005D4F97  50                        PUSH EAX
005D4F98  51                        PUSH ECX
005D4F99  E8 A6 EF E2 FF            CALL 0x00403f44
LAB_005d4f9e:
005D4F9E  33 D2                     XOR EDX,EDX
005D4FA0  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
005D4FA3  8A 56 05                  MOV DL,byte ptr [ESI + 0x5]
005D4FA6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D4FA9  83 C4 0C                  ADD ESP,0xc
005D4FAC  3B D1                     CMP EDX,ECX
005D4FAE  72 03                     JC 0x005d4fb3
005D4FB0  88 4E 05                  MOV byte ptr [ESI + 0x5],CL
LAB_005d4fb3:
005D4FB3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D4FB6  85 C9                     TEST ECX,ECX
005D4FB8  75 7D                     JNZ 0x005d5037
005D4FBA  80 7E 04 04               CMP byte ptr [ESI + 0x4],0x4
005D4FBE  75 77                     JNZ 0x005d5037
005D4FC0  C6 46 04 01               MOV byte ptr [ESI + 0x4],0x1
005D4FC4  EB 71                     JMP 0x005d5037
switchD_005d4f58::caseD_1:
005D4FC6  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D4FCD  74 68                     JZ 0x005d5037
005D4FCF  80 3E 00                  CMP byte ptr [ESI],0x0
005D4FD2  74 63                     JZ 0x005d5037
005D4FD4  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
005D4FD7  84 C0                     TEST AL,AL
005D4FD9  74 5C                     JZ 0x005d5037
005D4FDB  EB 53                     JMP 0x005d5030
switchD_005d4f58::caseD_3:
005D4FDD  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D4FE4  75 06                     JNZ 0x005d4fec
005D4FE6  80 7E 04 02               CMP byte ptr [ESI + 0x4],0x2
005D4FEA  74 4B                     JZ 0x005d5037
LAB_005d4fec:
005D4FEC  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
005D4FEF  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005D4FF2  85 C0                     TEST EAX,EAX
005D4FF4  74 41                     JZ 0x005d5037
005D4FF6  EB 38                     JMP 0x005d5030
switchD_005d4f58::caseD_5:
005D4FF8  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005D4FFF  74 36                     JZ 0x005d5037
005D5001  80 3E 00                  CMP byte ptr [ESI],0x0
005D5004  74 31                     JZ 0x005d5037
005D5006  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
005D5009  84 C0                     TEST AL,AL
005D500B  74 2A                     JZ 0x005d5037
005D500D  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D5014  74 21                     JZ 0x005d5037
005D5016  3C 02                     CMP AL,0x2
005D5018  75 16                     JNZ 0x005d5030
005D501A  8B 46 06                  MOV EAX,dword ptr [ESI + 0x6]
005D501D  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D5023  3B C1                     CMP EAX,ECX
005D5025  75 09                     JNZ 0x005d5030
005D5027  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005D502C  84 C0                     TEST AL,AL
005D502E  74 07                     JZ 0x005d5037
LAB_005d5030:
005D5030  C7 47 31 01 00 00 00      MOV dword ptr [EDI + 0x31],0x1
switchD_005d4f58::caseD_4:
005D5037  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005D503A  8D 47 1D                  LEA EAX,[EDI + 0x1d]
005D503D  50                        PUSH EAX
005D503E  8B 11                     MOV EDX,dword ptr [ECX]
005D5040  FF 52 18                  CALL dword ptr [EDX + 0x18]
005D5043  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005d5046:
005D5046  43                        INC EBX
005D5047  83 FB 08                  CMP EBX,0x8
005D504A  0F 8C B4 FE FF FF         JL 0x005d4f04
005D5050  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D5053  83 C0 08                  ADD EAX,0x8
005D5056  46                        INC ESI
005D5057  3D 33 08 00 00            CMP EAX,0x833
005D505C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005D505F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005D5062  0F 8C 9A FE FF FF         JL 0x005d4f02
005D5068  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005D506B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D5071  5F                        POP EDI
005D5072  5E                        POP ESI
005D5073  5B                        POP EBX
005D5074  8B E5                     MOV ESP,EBP
005D5076  5D                        POP EBP
005D5077  C3                        RET
LAB_005d5078:
005D5078  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005D507B  68 6C D5 7C 00            PUSH 0x7cd56c
005D5080  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D5085  56                        PUSH ESI
005D5086  6A 00                     PUSH 0x0
005D5088  6A 3B                     PUSH 0x3b
005D508A  68 44 D5 7C 00            PUSH 0x7cd544
005D508F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D5095  E8 36 84 0D 00            CALL 0x006ad4d0
005D509A  83 C4 18                  ADD ESP,0x18
005D509D  85 C0                     TEST EAX,EAX
005D509F  74 01                     JZ 0x005d50a2
005D50A1  CC                        INT3
LAB_005d50a2:
005D50A2  6A 3B                     PUSH 0x3b
005D50A4  68 44 D5 7C 00            PUSH 0x7cd544
005D50A9  6A 00                     PUSH 0x0
005D50AB  56                        PUSH ESI
005D50AC  E8 8F 0D 0D 00            CALL 0x006a5e40
005D50B1  5F                        POP EDI
005D50B2  5E                        POP ESI
005D50B3  5B                        POP EBX
005D50B4  8B E5                     MOV ESP,EBP
005D50B6  5D                        POP EBP
005D50B7  C3                        RET
