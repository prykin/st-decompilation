FUN_00482db0:
00482DB0  55                        PUSH EBP
00482DB1  8B EC                     MOV EBP,ESP
00482DB3  83 EC 38                  SUB ESP,0x38
00482DB6  53                        PUSH EBX
00482DB7  56                        PUSH ESI
00482DB8  8B F1                     MOV ESI,ECX
00482DBA  57                        PUSH EDI
00482DBB  8A 46 40                  MOV AL,byte ptr [ESI + 0x40]
00482DBE  84 C0                     TEST AL,AL
00482DC0  0F 85 1A 04 00 00         JNZ 0x004831e0
00482DC6  8A 46 4D                  MOV AL,byte ptr [ESI + 0x4d]
00482DC9  84 C0                     TEST AL,AL
00482DCB  0F 85 0F 04 00 00         JNZ 0x004831e0
00482DD1  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00482DD5  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00482DD9  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00482DDD  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
00482DE4  66 85 C0                  TEST AX,AX
00482DE7  7C 53                     JL 0x00482e3c
00482DE9  66 3B C3                  CMP AX,BX
00482DEC  7D 4E                     JGE 0x00482e3c
00482DEE  66 85 D2                  TEST DX,DX
00482DF1  7C 49                     JL 0x00482e3c
00482DF3  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00482DFA  7D 40                     JGE 0x00482e3c
00482DFC  66 85 C9                  TEST CX,CX
00482DFF  7C 3B                     JL 0x00482e3c
00482E01  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00482E08  7D 32                     JGE 0x00482e3c
00482E0A  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00482E11  0F BF C9                  MOVSX ECX,CX
00482E14  0F AF F9                  IMUL EDI,ECX
00482E17  0F BF CB                  MOVSX ECX,BX
00482E1A  0F BF D2                  MOVSX EDX,DX
00482E1D  0F AF CA                  IMUL ECX,EDX
00482E20  0F BF C0                  MOVSX EAX,AX
00482E23  03 F9                     ADD EDI,ECX
00482E25  03 F8                     ADD EDI,EAX
00482E27  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00482E2C  33 C9                     XOR ECX,ECX
00482E2E  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00482E34  8D 14 79                  LEA EDX,[ECX + EDI*0x2]
00482E37  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
00482E3A  EB 02                     JMP 0x00482e3e
LAB_00482e3c:
00482E3C  33 C0                     XOR EAX,EAX
LAB_00482e3e:
00482E3E  3B C6                     CMP EAX,ESI
00482E40  0F 85 9A 03 00 00         JNZ 0x004831e0
00482E46  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
00482E4C  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00482E53  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00482E5A  8D 9E 04 08 00 00         LEA EBX,[ESI + 0x804]
00482E60  83 F8 03                  CMP EAX,0x3
00482E63  0F 85 81 00 00 00         JNZ 0x00482eea
00482E69  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00482E70  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00482E73  66 85 C0                  TEST AX,AX
00482E76  0F 8C E7 00 00 00         JL 0x00482f63
00482E7C  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00482E83  0F 8D DA 00 00 00         JGE 0x00482f63
00482E89  66 85 D2                  TEST DX,DX
00482E8C  0F 8C D1 00 00 00         JL 0x00482f63
00482E92  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
00482E99  66 39 55 F0               CMP word ptr [EBP + -0x10],DX
00482E9D  0F 8D C0 00 00 00         JGE 0x00482f63
00482EA3  66 85 C9                  TEST CX,CX
00482EA6  0F 8C B7 00 00 00         JL 0x00482f63
00482EAC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00482EB3  0F 8D AA 00 00 00         JGE 0x00482f63
00482EB9  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00482EC0  0F BF 7D F0               MOVSX EDI,word ptr [EBP + -0x10]
00482EC4  0F BF C9                  MOVSX ECX,CX
00482EC7  0F AF D1                  IMUL EDX,ECX
00482ECA  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00482ED1  0F AF CF                  IMUL ECX,EDI
00482ED4  0F BF C0                  MOVSX EAX,AX
00482ED7  03 D1                     ADD EDX,ECX
00482ED9  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00482EDF  03 D0                     ADD EDX,EAX
00482EE1  8B 7C D1 04               MOV EDI,dword ptr [ECX + EDX*0x8 + 0x4]
00482EE5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00482EE8  EB 68                     JMP 0x00482f52
LAB_00482eea:
00482EEA  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00482EF1  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00482EF4  66 85 C0                  TEST AX,AX
00482EF7  7C 6A                     JL 0x00482f63
00482EF9  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00482F00  7D 61                     JGE 0x00482f63
00482F02  66 85 D2                  TEST DX,DX
00482F05  7C 5C                     JL 0x00482f63
00482F07  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
00482F0E  66 39 55 F0               CMP word ptr [EBP + -0x10],DX
00482F12  7D 4F                     JGE 0x00482f63
00482F14  66 85 C9                  TEST CX,CX
00482F17  7C 4A                     JL 0x00482f63
00482F19  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00482F20  7D 41                     JGE 0x00482f63
00482F22  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00482F29  0F BF 7D F0               MOVSX EDI,word ptr [EBP + -0x10]
00482F2D  0F BF C9                  MOVSX ECX,CX
00482F30  0F AF D1                  IMUL EDX,ECX
00482F33  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00482F3A  0F AF CF                  IMUL ECX,EDI
00482F3D  0F BF C0                  MOVSX EAX,AX
00482F40  03 D1                     ADD EDX,ECX
00482F42  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00482F48  03 D0                     ADD EDX,EAX
00482F4A  8B 14 D1                  MOV EDX,dword ptr [ECX + EDX*0x8]
00482F4D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00482F50  8B FA                     MOV EDI,EDX
LAB_00482f52:
00482F52  85 FF                     TEST EDI,EDI
00482F54  74 0D                     JZ 0x00482f63
00482F56  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00482F59  8B 8E F4 07 00 00         MOV ECX,dword ptr [ESI + 0x7f4]
00482F5F  3B C1                     CMP EAX,ECX
00482F61  74 46                     JZ 0x00482fa9
LAB_00482f63:
00482F63  8B 96 F4 07 00 00         MOV EDX,dword ptr [ESI + 0x7f4]
00482F69  8D 4D F0                  LEA ECX,[EBP + -0x10]
00482F6C  51                        PUSH ECX
00482F6D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00482F73  52                        PUSH EDX
00482F74  E8 57 33 26 00            CALL 0x006e62d0
00482F79  83 F8 FC                  CMP EAX,-0x4
00482F7C  75 0C                     JNZ 0x00482f8a
LAB_00482f7e:
00482F7E  B8 04 00 00 00            MOV EAX,0x4
00482F83  5F                        POP EDI
00482F84  5E                        POP ESI
00482F85  5B                        POP EBX
00482F86  8B E5                     MOV ESP,EBP
00482F88  5D                        POP EBP
00482F89  C3                        RET
LAB_00482f8a:
00482F8A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00482F8D  8D 86 02 08 00 00         LEA EAX,[ESI + 0x802]
00482F93  53                        PUSH EBX
00482F94  50                        PUSH EAX
00482F95  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
00482F9B  50                        PUSH EAX
00482F9C  E8 6A 2F F8 FF            CALL 0x00405f0b
00482FA1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00482FA4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00482FA7  8B F8                     MOV EDI,EAX
LAB_00482fa9:
00482FA9  8B 17                     MOV EDX,dword ptr [EDI]
00482FAB  8B CF                     MOV ECX,EDI
00482FAD  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00482FB3  85 C0                     TEST EAX,EAX
00482FB5  74 C7                     JZ 0x00482f7e
00482FB7  81 7F 20 AE 01 00 00      CMP dword ptr [EDI + 0x20],0x1ae
00482FBE  75 12                     JNZ 0x00482fd2
00482FC0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00482FC3  8B 07                     MOV EAX,dword ptr [EDI]
00482FC5  51                        PUSH ECX
00482FC6  8B CF                     MOV ECX,EDI
00482FC8  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
00482FCE  85 C0                     TEST EAX,EAX
00482FD0  74 AC                     JZ 0x00482f7e
LAB_00482fd2:
00482FD2  8D 55 F8                  LEA EDX,[EBP + -0x8]
00482FD5  8D 45 E8                  LEA EAX,[EBP + -0x18]
00482FD8  52                        PUSH EDX
00482FD9  8D 4D EC                  LEA ECX,[EBP + -0x14]
00482FDC  50                        PUSH EAX
00482FDD  51                        PUSH ECX
00482FDE  8B CF                     MOV ECX,EDI
00482FE0  E8 FE 01 F8 FF            CALL 0x004031e3
00482FE5  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
00482FE9  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
00482FED  0F BF 4D EC               MOVSX ECX,word ptr [EBP + -0x14]
00482FF1  52                        PUSH EDX
00482FF2  50                        PUSH EAX
00482FF3  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00482FF7  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00482FFB  51                        PUSH ECX
00482FFC  52                        PUSH EDX
00482FFD  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00483001  50                        PUSH EAX
00483002  51                        PUSH ECX
00483003  E8 05 9F 22 00            CALL 0x006acf0d
00483008  0F BF 96 14 08 00 00      MOVSX EDX,word ptr [ESI + 0x814]
0048300F  8B F8                     MOV EDI,EAX
00483011  83 C4 18                  ADD ESP,0x18
00483014  3B FA                     CMP EDI,EDX
00483016  7E 0C                     JLE 0x00483024
00483018  B8 05 00 00 00            MOV EAX,0x5
0048301D  5F                        POP EDI
0048301E  5E                        POP ESI
0048301F  5B                        POP EBX
00483020  8B E5                     MOV ESP,EBP
00483022  5D                        POP EBP
00483023  C3                        RET
LAB_00483024:
00483024  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00483028  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0048302B  0F BF D1                  MOVSX EDX,CX
0048302E  0F BF C3                  MOVSX EAX,BX
00483031  2B C2                     SUB EAX,EDX
00483033  99                        CDQ
00483034  33 C2                     XOR EAX,EDX
00483036  2B C2                     SUB EAX,EDX
00483038  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0048303B  D1 E0                     SHL EAX,0x1
0048303D  99                        CDQ
0048303E  F7 FF                     IDIV EDI
00483040  83 F8 03                  CMP EAX,0x3
00483043  7E 12                     JLE 0x00483057
00483045  33 C0                     XOR EAX,EAX
00483047  66 3B D9                  CMP BX,CX
0048304A  0F 9E C0                  SETLE AL
0048304D  83 C0 06                  ADD EAX,0x6
00483050  5F                        POP EDI
00483051  5E                        POP ESI
00483052  5B                        POP EBX
00483053  8B E5                     MOV ESP,EBP
00483055  5D                        POP EBP
00483056  C3                        RET
LAB_00483057:
00483057  8B CE                     MOV ECX,ESI
00483059  E8 29 F9 F7 FF            CALL 0x00402987
0048305E  66 3B 46 6C               CMP AX,word ptr [ESI + 0x6c]
00483062  74 0C                     JZ 0x00483070
00483064  B8 09 00 00 00            MOV EAX,0x9
00483069  5F                        POP EDI
0048306A  5E                        POP ESI
0048306B  5B                        POP EBX
0048306C  8B E5                     MOV ESP,EBP
0048306E  5D                        POP EBP
0048306F  C3                        RET
LAB_00483070:
00483070  8B 86 DE 07 00 00         MOV EAX,dword ptr [ESI + 0x7de]
00483076  85 C0                     TEST EAX,EAX
00483078  75 0A                     JNZ 0x00483084
0048307A  8B 8E A2 07 00 00         MOV ECX,dword ptr [ESI + 0x7a2]
00483080  85 C9                     TEST ECX,ECX
00483082  7E 0E                     JLE 0x00483092
LAB_00483084:
00483084  83 F8 01                  CMP EAX,0x1
00483087  75 15                     JNZ 0x0048309e
00483089  83 BE 2A 07 00 00 28      CMP dword ptr [ESI + 0x72a],0x28
00483090  7D 0C                     JGE 0x0048309e
LAB_00483092:
00483092  B8 02 00 00 00            MOV EAX,0x2
00483097  5F                        POP EDI
00483098  5E                        POP ESI
00483099  5B                        POP EBX
0048309A  8B E5                     MOV ESP,EBP
0048309C  5D                        POP EBP
0048309D  C3                        RET
LAB_0048309e:
0048309E  85 C0                     TEST EAX,EAX
004830A0  75 1C                     JNZ 0x004830be
004830A2  8B 86 AA 07 00 00         MOV EAX,dword ptr [ESI + 0x7aa]
004830A8  8B 8E A6 07 00 00         MOV ECX,dword ptr [ESI + 0x7a6]
004830AE  3B C1                     CMP EAX,ECX
004830B0  7D 0C                     JGE 0x004830be
004830B2  B8 03 00 00 00            MOV EAX,0x3
004830B7  5F                        POP EDI
004830B8  5E                        POP ESI
004830B9  5B                        POP EBX
004830BA  8B E5                     MOV ESP,EBP
004830BC  5D                        POP EBP
004830BD  C3                        RET
LAB_004830be:
004830BE  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
004830C4  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004830CB  84 C0                     TEST AL,AL
004830CD  0F 86 EE 00 00 00         JBE 0x004831c1
004830D3  8D 8E A8 02 00 00         LEA ECX,[ESI + 0x2a8]
004830D9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_004830dc:
004830DC  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
004830E0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004830E3  52                        PUSH EDX
004830E4  83 C0 FE                  ADD EAX,-0x2
004830E7  83 EC 08                  SUB ESP,0x8
004830EA  8B 10                     MOV EDX,dword ptr [EAX]
004830EC  8B CC                     MOV ECX,ESP
004830EE  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004830F2  89 11                     MOV dword ptr [ECX],EDX
004830F4  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004830F8  8D 4D D0                  LEA ECX,[EBP + -0x30]
004830FB  51                        PUSH ECX
004830FC  8B CE                     MOV ECX,ESI
004830FE  E8 29 03 F8 FF            CALL 0x0040342c
00483103  8B 10                     MOV EDX,dword ptr [EAX]
00483105  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00483108  66 8B 5E 43               MOV BX,word ptr [ESI + 0x43]
0048310C  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0048310F  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00483113  66 2B 5D DA               SUB BX,word ptr [EBP + -0x26]
00483117  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
0048311B  66 8B FA                  MOV DI,DX
0048311E  66 8B 11                  MOV DX,word ptr [ECX]
00483121  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00483125  51                        PUSH ECX
00483126  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00483129  33 C0                     XOR EAX,EAX
0048312B  83 EC 08                  SUB ESP,0x8
0048312E  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
00483132  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
00483136  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00483139  8B D4                     MOV EDX,ESP
0048313B  66 03 7E 41               ADD DI,word ptr [ESI + 0x41]
0048313F  89 0A                     MOV dword ptr [EDX],ECX
00483141  8B CE                     MOV ECX,ESI
00483143  66 89 42 04               MOV word ptr [EDX + 0x4],AX
00483147  8D 55 C8                  LEA EDX,[EBP + -0x38]
0048314A  52                        PUSH EDX
0048314B  E8 DC 02 F8 FF            CALL 0x0040342c
00483150  8B 08                     MOV ECX,dword ptr [EAX]
00483152  6A 00                     PUSH 0x0
00483154  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00483157  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0048315B  66 8B C1                  MOV AX,CX
0048315E  66 89 55 DC               MOV word ptr [EBP + -0x24],DX
00483162  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00483165  66 03 42 41               ADD AX,word ptr [EDX + 0x41]
00483169  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0048316C  66 8B 4A 43               MOV CX,word ptr [EDX + 0x43]
00483170  66 2B 4D DA               SUB CX,word ptr [EBP + -0x26]
00483174  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00483177  66 8B 52 45               MOV DX,word ptr [EDX + 0x45]
0048317B  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
0048317F  8D 55 F0                  LEA EDX,[EBP + -0x10]
00483182  52                        PUSH EDX
00483183  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
00483189  52                        PUSH EDX
0048318A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0048318D  52                        PUSH EDX
0048318E  51                        PUSH ECX
0048318F  50                        PUSH EAX
00483190  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00483193  50                        PUSH EAX
00483194  53                        PUSH EBX
00483195  57                        PUSH EDI
00483196  8B CE                     MOV ECX,ESI
00483198  E8 6A 27 F8 FF            CALL 0x00405907
0048319D  85 C0                     TEST EAX,EAX
0048319F  74 29                     JZ 0x004831ca
004831A1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004831A4  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004831A7  33 C9                     XOR ECX,ECX
004831A9  40                        INC EAX
004831AA  8A 8E B2 02 00 00         MOV CL,byte ptr [ESI + 0x2b2]
004831B0  83 C7 06                  ADD EDI,0x6
004831B3  3B C1                     CMP EAX,ECX
004831B5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004831B8  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004831BB  0F 8C 1B FF FF FF         JL 0x004830dc
LAB_004831c1:
004831C1  33 C0                     XOR EAX,EAX
004831C3  5F                        POP EDI
004831C4  5E                        POP ESI
004831C5  5B                        POP EBX
004831C6  8B E5                     MOV ESP,EBP
004831C8  5D                        POP EBP
004831C9  C3                        RET
LAB_004831ca:
004831CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004831CD  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004831D0  2B C6                     SUB EAX,ESI
004831D2  F7 D8                     NEG EAX
004831D4  1B C0                     SBB EAX,EAX
004831D6  83 E0 08                  AND EAX,0x8
004831D9  5F                        POP EDI
004831DA  5E                        POP ESI
004831DB  5B                        POP EBX
004831DC  8B E5                     MOV ESP,EBP
004831DE  5D                        POP EBP
004831DF  C3                        RET
LAB_004831e0:
004831E0  5F                        POP EDI
004831E1  5E                        POP ESI
004831E2  B8 01 00 00 00            MOV EAX,0x1
004831E7  5B                        POP EBX
004831E8  8B E5                     MOV ESP,EBP
004831EA  5D                        POP EBP
004831EB  C3                        RET
