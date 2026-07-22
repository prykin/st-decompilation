TLOBaseTy::sub_004CAFC0:
004CAFC0  55                        PUSH EBP
004CAFC1  8B EC                     MOV EBP,ESP
004CAFC3  53                        PUSH EBX
004CAFC4  56                        PUSH ESI
004CAFC5  8B F1                     MOV ESI,ECX
004CAFC7  57                        PUSH EDI
004CAFC8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CAFCE  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CAFD4  50                        PUSH EAX
004CAFD5  E8 DD 99 F3 FF            CALL 0x004049b7
004CAFDA  25 FF 00 00 00            AND EAX,0xff
004CAFDF  48                        DEC EAX
004CAFE0  8B D8                     MOV EBX,EAX
004CAFE2  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CAFE8  83 F8 32                  CMP EAX,0x32
004CAFEB  75 1E                     JNZ 0x004cb00b
004CAFED  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CAFF0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CAFF3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CAFF6  51                        PUSH ECX
004CAFF7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CAFFA  52                        PUSH EDX
004CAFFB  50                        PUSH EAX
004CAFFC  51                        PUSH ECX
004CAFFD  8B CE                     MOV ECX,ESI
004CAFFF  E8 91 98 F3 FF            CALL 0x00404895
004CB004  5F                        POP EDI
004CB005  5E                        POP ESI
004CB006  5B                        POP EBX
004CB007  5D                        POP EBP
004CB008  C2 10 00                  RET 0x10
LAB_004cb00b:
004CB00B  83 F8 5C                  CMP EAX,0x5c
004CB00E  75 1E                     JNZ 0x004cb02e
004CB010  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB013  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB016  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB019  52                        PUSH EDX
004CB01A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CB01D  50                        PUSH EAX
004CB01E  51                        PUSH ECX
004CB01F  52                        PUSH EDX
004CB020  8B CE                     MOV ECX,ESI
004CB022  E8 14 75 F3 FF            CALL 0x0040253b
004CB027  5F                        POP EDI
004CB028  5E                        POP ESI
004CB029  5B                        POP EBX
004CB02A  5D                        POP EBP
004CB02B  C2 10 00                  RET 0x10
LAB_004cb02e:
004CB02E  83 F8 40                  CMP EAX,0x40
004CB031  75 1E                     JNZ 0x004cb051
004CB033  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB036  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB039  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB03C  50                        PUSH EAX
004CB03D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CB040  51                        PUSH ECX
004CB041  52                        PUSH EDX
004CB042  50                        PUSH EAX
004CB043  8B CE                     MOV ECX,ESI
004CB045  E8 10 8D F3 FF            CALL 0x00403d5a
004CB04A  5F                        POP EDI
004CB04B  5E                        POP ESI
004CB04C  5B                        POP EBX
004CB04D  5D                        POP EBP
004CB04E  C2 10 00                  RET 0x10
LAB_004cb051:
004CB051  83 F8 49                  CMP EAX,0x49
004CB054  75 1E                     JNZ 0x004cb074
004CB056  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB059  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB05C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CB05F  51                        PUSH ECX
004CB060  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CB063  52                        PUSH EDX
004CB064  50                        PUSH EAX
004CB065  51                        PUSH ECX
004CB066  8B CE                     MOV ECX,ESI
004CB068  E8 20 78 F3 FF            CALL 0x0040288d
004CB06D  5F                        POP EDI
004CB06E  5E                        POP ESI
004CB06F  5B                        POP EBX
004CB070  5D                        POP EBP
004CB071  C2 10 00                  RET 0x10
LAB_004cb074:
004CB074  83 F8 4D                  CMP EAX,0x4d
004CB077  75 1E                     JNZ 0x004cb097
004CB079  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB07C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB07F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB082  52                        PUSH EDX
004CB083  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CB086  50                        PUSH EAX
004CB087  51                        PUSH ECX
004CB088  52                        PUSH EDX
004CB089  8B CE                     MOV ECX,ESI
004CB08B  E8 1B 78 F3 FF            CALL 0x004028ab
004CB090  5F                        POP EDI
004CB091  5E                        POP ESI
004CB092  5B                        POP EBX
004CB093  5D                        POP EBP
004CB094  C2 10 00                  RET 0x10
LAB_004cb097:
004CB097  83 F8 4C                  CMP EAX,0x4c
004CB09A  75 1E                     JNZ 0x004cb0ba
004CB09C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB09F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB0A2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB0A5  50                        PUSH EAX
004CB0A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CB0A9  51                        PUSH ECX
004CB0AA  52                        PUSH EDX
004CB0AB  50                        PUSH EAX
004CB0AC  8B CE                     MOV ECX,ESI
004CB0AE  E8 04 A8 F3 FF            CALL 0x004058b7
004CB0B3  5F                        POP EDI
004CB0B4  5E                        POP ESI
004CB0B5  5B                        POP EBX
004CB0B6  5D                        POP EBP
004CB0B7  C2 10 00                  RET 0x10
LAB_004cb0ba:
004CB0BA  83 F8 43                  CMP EAX,0x43
004CB0BD  75 1E                     JNZ 0x004cb0dd
004CB0BF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB0C2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB0C5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CB0C8  51                        PUSH ECX
004CB0C9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CB0CC  52                        PUSH EDX
004CB0CD  50                        PUSH EAX
004CB0CE  51                        PUSH ECX
004CB0CF  8B CE                     MOV ECX,ESI
004CB0D1  E8 E9 A9 F3 FF            CALL 0x00405abf
004CB0D6  5F                        POP EDI
004CB0D7  5E                        POP ESI
004CB0D8  5B                        POP EBX
004CB0D9  5D                        POP EBP
004CB0DA  C2 10 00                  RET 0x10
LAB_004cb0dd:
004CB0DD  83 F8 44                  CMP EAX,0x44
004CB0E0  75 1E                     JNZ 0x004cb100
004CB0E2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB0E5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB0E8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB0EB  52                        PUSH EDX
004CB0EC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CB0EF  50                        PUSH EAX
004CB0F0  51                        PUSH ECX
004CB0F1  52                        PUSH EDX
004CB0F2  8B CE                     MOV ECX,ESI
004CB0F4  E8 DD 74 F3 FF            CALL 0x004025d6
004CB0F9  5F                        POP EDI
004CB0FA  5E                        POP ESI
004CB0FB  5B                        POP EBX
004CB0FC  5D                        POP EBP
004CB0FD  C2 10 00                  RET 0x10
LAB_004cb100:
004CB100  83 F8 52                  CMP EAX,0x52
004CB103  75 1E                     JNZ 0x004cb123
004CB105  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB108  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB10B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB10E  50                        PUSH EAX
004CB10F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CB112  51                        PUSH ECX
004CB113  52                        PUSH EDX
004CB114  50                        PUSH EAX
004CB115  8B CE                     MOV ECX,ESI
004CB117  E8 04 85 F3 FF            CALL 0x00403620
004CB11C  5F                        POP EDI
004CB11D  5E                        POP ESI
004CB11E  5B                        POP EBX
004CB11F  5D                        POP EBP
004CB120  C2 10 00                  RET 0x10
LAB_004cb123:
004CB123  83 F8 5F                  CMP EAX,0x5f
004CB126  75 1E                     JNZ 0x004cb146
004CB128  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB12B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB12E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CB131  51                        PUSH ECX
004CB132  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CB135  52                        PUSH EDX
004CB136  50                        PUSH EAX
004CB137  51                        PUSH ECX
004CB138  8B CE                     MOV ECX,ESI
004CB13A  E8 94 A9 F3 FF            CALL 0x00405ad3
004CB13F  5F                        POP EDI
004CB140  5E                        POP ESI
004CB141  5B                        POP EBX
004CB142  5D                        POP EBP
004CB143  C2 10 00                  RET 0x10
LAB_004cb146:
004CB146  83 F8 68                  CMP EAX,0x68
004CB149  75 1E                     JNZ 0x004cb169
004CB14B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB14E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB151  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB154  52                        PUSH EDX
004CB155  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CB158  50                        PUSH EAX
004CB159  51                        PUSH ECX
004CB15A  52                        PUSH EDX
004CB15B  8B CE                     MOV ECX,ESI
004CB15D  E8 9A 99 F3 FF            CALL 0x00404afc
004CB162  5F                        POP EDI
004CB163  5E                        POP ESI
004CB164  5B                        POP EBX
004CB165  5D                        POP EBP
004CB166  C2 10 00                  RET 0x10
LAB_004cb169:
004CB169  83 F8 37                  CMP EAX,0x37
004CB16C  75 1E                     JNZ 0x004cb18c
004CB16E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB171  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB174  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB177  50                        PUSH EAX
004CB178  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CB17B  51                        PUSH ECX
004CB17C  52                        PUSH EDX
004CB17D  50                        PUSH EAX
004CB17E  8B CE                     MOV ECX,ESI
004CB180  E8 58 81 F3 FF            CALL 0x004032dd
004CB185  5F                        POP EDI
004CB186  5E                        POP ESI
004CB187  5B                        POP EBX
004CB188  5D                        POP EBP
004CB189  C2 10 00                  RET 0x10
LAB_004cb18c:
004CB18C  83 F8 63                  CMP EAX,0x63
004CB18F  75 1E                     JNZ 0x004cb1af
004CB191  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB194  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB197  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CB19A  51                        PUSH ECX
004CB19B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CB19E  52                        PUSH EDX
004CB19F  50                        PUSH EAX
004CB1A0  51                        PUSH ECX
004CB1A1  8B CE                     MOV ECX,ESI
004CB1A3  E8 93 A5 F3 FF            CALL 0x0040573b
004CB1A8  5F                        POP EDI
004CB1A9  5E                        POP ESI
004CB1AA  5B                        POP EBX
004CB1AB  5D                        POP EBP
004CB1AC  C2 10 00                  RET 0x10
LAB_004cb1af:
004CB1AF  8B BE 45 02 00 00         MOV EDI,dword ptr [ESI + 0x245]
004CB1B5  83 FF 01                  CMP EDI,0x1
004CB1B8  75 0E                     JNZ 0x004cb1c8
004CB1BA  83 BE 4D 02 00 00 04      CMP dword ptr [ESI + 0x24d],0x4
004CB1C1  75 05                     JNZ 0x004cb1c8
004CB1C3  BF 04 00 00 00            MOV EDI,0x4
LAB_004cb1c8:
004CB1C8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CB1CB  8D 4A F9                  LEA ECX,[EDX + -0x7]
004CB1CE  83 F9 07                  CMP ECX,0x7
004CB1D1  0F 87 FB 04 00 00         JA 0x004cb6d2
switchD_004cb1d7::switchD:
004CB1D7  FF 24 8D DC B6 4C 00      JMP dword ptr [ECX*0x4 + 0x4cb6dc]
switchD_004cb1d7::caseD_d:
004CB1DE  83 F8 4F                  CMP EAX,0x4f
004CB1E1  75 2F                     JNZ 0x004cb212
004CB1E3  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CB1E9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CB1EF  50                        PUSH EAX
004CB1F0  E8 C2 97 F3 FF            CALL 0x004049b7
004CB1F5  3C 02                     CMP AL,0x2
004CB1F7  75 19                     JNZ 0x004cb212
004CB1F9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB1FC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB1FF  5F                        POP EDI
004CB200  5E                        POP ESI
004CB201  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004CB207  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004CB20D  5B                        POP EBX
004CB20E  5D                        POP EBP
004CB20F  C2 10 00                  RET 0x10
switchD_004cb1d7::caseD_e:
004CB212  83 BE AC 05 00 00 4F      CMP dword ptr [ESI + 0x5ac],0x4f
004CB219  0F 85 90 00 00 00         JNZ 0x004cb2af
004CB21F  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CB225  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CB22B  50                        PUSH EAX
004CB22C  E8 86 97 F3 FF            CALL 0x004049b7
004CB231  3C 02                     CMP AL,0x2
004CB233  75 7A                     JNZ 0x004cb2af
004CB235  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB23B  48                        DEC EAX
004CB23C  74 2C                     JZ 0x004cb26a
004CB23E  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB244  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB247  8D 0C 73                  LEA ECX,[EBX + ESI*0x2]
004CB24A  03 F1                     ADD ESI,ECX
004CB24C  8B 0C BD 70 51 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b5170]
004CB253  5F                        POP EDI
004CB254  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CB257  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB25A  5E                        POP ESI
004CB25B  5B                        POP EBX
004CB25C  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004CB25F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB262  89 02                     MOV dword ptr [EDX],EAX
004CB264  89 01                     MOV dword ptr [ECX],EAX
004CB266  5D                        POP EBP
004CB267  C2 10 00                  RET 0x10
LAB_004cb26a:
004CB26A  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB270  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB273  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
004CB276  03 C2                     ADD EAX,EDX
004CB278  8B 14 BD 70 51 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b5170]
004CB27F  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
004CB282  8B 04 C2                  MOV EAX,dword ptr [EDX + EAX*0x8]
004CB285  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB288  89 02                     MOV dword ptr [EDX],EAX
004CB28A  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB290  8B 14 BD 70 51 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b5170]
004CB297  5F                        POP EDI
004CB298  8D 04 73                  LEA EAX,[EBX + ESI*0x2]
004CB29B  03 F0                     ADD ESI,EAX
004CB29D  8D 0C B1                  LEA ECX,[ECX + ESI*0x4]
004CB2A0  5E                        POP ESI
004CB2A1  5B                        POP EBX
004CB2A2  8B 44 CA 04               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x4]
004CB2A6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB2A9  89 01                     MOV dword ptr [ECX],EAX
004CB2AB  5D                        POP EBP
004CB2AC  C2 10 00                  RET 0x10
LAB_004cb2af:
004CB2AF  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CB2B5  83 F8 6E                  CMP EAX,0x6e
004CB2B8  0F 85 A0 00 00 00         JNZ 0x004cb35e
004CB2BE  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB2C4  83 F8 03                  CMP EAX,0x3
004CB2C7  0F 87 05 04 00 00         JA 0x004cb6d2
switchD_004cb2cd::switchD:
004CB2CD  FF 24 85 FC B6 4C 00      JMP dword ptr [EAX*0x4 + 0x4cb6fc]
switchD_004cb2cd::caseD_1:
004CB2D4  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB2DA  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
004CB2DD  03 C1                     ADD EAX,ECX
004CB2DF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB2E2  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
004CB2E5  8B 04 BD 70 51 7B 00      MOV EAX,dword ptr [EDI*0x4 + 0x7b5170]
004CB2EC  8B 14 D0                  MOV EDX,dword ptr [EAX + EDX*0x8]
004CB2EF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB2F2  89 10                     MOV dword ptr [EAX],EDX
004CB2F4  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB2FA  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
004CB2FD  03 F2                     ADD ESI,EDX
004CB2FF  8D 04 B1                  LEA EAX,[ECX + ESI*0x4]
004CB302  8B 0C BD 70 51 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b5170]
004CB309  5F                        POP EDI
004CB30A  5E                        POP ESI
004CB30B  8B 54 C1 04               MOV EDX,dword ptr [ECX + EAX*0x8 + 0x4]
004CB30F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB312  5B                        POP EBX
004CB313  89 10                     MOV dword ptr [EAX],EDX
004CB315  5D                        POP EBP
004CB316  C2 10 00                  RET 0x10
switchD_004cb2cd::caseD_3:
004CB319  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB31F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB322  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
004CB325  03 C2                     ADD EAX,EDX
004CB327  8B 14 BD 70 51 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b5170]
004CB32E  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
004CB331  8B 44 C2 04               MOV EAX,dword ptr [EDX + EAX*0x8 + 0x4]
004CB335  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB338  89 02                     MOV dword ptr [EDX],EAX
004CB33A  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB340  8B 14 BD 70 51 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b5170]
004CB347  5F                        POP EDI
004CB348  8D 04 73                  LEA EAX,[EBX + ESI*0x2]
004CB34B  03 F0                     ADD ESI,EAX
004CB34D  8D 0C B1                  LEA ECX,[ECX + ESI*0x4]
004CB350  5E                        POP ESI
004CB351  5B                        POP EBX
004CB352  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004CB355  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB358  89 01                     MOV dword ptr [ECX],EAX
004CB35A  5D                        POP EBP
004CB35B  C2 10 00                  RET 0x10
switchD_004cb1d7::caseD_8:
004CB35E  83 F8 72                  CMP EAX,0x72
004CB361  0F 85 03 FF FF FF         JNZ 0x004cb26a
004CB367  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB36D  83 F8 05                  CMP EAX,0x5
004CB370  0F 87 5C 03 00 00         JA 0x004cb6d2
switchD_004cb376::switchD:
004CB376  FF 24 85 0C B7 4C 00      JMP dword ptr [EAX*0x4 + 0x4cb70c]
switchD_004cb2cd::caseD_0:
004CB37D  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB383  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CB386  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
004CB389  03 F2                     ADD ESI,EDX
004CB38B  8B 14 BD 70 51 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b5170]
004CB392  5F                        POP EDI
004CB393  8D 0C B0                  LEA ECX,[EAX + ESI*0x4]
004CB396  5E                        POP ESI
004CB397  5B                        POP EBX
004CB398  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004CB39B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB39E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB3A1  89 01                     MOV dword ptr [ECX],EAX
004CB3A3  89 02                     MOV dword ptr [EDX],EAX
004CB3A5  5D                        POP EBP
004CB3A6  C2 10 00                  RET 0x10
switchD_004cb376::caseD_5:
004CB3A9  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB3AF  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
004CB3B2  03 C1                     ADD EAX,ECX
004CB3B4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB3B7  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
004CB3BA  8B 04 BD 70 51 7B 00      MOV EAX,dword ptr [EDI*0x4 + 0x7b5170]
004CB3C1  8B 54 D0 04               MOV EDX,dword ptr [EAX + EDX*0x8 + 0x4]
004CB3C5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB3C8  89 10                     MOV dword ptr [EAX],EDX
004CB3CA  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB3D0  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
004CB3D3  03 F2                     ADD ESI,EDX
004CB3D5  8D 04 B1                  LEA EAX,[ECX + ESI*0x4]
004CB3D8  8B 0C BD 70 51 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b5170]
004CB3DF  5F                        POP EDI
004CB3E0  5E                        POP ESI
004CB3E1  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
004CB3E4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB3E7  5B                        POP EBX
004CB3E8  89 10                     MOV dword ptr [EAX],EDX
004CB3EA  5D                        POP EBP
004CB3EB  C2 10 00                  RET 0x10
switchD_004cb2cd::caseD_2:
004CB3EE  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB3F4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB3F7  8D 0C 73                  LEA ECX,[EBX + ESI*0x2]
004CB3FA  03 F1                     ADD ESI,ECX
004CB3FC  8B 0C BD 70 51 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b5170]
004CB403  5F                        POP EDI
004CB404  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CB407  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB40A  5E                        POP ESI
004CB40B  5B                        POP EBX
004CB40C  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004CB410  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB413  89 02                     MOV dword ptr [EDX],EAX
004CB415  89 01                     MOV dword ptr [ECX],EAX
004CB417  5D                        POP EBP
004CB418  C2 10 00                  RET 0x10
switchD_004cb1d7::caseD_c:
004CB41B  83 C0 CD                  ADD EAX,-0x33
004CB41E  83 F8 3D                  CMP EAX,0x3d
004CB421  77 21                     JA 0x004cb444
004CB423  33 D2                     XOR EDX,EDX
004CB425  8A 90 3C B7 4C 00         MOV DL,byte ptr [EAX + 0x4cb73c]
switchD_004cb42b::switchD:
004CB42B  FF 24 95 24 B7 4C 00      JMP dword ptr [EDX*0x4 + 0x4cb724]
switchD_004cb42b::caseD_38:
004CB432  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB438  83 E8 00                  SUB EAX,0x0
004CB43B  74 4C                     JZ 0x004cb489
004CB43D  48                        DEC EAX
004CB43E  0F 85 8E 02 00 00         JNZ 0x004cb6d2
switchD_004cb42b::caseD_34:
004CB444  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB44A  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
004CB44D  03 C1                     ADD EAX,ECX
004CB44F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB452  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
004CB455  8B 04 BD 10 83 7B 00      MOV EAX,dword ptr [EDI*0x4 + 0x7b8310]
004CB45C  8B 14 D0                  MOV EDX,dword ptr [EAX + EDX*0x8]
004CB45F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB462  89 10                     MOV dword ptr [EAX],EDX
004CB464  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB46A  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
004CB46D  03 F2                     ADD ESI,EDX
004CB46F  8D 04 B1                  LEA EAX,[ECX + ESI*0x4]
004CB472  8B 0C BD 10 83 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b8310]
004CB479  5F                        POP EDI
004CB47A  5E                        POP ESI
004CB47B  8B 54 C1 04               MOV EDX,dword ptr [ECX + EAX*0x8 + 0x4]
004CB47F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB482  5B                        POP EBX
004CB483  89 10                     MOV dword ptr [EAX],EDX
004CB485  5D                        POP EBP
004CB486  C2 10 00                  RET 0x10
TLOBaseTy::sub_004CAFC0::cf_common_exit_004CB489:
004CB489  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB48F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB492  8D 0C 73                  LEA ECX,[EBX + ESI*0x2]
004CB495  03 F1                     ADD ESI,ECX
004CB497  8B 0C BD 10 83 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b8310]
004CB49E  5F                        POP EDI
004CB49F  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CB4A2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB4A5  5E                        POP ESI
004CB4A6  5B                        POP EBX
004CB4A7  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004CB4AA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB4AD  89 02                     MOV dword ptr [EDX],EAX
004CB4AF  89 01                     MOV dword ptr [ECX],EAX
004CB4B1  5D                        POP EBP
004CB4B2  C2 10 00                  RET 0x10
switchD_004cb42b::caseD_35:
004CB4B5  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB4BB  85 C0                     TEST EAX,EAX
004CB4BD  74 45                     JZ 0x004cb504
004CB4BF  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB4C5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB4C8  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
004CB4CB  03 C2                     ADD EAX,EDX
004CB4CD  8B 14 BD 10 83 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b8310]
004CB4D4  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
004CB4D7  8B 04 C2                  MOV EAX,dword ptr [EDX + EAX*0x8]
004CB4DA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB4DD  89 02                     MOV dword ptr [EDX],EAX
004CB4DF  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB4E5  8B 14 BD 10 83 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b8310]
004CB4EC  5F                        POP EDI
004CB4ED  8D 04 73                  LEA EAX,[EBX + ESI*0x2]
004CB4F0  03 F0                     ADD ESI,EAX
004CB4F2  8D 0C B1                  LEA ECX,[ECX + ESI*0x4]
004CB4F5  5E                        POP ESI
004CB4F6  5B                        POP EBX
004CB4F7  8B 44 CA 04               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x4]
004CB4FB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB4FE  89 01                     MOV dword ptr [ECX],EAX
004CB500  5D                        POP EBP
004CB501  C2 10 00                  RET 0x10
TLOBaseTy::sub_004CAFC0::cf_common_exit_004CB504:
004CB504  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB50A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CB50D  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
004CB510  03 F2                     ADD ESI,EDX
004CB512  8B 14 BD 10 83 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b8310]
004CB519  5F                        POP EDI
004CB51A  8D 0C B0                  LEA ECX,[EAX + ESI*0x4]
004CB51D  5E                        POP ESI
004CB51E  5B                        POP EBX
004CB51F  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004CB522  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CB525  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CB528  89 01                     MOV dword ptr [ECX],EAX
004CB52A  89 02                     MOV dword ptr [EDX],EAX
004CB52C  5D                        POP EBP
004CB52D  C2 10 00                  RET 0x10
switchD_004cb42b::caseD_33:
004CB530  8B 86 20 05 00 00         MOV EAX,dword ptr [ESI + 0x520]
004CB536  85 C0                     TEST EAX,EAX
004CB538  0F 84 4B FF FF FF         JZ 0x004cb489
004CB53E  E9 01 FF FF FF            JMP 0x004cb444
switchD_004cb42b::caseD_4e:
004CB543  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB549  83 F8 05                  CMP EAX,0x5
004CB54C  0F 87 80 01 00 00         JA 0x004cb6d2
switchD_004cb552::switchD:
004CB552  FF 24 85 7C B7 4C 00      JMP dword ptr [EAX*0x4 + 0x4cb77c]
switchD_004cb5c6::caseD_0:
004CB559  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB55C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB55F  5F                        POP EDI
004CB560  5E                        POP ESI
004CB561  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004CB567  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004CB56D  5B                        POP EBX
004CB56E  5D                        POP EBP
004CB56F  C2 10 00                  RET 0x10
switchD_004cb5c6::caseD_5:
004CB572  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CB578  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
004CB57B  03 C1                     ADD EAX,ECX
004CB57D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CB580  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
004CB583  8B 04 BD 10 83 7B 00      MOV EAX,dword ptr [EDI*0x4 + 0x7b8310]
004CB58A  8B 54 D0 04               MOV EDX,dword ptr [EAX + EDX*0x8 + 0x4]
004CB58E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CB591  89 10                     MOV dword ptr [EAX],EDX
004CB593  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB599  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
004CB59C  03 F2                     ADD ESI,EDX
004CB59E  8D 04 B1                  LEA EAX,[ECX + ESI*0x4]
004CB5A1  8B 0C BD 10 83 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b8310]
004CB5A8  5F                        POP EDI
004CB5A9  5E                        POP ESI
004CB5AA  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
004CB5AD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB5B0  5B                        POP EBX
004CB5B1  89 10                     MOV dword ptr [EAX],EDX
004CB5B3  5D                        POP EBP
004CB5B4  C2 10 00                  RET 0x10
switchD_004cb42b::caseD_70:
004CB5B7  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CB5BD  83 F8 05                  CMP EAX,0x5
004CB5C0  0F 87 0C 01 00 00         JA 0x004cb6d2
switchD_004cb5c6::switchD:
004CB5C6  FF 24 85 94 B7 4C 00      JMP dword ptr [EAX*0x4 + 0x4cb794]
switchD_004cb5c6::caseD_4:
004CB5CD  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CB5D3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB5D6  8D 0C 73                  LEA ECX,[EBX + ESI*0x2]
004CB5D9  03 F1                     ADD ESI,ECX
004CB5DB  8B 0C BD 10 83 7B 00      MOV ECX,dword ptr [EDI*0x4 + 0x7b8310]
004CB5E2  5F                        POP EDI
004CB5E3  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CB5E6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CB5E9  5E                        POP ESI
004CB5EA  5B                        POP EBX
004CB5EB  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004CB5EF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB5F2  89 02                     MOV dword ptr [EDX],EAX
004CB5F4  89 01                     MOV dword ptr [ECX],EAX
004CB5F6  5D                        POP EBP
004CB5F7  C2 10 00                  RET 0x10
switchD_004cb1d7::caseD_7:
004CB5FA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB5FD  83 F8 4E                  CMP EAX,0x4e
004CB600  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004CB603  75 2C                     JNZ 0x004cb631
004CB605  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CB60B  83 FA 05                  CMP EDX,0x5
004CB60E  77 21                     JA 0x004cb631
switchD_004cb610::switchD:
004CB610  FF 24 95 AC B7 4C 00      JMP dword ptr [EDX*0x4 + 0x4cb7ac]
switchD_004cb610::caseD_1:
004CB617  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004CB61D  C7 00 11 00 00 00         MOV dword ptr [EAX],0x11
004CB623  EB 0C                     JMP 0x004cb631
switchD_004cb610::caseD_0:
004CB625  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004CB62B  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
switchD_004cb610::default:
004CB631  83 BE AC 05 00 00 72      CMP dword ptr [ESI + 0x5ac],0x72
004CB638  75 5E                     JNZ 0x004cb698
004CB63A  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CB640  83 FA 05                  CMP EDX,0x5
004CB643  77 53                     JA 0x004cb698
switchD_004cb645::switchD:
004CB645  FF 24 95 C4 B7 4C 00      JMP dword ptr [EDX*0x4 + 0x4cb7c4]
switchD_004cb645::caseD_1:
004CB64C  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004CB652  8D 14 4B                  LEA EDX,[EBX + ECX*0x2]
004CB655  03 CA                     ADD ECX,EDX
004CB657  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CB65A  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
004CB65D  8B 14 BD 10 83 7B 00      MOV EDX,dword ptr [EDI*0x4 + 0x7b8310]
004CB664  8B 14 CA                  MOV EDX,dword ptr [EDX + ECX*0x8]
004CB667  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CB66A  89 11                     MOV dword ptr [ECX],EDX
004CB66C  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CB672  8B 3C BD 10 83 7B 00      MOV EDI,dword ptr [EDI*0x4 + 0x7b8310]
004CB679  8D 1C 53                  LEA EBX,[EBX + EDX*0x2]
004CB67C  03 D3                     ADD EDX,EBX
004CB67E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004CB681  8D 14 93                  LEA EDX,[EBX + EDX*0x4]
004CB684  8B 54 D7 04               MOV EDX,dword ptr [EDI + EDX*0x8 + 0x4]
004CB688  89 10                     MOV dword ptr [EAX],EDX
004CB68A  EB 0C                     JMP 0x004cb698
switchD_004cb645::caseD_0:
004CB68C  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004CB692  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
switchD_004cb645::default:
004CB698  83 BE AC 05 00 00 70      CMP dword ptr [ESI + 0x5ac],0x70
004CB69F  75 31                     JNZ 0x004cb6d2
004CB6A1  8B B6 D0 04 00 00         MOV ESI,dword ptr [ESI + 0x4d0]
004CB6A7  83 FE 05                  CMP ESI,0x5
004CB6AA  77 26                     JA 0x004cb6d2
switchD_004cb6ac::switchD:
004CB6AC  FF 24 B5 DC B7 4C 00      JMP dword ptr [ESI*0x4 + 0x4cb7dc]
switchD_004cb6ac::caseD_1:
004CB6B3  5F                        POP EDI
004CB6B4  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004CB6BA  5E                        POP ESI
004CB6BB  C7 00 11 00 00 00         MOV dword ptr [EAX],0x11
004CB6C1  5B                        POP EBX
004CB6C2  5D                        POP EBP
004CB6C3  C2 10 00                  RET 0x10
switchD_004cb6ac::caseD_0:
004CB6C6  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004CB6CC  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
TLOBaseTy::sub_004CAFC0::cf_common_exit_004CB6D2:
004CB6D2  5F                        POP EDI
004CB6D3  5E                        POP ESI
004CB6D4  5B                        POP EBX
004CB6D5  5D                        POP EBP
004CB6D6  C2 10 00                  RET 0x10
