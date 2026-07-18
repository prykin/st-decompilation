FUN_00716480:
00716480  55                        PUSH EBP
00716481  8B EC                     MOV EBP,ESP
00716483  83 EC 48                  SUB ESP,0x48
00716486  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00716489  53                        PUSH EBX
0071648A  56                        PUSH ESI
0071648B  83 CE FF                  OR ESI,0xffffffff
0071648E  3B C6                     CMP EAX,ESI
00716490  57                        PUSH EDI
00716491  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00716494  75 0B                     JNZ 0x007164a1
00716496  33 C0                     XOR EAX,EAX
00716498  5F                        POP EDI
00716499  5E                        POP ESI
0071649A  5B                        POP EBX
0071649B  8B E5                     MOV ESP,EBP
0071649D  5D                        POP EBP
0071649E  C2 0C 00                  RET 0xc
LAB_007164a1:
007164A1  80 79 4C 80               CMP byte ptr [ECX + 0x4c],0x80
007164A5  75 0B                     JNZ 0x007164b2
007164A7  33 C0                     XOR EAX,EAX
007164A9  5F                        POP EDI
007164AA  5E                        POP ESI
007164AB  5B                        POP EBX
007164AC  8B E5                     MOV ESP,EBP
007164AE  5D                        POP EBP
007164AF  C2 0C 00                  RET 0xc
LAB_007164b2:
007164B2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007164B7  8D 55 BC                  LEA EDX,[EBP + -0x44]
007164BA  8D 4D B8                  LEA ECX,[EBP + -0x48]
007164BD  6A 00                     PUSH 0x0
007164BF  52                        PUSH EDX
007164C0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
007164C3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007164C9  E8 22 73 01 00            CALL 0x0072d7f0
007164CE  8B F8                     MOV EDI,EAX
007164D0  83 C4 08                  ADD ESP,0x8
007164D3  85 FF                     TEST EDI,EDI
007164D5  0F 85 DB 01 00 00         JNZ 0x007166b6
007164DB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007164DE  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
007164E1  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
007164E4  85 C0                     TEST EAX,EAX
007164E6  75 53                     JNZ 0x0071653b
007164E8  33 C0                     XOR EAX,EAX
007164EA  8A 43 4C                  MOV AL,byte ptr [EBX + 0x4c]
007164ED  83 C0 F9                  ADD EAX,-0x7
007164F0  83 F8 7A                  CMP EAX,0x7a
007164F3  77 46                     JA 0x0071653b
007164F5  33 C9                     XOR ECX,ECX
007164F7  8A 88 14 67 71 00         MOV CL,byte ptr [EAX + 0x716714]
switchD_007164fd::switchD:
007164FD  FF 24 8D 04 67 71 00      JMP dword ptr [ECX*0x4 + 0x716704]
switchD_007164fd::caseD_7:
00716504  8B 4B 51                  MOV ECX,dword ptr [EBX + 0x51]
00716507  8D 43 51                  LEA EAX,[EBX + 0x51]
0071650A  85 C9                     TEST ECX,ECX
0071650C  74 2D                     JZ 0x0071653b
0071650E  50                        PUSH EAX
0071650F  E8 1C F9 00 00            CALL 0x00725e30
00716514  EB 22                     JMP 0x00716538
switchD_007164fd::caseD_8:
00716516  8B 4B 59                  MOV ECX,dword ptr [EBX + 0x59]
00716519  8D 43 59                  LEA EAX,[EBX + 0x59]
0071651C  85 C9                     TEST ECX,ECX
0071651E  74 1B                     JZ 0x0071653b
00716520  50                        PUSH EAX
00716521  E8 3A FD 00 00            CALL 0x00726260
00716526  EB 10                     JMP 0x00716538
switchD_007164fd::caseD_1e:
00716528  8B 4B 55                  MOV ECX,dword ptr [EBX + 0x55]
0071652B  8D 43 55                  LEA EAX,[EBX + 0x55]
0071652E  85 C9                     TEST ECX,ECX
00716530  74 09                     JZ 0x0071653b
00716532  50                        PUSH EAX
00716533  E8 98 06 01 00            CALL 0x00726bd0
LAB_00716538:
00716538  83 C4 04                  ADD ESP,0x4
switchD_007164fd::caseD_9:
0071653B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071653E  81 E2 FF 00 00 00         AND EDX,0xff
00716544  8D 42 F9                  LEA EAX,[EDX + -0x7]
00716547  83 F8 7A                  CMP EAX,0x7a
0071654A  0F 87 F4 00 00 00         JA 0x00716644
00716550  33 C9                     XOR ECX,ECX
00716552  8A 88 A0 67 71 00         MOV CL,byte ptr [EAX + 0x7167a0]
switchD_00716558::switchD:
00716558  FF 24 8D 90 67 71 00      JMP dword ptr [ECX*0x4 + 0x716790]
switchD_00716558::caseD_7:
0071655F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00716562  6A 00                     PUSH 0x0
00716564  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
00716567  0F BF 50 2B               MOVSX EDX,word ptr [EAX + 0x2b]
0071656B  0F BF 48 29               MOVSX ECX,word ptr [EAX + 0x29]
0071656F  52                        PUSH EDX
00716570  8D 50 2D                  LEA EDX,[EAX + 0x2d]
00716573  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00716577  51                        PUSH ECX
00716578  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0071657B  68 00 00 00 08            PUSH 0x8000000
00716580  52                        PUSH EDX
00716581  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00716584  50                        PUSH EAX
00716585  6A 00                     PUSH 0x0
00716587  51                        PUSH ECX
00716588  52                        PUSH EDX
00716589  E8 A2 C3 F9 FF            CALL 0x006b2930
0071658E  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
00716591  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
00716595  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
00716598  0F BF 50 29               MOVSX EDX,word ptr [EAX + 0x29]
0071659C  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
0071659F  0F BF 40 2B               MOVSX EAX,word ptr [EAX + 0x2b]
007165A3  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
007165A6  E9 99 00 00 00            JMP 0x00716644
switchD_00716558::caseD_1e:
007165AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007165AE  6A 00                     PUSH 0x0
007165B0  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
007165B3  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
007165B7  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
007165BB  51                        PUSH ECX
007165BC  52                        PUSH EDX
007165BD  0F BF 10                  MOVSX EDX,word ptr [EAX]
007165C0  8D 48 0A                  LEA ECX,[EAX + 0xa]
007165C3  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
007165C6  68 00 00 00 08            PUSH 0x8000000
007165CB  51                        PUSH ECX
007165CC  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
007165CF  52                        PUSH EDX
007165D0  6A 00                     PUSH 0x0
007165D2  50                        PUSH EAX
007165D3  51                        PUSH ECX
007165D4  E8 57 C3 F9 FF            CALL 0x006b2930
007165D9  8B 43 55                  MOV EAX,dword ptr [EBX + 0x55]
007165DC  0F BF 10                  MOVSX EDX,word ptr [EAX]
007165DF  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
007165E2  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
007165E6  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
007165E9  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
007165ED  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
007165F0  EB 52                     JMP 0x00716644
switchD_00716558::caseD_8:
007165F2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007165F5  6A 00                     PUSH 0x0
007165F7  89 43 59                  MOV dword ptr [EBX + 0x59],EAX
007165FA  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
007165FE  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
00716602  51                        PUSH ECX
00716603  52                        PUSH EDX
00716604  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00716608  8D 48 0C                  LEA ECX,[EAX + 0xc]
0071660B  68 00 00 00 04            PUSH 0x4000000
00716610  0F BF 00                  MOVSX EAX,word ptr [EAX]
00716613  51                        PUSH ECX
00716614  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
00716617  52                        PUSH EDX
00716618  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
0071661B  50                        PUSH EAX
0071661C  51                        PUSH ECX
0071661D  52                        PUSH EDX
0071661E  E8 0D C3 F9 FF            CALL 0x006b2930
00716623  8B 43 59                  MOV EAX,dword ptr [EBX + 0x59]
00716626  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
0071662A  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
0071662D  0F BF 10                  MOVSX EDX,word ptr [EAX]
00716630  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
00716633  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00716637  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
0071663A  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
0071663E  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00716641  89 73 4D                  MOV dword ptr [EBX + 0x4d],ESI
switchD_00716558::caseD_9:
00716644  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00716647  88 43 4C                  MOV byte ptr [EBX + 0x4c],AL
0071664A  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0071664D  85 C0                     TEST EAX,EAX
0071664F  7F 05                     JG 0x00716656
00716651  8D 48 FF                  LEA ECX,[EAX + -0x1]
00716654  EB 02                     JMP 0x00716658
LAB_00716656:
00716656  33 C9                     XOR ECX,ECX
LAB_00716658:
00716658  48                        DEC EAX
00716659  89 4B 10                  MOV dword ptr [EBX + 0x10],ECX
0071665C  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
0071665F  BF A0 16 80 00            MOV EDI,0x8016a0
00716664  8B CE                     MOV ECX,ESI
00716666  33 C0                     XOR EAX,EAX
00716668  F2 AE                     SCASB.REPNE ES:EDI
0071666A  F7 D1                     NOT ECX
0071666C  2B F9                     SUB EDI,ECX
0071666E  8D 53 65                  LEA EDX,[EBX + 0x65]
00716671  8B C1                     MOV EAX,ECX
00716673  8B F7                     MOV ESI,EDI
00716675  8B FA                     MOV EDI,EDX
00716677  C1 E9 02                  SHR ECX,0x2
0071667A  F3 A5                     MOVSD.REP ES:EDI,ESI
0071667C  8B C8                     MOV ECX,EAX
0071667E  83 E1 03                  AND ECX,0x3
00716681  F3 A4                     MOVSB.REP ES:EDI,ESI
00716683  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00716686  83 FE FF                  CMP ESI,-0x1
00716689  74 11                     JZ 0x0071669c
0071668B  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0071668E  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00716691  56                        PUSH ESI
00716692  51                        PUSH ECX
00716693  52                        PUSH EDX
00716694  E8 87 C9 F9 FF            CALL 0x006b3020
00716699  89 73 5D                  MOV dword ptr [EBX + 0x5d],ESI
LAB_0071669c:
0071669C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0071669F  C7 43 61 00 00 00 00      MOV dword ptr [EBX + 0x61],0x0
007166A6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007166AB  33 C0                     XOR EAX,EAX
007166AD  5F                        POP EDI
007166AE  5E                        POP ESI
007166AF  5B                        POP EBX
007166B0  8B E5                     MOV ESP,EBP
007166B2  5D                        POP EBP
007166B3  C2 0C 00                  RET 0xc
LAB_007166b6:
007166B6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
007166B9  68 DC 04 7F 00            PUSH 0x7f04dc
007166BE  68 CC 4C 7A 00            PUSH 0x7a4ccc
007166C3  57                        PUSH EDI
007166C4  6A 00                     PUSH 0x0
007166C6  68 61 01 00 00            PUSH 0x161
007166CB  68 54 04 7F 00            PUSH 0x7f0454
007166D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007166D6  E8 F5 6D F9 FF            CALL 0x006ad4d0
007166DB  83 C4 18                  ADD ESP,0x18
007166DE  85 C0                     TEST EAX,EAX
007166E0  74 01                     JZ 0x007166e3
007166E2  CC                        INT3
LAB_007166e3:
007166E3  68 63 01 00 00            PUSH 0x163
007166E8  68 54 04 7F 00            PUSH 0x7f0454
007166ED  6A 00                     PUSH 0x0
007166EF  57                        PUSH EDI
007166F0  E8 4B F7 F8 FF            CALL 0x006a5e40
007166F5  5F                        POP EDI
007166F6  5E                        POP ESI
007166F7  B8 18 FC FF FF            MOV EAX,0xfffffc18
007166FC  5B                        POP EBX
007166FD  8B E5                     MOV ESP,EBP
007166FF  5D                        POP EBP
00716700  C2 0C 00                  RET 0xc
