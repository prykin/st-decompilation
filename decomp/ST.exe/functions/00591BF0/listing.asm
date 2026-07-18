FUN_00591bf0:
00591BF0  55                        PUSH EBP
00591BF1  8B EC                     MOV EBP,ESP
00591BF3  81 EC 80 02 00 00         SUB ESP,0x280
00591BF9  53                        PUSH EBX
00591BFA  56                        PUSH ESI
00591BFB  8B F1                     MOV ESI,ECX
00591BFD  57                        PUSH EDI
00591BFE  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00591C01  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00591C08  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
00591C0E  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
00591C11  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00591C16  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
00591C1C  8D 8D 40 FF FF FF         LEA ECX,[EBP + 0xffffff40]
00591C22  6A 00                     PUSH 0x0
00591C24  52                        PUSH EDX
00591C25  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00591C2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00591C31  E8 BA BB 19 00            CALL 0x0072d7f0
00591C36  8B F0                     MOV ESI,EAX
00591C38  83 C4 08                  ADD ESP,0x8
00591C3B  85 F6                     TEST ESI,ESI
00591C3D  0F 85 32 05 00 00         JNZ 0x00592175
00591C43  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00591C46  8B CB                     MOV ECX,EBX
00591C48  E8 CF 09 E7 FF            CALL 0x0040261c
00591C4D  8B CB                     MOV ECX,EBX
00591C4F  E8 F9 32 E7 FF            CALL 0x00404f4d
00591C54  33 C0                     XOR EAX,EAX
00591C56  8A 43 65                  MOV AL,byte ptr [EBX + 0x65]
00591C59  48                        DEC EAX
00591C5A  0F 84 81 04 00 00         JZ 0x005920e1
00591C60  83 E8 02                  SUB EAX,0x2
00591C63  0F 84 66 01 00 00         JZ 0x00591dcf
00591C69  48                        DEC EAX
00591C6A  0F 85 F2 04 00 00         JNZ 0x00592162
00591C70  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
00591C76  33 FF                     XOR EDI,EDI
00591C78  84 C0                     TEST AL,AL
00591C7A  0F 86 A6 00 00 00         JBE 0x00591d26
00591C80  8D B3 78 01 00 00         LEA ESI,[EBX + 0x178]
LAB_00591c86:
00591C86  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
00591C89  8B 56 AF                  MOV EDX,dword ptr [ESI + -0x51]
00591C8C  8B 4E AB                  MOV ECX,dword ptr [ESI + -0x55]
00591C8F  2B C2                     SUB EAX,EDX
00591C91  3B C1                     CMP EAX,ECX
00591C93  72 73                     JC 0x00591d08
00591C95  8A 86 43 FF FF FF         MOV AL,byte ptr [ESI + 0xffffff43]
00591C9B  84 C0                     TEST AL,AL
00591C9D  74 3A                     JZ 0x00591cd9
00591C9F  8B 06                     MOV EAX,dword ptr [ESI]
00591CA1  83 F8 FF                  CMP EAX,-0x1
00591CA4  74 0A                     JZ 0x00591cb0
00591CA6  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00591CA9  50                        PUSH EAX
00591CAA  51                        PUSH ECX
00591CAB  E8 40 1E 12 00            CALL 0x006b3af0
LAB_00591cb0:
00591CB0  8A 86 6A FF FF FF         MOV AL,byte ptr [ESI + 0xffffff6a]
00591CB6  84 C0                     TEST AL,AL
00591CB8  74 18                     JZ 0x00591cd2
00591CBA  8B 86 91 00 00 00         MOV EAX,dword ptr [ESI + 0x91]
00591CC0  83 F8 FF                  CMP EAX,-0x1
00591CC3  74 0D                     JZ 0x00591cd2
00591CC5  8B 96 D5 00 00 00         MOV EDX,dword ptr [ESI + 0xd5]
00591CCB  50                        PUSH EAX
00591CCC  52                        PUSH EDX
00591CCD  E8 1E 1E 12 00            CALL 0x006b3af0
LAB_00591cd2:
00591CD2  C6 86 43 FF FF FF 00      MOV byte ptr [ESI + 0xffffff43],0x0
LAB_00591cd9:
00591CD9  8B 86 73 FF FF FF         MOV EAX,dword ptr [ESI + 0xffffff73]
00591CDF  85 C0                     TEST EAX,EAX
00591CE1  7E 2C                     JLE 0x00591d0f
00591CE3  48                        DEC EAX
00591CE4  89 86 73 FF FF FF         MOV dword ptr [ESI + 0xffffff73],EAX
00591CEA  8B 8E 6F FF FF FF         MOV ECX,dword ptr [ESI + 0xffffff6f]
00591CF0  83 F9 FF                  CMP ECX,-0x1
00591CF3  74 13                     JZ 0x00591d08
00591CF5  8B 56 8B                  MOV EDX,dword ptr [ESI + -0x75]
00591CF8  52                        PUSH EDX
00591CF9  8B 56 87                  MOV EDX,dword ptr [ESI + -0x79]
00591CFC  52                        PUSH EDX
00591CFD  50                        PUSH EAX
00591CFE  8B 46 B3                  MOV EAX,dword ptr [ESI + -0x4d]
00591D01  51                        PUSH ECX
00591D02  50                        PUSH EAX
00591D03  E8 28 1A 12 00            CALL 0x006b3730
LAB_00591d08:
00591D08  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00591d0f:
00591D0F  33 C9                     XOR ECX,ECX
00591D11  47                        INC EDI
00591D12  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
00591D18  81 C6 FB 01 00 00         ADD ESI,0x1fb
00591D1E  3B F9                     CMP EDI,ECX
00591D20  0F 8C 60 FF FF FF         JL 0x00591c86
LAB_00591d26:
00591D26  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00591D2C  33 FF                     XOR EDI,EDI
00591D2E  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
00591D34  3B C7                     CMP EAX,EDI
00591D36  74 09                     JZ 0x00591d41
00591D38  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
00591D3C  74 03                     JZ 0x00591d41
00591D3E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00591d41:
00591D41  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
00591D44  0F 84 18 04 00 00         JZ 0x00592162
00591D4A  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
00591D50  C6 43 65 02               MOV byte ptr [EBX + 0x65],0x2
00591D54  84 C0                     TEST AL,AL
00591D56  76 2A                     JBE 0x00591d82
00591D58  8D B3 E7 00 00 00         LEA ESI,[EBX + 0xe7]
LAB_00591d5e:
00591D5E  8B 06                     MOV EAX,dword ptr [ESI]
00591D60  83 F8 FF                  CMP EAX,-0x1
00591D63  74 0A                     JZ 0x00591d6f
00591D65  50                        PUSH EAX
00591D66  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00591D69  50                        PUSH EAX
00591D6A  E8 81 1D 12 00            CALL 0x006b3af0
LAB_00591d6f:
00591D6F  33 C9                     XOR ECX,ECX
00591D71  47                        INC EDI
00591D72  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
00591D78  81 C6 FB 01 00 00         ADD ESI,0x1fb
00591D7E  3B F9                     CMP EDI,ECX
00591D80  7C DC                     JL 0x00591d5e
LAB_00591d82:
00591D82  33 C9                     XOR ECX,ECX
00591D84  8A 8B 5A 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5a]
00591D8A  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
00591D91  2B C1                     SUB EAX,ECX
00591D93  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00591D96  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
00591D99  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
00591D9C  03 C1                     ADD EAX,ECX
00591D9E  8B 88 D1 00 00 00         MOV ECX,dword ptr [EAX + 0xd1]
00591DA4  85 C9                     TEST ECX,ECX
00591DA6  0F 84 B6 03 00 00         JZ 0x00592162
00591DAC  05 C1 00 00 00            ADD EAX,0xc1
00591DB1  B9 20 76 80 00            MOV ECX,0x807620
00591DB6  50                        PUSH EAX
00591DB7  E8 94 1D 15 00            CALL 0x006e3b50
00591DBC  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
00591DC2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00591DC8  5F                        POP EDI
00591DC9  5E                        POP ESI
00591DCA  5B                        POP EBX
00591DCB  8B E5                     MOV ESP,EBP
00591DCD  5D                        POP EBP
00591DCE  C3                        RET
LAB_00591dcf:
00591DCF  33 C9                     XOR ECX,ECX
00591DD1  33 FF                     XOR EDI,EDI
00591DD3  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
00591DD9  85 C9                     TEST ECX,ECX
00591DDB  0F 8E C8 01 00 00         JLE 0x00591fa9
LAB_00591de1:
00591DE1  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
00591DE8  2B C7                     SUB EAX,EDI
00591DEA  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00591DED  8D 34 D7                  LEA ESI,[EDI + EDX*0x8]
00591DF0  8D 04 73                  LEA EAX,[EBX + ESI*0x2]
00591DF3  03 F0                     ADD ESI,EAX
00591DF5  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
00591DFB  85 C0                     TEST EAX,EAX
00591DFD  0F 84 95 01 00 00         JZ 0x00591f98
00591E03  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
00591E06  8B 86 27 01 00 00         MOV EAX,dword ptr [ESI + 0x127]
00591E0C  2B D0                     SUB EDX,EAX
00591E0E  8B 86 23 01 00 00         MOV EAX,dword ptr [ESI + 0x123]
00591E14  3B D0                     CMP EDX,EAX
00591E16  0F 82 48 01 00 00         JC 0x00591f64
00591E1C  8B 8E EF 00 00 00         MOV ECX,dword ptr [ESI + 0xef]
00591E22  8B 86 EB 00 00 00         MOV EAX,dword ptr [ESI + 0xeb]
00591E28  49                        DEC ECX
00591E29  3B C1                     CMP EAX,ECX
00591E2B  7D 72                     JGE 0x00591e9f
00591E2D  85 C0                     TEST EAX,EAX
00591E2F  75 28                     JNZ 0x00591e59
00591E31  8B 86 E7 00 00 00         MOV EAX,dword ptr [ESI + 0xe7]
00591E37  83 F8 FF                  CMP EAX,-0x1
00591E3A  74 1D                     JZ 0x00591e59
00591E3C  8B 96 03 01 00 00         MOV EDX,dword ptr [ESI + 0x103]
00591E42  8B 8E FF 00 00 00         MOV ECX,dword ptr [ESI + 0xff]
00591E48  52                        PUSH EDX
00591E49  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
00591E4F  51                        PUSH ECX
00591E50  6A FE                     PUSH -0x2
00591E52  50                        PUSH EAX
00591E53  52                        PUSH EDX
00591E54  E8 77 16 12 00            CALL 0x006b34d0
LAB_00591e59:
00591E59  8B 96 EB 00 00 00         MOV EDX,dword ptr [ESI + 0xeb]
00591E5F  42                        INC EDX
00591E60  89 96 EB 00 00 00         MOV dword ptr [ESI + 0xeb],EDX
00591E66  8B 86 E7 00 00 00         MOV EAX,dword ptr [ESI + 0xe7]
00591E6C  83 F8 FF                  CMP EAX,-0x1
00591E6F  74 22                     JZ 0x00591e93
00591E71  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
00591E77  8B 96 FF 00 00 00         MOV EDX,dword ptr [ESI + 0xff]
00591E7D  51                        PUSH ECX
00591E7E  8B 8E EB 00 00 00         MOV ECX,dword ptr [ESI + 0xeb]
00591E84  52                        PUSH EDX
00591E85  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
00591E8B  51                        PUSH ECX
00591E8C  50                        PUSH EAX
00591E8D  52                        PUSH EDX
00591E8E  E8 9D 18 12 00            CALL 0x006b3730
LAB_00591e93:
00591E93  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00591E9A  E9 F9 00 00 00            JMP 0x00591f98
LAB_00591e9f:
00591E9F  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
00591EA5  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
00591EAB  83 E9 03                  SUB ECX,0x3
00591EAE  3B C1                     CMP EAX,ECX
00591EB0  0F 8D E2 00 00 00         JGE 0x00591f98
00591EB6  85 C0                     TEST EAX,EAX
00591EB8  75 5A                     JNZ 0x00591f14
00591EBA  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00591EC0  83 F8 FF                  CMP EAX,-0x1
00591EC3  74 1D                     JZ 0x00591ee2
00591EC5  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00591ECB  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
00591ED1  52                        PUSH EDX
00591ED2  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
00591ED8  51                        PUSH ECX
00591ED9  6A FE                     PUSH -0x2
00591EDB  50                        PUSH EAX
00591EDC  52                        PUSH EDX
00591EDD  E8 EE 15 12 00            CALL 0x006b34d0
LAB_00591ee2:
00591EE2  8A 86 E2 00 00 00         MOV AL,byte ptr [ESI + 0xe2]
00591EE8  84 C0                     TEST AL,AL
00591EEA  74 28                     JZ 0x00591f14
00591EEC  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
00591EF2  83 F8 FF                  CMP EAX,-0x1
00591EF5  74 1D                     JZ 0x00591f14
00591EF7  8B 8E 25 02 00 00         MOV ECX,dword ptr [ESI + 0x225]
00591EFD  8B 96 21 02 00 00         MOV EDX,dword ptr [ESI + 0x221]
00591F03  51                        PUSH ECX
00591F04  52                        PUSH EDX
00591F05  6A FE                     PUSH -0x2
00591F07  50                        PUSH EAX
00591F08  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
00591F0E  50                        PUSH EAX
00591F0F  E8 BC 15 12 00            CALL 0x006b34d0
LAB_00591f14:
00591F14  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
00591F1A  42                        INC EDX
00591F1B  89 96 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDX
00591F21  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00591F27  83 F8 FF                  CMP EAX,-0x1
00591F2A  74 22                     JZ 0x00591f4e
00591F2C  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00591F32  8B 96 90 01 00 00         MOV EDX,dword ptr [ESI + 0x190]
00591F38  51                        PUSH ECX
00591F39  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
00591F3F  52                        PUSH EDX
00591F40  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
00591F46  51                        PUSH ECX
00591F47  50                        PUSH EAX
00591F48  52                        PUSH EDX
00591F49  E8 E2 17 12 00            CALL 0x006b3730
LAB_00591f4e:
00591F4E  6A FF                     PUSH -0x1
00591F50  6A 01                     PUSH 0x1
00591F52  6A 1E                     PUSH 0x1e
00591F54  8B CB                     MOV ECX,EBX
00591F56  E8 96 2C E7 FF            CALL 0x00404bf1
00591F5B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00591F62  EB 34                     JMP 0x00591f98
LAB_00591f64:
00591F64  33 FF                     XOR EDI,EDI
00591F66  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00591F6D  85 C9                     TEST ECX,ECX
00591F6F  7E 27                     JLE 0x00591f98
00591F71  8D 83 49 02 00 00         LEA EAX,[EBX + 0x249]
LAB_00591f77:
00591F77  8A 88 99 FE FF FF         MOV CL,byte ptr [EAX + 0xfffffe99]
00591F7D  84 C9                     TEST CL,CL
00591F7F  74 05                     JZ 0x00591f86
00591F81  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
00591F84  89 08                     MOV dword ptr [EAX],ECX
LAB_00591f86:
00591F86  33 D2                     XOR EDX,EDX
00591F88  47                        INC EDI
00591F89  8A 93 9A 00 00 00         MOV DL,byte ptr [EBX + 0x9a]
00591F8F  05 FB 01 00 00            ADD EAX,0x1fb
00591F94  3B FA                     CMP EDI,EDX
00591F96  7C DF                     JL 0x00591f77
LAB_00591f98:
00591F98  33 C9                     XOR ECX,ECX
00591F9A  47                        INC EDI
00591F9B  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
00591FA1  3B F9                     CMP EDI,ECX
00591FA3  0F 8C 38 FE FF FF         JL 0x00591de1
LAB_00591fa9:
00591FA9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00591FAE  8B 80 E6 02 00 00         MOV EAX,dword ptr [EAX + 0x2e6]
00591FB4  85 C0                     TEST EAX,EAX
00591FB6  74 0D                     JZ 0x00591fc5
00591FB8  80 78 65 01               CMP byte ptr [EAX + 0x65],0x1
00591FBC  74 07                     JZ 0x00591fc5
00591FBE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00591fc5:
00591FC5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00591FC8  85 C0                     TEST EAX,EAX
00591FCA  0F 84 92 01 00 00         JZ 0x00592162
00591FD0  B9 16 00 00 00            MOV ECX,0x16
00591FD5  33 C0                     XOR EAX,EAX
00591FD7  8D 7D 84                  LEA EDI,[EBP + -0x7c]
00591FDA  BA 01 00 00 00            MOV EDX,0x1
00591FDF  F3 AB                     STOSD.REP ES:EDI
00591FE1  B9 70 00 00 00            MOV ECX,0x70
00591FE6  8D BD 80 FD FF FF         LEA EDI,[EBP + 0xfffffd80]
00591FEC  F3 AB                     STOSD.REP ES:EDI
00591FEE  8D 8D 84 FD FF FF         LEA ECX,[EBP + 0xfffffd84]
00591FF4  8D 83 91 04 00 00         LEA EAX,[EBX + 0x491]
00591FFA  BF 03 00 00 00            MOV EDI,0x3
LAB_00591fff:
00591FFF  8B 70 64                  MOV ESI,dword ptr [EAX + 0x64]
00592002  89 51 FC                  MOV dword ptr [ECX + -0x4],EDX
00592005  03 30                     ADD ESI,dword ptr [EAX]
00592007  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0059200D  05 FB 01 00 00            ADD EAX,0x1fb
00592012  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
00592015  8B B0 0D FE FF FF         MOV ESI,dword ptr [EAX + 0xfffffe0d]
0059201B  89 71 10                  MOV dword ptr [ECX + 0x10],ESI
0059201E  8B B0 6D FE FF FF         MOV ESI,dword ptr [EAX + 0xfffffe6d]
00592024  03 B0 09 FE FF FF         ADD ESI,dword ptr [EAX + 0xfffffe09]
0059202A  42                        INC EDX
0059202B  89 71 0C                  MOV dword ptr [ECX + 0xc],ESI
0059202E  8B B0 11 FE FF FF         MOV ESI,dword ptr [EAX + 0xfffffe11]
00592034  89 71 14                  MOV dword ptr [ECX + 0x14],ESI
00592037  83 C1 70                  ADD ECX,0x70
0059203A  4F                        DEC EDI
0059203B  75 C2                     JNZ 0x00591fff
0059203D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00592040  33 D2                     XOR EDX,EDX
00592042  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00592048  8D 8D 80 FD FF FF         LEA ECX,[EBP + 0xfffffd80]
0059204E  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00592051  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00592054  B9 02 00 00 00            MOV ECX,0x2
00592059  8D 55 84                  LEA EDX,[EBP + -0x7c]
0059205C  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0059205F  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00592062  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00592065  6A 00                     PUSH 0x0
00592067  BE 01 00 00 00            MOV ESI,0x1
0059206C  52                        PUSH EDX
0059206D  8D 53 66                  LEA EDX,[EBX + 0x66]
00592070  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
00592073  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00592076  C7 45 9C FF 68 00 00      MOV dword ptr [EBP + -0x64],0x68ff
0059207D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00592080  C7 45 BC 7F 69 00 00      MOV dword ptr [EBP + -0x44],0x697f
00592087  8B 01                     MOV EAX,dword ptr [ECX]
00592089  6A 00                     PUSH 0x0
0059208B  52                        PUSH EDX
0059208C  6A 05                     PUSH 0x5
0059208E  FF 50 08                  CALL dword ptr [EAX + 0x8]
00592091  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
00592097  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
0059209D  85 C0                     TEST EAX,EAX
0059209F  74 29                     JZ 0x005920ca
005920A1  B9 06 00 00 00            MOV ECX,0x6
005920A6  33 C0                     XOR EAX,EAX
005920A8  8D 7D DC                  LEA EDI,[EBP + -0x24]
005920AB  F3 AB                     STOSD.REP ES:EDI
005920AD  66 AB                     STOSW ES:EDI
005920AF  8D 45 DC                  LEA EAX,[EBP + -0x24]
005920B2  66 89 75 E8               MOV word ptr [EBP + -0x18],SI
005920B6  66 89 75 E6               MOV word ptr [EBP + -0x1a],SI
005920BA  66 89 75 DE               MOV word ptr [EBP + -0x22],SI
005920BE  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005920C4  50                        PUSH EAX
005920C5  E8 87 2A E7 FF            CALL 0x00404b51
LAB_005920ca:
005920CA  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
005920D0  C6 43 65 01               MOV byte ptr [EBX + 0x65],0x1
005920D4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005920DA  5F                        POP EDI
005920DB  5E                        POP ESI
005920DC  5B                        POP EBX
005920DD  8B E5                     MOV ESP,EBP
005920DF  5D                        POP EBP
005920E0  C3                        RET
LAB_005920e1:
005920E1  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005920E7  33 FF                     XOR EDI,EDI
005920E9  84 C0                     TEST AL,AL
005920EB  76 75                     JBE 0x00592162
005920ED  8D B3 21 02 00 00         LEA ESI,[EBX + 0x221]
LAB_005920f3:
005920F3  8B 86 9B FE FF FF         MOV EAX,dword ptr [ESI + 0xfffffe9b]
005920F9  85 C0                     TEST EAX,EAX
005920FB  74 52                     JZ 0x0059214f
005920FD  8A 86 C1 FE FF FF         MOV AL,byte ptr [ESI + 0xfffffec1]
00592103  84 C0                     TEST AL,AL
00592105  74 48                     JZ 0x0059214f
00592107  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
0059210A  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
0059210D  8B C8                     MOV ECX,EAX
0059210F  2B CA                     SUB ECX,EDX
00592111  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00592114  3B CA                     CMP ECX,EDX
00592116  72 37                     JC 0x0059214f
00592118  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0059211B  8B 56 EC                  MOV EDX,dword ptr [ESI + -0x14]
0059211E  42                        INC EDX
0059211F  89 56 EC                  MOV dword ptr [ESI + -0x14],EDX
00592122  8B 4E F0                  MOV ECX,dword ptr [ESI + -0x10]
00592125  8B C2                     MOV EAX,EDX
00592127  3B C1                     CMP EAX,ECX
00592129  7C 07                     JL 0x00592132
0059212B  C7 46 EC 00 00 00 00      MOV dword ptr [ESI + -0x14],0x0
LAB_00592132:
00592132  8B 46 E8                  MOV EAX,dword ptr [ESI + -0x18]
00592135  83 F8 FF                  CMP EAX,-0x1
00592138  74 15                     JZ 0x0059214f
0059213A  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0059213D  8B 0E                     MOV ECX,dword ptr [ESI]
0059213F  52                        PUSH EDX
00592140  8B 56 EC                  MOV EDX,dword ptr [ESI + -0x14]
00592143  51                        PUSH ECX
00592144  52                        PUSH EDX
00592145  50                        PUSH EAX
00592146  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00592149  50                        PUSH EAX
0059214A  E8 E1 15 12 00            CALL 0x006b3730
LAB_0059214f:
0059214F  33 C9                     XOR ECX,ECX
00592151  47                        INC EDI
00592152  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
00592158  81 C6 FB 01 00 00         ADD ESI,0x1fb
0059215E  3B F9                     CMP EDI,ECX
00592160  7C 91                     JL 0x005920f3
LAB_00592162:
00592162  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
00592168  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059216E  5F                        POP EDI
0059216F  5E                        POP ESI
00592170  5B                        POP EBX
00592171  8B E5                     MOV ESP,EBP
00592173  5D                        POP EBP
00592174  C3                        RET
LAB_00592175:
00592175  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
0059217B  68 1C BE 7C 00            PUSH 0x7cbe1c
00592180  68 CC 4C 7A 00            PUSH 0x7a4ccc
00592185  56                        PUSH ESI
00592186  6A 00                     PUSH 0x0
00592188  68 17 01 00 00            PUSH 0x117
0059218D  68 D4 BC 7C 00            PUSH 0x7cbcd4
00592192  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00592197  E8 34 B3 11 00            CALL 0x006ad4d0
0059219C  83 C4 18                  ADD ESP,0x18
0059219F  85 C0                     TEST EAX,EAX
005921A1  74 01                     JZ 0x005921a4
005921A3  CC                        INT3
LAB_005921a4:
005921A4  68 17 01 00 00            PUSH 0x117
005921A9  68 D4 BC 7C 00            PUSH 0x7cbcd4
005921AE  6A 00                     PUSH 0x0
005921B0  56                        PUSH ESI
005921B1  E8 8A 3C 11 00            CALL 0x006a5e40
005921B6  5F                        POP EDI
005921B7  5E                        POP ESI
005921B8  5B                        POP EBX
005921B9  8B E5                     MOV ESP,EBP
005921BB  5D                        POP EBP
005921BC  C3                        RET
