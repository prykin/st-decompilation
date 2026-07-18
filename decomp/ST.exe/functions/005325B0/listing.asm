FUN_005325b0:
005325B0  55                        PUSH EBP
005325B1  8B EC                     MOV EBP,ESP
005325B3  81 EC 28 01 00 00         SUB ESP,0x128
005325B9  8B 91 B5 01 00 00         MOV EDX,dword ptr [ECX + 0x1b5]
005325BF  53                        PUSH EBX
005325C0  56                        PUSH ESI
005325C1  8D 41 18                  LEA EAX,[ECX + 0x18]
005325C4  57                        PUSH EDI
005325C5  50                        PUSH EAX
005325C6  33 FF                     XOR EDI,EDI
005325C8  52                        PUSH EDX
005325C9  6A 02                     PUSH 0x2
005325CB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005325CE  C7 41 28 20 00 00 00      MOV dword ptr [ECX + 0x28],0x20
005325D5  89 79 2C                  MOV dword ptr [ECX + 0x2c],EDI
005325D8  E8 A3 3A 1B 00            CALL 0x006e6080
005325DD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005325E2  8D 55 B8                  LEA EDX,[EBP + -0x48]
005325E5  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005325E8  57                        PUSH EDI
005325E9  52                        PUSH EDX
005325EA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005325ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005325F3  E8 F8 B1 1F 00            CALL 0x0072d7f0
005325F8  8B F0                     MOV ESI,EAX
005325FA  83 C4 08                  ADD ESP,0x8
005325FD  3B F7                     CMP ESI,EDI
005325FF  0F 85 F3 02 00 00         JNZ 0x005328f8
00532605  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00532608  8B 86 FD 02 00 00         MOV EAX,dword ptr [ESI + 0x2fd]
0053260E  3B C7                     CMP EAX,EDI
00532610  74 06                     JZ 0x00532618
00532612  50                        PUSH EAX
00532613  E8 F8 BA 17 00            CALL 0x006ae110
LAB_00532618:
00532618  89 BE FD 02 00 00         MOV dword ptr [ESI + 0x2fd],EDI
0053261E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00532623  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
00532629  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
0053262F  57                        PUSH EDI
00532630  52                        PUSH EDX
00532631  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00532637  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053263D  E8 AE B1 1F 00            CALL 0x0072d7f0
00532642  83 C4 08                  ADD ESP,0x8
00532645  3B C7                     CMP EAX,EDI
00532647  0F 85 E7 00 00 00         JNZ 0x00532734
0053264D  A1 A0 87 80 00            MOV EAX,[0x008087a0]
00532652  25 FF 00 00 00            AND EAX,0xff
00532657  48                        DEC EAX
00532658  83 F8 12                  CMP EAX,0x12
0053265B  77 53                     JA 0x005326b0
0053265D  33 C9                     XOR ECX,ECX
0053265F  8A 88 48 29 53 00         MOV CL,byte ptr [EAX + 0x532948]
switchD_00532665::switchD:
00532665  FF 24 8D 3C 29 53 00      JMP dword ptr [ECX*0x4 + 0x53293c]
switchD_00532665::caseD_1:
0053266C  8B 15 FC AC 79 00         MOV EDX,dword ptr [0x0079acfc]
00532672  A1 F0 AC 79 00            MOV EAX,[0x0079acf0]
00532677  52                        PUSH EDX
00532678  50                        PUSH EAX
00532679  68 80 76 80 00            PUSH 0x807680
0053267E  68 DC 6E 7C 00            PUSH 0x7c6edc
00532683  68 3A F3 80 00            PUSH 0x80f33a
00532688  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0053268E  83 C4 14                  ADD ESP,0x14
00532691  EB 1D                     JMP 0x005326b0
switchD_00532665::caseD_2:
00532693  68 1E EF 80 00            PUSH 0x80ef1e
00532698  68 80 76 80 00            PUSH 0x807680
0053269D  68 E4 6E 7C 00            PUSH 0x7c6ee4
005326A2  68 3A F3 80 00            PUSH 0x80f33a
005326A7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005326AD  83 C4 10                  ADD ESP,0x10
switchD_00532665::caseD_9:
005326B0  57                        PUSH EDI
005326B1  57                        PUSH EDI
005326B2  57                        PUSH EDI
005326B3  68 3A F3 80 00            PUSH 0x80f33a
005326B8  68 45 03 00 00            PUSH 0x345
005326BD  E8 FE E7 1B 00            CALL 0x006f0ec0
005326C2  8B 0D A0 87 80 00         MOV ECX,dword ptr [0x008087a0]
005326C8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005326CB  81 E1 FF 00 00 00         AND ECX,0xff
005326D1  8B F0                     MOV ESI,EAX
005326D3  83 C4 14                  ADD ESP,0x14
005326D6  8D 41 FF                  LEA EAX,[ECX + -0x1]
005326D9  83 F8 12                  CMP EAX,0x12
005326DC  77 40                     JA 0x0053271e
005326DE  33 D2                     XOR EDX,EDX
005326E0  8A 90 68 29 53 00         MOV DL,byte ptr [EAX + 0x532968]
switchD_005326e6::switchD:
005326E6  FF 24 95 5C 29 53 00      JMP dword ptr [EDX*0x4 + 0x53295c]
switchD_005326e6::caseD_1:
005326ED  A1 5C 99 80 00            MOV EAX,[0x0080995c]
005326F2  33 C9                     XOR ECX,ECX
005326F4  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005326FA  50                        PUSH EAX
005326FB  51                        PUSH ECX
005326FC  56                        PUSH ESI
005326FD  E8 53 1B ED FF            CALL 0x00404255
00532702  EB 11                     JMP 0x00532715
switchD_005326e6::caseD_2:
00532704  33 D2                     XOR EDX,EDX
00532706  6A FF                     PUSH -0x1
00532708  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0053270E  52                        PUSH EDX
0053270F  56                        PUSH ESI
00532710  E8 55 1F ED FF            CALL 0x0040466a
LAB_00532715:
00532715  83 C4 0C                  ADD ESP,0xc
00532718  89 83 FD 02 00 00         MOV dword ptr [EBX + 0x2fd],EAX
switchD_005326e6::caseD_9:
0053271E  56                        PUSH ESI
0053271F  E8 4C EA 1B 00            CALL 0x006f1170
00532724  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0053272A  83 C4 04                  ADD ESP,0x4
0053272D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00532732  EB 24                     JMP 0x00532758
LAB_00532734:
00532734  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0053273A  6A 01                     PUSH 0x1
0053273C  68 98 00 00 00            PUSH 0x98
00532741  6A 01                     PUSH 0x1
00532743  57                        PUSH EDI
00532744  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053274A  E8 41 BB 17 00            CALL 0x006ae290
0053274F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00532752  89 83 FD 02 00 00         MOV dword ptr [EBX + 0x2fd],EAX
LAB_00532758:
00532758  8D 95 D8 FE FF FF         LEA EDX,[EBP + 0xfffffed8]
0053275E  85 D2                     TEST EDX,EDX
00532760  74 4A                     JZ 0x005327ac
00532762  A1 18 76 80 00            MOV EAX,[0x00807618]
00532767  50                        PUSH EAX
00532768  68 11 27 00 00            PUSH 0x2711
0053276D  E8 CE D9 17 00            CALL 0x006b0140
00532772  85 C0                     TEST EAX,EAX
00532774  74 36                     JZ 0x005327ac
00532776  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0053277C  51                        PUSH ECX
0053277D  68 11 27 00 00            PUSH 0x2711
00532782  E8 B9 D9 17 00            CALL 0x006b0140
00532787  8B F8                     MOV EDI,EAX
00532789  83 C9 FF                  OR ECX,0xffffffff
0053278C  33 C0                     XOR EAX,EAX
0053278E  8D 95 D8 FE FF FF         LEA EDX,[EBP + 0xfffffed8]
00532794  F2 AE                     SCASB.REPNE ES:EDI
00532796  F7 D1                     NOT ECX
00532798  2B F9                     SUB EDI,ECX
0053279A  8B C1                     MOV EAX,ECX
0053279C  8B F7                     MOV ESI,EDI
0053279E  8B FA                     MOV EDI,EDX
005327A0  C1 E9 02                  SHR ECX,0x2
005327A3  F3 A5                     MOVSD.REP ES:EDI,ESI
005327A5  8B C8                     MOV ECX,EAX
005327A7  83 E1 03                  AND ECX,0x3
005327AA  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005327ac:
005327AC  8B 93 FD 02 00 00         MOV EDX,dword ptr [EBX + 0x2fd]
005327B2  8D 8D D8 FE FF FF         LEA ECX,[EBP + 0xfffffed8]
005327B8  51                        PUSH ECX
005327B9  BF 01 00 00 00            MOV EDI,0x1
005327BE  6A 00                     PUSH 0x0
005327C0  52                        PUSH EDX
005327C1  89 BD 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDI
005327C7  E8 04 EA 17 00            CALL 0x006b11d0
005327CC  8B 83 FD 02 00 00         MOV EAX,dword ptr [EBX + 0x2fd]
005327D2  8B 93 B5 01 00 00         MOV EDX,dword ptr [EBX + 0x1b5]
005327D8  C7 43 28 28 00 00 00      MOV dword ptr [EBX + 0x28],0x28
005327DF  8D 73 18                  LEA ESI,[EBX + 0x18]
005327E2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005327E5  56                        PUSH ESI
005327E6  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
005327E9  52                        PUSH EDX
005327EA  6A 02                     PUSH 0x2
005327EC  8B CB                     MOV ECX,EBX
005327EE  E8 8D 38 1B 00            CALL 0x006e6080
005327F3  8B 83 B5 01 00 00         MOV EAX,dword ptr [EBX + 0x1b5]
005327F9  56                        PUSH ESI
005327FA  50                        PUSH EAX
005327FB  6A 02                     PUSH 0x2
005327FD  8B CB                     MOV ECX,EBX
005327FF  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00532806  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
00532809  E8 72 38 1B 00            CALL 0x006e6080
0053280E  33 C9                     XOR ECX,ECX
00532810  68 3A F3 80 00            PUSH 0x80f33a
00532815  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0053281B  51                        PUSH ECX
0053281C  E8 0B 2A ED FF            CALL 0x0040522c
00532821  83 C4 08                  ADD ESP,0x8
00532824  85 C0                     TEST EAX,EAX
00532826  0F 84 9D 00 00 00         JZ 0x005328c9
0053282C  8B 83 FD 02 00 00         MOV EAX,dword ptr [EBX + 0x2fd]
00532832  33 D2                     XOR EDX,EDX
00532834  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00532837  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0053283A  85 C9                     TEST ECX,ECX
0053283C  0F 86 A6 00 00 00         JBE 0x005328e8
00532842  3B D1                     CMP EDX,ECX
00532844  73 0D                     JNC 0x00532853
LAB_00532846:
00532846  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00532849  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0053284C  0F AF F2                  IMUL ESI,EDX
0053284F  03 F1                     ADD ESI,ECX
00532851  EB 02                     JMP 0x00532855
LAB_00532853:
00532853  33 F6                     XOR ESI,ESI
LAB_00532855:
00532855  BF 3A F3 80 00            MOV EDI,0x80f33a
LAB_0053285a:
0053285A  8A 0E                     MOV CL,byte ptr [ESI]
0053285C  8A C1                     MOV AL,CL
0053285E  3A 0F                     CMP CL,byte ptr [EDI]
00532860  75 1C                     JNZ 0x0053287e
00532862  84 C0                     TEST AL,AL
00532864  74 14                     JZ 0x0053287a
00532866  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
00532869  8A C1                     MOV AL,CL
0053286B  3A 4F 01                  CMP CL,byte ptr [EDI + 0x1]
0053286E  75 0E                     JNZ 0x0053287e
00532870  83 C6 02                  ADD ESI,0x2
00532873  83 C7 02                  ADD EDI,0x2
00532876  84 C0                     TEST AL,AL
00532878  75 E0                     JNZ 0x0053285a
LAB_0053287a:
0053287A  33 C0                     XOR EAX,EAX
0053287C  EB 05                     JMP 0x00532883
LAB_0053287e:
0053287E  1B C0                     SBB EAX,EAX
00532880  83 D8 FF                  SBB EAX,-0x1
LAB_00532883:
00532883  85 C0                     TEST EAX,EAX
00532885  75 21                     JNZ 0x005328a8
00532887  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
0053288A  8B 93 B5 01 00 00         MOV EDX,dword ptr [EBX + 0x1b5]
00532890  8D 43 18                  LEA EAX,[EBX + 0x18]
00532893  8B CB                     MOV ECX,EBX
00532895  50                        PUSH EAX
00532896  52                        PUSH EDX
00532897  6A 02                     PUSH 0x2
00532899  C7 43 28 22 00 00 00      MOV dword ptr [EBX + 0x28],0x22
005328A0  E8 DB 37 1B 00            CALL 0x006e6080
005328A5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_005328a8:
005328A8  8B 83 FD 02 00 00         MOV EAX,dword ptr [EBX + 0x2fd]
005328AE  42                        INC EDX
005328AF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005328B2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005328B5  3B D1                     CMP EDX,ECX
005328B7  72 8D                     JC 0x00532846
005328B9  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005328BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005328C2  5F                        POP EDI
005328C3  5E                        POP ESI
005328C4  5B                        POP EBX
005328C5  8B E5                     MOV ESP,EBP
005328C7  5D                        POP EBP
005328C8  C3                        RET
LAB_005328c9:
005328C9  8B 83 B5 01 00 00         MOV EAX,dword ptr [EBX + 0x1b5]
005328CF  56                        PUSH ESI
005328D0  50                        PUSH EAX
005328D1  6A 02                     PUSH 0x2
005328D3  8B CB                     MOV ECX,EBX
005328D5  C7 43 28 22 00 00 00      MOV dword ptr [EBX + 0x28],0x22
005328DC  C7 43 2C 00 00 00 00      MOV dword ptr [EBX + 0x2c],0x0
005328E3  E8 98 37 1B 00            CALL 0x006e6080
LAB_005328e8:
005328E8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005328EB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005328F1  5F                        POP EDI
005328F2  5E                        POP ESI
005328F3  5B                        POP EBX
005328F4  8B E5                     MOV ESP,EBP
005328F6  5D                        POP EBP
005328F7  C3                        RET
LAB_005328f8:
005328F8  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005328FB  68 7C 72 7C 00            PUSH 0x7c727c
00532900  68 CC 4C 7A 00            PUSH 0x7a4ccc
00532905  56                        PUSH ESI
00532906  57                        PUSH EDI
00532907  68 AD 03 00 00            PUSH 0x3ad
0053290C  68 A0 70 7C 00            PUSH 0x7c70a0
00532911  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00532917  E8 B4 AB 17 00            CALL 0x006ad4d0
0053291C  83 C4 18                  ADD ESP,0x18
0053291F  85 C0                     TEST EAX,EAX
00532921  74 01                     JZ 0x00532924
00532923  CC                        INT3
LAB_00532924:
00532924  68 AD 03 00 00            PUSH 0x3ad
00532929  68 A0 70 7C 00            PUSH 0x7c70a0
0053292E  57                        PUSH EDI
0053292F  56                        PUSH ESI
00532930  E8 0B 35 17 00            CALL 0x006a5e40
00532935  5F                        POP EDI
00532936  5E                        POP ESI
00532937  5B                        POP EBX
00532938  8B E5                     MOV ESP,EBP
0053293A  5D                        POP EBP
0053293B  C3                        RET
