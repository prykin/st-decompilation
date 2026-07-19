STAllPlayersC::PointPick:
00433E90  55                        PUSH EBP
00433E91  8B EC                     MOV EBP,ESP
00433E93  51                        PUSH ECX
00433E94  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00433E97  53                        PUSH EBX
00433E98  56                        PUSH ESI
00433E99  57                        PUSH EDI
00433E9A  BB 01 00 00 00            MOV EBX,0x1
00433E9F  8B F9                     MOV EDI,ECX
00433EA1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00433EA4  53                        PUSH EBX
00433EA5  6A 0E                     PUSH 0xe
00433EA7  50                        PUSH EAX
00433EA8  51                        PUSH ECX
00433EA9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00433EAF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00433EB6  E8 95 74 2B 00            CALL 0x006eb350
00433EBB  8B F0                     MOV ESI,EAX
00433EBD  85 F6                     TEST ESI,ESI
00433EBF  75 14                     JNZ 0x00433ed5
00433EC1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00433EC4  8B CF                     MOV ECX,EDI
00433EC6  52                        PUSH EDX
00433EC7  E8 19 14 FD FF            CALL 0x004052e5
00433ECC  5F                        POP EDI
00433ECD  5E                        POP ESI
00433ECE  5B                        POP EBX
00433ECF  8B E5                     MOV ESP,EBP
00433ED1  5D                        POP EBP
00433ED2  C2 10 00                  RET 0x10
LAB_00433ed5:
00433ED5  8B 06                     MOV EAX,dword ptr [ESI]
00433ED7  8B CE                     MOV ECX,ESI
00433ED9  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
00433EDF  3B C3                     CMP EAX,EBX
00433EE1  0F 85 DD 0D 00 00         JNZ 0x00434cc4
00433EE7  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00433EEA  3D A4 01 00 00            CMP EAX,0x1a4
00433EEF  0F 87 F0 03 00 00         JA 0x004342e5
00433EF5  0F 84 D4 06 00 00         JZ 0x004345cf
00433EFB  83 F8 14                  CMP EAX,0x14
00433EFE  74 1D                     JZ 0x00433f1d
00433F00  83 F8 5A                  CMP EAX,0x5a
00433F03  0F 84 C6 06 00 00         JZ 0x004345cf
00433F09  3D 72 01 00 00            CMP EAX,0x172
00433F0E  0F 84 BB 06 00 00         JZ 0x004345cf
00433F14  5F                        POP EDI
00433F15  5E                        POP ESI
00433F16  5B                        POP EBX
00433F17  8B E5                     MOV ESP,EBP
00433F19  5D                        POP EBP
00433F1A  C2 10 00                  RET 0x10
LAB_00433f1d:
00433F1D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00433F20  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00433F23  83 FA 01                  CMP EDX,0x1
00433F26  75 09                     JNZ 0x00433f31
00433F28  3A 5E 24                  CMP BL,byte ptr [ESI + 0x24]
00433F2B  0F 85 93 0D 00 00         JNZ 0x00434cc4
LAB_00433f31:
00433F31  0F BE CB                  MOVSX ECX,BL
00433F34  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00433F37  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
00433F3A  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00433F3D  C1 E0 04                  SHL EAX,0x4
00433F40  03 C1                     ADD EAX,ECX
00433F42  D1 E0                     SHL EAX,0x1
00433F44  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00433F47  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00433F4D  83 E9 00                  SUB ECX,0x0
00433F50  0F 84 4B 01 00 00         JZ 0x004340a1
00433F56  49                        DEC ECX
00433F57  74 32                     JZ 0x00433f8b
00433F59  68 A0 72 7A 00            PUSH 0x7a72a0
00433F5E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00433F63  6A 00                     PUSH 0x0
00433F65  6A 00                     PUSH 0x0
00433F67  68 56 0F 00 00            PUSH 0xf56
00433F6C  68 04 60 7A 00            PUSH 0x7a6004
00433F71  E8 5A 95 27 00            CALL 0x006ad4d0
00433F76  83 C4 18                  ADD ESP,0x18
00433F79  85 C0                     TEST EAX,EAX
00433F7B  0F 84 43 0D 00 00         JZ 0x00434cc4
00433F81  CC                        INT3
LAB_00433f8b:
00433F8B  83 FA 01                  CMP EDX,0x1
00433F8E  0F 84 30 0D 00 00         JZ 0x00434cc4
00433F94  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00433F97  6A 00                     PUSH 0x0
00433F99  6A 00                     PUSH 0x0
00433F9B  6A 01                     PUSH 0x1
00433F9D  C7 81 23 50 7F 00 00 00 00 00  MOV dword ptr [ECX + 0x7f5023],0x0
00433FA7  53                        PUSH EBX
00433FA8  8B CF                     MOV ECX,EDI
00433FAA  E8 38 F3 FC FF            CALL 0x004032e7
00433FAF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00433FB2  8B 82 83 4F 7F 00         MOV EAX,dword ptr [EDX + 0x7f4f83]
00433FB8  85 C0                     TEST EAX,EAX
00433FBA  0F 84 DD 02 00 00         JZ 0x0043429d
00433FC0  83 F8 3C                  CMP EAX,0x3c
00433FC3  0F 84 90 00 00 00         JZ 0x00434059
00433FC9  3D AE 01 00 00            CMP EAX,0x1ae
00433FCE  74 32                     JZ 0x00434002
00433FD0  68 64 72 7A 00            PUSH 0x7a7264
00433FD5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00433FDA  6A 00                     PUSH 0x0
00433FDC  6A 00                     PUSH 0x0
00433FDE  68 52 0F 00 00            PUSH 0xf52
00433FE3  68 04 60 7A 00            PUSH 0x7a6004
00433FE8  E8 E3 94 27 00            CALL 0x006ad4d0
00433FED  83 C4 18                  ADD ESP,0x18
00433FF0  85 C0                     TEST EAX,EAX
00433FF2  0F 84 CC 0C 00 00         JZ 0x00434cc4
00433FF8  CC                        INT3
LAB_00434002:
00434002  6A 01                     PUSH 0x1
00434004  6A 02                     PUSH 0x2
00434006  6A 00                     PUSH 0x0
00434008  6A 00                     PUSH 0x0
0043400A  E8 81 A2 27 00            CALL 0x006ae290
0043400F  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434012  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00434015  51                        PUSH ECX
00434016  50                        PUSH EAX
00434017  E8 A4 A1 27 00            CALL 0x006ae1c0
0043401C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043401F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00434022  6A 00                     PUSH 0x0
00434024  50                        PUSH EAX
00434025  51                        PUSH ECX
00434026  6A 3C                     PUSH 0x3c
00434028  6A 00                     PUSH 0x0
0043402A  53                        PUSH EBX
0043402B  8B CF                     MOV ECX,EDI
0043402D  E8 3D D9 FC FF            CALL 0x0040196f
00434032  85 C0                     TEST EAX,EAX
00434034  7E 14                     JLE 0x0043404a
00434036  50                        PUSH EAX
00434037  6A 00                     PUSH 0x0
00434039  53                        PUSH EBX
0043403A  8B CF                     MOV ECX,EDI
0043403C  E8 3E F1 FC FF            CALL 0x0040317f
00434041  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00434044  52                        PUSH EDX
00434045  E9 6E 0C 00 00            JMP 0x00434cb8
LAB_0043404a:
0043404A  6A 00                     PUSH 0x0
0043404C  53                        PUSH EBX
0043404D  8B CF                     MOV ECX,EDI
0043404F  E8 CC 18 FD FF            CALL 0x00405920
00434054  E9 02 01 00 00            JMP 0x0043415b
LAB_00434059:
00434059  6A 01                     PUSH 0x1
0043405B  6A 02                     PUSH 0x2
0043405D  6A 00                     PUSH 0x0
0043405F  6A 00                     PUSH 0x0
00434061  E8 2A A2 27 00            CALL 0x006ae290
00434066  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434069  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0043406C  51                        PUSH ECX
0043406D  50                        PUSH EAX
0043406E  E8 4D A1 27 00            CALL 0x006ae1c0
00434073  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00434076  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00434079  6A 00                     PUSH 0x0
0043407B  50                        PUSH EAX
0043407C  51                        PUSH ECX
0043407D  6A 3C                     PUSH 0x3c
0043407F  6A 00                     PUSH 0x0
00434081  53                        PUSH EBX
00434082  8B CF                     MOV ECX,EDI
00434084  E8 E6 D8 FC FF            CALL 0x0040196f
00434089  85 C0                     TEST EAX,EAX
0043408B  7C BD                     JL 0x0043404a
0043408D  50                        PUSH EAX
0043408E  6A 00                     PUSH 0x0
00434090  53                        PUSH EBX
00434091  8B CF                     MOV ECX,EDI
00434093  E8 E7 F0 FC FF            CALL 0x0040317f
00434098  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0043409B  52                        PUSH EDX
0043409C  E9 17 0C 00 00            JMP 0x00434cb8
LAB_004340a1:
004340A1  8B 88 83 4F 7F 00         MOV ECX,dword ptr [EAX + 0x7f4f83]
004340A7  85 C9                     TEST ECX,ECX
004340A9  0F 84 EE 01 00 00         JZ 0x0043429d
004340AF  83 F9 3C                  CMP ECX,0x3c
004340B2  0F 84 CE 00 00 00         JZ 0x00434186
004340B8  81 F9 AE 01 00 00         CMP ECX,0x1ae
004340BE  74 32                     JZ 0x004340f2
004340C0  68 28 72 7A 00            PUSH 0x7a7228
004340C5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004340CA  6A 00                     PUSH 0x0
004340CC  6A 00                     PUSH 0x0
004340CE  68 1E 0F 00 00            PUSH 0xf1e
004340D3  68 04 60 7A 00            PUSH 0x7a6004
004340D8  E8 F3 93 27 00            CALL 0x006ad4d0
004340DD  83 C4 18                  ADD ESP,0x18
004340E0  85 C0                     TEST EAX,EAX
004340E2  0F 84 DC 0B 00 00         JZ 0x00434cc4
004340E8  CC                        INT3
LAB_004340f2:
004340F2  83 FA 01                  CMP EDX,0x1
004340F5  0F 84 C9 0B 00 00         JZ 0x00434cc4
004340FB  6A 01                     PUSH 0x1
004340FD  6A 02                     PUSH 0x2
004340FF  6A 00                     PUSH 0x0
00434101  6A 00                     PUSH 0x0
00434103  E8 88 A1 27 00            CALL 0x006ae290
00434108  8D 4E 32                  LEA ECX,[ESI + 0x32]
0043410B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0043410E  51                        PUSH ECX
0043410F  50                        PUSH EAX
00434110  E8 AB A0 27 00            CALL 0x006ae1c0
00434115  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00434118  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0043411B  6A 00                     PUSH 0x0
0043411D  50                        PUSH EAX
0043411E  51                        PUSH ECX
0043411F  6A 3C                     PUSH 0x3c
00434121  6A 00                     PUSH 0x0
00434123  53                        PUSH EBX
00434124  8B CF                     MOV ECX,EDI
00434126  E8 44 D8 FC FF            CALL 0x0040196f
0043412B  85 C0                     TEST EAX,EAX
0043412D  7E 14                     JLE 0x00434143
0043412F  50                        PUSH EAX
00434130  6A 00                     PUSH 0x0
00434132  53                        PUSH EBX
00434133  8B CF                     MOV ECX,EDI
00434135  E8 45 F0 FC FF            CALL 0x0040317f
0043413A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0043413D  52                        PUSH EDX
0043413E  E9 75 0B 00 00            JMP 0x00434cb8
LAB_00434143:
00434143  6A 00                     PUSH 0x0
00434145  53                        PUSH EBX
00434146  8B CF                     MOV ECX,EDI
00434148  E8 D3 17 FD FF            CALL 0x00405920
0043414D  6A 00                     PUSH 0x0
LAB_0043414f:
0043414F  6A 01                     PUSH 0x1
00434151  6A 00                     PUSH 0x0
00434153  53                        PUSH EBX
00434154  8B CF                     MOV ECX,EDI
00434156  E8 8C F1 FC FF            CALL 0x004032e7
LAB_0043415b:
0043415B  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0043415F  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00434162  52                        PUSH EDX
00434163  50                        PUSH EAX
00434164  6A 00                     PUSH 0x0
00434166  6A 00                     PUSH 0x0
00434168  53                        PUSH EBX
00434169  8B CF                     MOV ECX,EDI
0043416B  E8 28 FF FC FF            CALL 0x00404098
LAB_00434170:
00434170  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00434173  C7 81 83 4F 7F 00 3C 00 00 00  MOV dword ptr [ECX + 0x7f4f83],0x3c
LAB_0043417d:
0043417D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00434180  52                        PUSH EDX
00434181  E9 32 0B 00 00            JMP 0x00434cb8
LAB_00434186:
00434186  83 FA 01                  CMP EDX,0x1
00434189  75 6B                     JNZ 0x004341f6
0043418B  0F BE 4E 24               MOVSX ECX,byte ptr [ESI + 0x24]
0043418F  39 88 87 4F 7F 00         CMP dword ptr [EAX + 0x7f4f87],ECX
00434195  0F 85 29 0B 00 00         JNZ 0x00434cc4
0043419B  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0043419F  8B CF                     MOV ECX,EDI
004341A1  52                        PUSH EDX
004341A2  53                        PUSH EBX
004341A3  6A 00                     PUSH 0x0
004341A5  6A 00                     PUSH 0x0
004341A7  53                        PUSH EBX
004341A8  E8 D7 D6 FC FF            CALL 0x00401884
004341AD  83 F8 01                  CMP EAX,0x1
004341B0  75 22                     JNZ 0x004341d4
004341B2  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004341B6  8B CF                     MOV ECX,EDI
004341B8  50                        PUSH EAX
004341B9  53                        PUSH EBX
004341BA  6A 00                     PUSH 0x0
004341BC  6A 00                     PUSH 0x0
004341BE  53                        PUSH EBX
004341BF  E8 1D E3 FC FF            CALL 0x004024e1
004341C4  8B CF                     MOV ECX,EDI
004341C6  E8 13 E6 FC FF            CALL 0x004027de
004341CB  5F                        POP EDI
004341CC  5E                        POP ESI
004341CD  5B                        POP EBX
004341CE  8B E5                     MOV ESP,EBP
004341D0  5D                        POP EBP
004341D1  C2 10 00                  RET 0x10
LAB_004341d4:
004341D4  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004341D8  51                        PUSH ECX
004341D9  53                        PUSH EBX
004341DA  6A 00                     PUSH 0x0
004341DC  6A 00                     PUSH 0x0
004341DE  53                        PUSH EBX
004341DF  8B CF                     MOV ECX,EDI
004341E1  E8 B2 FE FC FF            CALL 0x00404098
004341E6  8B CF                     MOV ECX,EDI
004341E8  E8 F1 E5 FC FF            CALL 0x004027de
004341ED  5F                        POP EDI
004341EE  5E                        POP ESI
004341EF  5B                        POP EBX
004341F0  8B E5                     MOV ESP,EBP
004341F2  5D                        POP EBP
004341F3  C2 10 00                  RET 0x10
LAB_004341f6:
004341F6  6A 01                     PUSH 0x1
004341F8  6A 02                     PUSH 0x2
004341FA  6A 00                     PUSH 0x0
004341FC  6A 00                     PUSH 0x0
004341FE  E8 8D A0 27 00            CALL 0x006ae290
00434203  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434206  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00434209  51                        PUSH ECX
0043420A  50                        PUSH EAX
0043420B  E8 B0 9F 27 00            CALL 0x006ae1c0
00434210  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00434213  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00434216  6A 00                     PUSH 0x0
00434218  52                        PUSH EDX
00434219  50                        PUSH EAX
0043421A  6A 3C                     PUSH 0x3c
0043421C  6A 00                     PUSH 0x0
0043421E  53                        PUSH EBX
0043421F  8B CF                     MOV ECX,EDI
00434221  E8 49 D7 FC FF            CALL 0x0040196f
00434226  85 C0                     TEST EAX,EAX
00434228  7E 14                     JLE 0x0043423e
0043422A  50                        PUSH EAX
0043422B  6A 00                     PUSH 0x0
0043422D  53                        PUSH EBX
0043422E  8B CF                     MOV ECX,EDI
00434230  E8 4A EF FC FF            CALL 0x0040317f
00434235  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00434238  52                        PUSH EDX
00434239  E9 7A 0A 00 00            JMP 0x00434cb8
LAB_0043423e:
0043423E  0F 8D 39 FF FF FF         JGE 0x0043417d
00434244  6A 00                     PUSH 0x0
00434246  53                        PUSH EBX
00434247  8B CF                     MOV ECX,EDI
00434249  E8 D2 16 FD FF            CALL 0x00405920
0043424E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00434251  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00434254  6A 00                     PUSH 0x0
00434256  8B 91 97 4F 7F 00         MOV EDX,dword ptr [ECX + 0x7f4f97]
0043425C  3B D0                     CMP EDX,EAX
0043425E  0F 85 EB FE FF FF         JNZ 0x0043414f
00434264  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434267  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043426A  6A 00                     PUSH 0x0
0043426C  50                        PUSH EAX
0043426D  51                        PUSH ECX
0043426E  6A 01                     PUSH 0x1
00434270  6A 00                     PUSH 0x0
00434272  53                        PUSH EBX
00434273  8B CF                     MOV ECX,EDI
00434275  E8 5C DE FC FF            CALL 0x004020d6
0043427A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043427D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00434280  6A 00                     PUSH 0x0
00434282  6A 00                     PUSH 0x0
00434284  52                        PUSH EDX
00434285  6A 3C                     PUSH 0x3c
00434287  50                        PUSH EAX
00434288  8B CF                     MOV ECX,EDI
0043428A  E8 31 E5 FC FF            CALL 0x004027c0
0043428F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00434292  51                        PUSH ECX
00434293  E8 78 9E 27 00            CALL 0x006ae110
00434298  E9 BE FE FF FF            JMP 0x0043415b
LAB_0043429d:
0043429D  6A 01                     PUSH 0x1
0043429F  6A 02                     PUSH 0x2
004342A1  6A 00                     PUSH 0x0
004342A3  6A 00                     PUSH 0x0
004342A5  E8 E6 9F 27 00            CALL 0x006ae290
004342AA  8D 4E 32                  LEA ECX,[ESI + 0x32]
004342AD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004342B0  51                        PUSH ECX
004342B1  50                        PUSH EAX
004342B2  E8 09 9F 27 00            CALL 0x006ae1c0
004342B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004342BA  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004342BD  6A 00                     PUSH 0x0
004342BF  50                        PUSH EAX
004342C0  51                        PUSH ECX
004342C1  6A 3C                     PUSH 0x3c
004342C3  6A 00                     PUSH 0x0
004342C5  53                        PUSH EBX
004342C6  8B CF                     MOV ECX,EDI
004342C8  E8 A2 D6 FC FF            CALL 0x0040196f
004342CD  85 C0                     TEST EAX,EAX
004342CF  0F 8E 86 FE FF FF         JLE 0x0043415b
004342D5  50                        PUSH EAX
004342D6  6A 00                     PUSH 0x0
004342D8  53                        PUSH EBX
004342D9  8B CF                     MOV ECX,EDI
004342DB  E8 9F EE FC FF            CALL 0x0040317f
004342E0  E9 8B FE FF FF            JMP 0x00434170
LAB_004342e5:
004342E5  3D B8 01 00 00            CMP EAX,0x1b8
004342EA  0F 87 10 06 00 00         JA 0x00434900
004342F0  0F 84 D9 02 00 00         JZ 0x004345cf
004342F6  3D AE 01 00 00            CMP EAX,0x1ae
004342FB  0F 85 C3 09 00 00         JNZ 0x00434cc4
00434301  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
00434304  0F 84 BA 09 00 00         JZ 0x00434cc4
0043430A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0043430D  0F BE CB                  MOVSX ECX,BL
00434310  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00434313  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00434316  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00434319  C1 E0 04                  SHL EAX,0x4
0043431C  03 C1                     ADD EAX,ECX
0043431E  D1 E0                     SHL EAX,0x1
00434320  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00434323  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00434329  83 E9 00                  SUB ECX,0x0
0043432C  0F 84 44 01 00 00         JZ 0x00434476
00434332  49                        DEC ECX
00434333  74 32                     JZ 0x00434367
00434335  68 DC 71 7A 00            PUSH 0x7a71dc
0043433A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043433F  6A 00                     PUSH 0x0
00434341  6A 00                     PUSH 0x0
00434343  68 2E 10 00 00            PUSH 0x102e
00434348  68 04 60 7A 00            PUSH 0x7a6004
0043434D  E8 7E 91 27 00            CALL 0x006ad4d0
00434352  83 C4 18                  ADD ESP,0x18
00434355  85 C0                     TEST EAX,EAX
00434357  0F 84 67 09 00 00         JZ 0x00434cc4
0043435D  CC                        INT3
LAB_00434367:
00434367  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043436A  6A 00                     PUSH 0x0
0043436C  6A 00                     PUSH 0x0
0043436E  6A 01                     PUSH 0x1
00434370  53                        PUSH EBX
00434371  8B CF                     MOV ECX,EDI
00434373  C7 80 23 50 7F 00 00 00 00 00  MOV dword ptr [EAX + 0x7f5023],0x0
0043437D  E8 65 EF FC FF            CALL 0x004032e7
00434382  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00434385  8B 81 83 4F 7F 00         MOV EAX,dword ptr [ECX + 0x7f4f83]
0043438B  85 C0                     TEST EAX,EAX
0043438D  0F 84 CF 00 00 00         JZ 0x00434462
00434393  83 F8 3C                  CMP EAX,0x3c
00434396  0F 84 8E 00 00 00         JZ 0x0043442a
0043439C  3D AE 01 00 00            CMP EAX,0x1ae
004343A1  74 32                     JZ 0x004343d5
004343A3  68 9C 71 7A 00            PUSH 0x7a719c
004343A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004343AD  6A 00                     PUSH 0x0
004343AF  6A 00                     PUSH 0x0
004343B1  68 2A 10 00 00            PUSH 0x102a
004343B6  68 04 60 7A 00            PUSH 0x7a6004
004343BB  E8 10 91 27 00            CALL 0x006ad4d0
004343C0  83 C4 18                  ADD ESP,0x18
004343C3  85 C0                     TEST EAX,EAX
004343C5  0F 84 F9 08 00 00         JZ 0x00434cc4
004343CB  CC                        INT3
LAB_004343d5:
004343D5  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004343D9  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004343DC  52                        PUSH EDX
004343DD  6A 00                     PUSH 0x0
004343DF  50                        PUSH EAX
004343E0  68 AE 01 00 00            PUSH 0x1ae
004343E5  6A 00                     PUSH 0x0
004343E7  53                        PUSH EBX
004343E8  8B CF                     MOV ECX,EDI
004343EA  E8 80 D5 FC FF            CALL 0x0040196f
004343EF  85 C0                     TEST EAX,EAX
004343F1  0F 8D BD 01 00 00         JGE 0x004345b4
LAB_004343f7:
004343F7  6A 00                     PUSH 0x0
004343F9  53                        PUSH EBX
004343FA  8B CF                     MOV ECX,EDI
004343FC  E8 1F 15 FD FF            CALL 0x00405920
LAB_00434401:
00434401  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00434405  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434408  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0043440B  51                        PUSH ECX
0043440C  52                        PUSH EDX
0043440D  50                        PUSH EAX
LAB_0043440e:
0043440E  6A 00                     PUSH 0x0
00434410  6A 00                     PUSH 0x0
00434412  53                        PUSH EBX
00434413  8B CF                     MOV ECX,EDI
00434415  E8 17 FA FC FF            CALL 0x00403e31
0043441A  8B CF                     MOV ECX,EDI
0043441C  E8 BD E3 FC FF            CALL 0x004027de
00434421  5F                        POP EDI
00434422  5E                        POP ESI
00434423  5B                        POP EBX
00434424  8B E5                     MOV ESP,EBP
00434426  5D                        POP EBP
00434427  C2 10 00                  RET 0x10
LAB_0043442a:
0043442A  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0043442E  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434431  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00434434  51                        PUSH ECX
00434435  6A 00                     PUSH 0x0
00434437  52                        PUSH EDX
00434438  50                        PUSH EAX
00434439  6A 00                     PUSH 0x0
0043443B  53                        PUSH EBX
0043443C  8B CF                     MOV ECX,EDI
0043443E  E8 2C D5 FC FF            CALL 0x0040196f
00434443  85 C0                     TEST EAX,EAX
00434445  7E B0                     JLE 0x004343f7
00434447  50                        PUSH EAX
00434448  6A 00                     PUSH 0x0
0043444A  53                        PUSH EBX
0043444B  8B CF                     MOV ECX,EDI
0043444D  E8 2D ED FC FF            CALL 0x0040317f
00434452  8B CF                     MOV ECX,EDI
00434454  E8 85 E3 FC FF            CALL 0x004027de
00434459  5F                        POP EDI
0043445A  5E                        POP ESI
0043445B  5B                        POP EBX
0043445C  8B E5                     MOV ESP,EBP
0043445E  5D                        POP EBP
0043445F  C2 10 00                  RET 0x10
LAB_00434462:
00434462  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00434466  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434469  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0043446C  51                        PUSH ECX
0043446D  6A 00                     PUSH 0x0
0043446F  52                        PUSH EDX
00434470  50                        PUSH EAX
00434471  E9 2C 01 00 00            JMP 0x004345a2
LAB_00434476:
00434476  8B 80 83 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4f83]
0043447C  85 C0                     TEST EAX,EAX
0043447E  0F 84 0E 01 00 00         JZ 0x00434592
00434484  83 F8 3C                  CMP EAX,0x3c
00434487  0F 84 A2 00 00 00         JZ 0x0043452f
0043448D  3D AE 01 00 00            CMP EAX,0x1ae
00434492  74 32                     JZ 0x004344c6
00434494  68 5C 71 7A 00            PUSH 0x7a715c
00434499  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043449E  6A 00                     PUSH 0x0
004344A0  6A 00                     PUSH 0x0
004344A2  68 03 10 00 00            PUSH 0x1003
004344A7  68 04 60 7A 00            PUSH 0x7a6004
004344AC  E8 1F 90 27 00            CALL 0x006ad4d0
004344B1  83 C4 18                  ADD ESP,0x18
004344B4  85 C0                     TEST EAX,EAX
004344B6  0F 84 08 08 00 00         JZ 0x00434cc4
004344BC  CC                        INT3
LAB_004344c6:
004344C6  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004344CA  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004344CD  51                        PUSH ECX
004344CE  6A 00                     PUSH 0x0
004344D0  52                        PUSH EDX
004344D1  68 AE 01 00 00            PUSH 0x1ae
004344D6  6A 00                     PUSH 0x0
004344D8  53                        PUSH EBX
004344D9  8B CF                     MOV ECX,EDI
004344DB  E8 8F D4 FC FF            CALL 0x0040196f
004344E0  85 C0                     TEST EAX,EAX
004344E2  7E 1B                     JLE 0x004344ff
004344E4  50                        PUSH EAX
004344E5  6A 00                     PUSH 0x0
004344E7  53                        PUSH EBX
004344E8  8B CF                     MOV ECX,EDI
004344EA  E8 90 EC FC FF            CALL 0x0040317f
004344EF  8B CF                     MOV ECX,EDI
004344F1  E8 E8 E2 FC FF            CALL 0x004027de
004344F6  5F                        POP EDI
004344F7  5E                        POP ESI
004344F8  5B                        POP EBX
004344F9  8B E5                     MOV ESP,EBP
004344FB  5D                        POP EBP
004344FC  C2 10 00                  RET 0x10
LAB_004344ff:
004344FF  0F 8D B8 07 00 00         JGE 0x00434cbd
00434505  6A 00                     PUSH 0x0
00434507  53                        PUSH EBX
00434508  8B CF                     MOV ECX,EDI
0043450A  E8 11 14 FD FF            CALL 0x00405920
0043450F  6A 00                     PUSH 0x0
00434511  6A 01                     PUSH 0x1
00434513  6A 00                     PUSH 0x0
00434515  53                        PUSH EBX
00434516  8B CF                     MOV ECX,EDI
00434518  E8 CA ED FC FF            CALL 0x004032e7
0043451D  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00434521  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00434524  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00434527  50                        PUSH EAX
00434528  51                        PUSH ECX
00434529  52                        PUSH EDX
0043452A  E9 DF FE FF FF            JMP 0x0043440e
LAB_0043452f:
0043452F  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00434533  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00434536  50                        PUSH EAX
00434537  6A 00                     PUSH 0x0
00434539  51                        PUSH ECX
0043453A  68 AE 01 00 00            PUSH 0x1ae
0043453F  6A 00                     PUSH 0x0
00434541  53                        PUSH EBX
00434542  8B CF                     MOV ECX,EDI
00434544  E8 26 D4 FC FF            CALL 0x0040196f
00434549  85 C0                     TEST EAX,EAX
0043454B  7E 1B                     JLE 0x00434568
0043454D  50                        PUSH EAX
0043454E  6A 00                     PUSH 0x0
00434550  53                        PUSH EBX
00434551  8B CF                     MOV ECX,EDI
00434553  E8 27 EC FC FF            CALL 0x0040317f
00434558  8B CF                     MOV ECX,EDI
0043455A  E8 7F E2 FC FF            CALL 0x004027de
0043455F  5F                        POP EDI
00434560  5E                        POP ESI
00434561  5B                        POP EBX
00434562  8B E5                     MOV ESP,EBP
00434564  5D                        POP EBP
00434565  C2 10 00                  RET 0x10
LAB_00434568:
00434568  6A 00                     PUSH 0x0
0043456A  53                        PUSH EBX
0043456B  8B CF                     MOV ECX,EDI
0043456D  E8 AE 13 FD FF            CALL 0x00405920
00434572  6A 00                     PUSH 0x0
00434574  6A 01                     PUSH 0x1
00434576  6A 00                     PUSH 0x0
00434578  53                        PUSH EBX
00434579  8B CF                     MOV ECX,EDI
0043457B  E8 67 ED FC FF            CALL 0x004032e7
00434580  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00434584  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00434587  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0043458A  52                        PUSH EDX
0043458B  50                        PUSH EAX
0043458C  51                        PUSH ECX
0043458D  E9 7C FE FF FF            JMP 0x0043440e
LAB_00434592:
00434592  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00434596  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00434599  52                        PUSH EDX
0043459A  6A 00                     PUSH 0x0
0043459C  50                        PUSH EAX
0043459D  68 AE 01 00 00            PUSH 0x1ae
LAB_004345a2:
004345A2  6A 00                     PUSH 0x0
004345A4  53                        PUSH EBX
004345A5  8B CF                     MOV ECX,EDI
004345A7  E8 C3 D3 FC FF            CALL 0x0040196f
004345AC  85 C0                     TEST EAX,EAX
004345AE  0F 8E 4D FE FF FF         JLE 0x00434401
LAB_004345b4:
004345B4  50                        PUSH EAX
004345B5  6A 00                     PUSH 0x0
004345B7  53                        PUSH EBX
004345B8  8B CF                     MOV ECX,EDI
004345BA  E8 C0 EB FC FF            CALL 0x0040317f
004345BF  8B CF                     MOV ECX,EDI
004345C1  E8 18 E2 FC FF            CALL 0x004027de
004345C6  5F                        POP EDI
004345C7  5E                        POP ESI
004345C8  5B                        POP EBX
004345C9  8B E5                     MOV ESP,EBP
004345CB  5D                        POP EBP
004345CC  C2 10 00                  RET 0x10
LAB_004345cf:
004345CF  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
004345D2  0F 84 EC 06 00 00         JZ 0x00434cc4
004345D8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004345DB  0F BE D3                  MOVSX EDX,BL
004345DE  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
004345E1  8D 0C CA                  LEA ECX,[EDX + ECX*0x8]
004345E4  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
004345E7  C1 E1 04                  SHL ECX,0x4
004345EA  03 CA                     ADD ECX,EDX
004345EC  D1 E1                     SHL ECX,0x1
004345EE  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004345F1  8B 91 23 50 7F 00         MOV EDX,dword ptr [ECX + 0x7f5023]
004345F7  83 EA 00                  SUB EDX,0x0
004345FA  0F 84 91 01 00 00         JZ 0x00434791
00434600  4A                        DEC EDX
00434601  74 32                     JZ 0x00434635
00434603  68 DC 71 7A 00            PUSH 0x7a71dc
00434608  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043460D  6A 00                     PUSH 0x0
0043460F  6A 00                     PUSH 0x0
00434611  68 90 10 00 00            PUSH 0x1090
00434616  68 04 60 7A 00            PUSH 0x7a6004
0043461B  E8 B0 8E 27 00            CALL 0x006ad4d0
00434620  83 C4 18                  ADD ESP,0x18
00434623  85 C0                     TEST EAX,EAX
00434625  0F 84 99 06 00 00         JZ 0x00434cc4
0043462B  CC                        INT3
LAB_00434635:
00434635  8B 89 D3 4F 7F 00         MOV ECX,dword ptr [ECX + 0x7f4fd3]
0043463B  81 F9 9A 01 00 00         CMP ECX,0x19a
00434641  0F 8F 8F 00 00 00         JG 0x004346d6
00434647  74 54                     JZ 0x0043469d
00434649  85 C9                     TEST ECX,ECX
0043464B  74 17                     JZ 0x00434664
0043464D  83 F9 5A                  CMP ECX,0x5a
00434650  0F 84 BF 00 00 00         JZ 0x00434715
00434656  81 F9 72 01 00 00         CMP ECX,0x172
0043465C  0F 84 B3 00 00 00         JZ 0x00434715
00434662  EB 7F                     JMP 0x004346e3
LAB_00434664:
00434664  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00434668  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0043466B  52                        PUSH EDX
0043466C  6A 00                     PUSH 0x0
0043466E  51                        PUSH ECX
0043466F  50                        PUSH EAX
00434670  6A 01                     PUSH 0x1
00434672  53                        PUSH EBX
00434673  8B CF                     MOV ECX,EDI
00434675  E8 F5 D2 FC FF            CALL 0x0040196f
0043467A  85 C0                     TEST EAX,EAX
0043467C  0F 8E E6 00 00 00         JLE 0x00434768
00434682  50                        PUSH EAX
00434683  6A 01                     PUSH 0x1
00434685  53                        PUSH EBX
00434686  8B CF                     MOV ECX,EDI
00434688  E8 F2 EA FC FF            CALL 0x0040317f
0043468D  8B CF                     MOV ECX,EDI
0043468F  E8 4A E1 FC FF            CALL 0x004027de
00434694  5F                        POP EDI
00434695  5E                        POP ESI
00434696  5B                        POP EBX
00434697  8B E5                     MOV ESP,EBP
00434699  5D                        POP EBP
0043469A  C2 10 00                  RET 0x10
LAB_0043469d:
0043469D  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004346A1  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004346A4  52                        PUSH EDX
004346A5  6A 00                     PUSH 0x0
004346A7  51                        PUSH ECX
004346A8  50                        PUSH EAX
004346A9  6A 01                     PUSH 0x1
004346AB  53                        PUSH EBX
004346AC  8B CF                     MOV ECX,EDI
004346AE  E8 BC D2 FC FF            CALL 0x0040196f
004346B3  85 C0                     TEST EAX,EAX
004346B5  0F 8E 95 00 00 00         JLE 0x00434750
004346BB  50                        PUSH EAX
004346BC  6A 01                     PUSH 0x1
004346BE  53                        PUSH EBX
004346BF  8B CF                     MOV ECX,EDI
004346C1  E8 B9 EA FC FF            CALL 0x0040317f
004346C6  8B CF                     MOV ECX,EDI
004346C8  E8 11 E1 FC FF            CALL 0x004027de
004346CD  5F                        POP EDI
004346CE  5E                        POP ESI
004346CF  5B                        POP EBX
004346D0  8B E5                     MOV ESP,EBP
004346D2  5D                        POP EBP
004346D3  C2 10 00                  RET 0x10
LAB_004346d6:
004346D6  81 E9 A4 01 00 00         SUB ECX,0x1a4
004346DC  74 37                     JZ 0x00434715
004346DE  83 E9 14                  SUB ECX,0x14
004346E1  74 32                     JZ 0x00434715
LAB_004346e3:
004346E3  68 1C 71 7A 00            PUSH 0x7a711c
004346E8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004346ED  6A 00                     PUSH 0x0
004346EF  6A 00                     PUSH 0x0
004346F1  68 62 10 00 00            PUSH 0x1062
004346F6  68 04 60 7A 00            PUSH 0x7a6004
004346FB  E8 D0 8D 27 00            CALL 0x006ad4d0
00434700  83 C4 18                  ADD ESP,0x18
00434703  85 C0                     TEST EAX,EAX
00434705  0F 84 B9 05 00 00         JZ 0x00434cc4
0043470B  CC                        INT3
LAB_00434715:
00434715  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00434719  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0043471C  52                        PUSH EDX
0043471D  6A 00                     PUSH 0x0
0043471F  51                        PUSH ECX
00434720  50                        PUSH EAX
00434721  6A 01                     PUSH 0x1
00434723  53                        PUSH EBX
00434724  8B CF                     MOV ECX,EDI
00434726  E8 44 D2 FC FF            CALL 0x0040196f
0043472B  85 C0                     TEST EAX,EAX
0043472D  7E 1B                     JLE 0x0043474a
0043472F  50                        PUSH EAX
00434730  6A 01                     PUSH 0x1
00434732  53                        PUSH EBX
00434733  8B CF                     MOV ECX,EDI
00434735  E8 45 EA FC FF            CALL 0x0040317f
0043473A  8B CF                     MOV ECX,EDI
0043473C  E8 9D E0 FC FF            CALL 0x004027de
00434741  5F                        POP EDI
00434742  5E                        POP ESI
00434743  5B                        POP EBX
00434744  8B E5                     MOV ESP,EBP
00434746  5D                        POP EBP
00434747  C2 10 00                  RET 0x10
LAB_0043474a:
0043474A  0F 8D 6D 05 00 00         JGE 0x00434cbd
LAB_00434750:
00434750  6A 01                     PUSH 0x1
00434752  53                        PUSH EBX
00434753  8B CF                     MOV ECX,EDI
00434755  E8 C6 11 FD FF            CALL 0x00405920
0043475A  6A 00                     PUSH 0x0
0043475C  6A 01                     PUSH 0x1
0043475E  6A 01                     PUSH 0x1
00434760  53                        PUSH EBX
00434761  8B CF                     MOV ECX,EDI
00434763  E8 7F EB FC FF            CALL 0x004032e7
LAB_00434768:
00434768  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0043476C  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0043476F  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00434772  52                        PUSH EDX
00434773  50                        PUSH EAX
00434774  51                        PUSH ECX
00434775  6A 00                     PUSH 0x0
00434777  6A 01                     PUSH 0x1
00434779  53                        PUSH EBX
0043477A  8B CF                     MOV ECX,EDI
0043477C  E8 B0 F6 FC FF            CALL 0x00403e31
00434781  8B CF                     MOV ECX,EDI
00434783  E8 56 E0 FC FF            CALL 0x004027de
00434788  5F                        POP EDI
00434789  5E                        POP ESI
0043478A  5B                        POP EBX
0043478B  8B E5                     MOV ESP,EBP
0043478D  5D                        POP EBP
0043478E  C2 10 00                  RET 0x10
LAB_00434791:
00434791  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00434794  6A 00                     PUSH 0x0
00434796  6A 00                     PUSH 0x0
00434798  6A 00                     PUSH 0x0
0043479A  53                        PUSH EBX
0043479B  8B CF                     MOV ECX,EDI
0043479D  C7 82 23 50 7F 00 01 00 00 00  MOV dword ptr [EDX + 0x7f5023],0x1
004347A7  E8 3B EB FC FF            CALL 0x004032e7
004347AC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004347AF  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
004347B5  3D 9A 01 00 00            CMP EAX,0x19a
004347BA  0F 8F 97 00 00 00         JG 0x00434857
004347C0  74 59                     JZ 0x0043481b
004347C2  85 C0                     TEST EAX,EAX
004347C4  74 19                     JZ 0x004347df
004347C6  83 F8 5A                  CMP EAX,0x5a
004347C9  0F 84 C6 00 00 00         JZ 0x00434895
004347CF  3D 72 01 00 00            CMP EAX,0x172
004347D4  0F 84 BB 00 00 00         JZ 0x00434895
004347DA  E9 84 00 00 00            JMP 0x00434863
LAB_004347df:
004347DF  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004347E3  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004347E6  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004347E9  51                        PUSH ECX
004347EA  6A 00                     PUSH 0x0
004347EC  52                        PUSH EDX
004347ED  50                        PUSH EAX
004347EE  6A 01                     PUSH 0x1
004347F0  53                        PUSH EBX
004347F1  8B CF                     MOV ECX,EDI
004347F3  E8 77 D1 FC FF            CALL 0x0040196f
004347F8  85 C0                     TEST EAX,EAX
004347FA  0F 8E D7 00 00 00         JLE 0x004348d7
00434800  50                        PUSH EAX
00434801  6A 01                     PUSH 0x1
00434803  53                        PUSH EBX
00434804  8B CF                     MOV ECX,EDI
00434806  E8 74 E9 FC FF            CALL 0x0040317f
0043480B  8B CF                     MOV ECX,EDI
0043480D  E8 CC DF FC FF            CALL 0x004027de
00434812  5F                        POP EDI
00434813  5E                        POP ESI
00434814  5B                        POP EBX
00434815  8B E5                     MOV ESP,EBP
00434817  5D                        POP EBP
00434818  C2 10 00                  RET 0x10
LAB_0043481b:
0043481B  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0043481F  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434822  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00434825  51                        PUSH ECX
00434826  6A 00                     PUSH 0x0
00434828  52                        PUSH EDX
00434829  50                        PUSH EAX
0043482A  6A 01                     PUSH 0x1
0043482C  53                        PUSH EBX
0043482D  8B CF                     MOV ECX,EDI
0043482F  E8 3B D1 FC FF            CALL 0x0040196f
00434834  85 C0                     TEST EAX,EAX
00434836  0F 8E 91 00 00 00         JLE 0x004348cd
0043483C  50                        PUSH EAX
0043483D  6A 01                     PUSH 0x1
0043483F  53                        PUSH EBX
00434840  8B CF                     MOV ECX,EDI
00434842  E8 38 E9 FC FF            CALL 0x0040317f
00434847  8B CF                     MOV ECX,EDI
00434849  E8 90 DF FC FF            CALL 0x004027de
0043484E  5F                        POP EDI
0043484F  5E                        POP ESI
00434850  5B                        POP EBX
00434851  8B E5                     MOV ESP,EBP
00434853  5D                        POP EBP
00434854  C2 10 00                  RET 0x10
LAB_00434857:
00434857  2D A4 01 00 00            SUB EAX,0x1a4
0043485C  74 37                     JZ 0x00434895
0043485E  83 E8 14                  SUB EAX,0x14
00434861  74 32                     JZ 0x00434895
LAB_00434863:
00434863  68 DC 70 7A 00            PUSH 0x7a70dc
00434868  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043486D  6A 00                     PUSH 0x0
0043486F  6A 00                     PUSH 0x0
00434871  68 8C 10 00 00            PUSH 0x108c
00434876  68 04 60 7A 00            PUSH 0x7a6004
0043487B  E8 50 8C 27 00            CALL 0x006ad4d0
00434880  83 C4 18                  ADD ESP,0x18
00434883  85 C0                     TEST EAX,EAX
00434885  0F 84 39 04 00 00         JZ 0x00434cc4
0043488B  CC                        INT3
LAB_00434895:
00434895  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00434899  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0043489C  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0043489F  51                        PUSH ECX
004348A0  6A 00                     PUSH 0x0
004348A2  52                        PUSH EDX
004348A3  50                        PUSH EAX
004348A4  6A 01                     PUSH 0x1
004348A6  53                        PUSH EBX
004348A7  8B CF                     MOV ECX,EDI
004348A9  E8 C1 D0 FC FF            CALL 0x0040196f
004348AE  85 C0                     TEST EAX,EAX
004348B0  7C 1B                     JL 0x004348cd
004348B2  50                        PUSH EAX
004348B3  6A 01                     PUSH 0x1
004348B5  53                        PUSH EBX
004348B6  8B CF                     MOV ECX,EDI
004348B8  E8 C2 E8 FC FF            CALL 0x0040317f
004348BD  8B CF                     MOV ECX,EDI
004348BF  E8 1A DF FC FF            CALL 0x004027de
004348C4  5F                        POP EDI
004348C5  5E                        POP ESI
004348C6  5B                        POP EBX
004348C7  8B E5                     MOV ESP,EBP
004348C9  5D                        POP EBP
004348CA  C2 10 00                  RET 0x10
LAB_004348cd:
004348CD  6A 01                     PUSH 0x1
004348CF  53                        PUSH EBX
004348D0  8B CF                     MOV ECX,EDI
004348D2  E8 49 10 FD FF            CALL 0x00405920
LAB_004348d7:
004348D7  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004348DB  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004348DE  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004348E1  51                        PUSH ECX
004348E2  52                        PUSH EDX
004348E3  50                        PUSH EAX
004348E4  6A 00                     PUSH 0x0
004348E6  6A 01                     PUSH 0x1
004348E8  53                        PUSH EBX
004348E9  8B CF                     MOV ECX,EDI
004348EB  E8 41 F5 FC FF            CALL 0x00403e31
004348F0  8B CF                     MOV ECX,EDI
004348F2  E8 E7 DE FC FF            CALL 0x004027de
004348F7  5F                        POP EDI
004348F8  5E                        POP ESI
004348F9  5B                        POP EBX
004348FA  8B E5                     MOV ESP,EBP
004348FC  5D                        POP EBP
004348FD  C2 10 00                  RET 0x10
LAB_00434900:
00434900  3D E8 03 00 00            CMP EAX,0x3e8
00434905  0F 82 B9 03 00 00         JC 0x00434cc4
0043490B  3D E9 03 00 00            CMP EAX,0x3e9
00434910  0F 87 AE 03 00 00         JA 0x00434cc4
00434916  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
00434919  0F 84 A5 03 00 00         JZ 0x00434cc4
0043491F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00434922  0F BE CB                  MOVSX ECX,BL
00434925  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00434928  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
0043492B  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0043492E  C1 E0 04                  SHL EAX,0x4
00434931  03 C1                     ADD EAX,ECX
00434933  D1 E0                     SHL EAX,0x1
00434935  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00434938  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
0043493E  83 E9 00                  SUB ECX,0x0
00434941  0F 84 29 02 00 00         JZ 0x00434b70
00434947  49                        DEC ECX
00434948  74 32                     JZ 0x0043497c
0043494A  68 94 70 7A 00            PUSH 0x7a7094
0043494F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00434954  6A 00                     PUSH 0x0
00434956  6A 00                     PUSH 0x0
00434958  68 D5 0F 00 00            PUSH 0xfd5
0043495D  68 04 60 7A 00            PUSH 0x7a6004
00434962  E8 69 8B 27 00            CALL 0x006ad4d0
00434967  83 C4 18                  ADD ESP,0x18
0043496A  85 C0                     TEST EAX,EAX
0043496C  0F 84 52 03 00 00         JZ 0x00434cc4
00434972  CC                        INT3
LAB_0043497c:
0043497C  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
00434982  3D 9A 01 00 00            CMP EAX,0x19a
00434987  0F 8F 17 01 00 00         JG 0x00434aa4
0043498D  74 68                     JZ 0x004349f7
0043498F  85 C0                     TEST EAX,EAX
00434991  74 19                     JZ 0x004349ac
00434993  83 F8 5A                  CMP EAX,0x5a
00434996  0F 84 46 01 00 00         JZ 0x00434ae2
0043499C  3D 72 01 00 00            CMP EAX,0x172
004349A1  0F 84 3B 01 00 00         JZ 0x00434ae2
004349A7  E9 04 01 00 00            JMP 0x00434ab0
LAB_004349ac:
004349AC  6A 01                     PUSH 0x1
004349AE  6A 02                     PUSH 0x2
004349B0  6A 00                     PUSH 0x0
004349B2  6A 00                     PUSH 0x0
004349B4  E8 D7 98 27 00            CALL 0x006ae290
004349B9  8D 4E 32                  LEA ECX,[ESI + 0x32]
004349BC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004349BF  51                        PUSH ECX
004349C0  50                        PUSH EAX
004349C1  E8 FA 97 27 00            CALL 0x006ae1c0
004349C6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004349C9  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004349CC  6A 00                     PUSH 0x0
004349CE  51                        PUSH ECX
004349CF  52                        PUSH EDX
004349D0  68 9A 01 00 00            PUSH 0x19a
004349D5  6A 01                     PUSH 0x1
004349D7  53                        PUSH EBX
004349D8  8B CF                     MOV ECX,EDI
004349DA  E8 90 CF FC FF            CALL 0x0040196f
004349DF  85 C0                     TEST EAX,EAX
004349E1  0F 8E AB 02 00 00         JLE 0x00434c92
004349E7  50                        PUSH EAX
004349E8  6A 01                     PUSH 0x1
004349EA  53                        PUSH EBX
004349EB  8B CF                     MOV ECX,EDI
004349ED  E8 8D E7 FC FF            CALL 0x0040317f
004349F2  E9 B0 02 00 00            JMP 0x00434ca7
LAB_004349f7:
004349F7  6A 01                     PUSH 0x1
004349F9  6A 02                     PUSH 0x2
004349FB  6A 00                     PUSH 0x0
004349FD  6A 00                     PUSH 0x0
004349FF  E8 8C 98 27 00            CALL 0x006ae290
00434A04  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434A07  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00434A0A  51                        PUSH ECX
00434A0B  50                        PUSH EAX
00434A0C  E8 AF 97 27 00            CALL 0x006ae1c0
00434A11  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434A14  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434A17  6A 00                     PUSH 0x0
00434A19  51                        PUSH ECX
00434A1A  52                        PUSH EDX
00434A1B  68 9A 01 00 00            PUSH 0x19a
00434A20  6A 01                     PUSH 0x1
00434A22  53                        PUSH EBX
00434A23  8B CF                     MOV ECX,EDI
00434A25  E8 45 CF FC FF            CALL 0x0040196f
00434A2A  85 C0                     TEST EAX,EAX
00434A2C  7E 14                     JLE 0x00434a42
00434A2E  50                        PUSH EAX
00434A2F  6A 01                     PUSH 0x1
00434A31  53                        PUSH EBX
00434A32  8B CF                     MOV ECX,EDI
00434A34  E8 46 E7 FC FF            CALL 0x0040317f
00434A39  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434A3C  51                        PUSH ECX
00434A3D  E9 76 02 00 00            JMP 0x00434cb8
LAB_00434a42:
00434A42  0F 8D 1F 01 00 00         JGE 0x00434b67
00434A48  6A 01                     PUSH 0x1
00434A4A  53                        PUSH EBX
00434A4B  8B CF                     MOV ECX,EDI
00434A4D  E8 CE 0E FD FF            CALL 0x00405920
00434A52  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00434A55  6A 00                     PUSH 0x0
00434A57  8B 88 E7 4F 7F 00         MOV ECX,dword ptr [EAX + 0x7f4fe7]
00434A5D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00434A60  3B C8                     CMP ECX,EAX
00434A62  0F 85 D1 00 00 00         JNZ 0x00434b39
00434A68  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00434A6B  8D 55 FC                  LEA EDX,[EBP + -0x4]
00434A6E  6A 00                     PUSH 0x0
00434A70  52                        PUSH EDX
00434A71  50                        PUSH EAX
00434A72  6A 01                     PUSH 0x1
00434A74  6A 01                     PUSH 0x1
00434A76  53                        PUSH EBX
00434A77  8B CF                     MOV ECX,EDI
00434A79  E8 58 D6 FC FF            CALL 0x004020d6
00434A7E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00434A81  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434A84  6A 00                     PUSH 0x0
00434A86  6A 00                     PUSH 0x0
00434A88  51                        PUSH ECX
00434A89  68 9A 01 00 00            PUSH 0x19a
00434A8E  52                        PUSH EDX
00434A8F  8B CF                     MOV ECX,EDI
00434A91  E8 2A DD FC FF            CALL 0x004027c0
00434A96  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00434A99  50                        PUSH EAX
00434A9A  E8 71 96 27 00            CALL 0x006ae110
00434A9F  E9 A1 00 00 00            JMP 0x00434b45
LAB_00434aa4:
00434AA4  2D A4 01 00 00            SUB EAX,0x1a4
00434AA9  74 37                     JZ 0x00434ae2
00434AAB  83 E8 14                  SUB EAX,0x14
00434AAE  74 32                     JZ 0x00434ae2
LAB_00434ab0:
00434AB0  68 54 70 7A 00            PUSH 0x7a7054
00434AB5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00434ABA  6A 00                     PUSH 0x0
00434ABC  6A 00                     PUSH 0x0
00434ABE  68 9A 0F 00 00            PUSH 0xf9a
00434AC3  68 04 60 7A 00            PUSH 0x7a6004
00434AC8  E8 03 8A 27 00            CALL 0x006ad4d0
00434ACD  83 C4 18                  ADD ESP,0x18
00434AD0  85 C0                     TEST EAX,EAX
00434AD2  0F 84 EC 01 00 00         JZ 0x00434cc4
00434AD8  CC                        INT3
LAB_00434ae2:
00434AE2  6A 01                     PUSH 0x1
00434AE4  6A 02                     PUSH 0x2
00434AE6  6A 00                     PUSH 0x0
00434AE8  6A 00                     PUSH 0x0
00434AEA  E8 A1 97 27 00            CALL 0x006ae290
00434AEF  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434AF2  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00434AF5  51                        PUSH ECX
00434AF6  50                        PUSH EAX
00434AF7  E8 C4 96 27 00            CALL 0x006ae1c0
00434AFC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00434AFF  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00434B02  6A 00                     PUSH 0x0
00434B04  52                        PUSH EDX
00434B05  50                        PUSH EAX
00434B06  68 9A 01 00 00            PUSH 0x19a
00434B0B  6A 01                     PUSH 0x1
00434B0D  53                        PUSH EBX
00434B0E  8B CF                     MOV ECX,EDI
00434B10  E8 5A CE FC FF            CALL 0x0040196f
00434B15  85 C0                     TEST EAX,EAX
00434B17  7E 14                     JLE 0x00434b2d
00434B19  50                        PUSH EAX
00434B1A  6A 01                     PUSH 0x1
00434B1C  53                        PUSH EBX
00434B1D  8B CF                     MOV ECX,EDI
00434B1F  E8 5B E6 FC FF            CALL 0x0040317f
00434B24  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434B27  51                        PUSH ECX
00434B28  E9 8B 01 00 00            JMP 0x00434cb8
LAB_00434b2d:
00434B2D  6A 01                     PUSH 0x1
00434B2F  53                        PUSH EBX
00434B30  8B CF                     MOV ECX,EDI
00434B32  E8 E9 0D FD FF            CALL 0x00405920
00434B37  6A 00                     PUSH 0x0
LAB_00434b39:
00434B39  6A 01                     PUSH 0x1
00434B3B  6A 01                     PUSH 0x1
00434B3D  53                        PUSH EBX
00434B3E  8B CF                     MOV ECX,EDI
00434B40  E8 A2 E7 FC FF            CALL 0x004032e7
LAB_00434b45:
00434B45  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00434B49  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434B4C  51                        PUSH ECX
00434B4D  52                        PUSH EDX
00434B4E  6A 00                     PUSH 0x0
00434B50  6A 01                     PUSH 0x1
00434B52  53                        PUSH EBX
00434B53  8B CF                     MOV ECX,EDI
00434B55  E8 3E F5 FC FF            CALL 0x00404098
00434B5A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00434B5D  C7 80 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EAX + 0x7f4fd3],0x19a
LAB_00434b67:
00434B67  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434B6A  51                        PUSH ECX
00434B6B  E9 48 01 00 00            JMP 0x00434cb8
LAB_00434b70:
00434B70  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00434B73  6A 00                     PUSH 0x0
00434B75  6A 00                     PUSH 0x0
00434B77  6A 00                     PUSH 0x0
00434B79  53                        PUSH EBX
00434B7A  8B CF                     MOV ECX,EDI
00434B7C  C7 82 23 50 7F 00 01 00 00 00  MOV dword ptr [EDX + 0x7f5023],0x1
00434B86  E8 5C E7 FC FF            CALL 0x004032e7
00434B8B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00434B8E  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
00434B94  3D 9A 01 00 00            CMP EAX,0x19a
00434B99  7F 6B                     JG 0x00434c06
00434B9B  74 1E                     JZ 0x00434bbb
00434B9D  85 C0                     TEST EAX,EAX
00434B9F  0F 84 07 FE FF FF         JZ 0x004349ac
00434BA5  83 F8 5A                  CMP EAX,0x5a
00434BA8  0F 84 96 00 00 00         JZ 0x00434c44
00434BAE  3D 72 01 00 00            CMP EAX,0x172
00434BB3  0F 84 8B 00 00 00         JZ 0x00434c44
00434BB9  EB 57                     JMP 0x00434c12
LAB_00434bbb:
00434BBB  6A 01                     PUSH 0x1
00434BBD  6A 02                     PUSH 0x2
00434BBF  6A 00                     PUSH 0x0
00434BC1  6A 00                     PUSH 0x0
00434BC3  E8 C8 96 27 00            CALL 0x006ae290
00434BC8  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434BCB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00434BCE  51                        PUSH ECX
00434BCF  50                        PUSH EAX
00434BD0  E8 EB 95 27 00            CALL 0x006ae1c0
00434BD5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434BD8  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434BDB  6A 00                     PUSH 0x0
00434BDD  51                        PUSH ECX
00434BDE  52                        PUSH EDX
00434BDF  68 9A 01 00 00            PUSH 0x19a
00434BE4  6A 01                     PUSH 0x1
00434BE6  53                        PUSH EBX
00434BE7  8B CF                     MOV ECX,EDI
00434BE9  E8 81 CD FC FF            CALL 0x0040196f
00434BEE  85 C0                     TEST EAX,EAX
00434BF0  0F 8C 92 00 00 00         JL 0x00434c88
00434BF6  50                        PUSH EAX
00434BF7  6A 01                     PUSH 0x1
00434BF9  53                        PUSH EBX
00434BFA  8B CF                     MOV ECX,EDI
00434BFC  E8 7E E5 FC FF            CALL 0x0040317f
00434C01  E9 AE 00 00 00            JMP 0x00434cb4
LAB_00434c06:
00434C06  2D A4 01 00 00            SUB EAX,0x1a4
00434C0B  74 37                     JZ 0x00434c44
00434C0D  83 E8 14                  SUB EAX,0x14
00434C10  74 32                     JZ 0x00434c44
LAB_00434c12:
00434C12  68 18 70 7A 00            PUSH 0x7a7018
00434C17  68 CC 4C 7A 00            PUSH 0x7a4ccc
00434C1C  6A 00                     PUSH 0x0
00434C1E  6A 00                     PUSH 0x0
00434C20  68 D1 0F 00 00            PUSH 0xfd1
00434C25  68 04 60 7A 00            PUSH 0x7a6004
00434C2A  E8 A1 88 27 00            CALL 0x006ad4d0
00434C2F  83 C4 18                  ADD ESP,0x18
00434C32  85 C0                     TEST EAX,EAX
00434C34  0F 84 8A 00 00 00         JZ 0x00434cc4
00434C3A  CC                        INT3
LAB_00434c44:
00434C44  6A 01                     PUSH 0x1
00434C46  6A 02                     PUSH 0x2
00434C48  6A 00                     PUSH 0x0
00434C4A  6A 00                     PUSH 0x0
00434C4C  E8 3F 96 27 00            CALL 0x006ae290
00434C51  8D 4E 32                  LEA ECX,[ESI + 0x32]
00434C54  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00434C57  51                        PUSH ECX
00434C58  50                        PUSH EAX
00434C59  E8 62 95 27 00            CALL 0x006ae1c0
00434C5E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00434C61  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00434C64  6A 00                     PUSH 0x0
00434C66  51                        PUSH ECX
00434C67  52                        PUSH EDX
00434C68  68 9A 01 00 00            PUSH 0x19a
00434C6D  6A 01                     PUSH 0x1
00434C6F  53                        PUSH EBX
00434C70  8B CF                     MOV ECX,EDI
00434C72  E8 F8 CC FC FF            CALL 0x0040196f
00434C77  85 C0                     TEST EAX,EAX
00434C79  7E 0D                     JLE 0x00434c88
00434C7B  50                        PUSH EAX
00434C7C  6A 01                     PUSH 0x1
00434C7E  53                        PUSH EBX
00434C7F  8B CF                     MOV ECX,EDI
00434C81  E8 F9 E4 FC FF            CALL 0x0040317f
00434C86  EB 2C                     JMP 0x00434cb4
LAB_00434c88:
00434C88  6A 01                     PUSH 0x1
00434C8A  53                        PUSH EBX
00434C8B  8B CF                     MOV ECX,EDI
00434C8D  E8 8E 0C FD FF            CALL 0x00405920
LAB_00434c92:
00434C92  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00434C96  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00434C99  50                        PUSH EAX
00434C9A  51                        PUSH ECX
00434C9B  6A 00                     PUSH 0x0
00434C9D  6A 01                     PUSH 0x1
00434C9F  53                        PUSH EBX
00434CA0  8B CF                     MOV ECX,EDI
00434CA2  E8 F1 F3 FC FF            CALL 0x00404098
LAB_00434ca7:
00434CA7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00434CAA  C7 82 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EDX + 0x7f4fd3],0x19a
LAB_00434cb4:
00434CB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00434CB7  50                        PUSH EAX
LAB_00434cb8:
00434CB8  E8 53 94 27 00            CALL 0x006ae110
LAB_00434cbd:
00434CBD  8B CF                     MOV ECX,EDI
00434CBF  E8 1A DB FC FF            CALL 0x004027de
LAB_00434cc4:
00434CC4  5F                        POP EDI
00434CC5  5E                        POP ESI
00434CC6  5B                        POP EBX
00434CC7  8B E5                     MOV ESP,EBP
00434CC9  5D                        POP EBP
00434CCA  C2 10 00                  RET 0x10
