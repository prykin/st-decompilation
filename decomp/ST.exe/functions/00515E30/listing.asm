HelpPanelTy::AddLinks:
00515E30  55                        PUSH EBP
00515E31  8B EC                     MOV EBP,ESP
00515E33  81 EC 84 00 00 00         SUB ESP,0x84
00515E39  8B 81 4C 02 00 00         MOV EAX,dword ptr [ECX + 0x24c]
00515E3F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00515E42  53                        PUSH EBX
00515E43  56                        PUSH ESI
00515E44  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00515E47  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00515E4A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00515E4F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00515E52  57                        PUSH EDI
00515E53  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00515E56  8D 55 80                  LEA EDX,[EBP + -0x80]
00515E59  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
00515E5F  6A 00                     PUSH 0x0
00515E61  52                        PUSH EDX
00515E62  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00515E69  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00515E6F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00515E75  E8 76 79 21 00            CALL 0x0072d7f0
00515E7A  8B F0                     MOV ESI,EAX
00515E7C  83 C4 08                  ADD ESP,0x8
00515E7F  85 F6                     TEST ESI,ESI
00515E81  0F 85 26 03 00 00         JNZ 0x005161ad
00515E87  A0 A0 68 7E 00            MOV AL,[0x007e68a0]
00515E8C  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00515E8F  84 C0                     TEST AL,AL
00515E91  0F 84 57 02 00 00         JZ 0x005160ee
00515E97  B9 A5 68 7E 00            MOV ECX,0x7e68a5
00515E9C  BE A0 68 7E 00            MOV ESI,0x7e68a0
00515EA1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00515ea4:
00515EA4  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00515EA7  8A 16                     MOV DL,byte ptr [ESI]
00515EA9  3A D0                     CMP DL,AL
00515EAB  0F 85 29 02 00 00         JNZ 0x005160da
00515EB1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00515EB4  8B 41 FC                  MOV EAX,dword ptr [ECX + -0x4]
00515EB7  3B C2                     CMP EAX,EDX
00515EB9  0F 85 1B 02 00 00         JNZ 0x005160da
00515EBF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00515EC2  8B 11                     MOV EDX,dword ptr [ECX]
00515EC4  3B D0                     CMP EDX,EAX
00515EC6  0F 85 0E 02 00 00         JNZ 0x005160da
00515ECC  8D 41 05                  LEA EAX,[ECX + 0x5]
00515ECF  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00515ED6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00515ED9  EB 06                     JMP 0x00515ee1
LAB_00515edb:
00515EDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00515EDE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00515ee1:
00515EE1  8A 50 FF                  MOV DL,byte ptr [EAX + -0x1]
00515EE4  84 D2                     TEST DL,DL
00515EE6  0F 84 EE 01 00 00         JZ 0x005160da
00515EEC  8B 10                     MOV EDX,dword ptr [EAX]
00515EEE  33 FF                     XOR EDI,EDI
00515EF0  3B D7                     CMP EDX,EDI
00515EF2  0F 84 E2 01 00 00         JZ 0x005160da
00515EF8  39 7D F0                  CMP dword ptr [EBP + -0x10],EDI
00515EFB  74 5C                     JZ 0x00515f59
00515EFD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00515F00  6A 0F                     PUSH 0xf
00515F02  8B 0E                     MOV ECX,dword ptr [ESI]
00515F04  51                        PUSH ECX
00515F05  8B CB                     MOV ECX,EBX
00515F07  E8 64 B9 EE FF            CALL 0x00401870
00515F0C  8B 16                     MOV EDX,dword ptr [ESI]
00515F0E  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00515F14  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515F1A  6A 0F                     PUSH 0xf
00515F1C  68 9C 01 00 00            PUSH 0x19c
00515F21  52                        PUSH EDX
00515F22  57                        PUSH EDI
00515F23  57                        PUSH EDI
00515F24  50                        PUSH EAX
00515F25  E8 66 AB 1F 00            CALL 0x00710a90
00515F2A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00515F30  6A 03                     PUSH 0x3
00515F32  6A FF                     PUSH -0x1
00515F34  6A FF                     PUSH -0x1
00515F36  51                        PUSH ECX
00515F37  68 F6 55 00 00            PUSH 0x55f6
00515F3C  E8 FF A1 19 00            CALL 0x006b0140
00515F41  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515F47  50                        PUSH EAX
00515F48  E8 73 BA 1F 00            CALL 0x007119c0
00515F4D  8B 06                     MOV EAX,dword ptr [ESI]
00515F4F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00515F52  83 C0 0F                  ADD EAX,0xf
00515F55  89 06                     MOV dword ptr [ESI],EAX
00515F57  EB 03                     JMP 0x00515f5c
LAB_00515f59:
00515F59  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00515f5c:
00515F5C  8B 93 4C 02 00 00         MOV EDX,dword ptr [EBX + 0x24c]
00515F62  8B 06                     MOV EAX,dword ptr [ESI]
00515F64  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00515F6A  52                        PUSH EDX
00515F6B  40                        INC EAX
00515F6C  6A 01                     PUSH 0x1
00515F6E  50                        PUSH EAX
00515F6F  6A 50                     PUSH 0x50
00515F71  51                        PUSH ECX
00515F72  E8 B2 D2 EE FF            CALL 0x00403229
00515F77  8B 15 18 C1 85 00         MOV EDX,dword ptr [0x0085c118]
00515F7D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00515F80  83 C4 14                  ADD ESP,0x14
00515F83  8B 02                     MOV EAX,dword ptr [EDX]
00515F85  85 C0                     TEST EAX,EAX
00515F87  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00515F8A  0F 86 EE 00 00 00         JBE 0x0051607e
00515F90  8A 41 FF                  MOV AL,byte ptr [ECX + -0x1]
00515F93  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
00515F96  8B 83 C7 01 00 00         MOV EAX,dword ptr [EBX + 0x1c7]
00515F9C  83 C0 09                  ADD EAX,0x9
LAB_00515f9f:
00515F9F  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00515FA2  38 50 FF                  CMP byte ptr [EAX + -0x1],DL
00515FA5  75 0E                     JNZ 0x00515fb5
00515FA7  8B 10                     MOV EDX,dword ptr [EAX]
00515FA9  3B 11                     CMP EDX,dword ptr [ECX]
00515FAB  75 08                     JNZ 0x00515fb5
00515FAD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00515FB0  3B 51 04                  CMP EDX,dword ptr [ECX + 0x4]
00515FB3  74 10                     JZ 0x00515fc5
LAB_00515fb5:
00515FB5  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00515FB8  47                        INC EDI
00515FB9  83 C0 11                  ADD EAX,0x11
00515FBC  3B FA                     CMP EDI,EDX
00515FBE  72 DF                     JC 0x00515f9f
00515FC0  E9 B9 00 00 00            JMP 0x0051607e
LAB_00515fc5:
00515FC5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00515FC8  8B 16                     MOV EDX,dword ptr [ESI]
00515FCA  B9 3D 01 00 00            MOV ECX,0x13d
00515FCF  6A 0F                     PUSH 0xf
00515FD1  2B C8                     SUB ECX,EAX
00515FD3  83 C0 5F                  ADD EAX,0x5f
00515FD6  51                        PUSH ECX
00515FD7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515FDD  52                        PUSH EDX
00515FDE  50                        PUSH EAX
00515FDF  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00515FE5  6A 00                     PUSH 0x0
00515FE7  50                        PUSH EAX
00515FE8  E8 A3 AA 1F 00            CALL 0x00710a90
00515FED  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00515FF3  8B 83 C7 01 00 00         MOV EAX,dword ptr [EBX + 0x1c7]
00515FF9  8B D7                     MOV EDX,EDI
00515FFB  51                        PUSH ECX
00515FFC  C1 E2 04                  SHL EDX,0x4
00515FFF  03 D7                     ADD EDX,EDI
00516001  8B 0C 02                  MOV ECX,dword ptr [EDX + EAX*0x1]
00516004  51                        PUSH ECX
00516005  E8 36 A1 19 00            CALL 0x006b0140
0051600A  8B F8                     MOV EDI,EAX
0051600C  83 C9 FF                  OR ECX,0xffffffff
0051600F  33 C0                     XOR EAX,EAX
00516011  6A 0A                     PUSH 0xa
00516013  F2 AE                     SCASB.REPNE ES:EDI
00516015  F7 D1                     NOT ECX
00516017  2B F9                     SUB EDI,ECX
00516019  68 3A F3 80 00            PUSH 0x80f33a
0051601E  8B D1                     MOV EDX,ECX
00516020  8B F7                     MOV ESI,EDI
00516022  BF 3A F3 80 00            MOV EDI,0x80f33a
00516027  C1 E9 02                  SHR ECX,0x2
0051602A  F3 A5                     MOVSD.REP ES:EDI,ESI
0051602C  8B CA                     MOV ECX,EDX
0051602E  83 E1 03                  AND ECX,0x3
00516031  F3 A4                     MOVSB.REP ES:EDI,ESI
00516033  E8 28 85 21 00            CALL 0x0072e560
00516038  83 C4 08                  ADD ESP,0x8
0051603B  85 C0                     TEST EAX,EAX
0051603D  74 12                     JZ 0x00516051
LAB_0051603f:
0051603F  6A 0A                     PUSH 0xa
00516041  50                        PUSH EAX
00516042  C6 00 20                  MOV byte ptr [EAX],0x20
00516045  E8 16 85 21 00            CALL 0x0072e560
0051604A  83 C4 08                  ADD ESP,0x8
0051604D  85 C0                     TEST EAX,EAX
0051604F  75 EE                     JNZ 0x0051603f
LAB_00516051:
00516051  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00516057  33 C0                     XOR EAX,EAX
00516059  80 FA 03                  CMP DL,0x3
0051605C  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00516062  0F 95 C0                  SETNZ AL
00516065  48                        DEC EAX
00516066  83 E0 05                  AND EAX,0x5
00516069  50                        PUSH EAX
0051606A  6A FF                     PUSH -0x1
0051606C  6A 01                     PUSH 0x1
0051606E  68 3A F3 80 00            PUSH 0x80f33a
00516073  E8 48 B9 1F 00            CALL 0x007119c0
00516078  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0051607B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0051607e:
0051607E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00516081  8B 06                     MOV EAX,dword ptr [ESI]
00516083  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00516086  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00516089  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0051608C  8A 41 FF                  MOV AL,byte ptr [ECX + -0x1]
0051608F  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00516092  8B 11                     MOV EDX,dword ptr [ECX]
00516094  88 45 D0                  MOV byte ptr [EBP + -0x30],AL
00516097  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0051609A  89 55 D1                  MOV dword ptr [EBP + -0x2f],EDX
0051609D  8B 93 D7 01 00 00         MOV EDX,dword ptr [EBX + 0x1d7]
005160A3  8D 4D C0                  LEA ECX,[EBP + -0x40]
005160A6  C7 45 C0 50 00 00 00      MOV dword ptr [EBP + -0x40],0x50
005160AD  51                        PUSH ECX
005160AE  52                        PUSH EDX
005160AF  89 45 D5                  MOV dword ptr [EBP + -0x2b],EAX
005160B2  E8 09 81 19 00            CALL 0x006ae1c0
005160B7  8B 3E                     MOV EDI,dword ptr [ESI]
005160B9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005160BC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005160BF  83 C7 0F                  ADD EDI,0xf
005160C2  40                        INC EAX
005160C3  83 C2 09                  ADD EDX,0x9
005160C6  83 F8 06                  CMP EAX,0x6
005160C9  89 3E                     MOV dword ptr [ESI],EDI
005160CB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005160CE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005160D1  0F 82 04 FE FF FF         JC 0x00515edb
005160D7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_005160da:
005160DA  83 C1 36                  ADD ECX,0x36
005160DD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005160E0  8A 41 FB                  MOV AL,byte ptr [ECX + -0x5]
005160E3  8D 71 FB                  LEA ESI,[ECX + -0x5]
005160E6  84 C0                     TEST AL,AL
005160E8  0F 85 B6 FD FF FF         JNZ 0x00515ea4
LAB_005160ee:
005160EE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005160F1  6A 0A                     PUSH 0xa
005160F3  8B CB                     MOV ECX,EBX
005160F5  8B 06                     MOV EAX,dword ptr [ESI]
005160F7  50                        PUSH EAX
005160F8  E8 73 B7 EE FF            CALL 0x00401870
005160FD  8B 0E                     MOV ECX,dword ptr [ESI]
005160FF  B8 67 66 66 66            MOV EAX,0x66666667
00516104  F7 E9                     IMUL ECX
00516106  C1 FA 02                  SAR EDX,0x2
00516109  8B CA                     MOV ECX,EDX
0051610B  C1 E9 1F                  SHR ECX,0x1f
0051610E  8D 44 0A 01               LEA EAX,[EDX + ECX*0x1 + 0x1]
00516112  33 D2                     XOR EDX,EDX
00516114  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00516117  D1 E0                     SHL EAX,0x1
00516119  89 06                     MOV dword ptr [ESI],EAX
0051611B  66 8B 93 AF 01 00 00      MOV DX,word ptr [EBX + 0x1af]
00516122  8D 84 02 E8 FE FF FF      LEA EAX,[EDX + EAX*0x1 + 0xfffffee8]
00516129  85 C0                     TEST EAX,EAX
0051612B  7E 0F                     JLE 0x0051613c
0051612D  33 C9                     XOR ECX,ECX
0051612F  66 8B 8B B1 01 00 00      MOV CX,word ptr [EBX + 0x1b1]
00516136  99                        CDQ
00516137  F7 F9                     IDIV ECX
00516139  40                        INC EAX
0051613A  EB 02                     JMP 0x0051613e
LAB_0051613c:
0051613C  33 C0                     XOR EAX,EAX
LAB_0051613e:
0051613E  50                        PUSH EAX
0051613F  8B CB                     MOV ECX,EBX
00516141  E8 A5 CD EE FF            CALL 0x00402eeb
00516146  33 C0                     XOR EAX,EAX
00516148  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051614E  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
00516155  BA 17 01 00 00            MOV EDX,0x117
0051615A  2B D0                     SUB EDX,EAX
0051615C  68 FF 00 00 00            PUSH 0xff
00516161  52                        PUSH EDX
00516162  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00516165  68 9C 01 00 00            PUSH 0x19c
0051616A  6A 00                     PUSH 0x0
0051616C  6A 00                     PUSH 0x0
0051616E  6A 00                     PUSH 0x0
00516170  83 C0 16                  ADD EAX,0x16
00516173  51                        PUSH ECX
00516174  50                        PUSH EAX
00516175  6A 21                     PUSH 0x21
00516177  6A 00                     PUSH 0x0
00516179  52                        PUSH EDX
0051617A  E8 91 EF 19 00            CALL 0x006b5110
0051617F  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
00516182  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00516185  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
00516188  50                        PUSH EAX
00516189  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0051618E  51                        PUSH ECX
0051618F  6A FF                     PUSH -0x1
00516191  52                        PUSH EDX
00516192  50                        PUSH EAX
00516193  E8 A8 D4 19 00            CALL 0x006b3640
00516198  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0051619E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005161A4  5F                        POP EDI
005161A5  5E                        POP ESI
005161A6  5B                        POP EBX
005161A7  8B E5                     MOV ESP,EBP
005161A9  5D                        POP EBP
005161AA  C2 10 00                  RET 0x10
LAB_005161ad:
005161AD  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
005161B3  68 F0 3B 7C 00            PUSH 0x7c3bf0
005161B8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005161BD  56                        PUSH ESI
005161BE  6A 00                     PUSH 0x0
005161C0  68 60 04 00 00            PUSH 0x460
005161C5  68 3C 38 7C 00            PUSH 0x7c383c
005161CA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005161D0  E8 FB 72 19 00            CALL 0x006ad4d0
005161D5  83 C4 18                  ADD ESP,0x18
005161D8  85 C0                     TEST EAX,EAX
005161DA  74 01                     JZ 0x005161dd
005161DC  CC                        INT3
LAB_005161dd:
005161DD  68 60 04 00 00            PUSH 0x460
005161E2  68 3C 38 7C 00            PUSH 0x7c383c
005161E7  6A 00                     PUSH 0x0
005161E9  56                        PUSH ESI
005161EA  E8 51 FC 18 00            CALL 0x006a5e40
005161EF  5F                        POP EDI
005161F0  5E                        POP ESI
005161F1  5B                        POP EBX
005161F2  8B E5                     MOV ESP,EBP
005161F4  5D                        POP EBP
005161F5  C2 10 00                  RET 0x10
