FUN_006164e0:
006164E0  55                        PUSH EBP
006164E1  8B EC                     MOV EBP,ESP
006164E3  83 EC 20                  SUB ESP,0x20
006164E6  56                        PUSH ESI
006164E7  8B F1                     MOV ESI,ECX
006164E9  8D 45 EC                  LEA EAX,[EBP + -0x14]
006164EC  8D 4D F0                  LEA ECX,[EBP + -0x10]
006164EF  50                        PUSH EAX
006164F0  8D 55 F4                  LEA EDX,[EBP + -0xc]
006164F3  51                        PUSH ECX
006164F4  52                        PUSH EDX
006164F5  8B CE                     MOV ECX,ESI
006164F7  E8 F2 B7 DE FF            CALL 0x00401cee
006164FC  85 C0                     TEST EAX,EAX
006164FE  0F 8C 49 04 00 00         JL 0x0061694d
00616504  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00616509  53                        PUSH EBX
0061650A  8B 9E 98 02 00 00         MOV EBX,dword ptr [ESI + 0x298]
00616510  57                        PUSH EDI
00616511  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00616517  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
0061651E  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
00616525  8B F8                     MOV EDI,EAX
00616527  89 86 98 02 00 00         MOV dword ptr [ESI + 0x298],EAX
0061652D  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
00616534  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00616537  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0061653A  0F BF 8E CB 02 00 00      MOVSX ECX,word ptr [ESI + 0x2cb]
00616541  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00616544  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00616547  0F BF 96 CD 02 00 00      MOVSX EDX,word ptr [ESI + 0x2cd]
0061654E  2B C1                     SUB EAX,ECX
00616550  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00616553  2B FB                     SUB EDI,EBX
00616555  2B CA                     SUB ECX,EDX
00616557  0F BF 9E CF 02 00 00      MOVSX EBX,word ptr [ESI + 0x2cf]
0061655E  0F AF BE 88 02 00 00      IMUL EDI,dword ptr [ESI + 0x288]
00616565  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00616568  2B D3                     SUB EDX,EBX
0061656A  8B DA                     MOV EBX,EDX
0061656C  0F AF DA                  IMUL EBX,EDX
0061656F  8B D1                     MOV EDX,ECX
00616571  0F AF D1                  IMUL EDX,ECX
00616574  8B C8                     MOV ECX,EAX
00616576  03 DA                     ADD EBX,EDX
00616578  0F AF C8                  IMUL ECX,EAX
0061657B  03 D9                     ADD EBX,ECX
0061657D  81 FB E1 00 00 00         CMP EBX,0xe1
00616583  0F 8E 9E 03 00 00         JLE 0x00616927
00616589  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0061658C  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0061658F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00616592  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00616595  2B D3                     SUB EDX,EBX
00616597  2B C1                     SUB EAX,ECX
00616599  0F AF 96 84 02 00 00      IMUL EDX,dword ptr [ESI + 0x284]
006165A0  0F AF 86 80 02 00 00      IMUL EAX,dword ptr [ESI + 0x280]
006165A7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006165AA  03 D0                     ADD EDX,EAX
006165AC  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
006165AF  0F AF 8E 7C 02 00 00      IMUL ECX,dword ptr [ESI + 0x27c]
006165B6  03 D1                     ADD EDX,ECX
006165B8  0F 89 94 00 00 00         JNS 0x00616652
006165BE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006165C1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006165C4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006165C7  52                        PUSH EDX
006165C8  50                        PUSH EAX
006165C9  51                        PUSH ECX
006165CA  57                        PUSH EDI
006165CB  8B CE                     MOV ECX,ESI
006165CD  E8 02 C2 DE FF            CALL 0x004027d4
006165D2  85 C0                     TEST EAX,EAX
006165D4  7E 66                     JLE 0x0061663c
006165D6  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
006165E0  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
006165EA  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
006165F3  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006165F6  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006165FC  B9 0B 00 00 00            MOV ECX,0xb
00616601  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00616607  33 D2                     XOR EDX,EDX
00616609  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061660C  C1 E8 10                  SHR EAX,0x10
0061660F  F7 F1                     DIV ECX
00616611  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00616616  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0061661C  8D 54 0A 0A               LEA EDX,[EDX + ECX*0x1 + 0xa]
00616620  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
00616626  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061662B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00616631  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
00616637  E9 EE 02 00 00            JMP 0x0061692a
LAB_0061663c:
0061663C  8B CE                     MOV ECX,ESI
0061663E  E8 FA DF DE FF            CALL 0x0040463d
00616643  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
0061664D  E9 D8 02 00 00            JMP 0x0061692a
LAB_00616652:
00616652  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00616655  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00616658  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061665B  52                        PUSH EDX
0061665C  50                        PUSH EAX
0061665D  51                        PUSH ECX
0061665E  8B CE                     MOV ECX,ESI
00616660  E8 19 E5 DE FF            CALL 0x00404b7e
00616665  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
0061666B  DF E0                     FNSTSW AX
0061666D  F6 C4 40                  TEST AH,0x40
00616670  0F 85 D9 00 00 00         JNZ 0x0061674f
00616676  DB 86 7C 02 00 00         FILD dword ptr [ESI + 0x27c]
0061667C  0F BF 9E 5A 02 00 00      MOVSX EBX,word ptr [ESI + 0x25a]
00616683  D8 C9                     FMUL ST1
00616685  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00616688  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
0061668E  DA 45 E8                  FIADD dword ptr [EBP + -0x18]
00616691  E8 F2 7B 11 00            CALL 0x0072e288
00616696  DB 86 80 02 00 00         FILD dword ptr [ESI + 0x280]
0061669C  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
006166A3  D8 C9                     FMUL ST1
006166A5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006166A8  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006166AB  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
006166B1  DA 45 FC                  FIADD dword ptr [EBP + -0x4]
006166B4  E8 CF 7B 11 00            CALL 0x0072e288
006166B9  DB 86 84 02 00 00         FILD dword ptr [ESI + 0x284]
006166BF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006166C2  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
006166C9  D8 C9                     FMUL ST1
006166CB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006166CE  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
006166D4  DA 45 F8                  FIADD dword ptr [EBP + -0x8]
006166D7  E8 AC 7B 11 00            CALL 0x0072e288
006166DC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006166DF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006166E2  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006166E5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006166E8  51                        PUSH ECX
006166E9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006166EC  52                        PUSH EDX
006166ED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006166F0  50                        PUSH EAX
006166F1  51                        PUSH ECX
006166F2  52                        PUSH EDX
006166F3  53                        PUSH EBX
006166F4  DD D8                     FSTP ST0
006166F6  E8 12 68 09 00            CALL 0x006acf0d
006166FB  C1 E0 03                  SHL EAX,0x3
006166FE  99                        CDQ
006166FF  F7 BE 88 02 00 00         IDIV dword ptr [ESI + 0x288]
00616705  83 C4 18                  ADD ESP,0x18
00616708  8B C8                     MOV ECX,EAX
0061670A  85 C9                     TEST ECX,ECX
0061670C  74 43                     JZ 0x00616751
0061670E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00616711  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00616714  2B C3                     SUB EAX,EBX
00616716  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00616719  C1 E0 03                  SHL EAX,0x3
0061671C  99                        CDQ
0061671D  F7 F9                     IDIV ECX
0061671F  66 89 86 6C 02 00 00      MOV word ptr [ESI + 0x26c],AX
00616726  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00616729  2B C3                     SUB EAX,EBX
0061672B  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0061672E  C1 E0 03                  SHL EAX,0x3
00616731  99                        CDQ
00616732  F7 F9                     IDIV ECX
00616734  66 89 86 6E 02 00 00      MOV word ptr [ESI + 0x26e],AX
0061673B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061673E  2B C3                     SUB EAX,EBX
00616740  C1 E0 03                  SHL EAX,0x3
00616743  99                        CDQ
00616744  F7 F9                     IDIV ECX
00616746  66 89 86 70 02 00 00      MOV word ptr [ESI + 0x270],AX
0061674D  EB 02                     JMP 0x00616751
LAB_0061674f:
0061674F  DD D8                     FSTP ST0
LAB_00616751:
00616751  8B 8E 7C 02 00 00         MOV ECX,dword ptr [ESI + 0x27c]
00616757  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061675C  0F AF CF                  IMUL ECX,EDI
0061675F  F7 E9                     IMUL ECX
00616761  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
00616767  C6 86 9C 02 00 00 00      MOV byte ptr [ESI + 0x29c],0x0
0061676E  0F BF 9E 5A 02 00 00      MOVSX EBX,word ptr [ESI + 0x25a]
00616775  0F AF CF                  IMUL ECX,EDI
00616778  C1 FA 0C                  SAR EDX,0xc
0061677B  8B C2                     MOV EAX,EDX
0061677D  C1 E8 1F                  SHR EAX,0x1f
00616780  03 D0                     ADD EDX,EAX
00616782  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616787  03 D3                     ADD EDX,EBX
00616789  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061678C  F7 E9                     IMUL ECX
0061678E  C1 FA 0C                  SAR EDX,0xc
00616791  8B CA                     MOV ECX,EDX
00616793  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616798  C1 E9 1F                  SHR ECX,0x1f
0061679B  0F BF 9E 5C 02 00 00      MOVSX EBX,word ptr [ESI + 0x25c]
006167A2  03 D1                     ADD EDX,ECX
006167A4  8B 8E 84 02 00 00         MOV ECX,dword ptr [ESI + 0x284]
006167AA  0F AF CF                  IMUL ECX,EDI
006167AD  03 D3                     ADD EDX,EBX
006167AF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006167B2  F7 E9                     IMUL ECX
006167B4  0F BF 9E 5E 02 00 00      MOVSX EBX,word ptr [ESI + 0x25e]
006167BB  66 8B 8E 6C 02 00 00      MOV CX,word ptr [ESI + 0x26c]
006167C2  C1 FA 0C                  SAR EDX,0xc
006167C5  8B C2                     MOV EAX,EDX
006167C7  C1 E8 1F                  SHR EAX,0x1f
006167CA  03 D0                     ADD EDX,EAX
006167CC  03 D3                     ADD EDX,EBX
006167CE  66 85 C9                  TEST CX,CX
006167D1  8B DA                     MOV EBX,EDX
006167D3  75 16                     JNZ 0x006167eb
006167D5  66 39 8E 6E 02 00 00      CMP word ptr [ESI + 0x26e],CX
006167DC  75 0D                     JNZ 0x006167eb
006167DE  66 39 8E 70 02 00 00      CMP word ptr [ESI + 0x270],CX
006167E5  0F 84 3F 01 00 00         JZ 0x0061692a
LAB_006167eb:
006167EB  0F BF F9                  MOVSX EDI,CX
006167EE  8B C7                     MOV EAX,EDI
006167F0  99                        CDQ
006167F1  33 C2                     XOR EAX,EDX
006167F3  2B C2                     SUB EAX,EDX
006167F5  83 F8 0A                  CMP EAX,0xa
006167F8  7E 26                     JLE 0x00616820
006167FA  66 85 C9                  TEST CX,CX
006167FD  7E 07                     JLE 0x00616806
006167FF  B9 01 00 00 00            MOV ECX,0x1
00616804  EB 05                     JMP 0x0061680b
LAB_00616806:
00616806  66 F7 D9                  NEG CX
00616809  1B C9                     SBB ECX,ECX
LAB_0061680b:
0061680B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061680E  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00616811  C6 86 9C 02 00 00 01      MOV byte ptr [ESI + 0x29c],0x1
00616818  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
0061681B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061681E  EB 03                     JMP 0x00616823
LAB_00616820:
00616820  01 7D FC                  ADD dword ptr [EBP + -0x4],EDI
LAB_00616823:
00616823  66 8B 8E 6E 02 00 00      MOV CX,word ptr [ESI + 0x26e]
0061682A  0F BF F9                  MOVSX EDI,CX
0061682D  8B C7                     MOV EAX,EDI
0061682F  99                        CDQ
00616830  33 C2                     XOR EAX,EDX
00616832  2B C2                     SUB EAX,EDX
00616834  83 F8 0A                  CMP EAX,0xa
00616837  7E 26                     JLE 0x0061685f
00616839  66 85 C9                  TEST CX,CX
0061683C  7E 07                     JLE 0x00616845
0061683E  B9 01 00 00 00            MOV ECX,0x1
00616843  EB 05                     JMP 0x0061684a
LAB_00616845:
00616845  66 F7 D9                  NEG CX
00616848  1B C9                     SBB ECX,ECX
LAB_0061684a:
0061684A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061684D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00616850  C6 86 9C 02 00 00 01      MOV byte ptr [ESI + 0x29c],0x1
00616857  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
0061685A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061685D  EB 03                     JMP 0x00616862
LAB_0061685f:
0061685F  01 7D F8                  ADD dword ptr [EBP + -0x8],EDI
LAB_00616862:
00616862  66 8B 8E 70 02 00 00      MOV CX,word ptr [ESI + 0x270]
00616869  0F BF F9                  MOVSX EDI,CX
0061686C  8B C7                     MOV EAX,EDI
0061686E  99                        CDQ
0061686F  33 C2                     XOR EAX,EDX
00616871  2B C2                     SUB EAX,EDX
00616873  83 F8 0A                  CMP EAX,0xa
00616876  7E 2D                     JLE 0x006168a5
00616878  66 85 C9                  TEST CX,CX
0061687B  7E 14                     JLE 0x00616891
0061687D  B9 01 00 00 00            MOV ECX,0x1
00616882  C6 86 9C 02 00 00 01      MOV byte ptr [ESI + 0x29c],0x1
00616889  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061688C  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
0061688F  EB 16                     JMP 0x006168a7
LAB_00616891:
00616891  66 F7 D9                  NEG CX
00616894  1B C9                     SBB ECX,ECX
00616896  C6 86 9C 02 00 00 01      MOV byte ptr [ESI + 0x29c],0x1
0061689D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
006168A0  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006168A3  EB 02                     JMP 0x006168a7
LAB_006168a5:
006168A5  03 DF                     ADD EBX,EDI
LAB_006168a7:
006168A7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006168AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006168AD  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
006168B4  53                        PUSH EBX
006168B5  57                        PUSH EDI
006168B6  52                        PUSH EDX
006168B7  50                        PUSH EAX
006168B8  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
006168BF  50                        PUSH EAX
006168C0  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
006168C7  50                        PUSH EAX
006168C8  E8 40 66 09 00            CALL 0x006acf0d
006168CD  8B C8                     MOV ECX,EAX
006168CF  83 C4 18                  ADD ESP,0x18
006168D2  85 C9                     TEST ECX,ECX
006168D4  74 54                     JZ 0x0061692a
006168D6  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
006168DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006168E0  2B C2                     SUB EAX,EDX
006168E2  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
006168E8  99                        CDQ
006168E9  F7 F9                     IDIV ECX
006168EB  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
006168F2  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
006168F8  8B C7                     MOV EAX,EDI
006168FA  2B C2                     SUB EAX,EDX
006168FC  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
00616902  99                        CDQ
00616903  F7 F9                     IDIV ECX
00616905  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
0061690C  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
00616912  8B C3                     MOV EAX,EBX
00616914  2B C2                     SUB EAX,EDX
00616916  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
0061691C  99                        CDQ
0061691D  F7 F9                     IDIV ECX
0061691F  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
00616925  EB 03                     JMP 0x0061692a
LAB_00616927:
00616927  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_0061692a:
0061692A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061692D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00616930  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00616933  5F                        POP EDI
00616934  89 08                     MOV dword ptr [EAX],ECX
00616936  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00616939  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061693C  89 02                     MOV dword ptr [EDX],EAX
0061693E  B8 01 00 00 00            MOV EAX,0x1
00616943  89 19                     MOV dword ptr [ECX],EBX
00616945  5B                        POP EBX
00616946  5E                        POP ESI
00616947  8B E5                     MOV ESP,EBP
00616949  5D                        POP EBP
0061694A  C2 0C 00                  RET 0xc
LAB_0061694d:
0061694D  83 C8 FF                  OR EAX,0xffffffff
00616950  5E                        POP ESI
00616951  8B E5                     MOV ESP,EBP
00616953  5D                        POP EBP
00616954  C2 0C 00                  RET 0xc
