FUN_00648030:
00648030  55                        PUSH EBP
00648031  8B EC                     MOV EBP,ESP
00648033  83 EC 50                  SUB ESP,0x50
00648036  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064803B  53                        PUSH EBX
0064803C  56                        PUSH ESI
0064803D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00648040  57                        PUSH EDI
00648041  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00648044  8D 4D B0                  LEA ECX,[EBP + -0x50]
00648047  6A 00                     PUSH 0x0
00648049  52                        PUSH EDX
0064804A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0064804D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648053  E8 98 57 0E 00            CALL 0x0072d7f0
00648058  8B F0                     MOV ESI,EAX
0064805A  83 C4 08                  ADD ESP,0x8
0064805D  85 F6                     TEST ESI,ESI
0064805F  0F 85 48 02 00 00         JNZ 0x006482ad
00648065  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0064806A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0064806D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00648070  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00648076  89 8B 58 06 00 00         MOV dword ptr [EBX + 0x658],ECX
0064807C  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0064807F  3D 0F 01 00 00            CMP EAX,0x10f
00648084  0F 87 B2 00 00 00         JA 0x0064813c
0064808A  74 69                     JZ 0x006480f5
0064808C  2B C6                     SUB EAX,ESI
0064808E  74 57                     JZ 0x006480e7
00648090  83 E8 02                  SUB EAX,0x2
00648093  74 1E                     JZ 0x006480b3
00648095  48                        DEC EAX
00648096  0F 85 F5 01 00 00         JNZ 0x00648291
0064809C  E8 7E A7 DB FF            CALL 0x0040281f
006480A1  8B CB                     MOV ECX,EBX
006480A3  E8 80 94 DB FF            CALL 0x00401528
006480A8  89 35 BC 17 81 00         MOV dword ptr [0x008117bc],ESI
006480AE  E9 DE 01 00 00            JMP 0x00648291
LAB_006480b3:
006480B3  8B 77 14                  MOV ESI,dword ptr [EDI + 0x14]
006480B6  85 F6                     TEST ESI,ESI
006480B8  75 15                     JNZ 0x006480cf
006480BA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006480C0  6A 61                     PUSH 0x61
006480C2  68 50 27 7D 00            PUSH 0x7d2750
006480C7  51                        PUSH ECX
006480C8  6A FA                     PUSH -0x6
006480CA  E8 71 DD 05 00            CALL 0x006a5e40
LAB_006480cf:
006480CF  56                        PUSH ESI
006480D0  8B CB                     MOV ECX,EBX
006480D2  E8 9D B6 DB FF            CALL 0x00403774
006480D7  89 1D BC 17 81 00         MOV dword ptr [0x008117bc],EBX
006480DD  E8 87 9E DB FF            CALL 0x00401f69
006480E2  E9 AA 01 00 00            JMP 0x00648291
LAB_006480e7:
006480E7  57                        PUSH EDI
006480E8  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
006480EB  E8 F0 9A DB FF            CALL 0x00401be0
006480F0  E9 9C 01 00 00            JMP 0x00648291
LAB_006480f5:
006480F5  8D 55 FC                  LEA EDX,[EBP + -0x4]
006480F8  8B CB                     MOV ECX,EBX
006480FA  52                        PUSH EDX
006480FB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00648102  E8 3A B2 DB FF            CALL 0x00403341
00648107  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064810A  8B 15 14 D6 79 00         MOV EDX,dword ptr [0x0079d614]
00648110  6A 0C                     PUSH 0xc
00648112  51                        PUSH ECX
00648113  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00648119  50                        PUSH EAX
0064811A  52                        PUSH EDX
0064811B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0064811E  E8 55 8F DB FF            CALL 0x00401078
00648123  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00648126  85 C0                     TEST EAX,EAX
00648128  0F 84 63 01 00 00         JZ 0x00648291
0064812E  8D 45 F8                  LEA EAX,[EBP + -0x8]
00648131  50                        PUSH EAX
00648132  E8 29 2F 06 00            CALL 0x006ab060
00648137  E9 55 01 00 00            JMP 0x00648291
LAB_0064813c:
0064813C  3D EC 5D 00 00            CMP EAX,0x5dec
00648141  0F 87 88 00 00 00         JA 0x006481cf
00648147  3D D0 5D 00 00            CMP EAX,0x5dd0
0064814C  73 16                     JNC 0x00648164
0064814E  3D C5 5D 00 00            CMP EAX,0x5dc5
00648153  0F 82 38 01 00 00         JC 0x00648291
00648159  3D C6 5D 00 00            CMP EAX,0x5dc6
0064815E  0F 87 2D 01 00 00         JA 0x00648291
LAB_00648164:
00648164  3D D5 5D 00 00            CMP EAX,0x5dd5
00648169  75 17                     JNZ 0x00648182
0064816B  8B 93 29 06 00 00         MOV EDX,dword ptr [EBX + 0x629]
00648171  83 C2 05                  ADD EDX,0x5
00648174  3B CA                     CMP ECX,EDX
00648176  0F 82 15 01 00 00         JC 0x00648291
0064817C  89 8B 29 06 00 00         MOV dword ptr [EBX + 0x629],ECX
LAB_00648182:
00648182  57                        PUSH EDI
00648183  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
00648186  E8 55 9A DB FF            CALL 0x00401be0
0064818B  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
00648190  85 C0                     TEST EAX,EAX
00648192  0F 84 F9 00 00 00         JZ 0x00648291
00648198  33 FF                     XOR EDI,EDI
0064819A  BE E9 87 80 00            MOV ESI,0x8087e9
LAB_0064819f:
0064819F  80 3E FF                  CMP byte ptr [ESI],0xff
006481A2  74 1A                     JZ 0x006481be
006481A4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006481AA  57                        PUSH EDI
006481AB  E8 15 9C DB FF            CALL 0x00401dc5
006481B0  85 C0                     TEST EAX,EAX
006481B2  74 0A                     JZ 0x006481be
006481B4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006481B7  8B 10                     MOV EDX,dword ptr [EAX]
006481B9  51                        PUSH ECX
006481BA  8B C8                     MOV ECX,EAX
006481BC  FF 12                     CALL dword ptr [EDX]
LAB_006481be:
006481BE  83 C6 51                  ADD ESI,0x51
006481C1  47                        INC EDI
006481C2  81 FE 71 8A 80 00         CMP ESI,0x808a71
006481C8  7C D5                     JL 0x0064819f
006481CA  E9 BF 00 00 00            JMP 0x0064828e
LAB_006481cf:
006481CF  3D 06 71 00 00            CMP EAX,0x7106
006481D4  0F 85 B7 00 00 00         JNZ 0x00648291
006481DA  8B 15 22 C5 80 00         MOV EDX,dword ptr [0x0080c522]
006481E0  33 C0                     XOR EAX,EAX
006481E2  A0 4D 87 80 00            MOV AL,[0x0080874d]
006481E7  52                        PUSH EDX
006481E8  50                        PUSH EAX
006481E9  E8 9D 99 DB FF            CALL 0x00401b8b
006481EE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006481F4  83 C4 08                  ADD ESP,0x8
006481F7  85 C9                     TEST ECX,ECX
006481F9  74 16                     JZ 0x00648211
006481FB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00648200  F7 A1 E4 00 00 00         MUL dword ptr [ECX + 0xe4]
00648206  C1 EA 03                  SHR EDX,0x3
00648209  89 15 3A C8 80 00         MOV dword ptr [0x0080c83a],EDX
0064820F  EB 0A                     JMP 0x0064821b
LAB_00648211:
00648211  C7 05 3A C8 80 00 00 00 00 00  MOV dword ptr [0x0080c83a],0x0
LAB_0064821b:
0064821B  B9 66 06 00 00            MOV ECX,0x666
00648220  BE B6 87 80 00            MOV ESI,0x8087b6
00648225  BF 67 C9 80 00            MOV EDI,0x80c967
0064822A  F3 A5                     MOVSD.REP ES:EDI,ESI
0064822C  A4                        MOVSB ES:EDI,ESI
0064822D  E8 65 BF DB FF            CALL 0x00404197
00648232  BF 1E EF 80 00            MOV EDI,0x80ef1e
00648237  83 C9 FF                  OR ECX,0xffffffff
0064823A  33 C0                     XOR EAX,EAX
0064823C  F2 AE                     SCASB.REPNE ES:EDI
0064823E  F7 D1                     NOT ECX
00648240  2B F9                     SUB EDI,ECX
00648242  8B D1                     MOV EDX,ECX
00648244  8B F7                     MOV ESI,EDI
00648246  BF 2E C5 80 00            MOV EDI,0x80c52e
0064824B  C1 E9 02                  SHR ECX,0x2
0064824E  F3 A5                     MOVSD.REP ES:EDI,ESI
00648250  8B CA                     MOV ECX,EDX
00648252  83 E1 03                  AND ECX,0x3
00648255  F3 A4                     MOVSB.REP ES:EDI,ESI
00648257  BF C3 C3 80 00            MOV EDI,0x80c3c3
0064825C  83 C9 FF                  OR ECX,0xffffffff
0064825F  F2 AE                     SCASB.REPNE ES:EDI
00648261  F7 D1                     NOT ECX
00648263  2B F9                     SUB EDI,ECX
00648265  8B C1                     MOV EAX,ECX
00648267  8B F7                     MOV ESI,EDI
00648269  BF 36 C7 80 00            MOV EDI,0x80c736
0064826E  C1 E9 02                  SHR ECX,0x2
00648271  F3 A5                     MOVSD.REP ES:EDI,ESI
00648273  8B C8                     MOV ECX,EAX
00648275  83 E1 03                  AND ECX,0x3
00648278  F3 A4                     MOVSB.REP ES:EDI,ESI
0064827A  80 3D A0 87 80 00 08      CMP byte ptr [0x008087a0],0x8
00648281  75 05                     JNZ 0x00648288
00648283  E8 6C DA DB FF            CALL 0x00405cf4
LAB_00648288:
00648288  FF 05 2A C5 80 00         INC dword ptr [0x0080c52a]
LAB_0064828e:
0064828E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00648291:
00648291  57                        PUSH EDI
00648292  8B CB                     MOV ECX,EBX
00648294  E8 37 DD 09 00            CALL 0x006e5fd0
00648299  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0064829C  33 C0                     XOR EAX,EAX
0064829E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006482A4  5F                        POP EDI
006482A5  5E                        POP ESI
006482A6  5B                        POP EBX
006482A7  8B E5                     MOV ESP,EBP
006482A9  5D                        POP EBP
006482AA  C2 04 00                  RET 0x4
LAB_006482ad:
006482AD  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006482B0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006482B3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006482B9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006482BC  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
006482BF  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
006482C2  51                        PUSH ECX
006482C3  50                        PUSH EAX
006482C4  68 B0 27 7D 00            PUSH 0x7d27b0
006482C9  56                        PUSH ESI
006482CA  6A 00                     PUSH 0x0
006482CC  68 DE 00 00 00            PUSH 0xde
006482D1  68 50 27 7D 00            PUSH 0x7d2750
006482D6  E8 F5 51 06 00            CALL 0x006ad4d0
006482DB  83 C4 1C                  ADD ESP,0x1c
006482DE  85 C0                     TEST EAX,EAX
006482E0  74 01                     JZ 0x006482e3
006482E2  CC                        INT3
LAB_006482e3:
006482E3  68 DF 00 00 00            PUSH 0xdf
006482E8  68 50 27 7D 00            PUSH 0x7d2750
006482ED  6A 00                     PUSH 0x0
006482EF  56                        PUSH ESI
006482F0  E8 4B DB 05 00            CALL 0x006a5e40
006482F5  5F                        POP EDI
006482F6  5E                        POP ESI
006482F7  B8 FF FF 00 00            MOV EAX,0xffff
006482FC  5B                        POP EBX
006482FD  8B E5                     MOV ESP,EBP
006482FF  5D                        POP EBP
00648300  C2 04 00                  RET 0x4
