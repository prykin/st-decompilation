FUN_00500520:
00500520  55                        PUSH EBP
00500521  8B EC                     MOV EBP,ESP
00500523  83 EC 6C                  SUB ESP,0x6c
00500526  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00500529  53                        PUSH EBX
0050052A  56                        PUSH ESI
0050052B  57                        PUSH EDI
0050052C  85 C0                     TEST EAX,EAX
0050052E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00500531  74 08                     JZ 0x0050053b
00500533  81 C1 63 0B 00 00         ADD ECX,0xb63
00500539  EB 06                     JMP 0x00500541
LAB_0050053b:
0050053B  81 C1 51 0C 00 00         ADD ECX,0xc51
LAB_00500541:
00500541  85 C0                     TEST EAX,EAX
00500543  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00500546  74 12                     JZ 0x0050055a
00500548  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
0050054F  0F 94 C0                  SETZ AL
00500552  83 C0 02                  ADD EAX,0x2
00500555  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500558  EB 10                     JMP 0x0050056a
LAB_0050055a:
0050055A  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00500561  0F 95 C2                  SETNZ DL
00500564  83 C2 05                  ADD EDX,0x5
00500567  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
LAB_0050056a:
0050056A  80 39 00                  CMP byte ptr [ECX],0x0
0050056D  0F 84 A1 01 00 00         JZ 0x00500714
00500573  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00500578  8D 55 98                  LEA EDX,[EBP + -0x68]
0050057B  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0050057E  6A 00                     PUSH 0x0
00500580  52                        PUSH EDX
00500581  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00500584  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050058A  E8 61 D2 22 00            CALL 0x0072d7f0
0050058F  8B F0                     MOV ESI,EAX
00500591  83 C4 08                  ADD ESP,0x8
00500594  85 F6                     TEST ESI,ESI
00500596  0F 85 3A 01 00 00         JNZ 0x005006d6
0050059C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050059F  BE EA FF FF FF            MOV ESI,0xffffffea
005005A4  2B F0                     SUB ESI,EAX
005005A6  B9 DB FF FF FF            MOV ECX,0xffffffdb
005005AB  BA EF FF FF FF            MOV EDX,0xffffffef
005005B0  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
005005B3  BE D6 FF FF FF            MOV ESI,0xffffffd6
005005B8  2B C8                     SUB ECX,EAX
005005BA  2B D0                     SUB EDX,EAX
005005BC  2B F0                     SUB ESI,EAX
005005BE  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
005005C1  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005005C4  C7 45 F0 06 00 00 00      MOV dword ptr [EBP + -0x10],0x6
005005CB  8D 78 2A                  LEA EDI,[EAX + 0x2a]
005005CE  BB 0B 00 00 00            MOV EBX,0xb
005005D3  C7 45 F4 37 00 00 00      MOV dword ptr [EBP + -0xc],0x37
005005DA  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005005DD  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005005E0  C7 45 EC 05 00 00 00      MOV dword ptr [EBP + -0x14],0x5
005005E7  EB 09                     JMP 0x005005f2
LAB_005005e9:
005005E9  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005005EC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005005EF  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_005005f2:
005005F2  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
005005F9  75 60                     JNZ 0x0050065b
005005FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005005FE  85 C0                     TEST EAX,EAX
00500600  8A 07                     MOV AL,byte ptr [EDI]
00500602  74 25                     JZ 0x00500629
00500604  84 C0                     TEST AL,AL
00500606  74 07                     JZ 0x0050060f
00500608  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0050060B  03 C7                     ADD EAX,EDI
0050060D  EB 03                     JMP 0x00500612
LAB_0050060f:
0050060F  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
LAB_00500612:
00500612  8B 8E A2 02 00 00         MOV ECX,dword ptr [ESI + 0x2a2]
00500618  50                        PUSH EAX
00500619  51                        PUSH ECX
0050061A  E8 81 AD 20 00            CALL 0x0070b3a0
0050061F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00500622  50                        PUSH EAX
00500623  6A 06                     PUSH 0x6
00500625  53                        PUSH EBX
00500626  52                        PUSH EDX
00500627  EB 60                     JMP 0x00500689
LAB_00500629:
00500629  84 C0                     TEST AL,AL
0050062B  75 03                     JNZ 0x00500630
0050062D  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
LAB_00500630:
00500630  8D 04 3A                  LEA EAX,[EDX + EDI*0x1]
00500633  50                        PUSH EAX
00500634  8B 86 A2 02 00 00         MOV EAX,dword ptr [ESI + 0x2a2]
0050063A  50                        PUSH EAX
0050063B  E8 60 AD 20 00            CALL 0x0070b3a0
00500640  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00500643  50                        PUSH EAX
00500644  81 E2 FF 00 00 00         AND EDX,0xff
0050064A  6A 06                     PUSH 0x6
0050064C  8D 4B 7C                  LEA ECX,[EBX + 0x7c]
0050064F  53                        PUSH EBX
00500650  8B 84 96 80 01 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x180]
00500657  51                        PUSH ECX
00500658  50                        PUSH EAX
00500659  EB 3E                     JMP 0x00500699
LAB_0050065b:
0050065B  80 3F 00                  CMP byte ptr [EDI],0x0
0050065E  74 0E                     JZ 0x0050066e
00500660  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
00500663  FE C8                     DEC AL
00500665  F6 D8                     NEG AL
00500667  1B C0                     SBB EAX,EAX
00500669  83 E0 03                  AND EAX,0x3
0050066C  EB 05                     JMP 0x00500673
LAB_0050066e:
0050066E  B8 02 00 00 00            MOV EAX,0x2
LAB_00500673:
00500673  8B 8E A2 02 00 00         MOV ECX,dword ptr [ESI + 0x2a2]
00500679  50                        PUSH EAX
0050067A  51                        PUSH ECX
0050067B  E8 20 AD 20 00            CALL 0x0070b3a0
00500680  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00500683  50                        PUSH EAX
00500684  6A 01                     PUSH 0x1
00500686  52                        PUSH EDX
00500687  6A 07                     PUSH 0x7
LAB_00500689:
00500689  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050068C  25 FF 00 00 00            AND EAX,0xff
00500691  8B 8C 86 80 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x180]
00500698  51                        PUSH ECX
LAB_00500699:
00500699  E8 8B 2B F0 FF            CALL 0x00403229
0050069E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005006A1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005006A4  83 E9 0B                  SUB ECX,0xb
005006A7  83 C4 1C                  ADD ESP,0x1c
005006AA  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005006AD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005006B0  83 C3 0B                  ADD EBX,0xb
005006B3  47                        INC EDI
005006B4  83 C1 1D                  ADD ECX,0x1d
005006B7  48                        DEC EAX
005006B8  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005006BB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005006BE  0F 85 25 FF FF FF         JNZ 0x005005e9
005006C4  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
005006C7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005006CD  5F                        POP EDI
005006CE  5E                        POP ESI
005006CF  5B                        POP EBX
005006D0  8B E5                     MOV ESP,EBP
005006D2  5D                        POP EBP
005006D3  C2 04 00                  RET 0x4
LAB_005006d6:
005006D6  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
005006D9  68 D4 24 7C 00            PUSH 0x7c24d4
005006DE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005006E3  56                        PUSH ESI
005006E4  6A 00                     PUSH 0x0
005006E6  68 DA 01 00 00            PUSH 0x1da
005006EB  68 CC 23 7C 00            PUSH 0x7c23cc
005006F0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005006F5  E8 D6 CD 1A 00            CALL 0x006ad4d0
005006FA  83 C4 18                  ADD ESP,0x18
005006FD  85 C0                     TEST EAX,EAX
005006FF  74 01                     JZ 0x00500702
00500701  CC                        INT3
LAB_00500702:
00500702  68 DA 01 00 00            PUSH 0x1da
00500707  68 CC 23 7C 00            PUSH 0x7c23cc
0050070C  6A 00                     PUSH 0x0
0050070E  56                        PUSH ESI
0050070F  E8 2C 57 1A 00            CALL 0x006a5e40
LAB_00500714:
00500714  5F                        POP EDI
00500715  5E                        POP ESI
00500716  5B                        POP EBX
00500717  8B E5                     MOV ESP,EBP
00500719  5D                        POP EBP
0050071A  C2 04 00                  RET 0x4
