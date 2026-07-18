FUN_005c0e00:
005C0E00  55                        PUSH EBP
005C0E01  8B EC                     MOV EBP,ESP
005C0E03  81 EC 94 00 00 00         SUB ESP,0x94
005C0E09  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C0E0E  53                        PUSH EBX
005C0E0F  56                        PUSH ESI
005C0E10  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005C0E13  33 F6                     XOR ESI,ESI
005C0E15  57                        PUSH EDI
005C0E16  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005C0E19  8D 4D B0                  LEA ECX,[EBP + -0x50]
005C0E1C  56                        PUSH ESI
005C0E1D  52                        PUSH EDX
005C0E1E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005C0E21  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C0E27  E8 C4 C9 16 00            CALL 0x0072d7f0
005C0E2C  8B F8                     MOV EDI,EAX
005C0E2E  83 C4 08                  ADD ESP,0x8
005C0E31  3B FE                     CMP EDI,ESI
005C0E33  0F 85 B4 03 00 00         JNZ 0x005c11ed
005C0E39  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005C0E3C  8B 83 8F 00 00 00         MOV EAX,dword ptr [EBX + 0x8f]
005C0E42  3B C6                     CMP EAX,ESI
005C0E44  74 54                     JZ 0x005c0e9a
005C0E46  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C0E49  50                        PUSH EAX
005C0E4A  E8 61 48 12 00            CALL 0x006e56b0
005C0E4F  6A 28                     PUSH 0x28
005C0E51  89 B3 8F 00 00 00         MOV dword ptr [EBX + 0x8f],ESI
005C0E57  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C0E5C  68 91 00 00 00            PUSH 0x91
005C0E61  68 26 02 00 00            PUSH 0x226
005C0E66  68 62 02 00 00            PUSH 0x262
005C0E6B  50                        PUSH EAX
005C0E6C  E8 0F 51 0F 00            CALL 0x006b5f80
005C0E71  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005C0E74  51                        PUSH ECX
005C0E75  6A 01                     PUSH 0x1
005C0E77  6A 28                     PUSH 0x28
005C0E79  68 91 00 00 00            PUSH 0x91
005C0E7E  68 26 02 00 00            PUSH 0x226
005C0E83  68 62 02 00 00            PUSH 0x262
005C0E88  68 26 02 00 00            PUSH 0x226
005C0E8D  68 62 02 00 00            PUSH 0x262
005C0E92  E8 01 14 E4 FF            CALL 0x00402298
005C0E97  83 C4 20                  ADD ESP,0x20
LAB_005c0e9a:
005C0E9A  8B 83 9B 00 00 00         MOV EAX,dword ptr [EBX + 0x9b]
005C0EA0  3B C6                     CMP EAX,ESI
005C0EA2  74 4C                     JZ 0x005c0ef0
005C0EA4  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C0EA7  50                        PUSH EAX
005C0EA8  E8 03 48 12 00            CALL 0x006e56b0
005C0EAD  6A 1E                     PUSH 0x1e
005C0EAF  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
005C0EB5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C0EBB  68 2C 01 00 00            PUSH 0x12c
005C0EC0  68 EA 01 00 00            PUSH 0x1ea
005C0EC5  6A 1E                     PUSH 0x1e
005C0EC7  52                        PUSH EDX
005C0EC8  E8 B3 50 0F 00            CALL 0x006b5f80
005C0ECD  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005C0ED0  50                        PUSH EAX
005C0ED1  6A 01                     PUSH 0x1
005C0ED3  6A 1E                     PUSH 0x1e
005C0ED5  68 2C 01 00 00            PUSH 0x12c
005C0EDA  68 EA 01 00 00            PUSH 0x1ea
005C0EDF  6A 1E                     PUSH 0x1e
005C0EE1  68 EA 01 00 00            PUSH 0x1ea
005C0EE6  6A 1E                     PUSH 0x1e
005C0EE8  E8 AB 13 E4 FF            CALL 0x00402298
005C0EED  83 C4 20                  ADD ESP,0x20
LAB_005c0ef0:
005C0EF0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C0EF6  6A 32                     PUSH 0x32
005C0EF8  68 90 01 00 00            PUSH 0x190
005C0EFD  68 A9 01 00 00            PUSH 0x1a9
005C0F02  68 74 01 00 00            PUSH 0x174
005C0F07  51                        PUSH ECX
005C0F08  E8 73 50 0F 00            CALL 0x006b5f80
005C0F0D  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005C0F10  52                        PUSH EDX
005C0F11  6A 01                     PUSH 0x1
005C0F13  6A 32                     PUSH 0x32
005C0F15  68 90 01 00 00            PUSH 0x190
005C0F1A  68 A9 01 00 00            PUSH 0x1a9
005C0F1F  68 74 01 00 00            PUSH 0x174
005C0F24  68 A9 01 00 00            PUSH 0x1a9
005C0F29  68 74 01 00 00            PUSH 0x174
005C0F2E  E8 65 13 E4 FF            CALL 0x00402298
005C0F33  8A 43 66                  MOV AL,byte ptr [EBX + 0x66]
005C0F36  83 C4 20                  ADD ESP,0x20
005C0F39  3C 01                     CMP AL,0x1
005C0F3B  0F 85 37 01 00 00         JNZ 0x005c1078
005C0F41  33 C0                     XOR EAX,EAX
005C0F43  C6 43 67 00               MOV byte ptr [EBX + 0x67],0x0
005C0F47  8A 43 6A                  MOV AL,byte ptr [EBX + 0x6a]
005C0F4A  8B 8C 83 47 03 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x347]
005C0F51  39 71 0C                  CMP dword ptr [ECX + 0xc],ESI
005C0F54  0F 84 1E 01 00 00         JZ 0x005c1078
005C0F5A  8B 15 D8 C0 79 00         MOV EDX,dword ptr [0x0079c0d8]
005C0F60  A1 D4 C0 79 00            MOV EAX,[0x0079c0d4]
005C0F65  52                        PUSH EDX
005C0F66  68 DD 7D 80 00            PUSH 0x807ddd
005C0F6B  50                        PUSH EAX
005C0F6C  68 80 76 80 00            PUSH 0x807680
005C0F71  68 EC A1 7C 00            PUSH 0x7ca1ec
005C0F76  68 3A F3 80 00            PUSH 0x80f33a
005C0F7B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005C0F7E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C0F84  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005C0F8A  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
005C0F90  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
005C0F96  56                        PUSH ESI
005C0F97  50                        PUSH EAX
005C0F98  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
005C0F9E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C0FA4  E8 47 C8 16 00            CALL 0x0072d7f0
005C0FA9  83 C4 20                  ADD ESP,0x20
005C0FAC  3B C6                     CMP EAX,ESI
005C0FAE  75 28                     JNZ 0x005c0fd8
005C0FB0  56                        PUSH ESI
005C0FB1  56                        PUSH ESI
005C0FB2  56                        PUSH ESI
005C0FB3  68 3A F3 80 00            PUSH 0x80f33a
005C0FB8  68 45 03 00 00            PUSH 0x345
005C0FBD  E8 FE FE 12 00            CALL 0x006f0ec0
005C0FC2  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
005C0FC8  8B F0                     MOV ESI,EAX
005C0FCA  83 C4 14                  ADD ESP,0x14
005C0FCD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005C0FD0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C0FD6  EB 0F                     JMP 0x005c0fe7
LAB_005c0fd8:
005C0FD8  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
005C0FDE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005C0FE1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_005c0fe7:
005C0FE7  85 F6                     TEST ESI,ESI
005C0FE9  0F 84 86 00 00 00         JZ 0x005c1075
005C0FEF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005C0FF2  33 D2                     XOR EDX,EDX
005C0FF4  C7 45 F4 22 C5 80 00      MOV dword ptr [EBP + -0xc],0x80c522
005C0FFB  8A 53 6A                  MOV DL,byte ptr [EBX + 0x6a]
005C0FFE  8B 7B 6B                  MOV EDI,dword ptr [EBX + 0x6b]
005C1001  8B 8C 93 47 03 00 00      MOV ECX,dword ptr [EBX + EDX*0x4 + 0x347]
005C1008  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
005C100B  73 0B                     JNC 0x005c1018
005C100D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005C1010  0F AF C7                  IMUL EAX,EDI
005C1013  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005C1016  EB 02                     JMP 0x005c101a
LAB_005c1018:
005C1018  33 C0                     XOR EAX,EAX
LAB_005c101a:
005C101A  8B 00                     MOV EAX,dword ptr [EAX]
005C101C  8B 0D DC C0 79 00         MOV ECX,dword ptr [0x0079c0dc]
005C1022  42                        INC EDX
005C1023  50                        PUSH EAX
005C1024  52                        PUSH EDX
005C1025  51                        PUSH ECX
005C1026  68 74 D0 7C 00            PUSH 0x7cd074
005C102B  68 3A F3 80 00            PUSH 0x80f33a
005C1030  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C1036  83 C4 14                  ADD ESP,0x14
005C1039  8D 55 F4                  LEA EDX,[EBP + -0xc]
005C103C  8B CE                     MOV ECX,ESI
005C103E  6A 00                     PUSH 0x0
005C1040  52                        PUSH EDX
005C1041  68 3A F3 80 00            PUSH 0x80f33a
005C1046  6A 0C                     PUSH 0xc
005C1048  E8 93 0C 13 00            CALL 0x006f1ce0
005C104D  85 C0                     TEST EAX,EAX
005C104F  74 19                     JZ 0x005c106a
005C1051  B9 66 06 00 00            MOV ECX,0x666
005C1056  BE 67 C9 80 00            MOV ESI,0x80c967
005C105B  BF B6 87 80 00            MOV EDI,0x8087b6
005C1060  C6 43 67 01               MOV byte ptr [EBX + 0x67],0x1
005C1064  F3 A5                     MOVSD.REP ES:EDI,ESI
005C1066  A4                        MOVSB ES:EDI,ESI
005C1067  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005c106a:
005C106A  56                        PUSH ESI
005C106B  E8 00 01 13 00            CALL 0x006f1170
005C1070  83 C4 04                  ADD ESP,0x4
005C1073  EB 03                     JMP 0x005c1078
LAB_005c1075:
005C1075  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_005c1078:
005C1078  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005C107B  B9 08 00 00 00            MOV ECX,0x8
005C1080  33 C0                     XOR EAX,EAX
005C1082  8B FE                     MOV EDI,ESI
005C1084  F3 AB                     STOSD.REP ES:EDI
005C1086  C7 43 2D 23 00 00 00      MOV dword ptr [EBX + 0x2d],0x23
005C108D  33 FF                     XOR EDI,EDI
LAB_005c108f:
005C108F  8D 47 01                  LEA EAX,[EDI + 0x1]
005C1092  85 FF                     TEST EDI,EDI
005C1094  66 89 43 31               MOV word ptr [EBX + 0x31],AX
005C1098  74 28                     JZ 0x005c10c2
005C109A  8A 43 67                  MOV AL,byte ptr [EBX + 0x67]
005C109D  84 C0                     TEST AL,AL
005C109F  74 1A                     JZ 0x005c10bb
005C10A1  33 C9                     XOR ECX,ECX
005C10A3  33 C0                     XOR EAX,EAX
005C10A5  8A 0D 3E C8 80 00         MOV CL,byte ptr [0x0080c83e]
005C10AB  83 C1 02                  ADD ECX,0x2
005C10AE  3B F9                     CMP EDI,ECX
005C10B0  0F 9D C0                  SETGE AL
005C10B3  48                        DEC EAX
005C10B4  24 FE                     AND AL,0xfe
005C10B6  83 C0 02                  ADD EAX,0x2
005C10B9  EB 0C                     JMP 0x005c10c7
LAB_005c10bb:
005C10BB  B8 02 00 00 00            MOV EAX,0x2
005C10C0  EB 05                     JMP 0x005c10c7
LAB_005c10c2:
005C10C2  B8 01 00 00 00            MOV EAX,0x1
LAB_005c10c7:
005C10C7  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
005C10CD  56                        PUSH ESI
005C10CE  52                        PUSH EDX
005C10CF  6A 02                     PUSH 0x2
005C10D1  8B CB                     MOV ECX,EBX
005C10D3  66 89 43 33               MOV word ptr [EBX + 0x33],AX
005C10D7  E8 A4 4F 12 00            CALL 0x006e6080
005C10DC  47                        INC EDI
005C10DD  83 FF 09                  CMP EDI,0x9
005C10E0  7C AD                     JL 0x005c108f
005C10E2  8A 43 67                  MOV AL,byte ptr [EBX + 0x67]
005C10E5  84 C0                     TEST AL,AL
005C10E7  0F 84 AE 00 00 00         JZ 0x005c119b
005C10ED  33 FF                     XOR EDI,EDI
005C10EF  C6 43 69 00               MOV byte ptr [EBX + 0x69],0x0
005C10F3  89 BB A3 02 00 00         MOV dword ptr [EBX + 0x2a3],EDI
005C10F9  A0 3E C8 80 00            MOV AL,[0x0080c83e]
005C10FE  84 C0                     TEST AL,AL
005C1100  76 26                     JBE 0x005c1128
005C1102  BE 47 C9 80 00            MOV ESI,0x80c947
LAB_005c1107:
005C1107  8B 06                     MOV EAX,dword ptr [ESI]
005C1109  8B 8B A3 02 00 00         MOV ECX,dword ptr [EBX + 0x2a3]
005C110F  3B C1                     CMP EAX,ECX
005C1111  7E 06                     JLE 0x005c1119
005C1113  89 83 A3 02 00 00         MOV dword ptr [EBX + 0x2a3],EAX
LAB_005c1119:
005C1119  33 C0                     XOR EAX,EAX
005C111B  47                        INC EDI
005C111C  A0 3E C8 80 00            MOV AL,[0x0080c83e]
005C1121  83 C6 04                  ADD ESI,0x4
005C1124  3B F8                     CMP EDI,EAX
005C1126  7C DF                     JL 0x005c1107
LAB_005c1128:
005C1128  A1 63 C9 80 00            MOV EAX,[0x0080c963]
005C112D  8B 8B A3 02 00 00         MOV ECX,dword ptr [EBX + 0x2a3]
005C1133  3B C1                     CMP EAX,ECX
005C1135  7E 06                     JLE 0x005c113d
005C1137  89 83 A3 02 00 00         MOV dword ptr [EBX + 0x2a3],EAX
LAB_005c113d:
005C113D  68 12 62 00 00            PUSH 0x6212
005C1142  68 00 62 00 00            PUSH 0x6200
005C1147  6A 28                     PUSH 0x28
005C1149  68 91 00 00 00            PUSH 0x91
005C114E  68 26 02 00 00            PUSH 0x226
005C1153  68 62 02 00 00            PUSH 0x262
005C1158  6A 01                     PUSH 0x1
005C115A  6A 01                     PUSH 0x1
005C115C  8B CB                     MOV ECX,EBX
005C115E  E8 6C 4D E4 FF            CALL 0x00405ecf
005C1163  89 83 8F 00 00 00         MOV dword ptr [EBX + 0x8f],EAX
005C1169  8A 43 66                  MOV AL,byte ptr [EBX + 0x66]
005C116C  3C 01                     CMP AL,0x1
005C116E  75 4A                     JNZ 0x005c11ba
005C1170  68 15 62 00 00            PUSH 0x6215
005C1175  68 03 62 00 00            PUSH 0x6203
005C117A  6A 1E                     PUSH 0x1e
005C117C  68 2C 01 00 00            PUSH 0x12c
005C1181  68 EA 01 00 00            PUSH 0x1ea
005C1186  6A 1E                     PUSH 0x1e
005C1188  6A 01                     PUSH 0x1
005C118A  6A 01                     PUSH 0x1
005C118C  8B CB                     MOV ECX,EBX
005C118E  E8 3C 4D E4 FF            CALL 0x00405ecf
005C1193  89 83 9B 00 00 00         MOV dword ptr [EBX + 0x9b],EAX
005C1199  EB 1F                     JMP 0x005c11ba
LAB_005c119b:
005C119B  8B 8B 8F 00 00 00         MOV ECX,dword ptr [EBX + 0x8f]
005C11A1  56                        PUSH ESI
005C11A2  51                        PUSH ECX
005C11A3  6A 02                     PUSH 0x2
005C11A5  8B CB                     MOV ECX,EBX
005C11A7  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005C11AE  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005C11B5  E8 C6 4E 12 00            CALL 0x006e6080
LAB_005c11ba:
005C11BA  6A 01                     PUSH 0x1
005C11BC  8B CB                     MOV ECX,EBX
005C11BE  C6 43 68 01               MOV byte ptr [EBX + 0x68],0x1
005C11C2  E8 A5 00 E4 FF            CALL 0x0040126c
005C11C7  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005C11CA  8B CB                     MOV ECX,EBX
005C11CC  50                        PUSH EAX
005C11CD  6A 00                     PUSH 0x0
005C11CF  6A 0F                     PUSH 0xf
005C11D1  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C11D8  E8 A3 4E 12 00            CALL 0x006e6080
005C11DD  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005C11E0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C11E6  5F                        POP EDI
005C11E7  5E                        POP ESI
005C11E8  5B                        POP EBX
005C11E9  8B E5                     MOV ESP,EBP
005C11EB  5D                        POP EBP
005C11EC  C3                        RET
LAB_005c11ed:
005C11ED  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005C11F0  68 5C D0 7C 00            PUSH 0x7cd05c
005C11F5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C11FA  57                        PUSH EDI
005C11FB  56                        PUSH ESI
005C11FC  68 0E 03 00 00            PUSH 0x30e
005C1201  68 C8 CE 7C 00            PUSH 0x7ccec8
005C1206  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C120B  E8 C0 C2 0E 00            CALL 0x006ad4d0
005C1210  83 C4 18                  ADD ESP,0x18
005C1213  85 C0                     TEST EAX,EAX
005C1215  74 01                     JZ 0x005c1218
005C1217  CC                        INT3
LAB_005c1218:
005C1218  68 0E 03 00 00            PUSH 0x30e
005C121D  68 C8 CE 7C 00            PUSH 0x7ccec8
005C1222  56                        PUSH ESI
005C1223  57                        PUSH EDI
005C1224  E8 17 4C 0E 00            CALL 0x006a5e40
005C1229  5F                        POP EDI
005C122A  5E                        POP ESI
005C122B  5B                        POP EBX
005C122C  8B E5                     MOV ESP,EBP
005C122E  5D                        POP EBP
005C122F  C3                        RET
