SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00493610::FUN_00493610:
00493610  55                        PUSH EBP
00493611  8B EC                     MOV EBP,ESP
00493613  83 EC 14                  SUB ESP,0x14
00493616  0F BF 81 21 06 00 00      MOVSX EAX,word ptr [ECX + 0x621]
0049361D  53                        PUSH EBX
0049361E  33 D2                     XOR EDX,EDX
00493620  8D 58 FF                  LEA EBX,[EAX + -0x1]
00493623  40                        INC EAX
00493624  3B D8                     CMP EBX,EAX
00493626  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00493629  C7 45 F8 40 42 0F 00      MOV dword ptr [EBP + -0x8],0xf4240
00493630  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00493633  0F 8F AC 02 00 00         JG 0x004938e5
00493639  8D 43 FF                  LEA EAX,[EBX + -0x1]
0049363C  56                        PUSH ESI
0049363D  57                        PUSH EDI
0049363E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00493641:
00493641  83 7D FC FF               CMP dword ptr [EBP + -0x4],-0x1
00493645  0F 8C 77 02 00 00         JL 0x004938c2
0049364B  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
00493652  48                        DEC EAX
00493653  3B D8                     CMP EBX,EAX
00493655  0F 8F 67 02 00 00         JG 0x004938c2
0049365B  0F BF 81 1F 06 00 00      MOVSX EAX,word ptr [ECX + 0x61f]
00493662  8D 78 FF                  LEA EDI,[EAX + -0x1]
00493665  83 C0 02                  ADD EAX,0x2
00493668  3B F8                     CMP EDI,EAX
0049366A  0F 8F 52 02 00 00         JG 0x004938c2
LAB_00493670:
00493670  85 FF                     TEST EDI,EDI
00493672  0F 8C 34 02 00 00         JL 0x004938ac
00493678  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0049367F  4A                        DEC EDX
00493680  3B FA                     CMP EDI,EDX
00493682  0F 8F 24 02 00 00         JG 0x004938ac
00493688  0F BF 81 1D 06 00 00      MOVSX EAX,word ptr [ECX + 0x61d]
0049368F  8D 70 FF                  LEA ESI,[EAX + -0x1]
00493692  83 C0 02                  ADD EAX,0x2
00493695  3B F0                     CMP ESI,EAX
00493697  0F 8F 0F 02 00 00         JG 0x004938ac
LAB_0049369d:
0049369D  85 F6                     TEST ESI,ESI
0049369F  0F 8C F1 01 00 00         JL 0x00493896
004936A5  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004936AC  8D 42 FF                  LEA EAX,[EDX + -0x1]
004936AF  3B F0                     CMP ESI,EAX
004936B1  0F 8F DF 01 00 00         JG 0x00493896
004936B7  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004936BE  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004936C5  0F AF C7                  IMUL EAX,EDI
004936C8  0F AF CB                  IMUL ECX,EBX
004936CB  03 C8                     ADD ECX,EAX
004936CD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004936D0  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004936D5  03 CE                     ADD ECX,ESI
004936D7  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
004936DC  0F 85 B4 01 00 00         JNZ 0x00493896
004936E2  66 85 F6                  TEST SI,SI
004936E5  0F 8C A2 00 00 00         JL 0x0049378d
004936EB  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
004936F2  7D 45                     JGE 0x00493739
004936F4  66 85 FF                  TEST DI,DI
004936F7  7C 40                     JL 0x00493739
004936F9  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
00493700  7D 37                     JGE 0x00493739
00493702  66 85 DB                  TEST BX,BX
00493705  7C 32                     JL 0x00493739
00493707  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
0049370E  7D 29                     JGE 0x00493739
00493710  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00493717  0F BF CB                  MOVSX ECX,BX
0049371A  0F AF C8                  IMUL ECX,EAX
0049371D  0F BF C7                  MOVSX EAX,DI
00493720  0F AF C2                  IMUL EAX,EDX
00493723  03 C8                     ADD ECX,EAX
00493725  0F BF C6                  MOVSX EAX,SI
00493728  03 C8                     ADD ECX,EAX
0049372A  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0049372F  83 3C C8 00               CMP dword ptr [EAX + ECX*0x8],0x0
00493733  0F 85 5D 01 00 00         JNZ 0x00493896
LAB_00493739:
00493739  66 85 F6                  TEST SI,SI
0049373C  7C 4F                     JL 0x0049378d
0049373E  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
00493745  7D 46                     JGE 0x0049378d
00493747  66 85 FF                  TEST DI,DI
0049374A  7C 41                     JL 0x0049378d
0049374C  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
00493753  7D 38                     JGE 0x0049378d
00493755  66 85 DB                  TEST BX,BX
00493758  7C 33                     JL 0x0049378d
0049375A  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
00493761  7D 2A                     JGE 0x0049378d
00493763  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0049376A  0F BF CB                  MOVSX ECX,BX
0049376D  0F AF C8                  IMUL ECX,EAX
00493770  0F BF C7                  MOVSX EAX,DI
00493773  0F AF C2                  IMUL EAX,EDX
00493776  03 C8                     ADD ECX,EAX
00493778  0F BF C6                  MOVSX EAX,SI
0049377B  03 C8                     ADD ECX,EAX
0049377D  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00493782  83 7C C8 04 00            CMP dword ptr [EAX + ECX*0x8 + 0x4],0x0
00493787  0F 85 09 01 00 00         JNZ 0x00493896
LAB_0049378d:
0049378D  66 85 F6                  TEST SI,SI
00493790  8D 43 FF                  LEA EAX,[EBX + -0x1]
00493793  0F 8C C2 00 00 00         JL 0x0049385b
00493799  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
004937A0  7D 65                     JGE 0x00493807
004937A2  66 85 FF                  TEST DI,DI
004937A5  7C 60                     JL 0x00493807
004937A7  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004937AE  7D 57                     JGE 0x00493807
004937B0  66 85 C0                  TEST AX,AX
004937B3  7C 52                     JL 0x00493807
004937B5  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004937BC  7D 49                     JGE 0x00493807
004937BE  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004937C5  0F BF C0                  MOVSX EAX,AX
004937C8  0F AF C8                  IMUL ECX,EAX
004937CB  0F BF C7                  MOVSX EAX,DI
004937CE  0F AF C2                  IMUL EAX,EDX
004937D1  03 C8                     ADD ECX,EAX
004937D3  0F BF C6                  MOVSX EAX,SI
004937D6  03 C8                     ADD ECX,EAX
004937D8  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004937DD  83 3C C8 00               CMP dword ptr [EAX + ECX*0x8],0x0
004937E1  74 24                     JZ 0x00493807
004937E3  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
004937EA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004937ED  0F AF C8                  IMUL ECX,EAX
004937F0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004937F3  03 C8                     ADD ECX,EAX
004937F5  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004937FA  03 CE                     ADD ECX,ESI
004937FC  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
00493801  0F 85 8F 00 00 00         JNZ 0x00493896
LAB_00493807:
00493807  66 85 F6                  TEST SI,SI
0049380A  7C 4F                     JL 0x0049385b
0049380C  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
00493813  7D 46                     JGE 0x0049385b
00493815  66 85 FF                  TEST DI,DI
00493818  7C 41                     JL 0x0049385b
0049381A  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
00493821  7D 38                     JGE 0x0049385b
00493823  8D 43 FF                  LEA EAX,[EBX + -0x1]
00493826  66 85 C0                  TEST AX,AX
00493829  7C 30                     JL 0x0049385b
0049382B  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00493832  7D 27                     JGE 0x0049385b
00493834  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0049383B  0F BF C0                  MOVSX EAX,AX
0049383E  0F AF C8                  IMUL ECX,EAX
00493841  0F BF C7                  MOVSX EAX,DI
00493844  0F AF C2                  IMUL EAX,EDX
00493847  0F BF D6                  MOVSX EDX,SI
0049384A  03 C8                     ADD ECX,EAX
0049384C  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00493851  03 CA                     ADD ECX,EDX
00493853  8B 54 C8 04               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x4]
00493857  85 D2                     TEST EDX,EDX
00493859  75 3B                     JNZ 0x00493896
LAB_0049385b:
0049385B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049385E  53                        PUSH EBX
0049385F  57                        PUSH EDI
00493860  56                        PUSH ESI
00493861  0F BF 48 4B               MOVSX ECX,word ptr [EAX + 0x4b]
00493865  0F BF 50 49               MOVSX EDX,word ptr [EAX + 0x49]
00493869  0F BF 40 47               MOVSX EAX,word ptr [EAX + 0x47]
0049386D  51                        PUSH ECX
0049386E  52                        PUSH EDX
0049386F  50                        PUSH EAX
00493870  E8 5B 75 21 00            CALL 0x006aadd0
00493875  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
00493878  7D 1C                     JGE 0x00493896
0049387A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0049387D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00493880  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00493883  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00493886  66 89 31                  MOV word ptr [ECX],SI
00493889  66 89 3A                  MOV word ptr [EDX],DI
0049388C  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00493893  66 89 18                  MOV word ptr [EAX],BX
LAB_00493896:
00493896  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00493899  46                        INC ESI
0049389A  0F BF 91 1D 06 00 00      MOVSX EDX,word ptr [ECX + 0x61d]
004938A1  83 C2 02                  ADD EDX,0x2
004938A4  3B F2                     CMP ESI,EDX
004938A6  0F 8E F1 FD FF FF         JLE 0x0049369d
LAB_004938ac:
004938AC  0F BF 81 1F 06 00 00      MOVSX EAX,word ptr [ECX + 0x61f]
004938B3  47                        INC EDI
004938B4  83 C0 02                  ADD EAX,0x2
004938B7  3B F8                     CMP EDI,EAX
004938B9  0F 8E B1 FD FF FF         JLE 0x00493670
004938BF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_004938c2:
004938C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004938C5  43                        INC EBX
004938C6  40                        INC EAX
004938C7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004938CA  0F BF 81 21 06 00 00      MOVSX EAX,word ptr [ECX + 0x621]
004938D1  40                        INC EAX
004938D2  3B D8                     CMP EBX,EAX
004938D4  0F 8E 67 FD FF FF         JLE 0x00493641
004938DA  5F                        POP EDI
004938DB  5E                        POP ESI
004938DC  8B C2                     MOV EAX,EDX
004938DE  5B                        POP EBX
004938DF  8B E5                     MOV ESP,EBP
004938E1  5D                        POP EBP
004938E2  C2 0C 00                  RET 0xc
LAB_004938e5:
004938E5  8B C2                     MOV EAX,EDX
004938E7  5B                        POP EBX
004938E8  8B E5                     MOV ESP,EBP
004938EA  5D                        POP EBP
004938EB  C2 0C 00                  RET 0xc
