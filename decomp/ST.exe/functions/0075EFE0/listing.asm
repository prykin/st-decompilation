FUN_0075efe0:
0075EFE0  55                        PUSH EBP
0075EFE1  8B EC                     MOV EBP,ESP
0075EFE3  83 EC 24                  SUB ESP,0x24
0075EFE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EFE9  53                        PUSH EBX
0075EFEA  56                        PUSH ESI
0075EFEB  57                        PUSH EDI
0075EFEC  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075EFF2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075EFF5  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0075EFF8  8B 30                     MOV ESI,dword ptr [EAX]
0075EFFA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0075EFFD  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0075F000  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0075F003  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075F006  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0075F009  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0075F00C  3B F2                     CMP ESI,EDX
0075F00E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0075F011  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075F014  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075F017  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075F01A  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0075F01D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0075F020  0F 8D FF 00 00 00         JGE 0x0075f125
0075F026  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0075F029  7F 7C                     JG 0x0075f0a7
0075F02B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075F02E  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
0075F031  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_0075f034:
0075F034  3B CF                     CMP ECX,EDI
0075F036  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075F039  7F 3C                     JG 0x0075f077
0075F03B  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0075F03E  C1 E1 05                  SHL ECX,0x5
0075F041  8B 02                     MOV EAX,dword ptr [EDX]
0075F043  03 CB                     ADD ECX,EBX
0075F045  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
LAB_0075f048:
0075F048  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0075F04B  8B CA                     MOV ECX,EDX
0075F04D  3B DE                     CMP EBX,ESI
0075F04F  8B C3                     MOV EAX,EBX
0075F051  7F 13                     JG 0x0075f066
LAB_0075f053:
0075F053  66 8B 39                  MOV DI,word ptr [ECX]
0075F056  83 C1 02                  ADD ECX,0x2
0075F059  66 85 FF                  TEST DI,DI
0075F05C  75 32                     JNZ 0x0075f090
0075F05E  40                        INC EAX
0075F05F  3B C6                     CMP EAX,ESI
0075F061  7E F0                     JLE 0x0075f053
0075F063  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_0075f066:
0075F066  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075F069  83 C2 40                  ADD EDX,0x40
0075F06C  40                        INC EAX
0075F06D  3B C7                     CMP EAX,EDI
0075F06F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075F072  7E D4                     JLE 0x0075f048
0075F074  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f077:
0075F077  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F07A  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
0075F07D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075F080  40                        INC EAX
0075F081  83 C6 04                  ADD ESI,0x4
0075F084  3B C2                     CMP EAX,EDX
0075F086  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F089  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0075F08C  7E A6                     JLE 0x0075f034
0075F08E  EB 11                     JMP 0x0075f0a1
LAB_0075f090:
0075F090  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F093  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F096  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075F099  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075F09C  89 01                     MOV dword ptr [ECX],EAX
0075F09E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f0a1:
0075F0A1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075F0A4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_0075f0a7:
0075F0A7  3B D6                     CMP EDX,ESI
0075F0A9  7E 7A                     JLE 0x0075f125
0075F0AB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0075F0AE  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075F0B1  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
0075F0B4  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_0075f0b7:
0075F0B7  3B CF                     CMP ECX,EDI
0075F0B9  8B F1                     MOV ESI,ECX
0075F0BB  7F 3A                     JG 0x0075f0f7
0075F0BD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0075F0C0  C1 E1 05                  SHL ECX,0x5
0075F0C3  8B 10                     MOV EDX,dword ptr [EAX]
0075F0C5  03 CB                     ADD ECX,EBX
0075F0C7  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
LAB_0075f0ca:
0075F0CA  8B C3                     MOV EAX,EBX
0075F0CC  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075F0CF  39 5D F0                  CMP dword ptr [EBP + -0x10],EBX
0075F0D2  8B CA                     MOV ECX,EDX
0075F0D4  7F 13                     JG 0x0075f0e9
LAB_0075f0d6:
0075F0D6  66 8B 39                  MOV DI,word ptr [ECX]
0075F0D9  83 C1 02                  ADD ECX,0x2
0075F0DC  66 85 FF                  TEST DI,DI
0075F0DF  75 2F                     JNZ 0x0075f110
0075F0E1  40                        INC EAX
0075F0E2  3B C3                     CMP EAX,EBX
0075F0E4  7E F0                     JLE 0x0075f0d6
0075F0E6  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_0075f0e9:
0075F0E9  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F0EC  46                        INC ESI
0075F0ED  83 C2 40                  ADD EDX,0x40
0075F0F0  3B F7                     CMP ESI,EDI
0075F0F2  7E D6                     JLE 0x0075f0ca
0075F0F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f0f7:
0075F0F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F0FA  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
0075F0FD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075F100  48                        DEC EAX
0075F101  83 EE 04                  SUB ESI,0x4
0075F104  3B C2                     CMP EAX,EDX
0075F106  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F109  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0075F10C  7D A9                     JGE 0x0075f0b7
0075F10E  EB 15                     JMP 0x0075f125
LAB_0075f110:
0075F110  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F116  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F119  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075F11C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0075F11F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075F122  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0075f125:
0075F125  3B CF                     CMP ECX,EDI
0075F127  0F 8D FC 00 00 00         JGE 0x0075f229
0075F12D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075F130  7F 78                     JG 0x0075f1aa
0075F132  8B F1                     MOV ESI,ECX
0075F134  C1 E6 05                  SHL ESI,0x5
0075F137  03 F3                     ADD ESI,EBX
0075F139  D1 E6                     SHL ESI,0x1
LAB_0075f13b:
0075F13B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075F13E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075F141  3B C2                     CMP EAX,EDX
0075F143  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F146  7F 3E                     JG 0x0075f186
0075F148  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075F14B  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
LAB_0075f14e:
0075F14E  8B 02                     MOV EAX,dword ptr [EDX]
0075F150  8B CB                     MOV ECX,EBX
0075F152  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075F155  03 C6                     ADD EAX,ESI
0075F157  39 5D F0                  CMP dword ptr [EBP + -0x10],EBX
0075F15A  7F 13                     JG 0x0075f16f
LAB_0075f15c:
0075F15C  66 8B 38                  MOV DI,word ptr [EAX]
0075F15F  83 C0 02                  ADD EAX,0x2
0075F162  66 85 FF                  TEST DI,DI
0075F165  75 2F                     JNZ 0x0075f196
0075F167  41                        INC ECX
0075F168  3B CB                     CMP ECX,EBX
0075F16A  7E F0                     JLE 0x0075f15c
0075F16C  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_0075f16f:
0075F16F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F172  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075F175  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F178  40                        INC EAX
0075F179  83 C2 04                  ADD EDX,0x4
0075F17C  3B C1                     CMP EAX,ECX
0075F17E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F181  7E CB                     JLE 0x0075f14e
0075F183  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f186:
0075F186  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075F189  83 C6 40                  ADD ESI,0x40
0075F18C  40                        INC EAX
0075F18D  3B C7                     CMP EAX,EDI
0075F18F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075F192  7E A7                     JLE 0x0075f13b
0075F194  EB 14                     JMP 0x0075f1aa
LAB_0075f196:
0075F196  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F199  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075F19C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F19F  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075F1A2  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0075F1A5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075F1A8  8B C8                     MOV ECX,EAX
LAB_0075f1aa:
0075F1AA  3B F9                     CMP EDI,ECX
0075F1AC  7E 7B                     JLE 0x0075f229
0075F1AE  8B F7                     MOV ESI,EDI
0075F1B0  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0075F1B3  C1 E6 05                  SHL ESI,0x5
0075F1B6  03 F3                     ADD ESI,EBX
0075F1B8  D1 E6                     SHL ESI,0x1
LAB_0075f1ba:
0075F1BA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075F1BD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075F1C0  3B C2                     CMP EAX,EDX
0075F1C2  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F1C5  7F 40                     JG 0x0075f207
0075F1C7  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075F1CA  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
LAB_0075f1cd:
0075F1CD  8B 0A                     MOV ECX,dword ptr [EDX]
0075F1CF  8B C6                     MOV EAX,ESI
0075F1D1  03 C1                     ADD EAX,ECX
0075F1D3  8B CB                     MOV ECX,EBX
0075F1D5  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075F1D8  39 5D F0                  CMP dword ptr [EBP + -0x10],EBX
0075F1DB  7F 13                     JG 0x0075f1f0
LAB_0075f1dd:
0075F1DD  66 8B 38                  MOV DI,word ptr [EAX]
0075F1E0  83 C0 02                  ADD EAX,0x2
0075F1E3  66 85 FF                  TEST DI,DI
0075F1E6  75 2F                     JNZ 0x0075f217
0075F1E8  41                        INC ECX
0075F1E9  3B CB                     CMP ECX,EBX
0075F1EB  7E F0                     JLE 0x0075f1dd
0075F1ED  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_0075f1f0:
0075F1F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F1F3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075F1F6  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F1F9  40                        INC EAX
0075F1FA  83 C2 04                  ADD EDX,0x4
0075F1FD  3B C1                     CMP EAX,ECX
0075F1FF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F202  7E C9                     JLE 0x0075f1cd
0075F204  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f207:
0075F207  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075F20A  83 EE 40                  SUB ESI,0x40
0075F20D  48                        DEC EAX
0075F20E  3B C1                     CMP EAX,ECX
0075F210  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075F213  7D A5                     JGE 0x0075f1ba
0075F215  EB 12                     JMP 0x0075f229
LAB_0075f217:
0075F217  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F21A  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0075F21D  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F220  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075F223  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
0075F226  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f229:
0075F229  39 5D EC                  CMP dword ptr [EBP + -0x14],EBX
0075F22C  0F 8E E5 00 00 00         JLE 0x0075f317
0075F232  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075F235  8B C3                     MOV EAX,EBX
0075F237  3B DA                     CMP EBX,EDX
0075F239  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075F23C  7F 69                     JG 0x0075f2a7
LAB_0075f23e:
0075F23E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075F241  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075F244  3B D6                     CMP EDX,ESI
0075F246  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075F249  7F 40                     JG 0x0075f28b
0075F24B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075F24E  8B D1                     MOV EDX,ECX
0075F250  C1 E2 05                  SHL EDX,0x5
0075F253  03 D0                     ADD EDX,EAX
0075F255  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0075F258  D1 E2                     SHL EDX,0x1
0075F25A  8D 34 B0                  LEA ESI,[EAX + ESI*0x4]
LAB_0075f25d:
0075F25D  8B 06                     MOV EAX,dword ptr [ESI]
0075F25F  03 C2                     ADD EAX,EDX
0075F261  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0075F264  7F 0E                     JG 0x0075f274
LAB_0075f266:
0075F266  66 83 38 00               CMP word ptr [EAX],0x0
0075F26A  75 2C                     JNZ 0x0075f298
0075F26C  41                        INC ECX
0075F26D  83 C0 40                  ADD EAX,0x40
0075F270  3B CF                     CMP ECX,EDI
0075F272  7E F2                     JLE 0x0075f266
LAB_0075f274:
0075F274  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F277  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075F27A  40                        INC EAX
0075F27B  83 C6 04                  ADD ESI,0x4
0075F27E  3B C1                     CMP EAX,ECX
0075F280  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075F283  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F286  7E D5                     JLE 0x0075f25d
0075F288  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_0075f28b:
0075F28B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075F28E  40                        INC EAX
0075F28F  3B C2                     CMP EAX,EDX
0075F291  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075F294  7E A8                     JLE 0x0075f23e
0075F296  EB 0F                     JMP 0x0075f2a7
LAB_0075f298:
0075F298  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F29B  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0075F29E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0075F2A1  89 59 10                  MOV dword ptr [ECX + 0x10],EBX
0075F2A4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f2a7:
0075F2A7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075F2AA  3B C3                     CMP EAX,EBX
0075F2AC  7E 69                     JLE 0x0075f317
0075F2AE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0075f2b1:
0075F2B1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075F2B4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075F2B7  3B D6                     CMP EDX,ESI
0075F2B9  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075F2BC  7F 40                     JG 0x0075f2fe
0075F2BE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075F2C1  8B D1                     MOV EDX,ECX
0075F2C3  C1 E2 05                  SHL EDX,0x5
0075F2C6  03 D0                     ADD EDX,EAX
0075F2C8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0075F2CB  D1 E2                     SHL EDX,0x1
0075F2CD  8D 34 B0                  LEA ESI,[EAX + ESI*0x4]
LAB_0075f2d0:
0075F2D0  8B C2                     MOV EAX,EDX
0075F2D2  03 06                     ADD EAX,dword ptr [ESI]
0075F2D4  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0075F2D7  7F 0E                     JG 0x0075f2e7
LAB_0075f2d9:
0075F2D9  66 83 38 00               CMP word ptr [EAX],0x0
0075F2DD  75 29                     JNZ 0x0075f308
0075F2DF  41                        INC ECX
0075F2E0  83 C0 40                  ADD EAX,0x40
0075F2E3  3B CF                     CMP ECX,EDI
0075F2E5  7E F2                     JLE 0x0075f2d9
LAB_0075f2e7:
0075F2E7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F2EA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075F2ED  40                        INC EAX
0075F2EE  83 C6 04                  ADD ESI,0x4
0075F2F1  3B C1                     CMP EAX,ECX
0075F2F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075F2F6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075F2F9  7E D5                     JLE 0x0075f2d0
0075F2FB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_0075f2fe:
0075F2FE  48                        DEC EAX
0075F2FF  3B C3                     CMP EAX,EBX
0075F301  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075F304  7D AB                     JGE 0x0075f2b1
0075F306  EB 0F                     JMP 0x0075f317
LAB_0075f308:
0075F308  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F30B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075F30E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0075F311  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
0075F314  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075f317:
0075F317  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075F31A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075F31D  2B F9                     SUB EDI,ECX
0075F31F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075F322  2B CB                     SUB ECX,EBX
0075F324  2B D6                     SUB EDX,ESI
0075F326  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075F329  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
0075F32C  C1 E1 04                  SHL ECX,0x4
0075F32F  8B D9                     MOV EBX,ECX
0075F331  8D 34 D5 00 00 00 00      LEA ESI,[EDX*0x8 + 0x0]
0075F338  C1 E0 02                  SHL EAX,0x2
0075F33B  0F AF D9                  IMUL EBX,ECX
0075F33E  8B C8                     MOV ECX,EAX
0075F340  0F AF C8                  IMUL ECX,EAX
0075F343  8B C6                     MOV EAX,ESI
0075F345  03 D9                     ADD EBX,ECX
0075F347  0F AF C6                  IMUL EAX,ESI
0075F34A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F34D  03 D8                     ADD EBX,EAX
0075F34F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075F352  89 59 18                  MOV dword ptr [ECX + 0x18],EBX
0075F355  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075F358  33 DB                     XOR EBX,EBX
0075F35A  3B C1                     CMP EAX,ECX
0075F35C  7F 74                     JG 0x0075f3d2
0075F35E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0075F361  42                        INC EDX
0075F362  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075F365  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075F368  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0075F36B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0075f36e:
0075F36E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075F371  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075F374  3B C1                     CMP EAX,ECX
0075F376  7F 39                     JG 0x0075f3b1
0075F378  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075F37B  C1 E0 05                  SHL EAX,0x5
0075F37E  8B 09                     MOV ECX,dword ptr [ECX]
0075F380  03 C2                     ADD EAX,EDX
0075F382  8D 34 41                  LEA ESI,[ECX + EAX*0x2]
0075F385  8D 47 01                  LEA EAX,[EDI + 0x1]
0075F388  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_0075f38b:
0075F38B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075F38E  8B C6                     MOV EAX,ESI
0075F390  3B D1                     CMP EDX,ECX
0075F392  7F 11                     JG 0x0075f3a5
0075F394  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075F397  41                        INC ECX
LAB_0075f398:
0075F398  66 83 38 00               CMP word ptr [EAX],0x0
0075F39C  74 01                     JZ 0x0075f39f
0075F39E  43                        INC EBX
LAB_0075f39f:
0075F39F  83 C0 02                  ADD EAX,0x2
0075F3A2  49                        DEC ECX
0075F3A3  75 F3                     JNZ 0x0075f398
LAB_0075f3a5:
0075F3A5  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0075F3A8  83 C6 40                  ADD ESI,0x40
0075F3AB  48                        DEC EAX
0075F3AC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0075F3AF  75 DA                     JNZ 0x0075f38b
LAB_0075f3b1:
0075F3B1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075F3B4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0075F3B7  83 C1 04                  ADD ECX,0x4
0075F3BA  48                        DEC EAX
0075F3BB  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075F3BE  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0075F3C1  75 AB                     JNZ 0x0075f36e
0075F3C3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075F3C6  5F                        POP EDI
0075F3C7  5E                        POP ESI
0075F3C8  89 5A 1C                  MOV dword ptr [EDX + 0x1c],EBX
0075F3CB  5B                        POP EBX
0075F3CC  8B E5                     MOV ESP,EBP
0075F3CE  5D                        POP EBP
0075F3CF  C2 08 00                  RET 0x8
LAB_0075f3d2:
0075F3D2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075F3D5  5F                        POP EDI
0075F3D6  5E                        POP ESI
0075F3D7  89 58 1C                  MOV dword ptr [EAX + 0x1c],EBX
0075F3DA  5B                        POP EBX
0075F3DB  8B E5                     MOV ESP,EBP
0075F3DD  5D                        POP EBP
0075F3DE  C2 08 00                  RET 0x8
