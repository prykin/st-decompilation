FUN_00601f80:
00601F80  55                        PUSH EBP
00601F81  8B EC                     MOV EBP,ESP
00601F83  83 EC 50                  SUB ESP,0x50
00601F86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00601F89  53                        PUSH EBX
00601F8A  56                        PUSH ESI
00601F8B  57                        PUSH EDI
00601F8C  50                        PUSH EAX
00601F8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00601F90  E8 72 2F E0 FF            CALL 0x00404f07
00601F95  3D FF FF 00 00            CMP EAX,0xffff
00601F9A  0F 84 32 03 00 00         JZ 0x006022d2
00601FA0  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00601FA6  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00601FA9  8D 55 B0                  LEA EDX,[EBP + -0x50]
00601FAC  6A 00                     PUSH 0x0
00601FAE  50                        PUSH EAX
00601FAF  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00601FB2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00601FB8  E8 33 B8 12 00            CALL 0x0072d7f0
00601FBD  8B F0                     MOV ESI,EAX
00601FBF  83 C4 08                  ADD ESP,0x8
00601FC2  85 F6                     TEST ESI,ESI
00601FC4  0F 85 C9 02 00 00         JNZ 0x00602293
00601FCA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00601FCD  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00601FD0  3D 0F 01 00 00            CMP EAX,0x10f
00601FD5  0F 87 28 02 00 00         JA 0x00602203
00601FDB  0F 84 E1 01 00 00         JZ 0x006021c2
00601FE1  2B C6                     SUB EAX,ESI
00601FE3  0F 84 93 01 00 00         JZ 0x0060217c
00601FE9  83 E8 02                  SUB EAX,0x2
00601FEC  74 4F                     JZ 0x0060203d
00601FEE  48                        DEC EAX
00601FEF  0F 85 8B 02 00 00         JNZ 0x00602280
00601FF5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00601FF8  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00601FFE  E8 D2 01 E0 FF            CALL 0x004021d5
00602003  8A 86 A5 03 00 00         MOV AL,byte ptr [ESI + 0x3a5]
00602009  84 C0                     TEST AL,AL
0060200B  0F 84 6F 02 00 00         JZ 0x00602280
00602011  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00602017  85 C9                     TEST ECX,ECX
00602019  0F 84 61 02 00 00         JZ 0x00602280
0060201F  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00602023  56                        PUSH ESI
00602024  52                        PUSH EDX
00602025  E8 9F 3A E0 FF            CALL 0x00405ac9
0060202A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0060202D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00602032  33 C0                     XOR EAX,EAX
00602034  5F                        POP EDI
00602035  5E                        POP ESI
00602036  5B                        POP EBX
00602037  8B E5                     MOV ESP,EBP
00602039  5D                        POP EBP
0060203A  C2 04 00                  RET 0x4
LAB_0060203d:
0060203D  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
00602040  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00602044  0F 84 9C 00 00 00         JZ 0x006020e6
0060204A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0060204D  B9 4F 00 00 00            MOV ECX,0x4f
00602052  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
00602058  F3 A5                     MOVSD.REP ES:EDI,ESI
0060205A  8B CB                     MOV ECX,EBX
0060205C  A4                        MOVSB ES:EDI,ESI
0060205D  E8 E7 0F E0 FF            CALL 0x00403049
00602062  85 C0                     TEST EAX,EAX
00602064  74 4C                     JZ 0x006020b2
00602066  8B 83 A7 03 00 00         MOV EAX,dword ptr [EBX + 0x3a7]
0060206C  85 C0                     TEST EAX,EAX
0060206E  74 25                     JZ 0x00602095
00602070  8B CB                     MOV ECX,EBX
00602072  E8 76 F3 DF FF            CALL 0x004013ed
00602077  85 C0                     TEST EAX,EAX
00602079  75 1A                     JNZ 0x00602095
0060207B  8B CB                     MOV ECX,EBX
0060207D  E8 72 FB DF FF            CALL 0x00401bf4
00602082  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00602085  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0060208A  33 C0                     XOR EAX,EAX
0060208C  5F                        POP EDI
0060208D  5E                        POP ESI
0060208E  5B                        POP EBX
0060208F  8B E5                     MOV ESP,EBP
00602091  5D                        POP EBP
00602092  C2 04 00                  RET 0x4
LAB_00602095:
00602095  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0060209B  85 C9                     TEST ECX,ECX
0060209D  0F 84 DD 01 00 00         JZ 0x00602280
006020A3  53                        PUSH EBX
006020A4  68 FF FF 00 00            PUSH 0xffff
006020A9  E8 2E F5 DF FF            CALL 0x004015dc
006020AE  85 C0                     TEST EAX,EAX
006020B0  74 1A                     JZ 0x006020cc
LAB_006020b2:
006020B2  8B CB                     MOV ECX,EBX
006020B4  E8 3B FB DF FF            CALL 0x00401bf4
006020B9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006020BC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006020C1  33 C0                     XOR EAX,EAX
006020C3  5F                        POP EDI
006020C4  5E                        POP ESI
006020C5  5B                        POP EBX
006020C6  8B E5                     MOV ESP,EBP
006020C8  5D                        POP EBP
006020C9  C2 04 00                  RET 0x4
LAB_006020cc:
006020CC  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006020CF  C6 83 A5 03 00 00 01      MOV byte ptr [EBX + 0x3a5],0x1
006020D6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006020DB  33 C0                     XOR EAX,EAX
006020DD  5F                        POP EDI
006020DE  5E                        POP ESI
006020DF  5B                        POP EBX
006020E0  8B E5                     MOV ESP,EBP
006020E2  5D                        POP EBP
006020E3  C2 04 00                  RET 0x4
LAB_006020e6:
006020E6  56                        PUSH ESI
006020E7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006020EA  8B CE                     MOV ECX,ESI
006020EC  E8 88 20 E0 FF            CALL 0x00404179
006020F1  85 C0                     TEST EAX,EAX
006020F3  0F 8C 87 01 00 00         JL 0x00602280
006020F9  8B 86 6E 03 00 00         MOV EAX,dword ptr [ESI + 0x36e]
006020FF  83 F8 04                  CMP EAX,0x4
00602102  75 1A                     JNZ 0x0060211e
00602104  8B CE                     MOV ECX,ESI
00602106  E8 25 3C E0 FF            CALL 0x00405d30
0060210B  85 C0                     TEST EAX,EAX
0060210D  89 86 AB 03 00 00         MOV dword ptr [ESI + 0x3ab],EAX
00602113  75 1E                     JNZ 0x00602133
00602115  8B CE                     MOV ECX,ESI
00602117  E8 D8 FA DF FF            CALL 0x00401bf4
0060211C  EB 15                     JMP 0x00602133
LAB_0060211e:
0060211E  8B 8E A7 03 00 00         MOV ECX,dword ptr [ESI + 0x3a7]
00602124  85 C9                     TEST ECX,ECX
00602126  74 0B                     JZ 0x00602133
00602128  85 C0                     TEST EAX,EAX
0060212A  74 07                     JZ 0x00602133
0060212C  8B CE                     MOV ECX,ESI
0060212E  E8 BF 0B E0 FF            CALL 0x00402cf2
LAB_00602133:
00602133  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00602139  85 C9                     TEST ECX,ECX
0060213B  0F 84 3F 01 00 00         JZ 0x00602280
00602141  8A 86 A5 03 00 00         MOV AL,byte ptr [ESI + 0x3a5]
00602147  84 C0                     TEST AL,AL
00602149  0F 84 31 01 00 00         JZ 0x00602280
0060214F  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00602153  56                        PUSH ESI
00602154  50                        PUSH EAX
00602155  E8 82 F4 DF FF            CALL 0x004015dc
0060215A  85 C0                     TEST EAX,EAX
0060215C  0F 84 1E 01 00 00         JZ 0x00602280
00602162  8B CE                     MOV ECX,ESI
00602164  E8 8B FA DF FF            CALL 0x00401bf4
00602169  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0060216C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00602171  33 C0                     XOR EAX,EAX
00602173  5F                        POP EDI
00602174  5E                        POP ESI
00602175  5B                        POP EBX
00602176  8B E5                     MOV ESP,EBP
00602178  5D                        POP EBP
00602179  C2 04 00                  RET 0x4
LAB_0060217c:
0060217C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0060217F  8B 86 6E 03 00 00         MOV EAX,dword ptr [ESI + 0x36e]
00602185  85 C0                     TEST EAX,EAX
00602187  74 0C                     JZ 0x00602195
00602189  83 F8 04                  CMP EAX,0x4
0060218C  74 07                     JZ 0x00602195
0060218E  8B CE                     MOV ECX,ESI
00602190  E8 5D 0B E0 FF            CALL 0x00402cf2
LAB_00602195:
00602195  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060219B  F6 81 E4 00 00 00 0F      TEST byte ptr [ECX + 0xe4],0xf
006021A2  0F 85 D8 00 00 00         JNZ 0x00602280
006021A8  8B CE                     MOV ECX,ESI
006021AA  E8 D4 F2 DF FF            CALL 0x00401483
006021AF  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006021B2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006021B7  33 C0                     XOR EAX,EAX
006021B9  5F                        POP EDI
006021BA  5E                        POP ESI
006021BB  5B                        POP EBX
006021BC  8B E5                     MOV ESP,EBP
006021BE  5D                        POP EBP
006021BF  C2 04 00                  RET 0x4
LAB_006021c2:
006021C2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006021C5  8D 55 F8                  LEA EDX,[EBP + -0x8]
006021C8  52                        PUSH EDX
006021C9  8B CE                     MOV ECX,ESI
006021CB  E8 A7 2B E0 FF            CALL 0x00404d77
006021D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006021D3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006021D6  51                        PUSH ECX
006021D7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006021DD  50                        PUSH EAX
006021DE  52                        PUSH EDX
006021DF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006021E2  E8 12 04 E0 FF            CALL 0x004025f9
006021E7  8D 45 F4                  LEA EAX,[EBP + -0xc]
006021EA  50                        PUSH EAX
006021EB  E8 70 8E 0A 00            CALL 0x006ab060
006021F0  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006021F3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006021F8  33 C0                     XOR EAX,EAX
006021FA  5F                        POP EDI
006021FB  5E                        POP ESI
006021FC  5B                        POP EBX
006021FD  8B E5                     MOV ESP,EBP
006021FF  5D                        POP EBP
00602200  C2 04 00                  RET 0x4
LAB_00602203:
00602203  2D 12 01 00 00            SUB EAX,0x112
00602208  74 5E                     JZ 0x00602268
0060220A  48                        DEC EAX
0060220B  74 2D                     JZ 0x0060223a
0060220D  83 E8 15                  SUB EAX,0x15
00602210  75 6E                     JNZ 0x00602280
00602212  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00602215  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0060221B  E8 EF 1A E0 FF            CALL 0x00403d0f
00602220  8B CE                     MOV ECX,ESI
00602222  E8 CD F9 DF FF            CALL 0x00401bf4
00602227  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0060222A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0060222F  33 C0                     XOR EAX,EAX
00602231  5F                        POP EDI
00602232  5E                        POP ESI
00602233  5B                        POP EBX
00602234  8B E5                     MOV ESP,EBP
00602236  5D                        POP EBP
00602237  C2 04 00                  RET 0x4
LAB_0060223a:
0060223A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060223D  8B 88 9B 03 00 00         MOV ECX,dword ptr [EAX + 0x39b]
00602243  85 C9                     TEST ECX,ECX
00602245  7C 39                     JL 0x00602280
00602247  8B 90 D5 01 00 00         MOV EDX,dword ptr [EAX + 0x1d5]
0060224D  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
00602253  FF 12                     CALL dword ptr [EDX]
00602255  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00602258  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0060225D  33 C0                     XOR EAX,EAX
0060225F  5F                        POP EDI
00602260  5E                        POP ESI
00602261  5B                        POP EBX
00602262  8B E5                     MOV ESP,EBP
00602264  5D                        POP EBP
00602265  C2 04 00                  RET 0x4
LAB_00602268:
00602268  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060226B  8B 88 9B 03 00 00         MOV ECX,dword ptr [EAX + 0x39b]
00602271  85 C9                     TEST ECX,ECX
00602273  7C 0B                     JL 0x00602280
00602275  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
0060227B  E8 10 08 E0 FF            CALL 0x00402a90
LAB_00602280:
00602280  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00602283  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00602288  33 C0                     XOR EAX,EAX
0060228A  5F                        POP EDI
0060228B  5E                        POP ESI
0060228C  5B                        POP EBX
0060228D  8B E5                     MOV ESP,EBP
0060228F  5D                        POP EBP
00602290  C2 04 00                  RET 0x4
LAB_00602293:
00602293  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00602296  68 58 ED 7C 00            PUSH 0x7ced58
0060229B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006022A0  56                        PUSH ESI
006022A1  6A 00                     PUSH 0x0
006022A3  68 95 00 00 00            PUSH 0x95
006022A8  68 34 ED 7C 00            PUSH 0x7ced34
006022AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006022B3  E8 18 B2 0A 00            CALL 0x006ad4d0
006022B8  83 C4 18                  ADD ESP,0x18
006022BB  85 C0                     TEST EAX,EAX
006022BD  74 01                     JZ 0x006022c0
006022BF  CC                        INT3
LAB_006022c0:
006022C0  68 97 00 00 00            PUSH 0x97
006022C5  68 34 ED 7C 00            PUSH 0x7ced34
006022CA  6A 00                     PUSH 0x0
006022CC  56                        PUSH ESI
006022CD  E8 6E 3B 0A 00            CALL 0x006a5e40
LAB_006022d2:
006022D2  5F                        POP EDI
006022D3  5E                        POP ESI
006022D4  B8 FF FF 00 00            MOV EAX,0xffff
006022D9  5B                        POP EBX
006022DA  8B E5                     MOV ESP,EBP
006022DC  5D                        POP EBP
006022DD  C2 04 00                  RET 0x4
