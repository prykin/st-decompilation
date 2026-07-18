ccFntTy::CreateTypeSSpr:
00713480  55                        PUSH EBP
00713481  8B EC                     MOV EBP,ESP
00713483  81 EC E0 00 00 00         SUB ESP,0xe0
00713489  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071348C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071348F  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00713492  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00713495  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00713498  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0071349B  53                        PUSH EBX
0071349C  56                        PUSH ESI
0071349D  33 F6                     XOR ESI,ESI
0071349F  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
007134A2  57                        PUSH EDI
007134A3  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
007134A6  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
007134AC  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007134AF  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
007134B5  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
007134BB  56                        PUSH ESI
007134BC  50                        PUSH EAX
007134BD  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
007134C0  C7 45 C8 FF FF FF FF      MOV dword ptr [EBP + -0x38],0xffffffff
007134C7  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
007134CA  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
007134CE  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
007134D4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007134DA  E8 11 A3 01 00            CALL 0x0072d7f0
007134DF  8B F8                     MOV EDI,EAX
007134E1  83 C4 08                  ADD ESP,0x8
007134E4  3B FE                     CMP EDI,ESI
007134E6  0F 85 71 05 00 00         JNZ 0x00713a5d
007134EC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007134EF  3B FE                     CMP EDI,ESI
007134F1  74 05                     JZ 0x007134f8
007134F3  80 3F 00                  CMP byte ptr [EDI],0x0
007134F6  75 18                     JNZ 0x00713510
LAB_007134f8:
007134F8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007134FE  68 5F 09 00 00            PUSH 0x95f
00713503  68 90 01 7F 00            PUSH 0x7f0190
00713508  51                        PUSH ECX
00713509  6A CC                     PUSH -0x34
0071350B  E8 30 29 F9 FF            CALL 0x006a5e40
LAB_00713510:
00713510  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
00713513  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
00713519  52                        PUSH EDX
0071351A  8B CB                     MOV ECX,EBX
0071351C  E8 8F D3 FF FF            CALL 0x007108b0
00713521  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00713524  3B C6                     CMP EAX,ESI
00713526  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00713529  7D 06                     JGE 0x00713531
0071352B  8D 48 01                  LEA ECX,[EAX + 0x1]
0071352E  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_00713531:
00713531  39 75 24                  CMP dword ptr [EBP + 0x24],ESI
00713534  7D 0D                     JGE 0x00713543
00713536  3B C6                     CMP EAX,ESI
00713538  7E 06                     JLE 0x00713540
0071353A  48                        DEC EAX
0071353B  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
0071353E  EB 03                     JMP 0x00713543
LAB_00713540:
00713540  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_00713543:
00713543  C7 43 7E 01 00 00 00      MOV dword ptr [EBX + 0x7e],0x1
0071354A  66 89 B3 9E 00 00 00      MOV word ptr [EBX + 0x9e],SI
00713551  8A 15 54 C8 7C 00         MOV DL,byte ptr [0x007cc854]
00713557  57                        PUSH EDI
00713558  8B CB                     MOV ECX,EBX
0071355A  88 93 9E 00 00 00         MOV byte ptr [EBX + 0x9e],DL
00713560  E8 0B DE FF FF            CALL 0x00711370
00713565  57                        PUSH EDI
00713566  8B CB                     MOV ECX,EBX
00713568  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0071356B  E8 70 DE FF FF            CALL 0x007113e0
00713570  8B F0                     MOV ESI,EAX
00713572  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00713575  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00713578  33 D2                     XOR EDX,EDX
0071357A  85 C0                     TEST EAX,EAX
0071357C  0F 9E C2                  SETLE DL
0071357F  4A                        DEC EDX
00713580  23 D0                     AND EDX,EAX
00713582  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00713585  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00713588  3B D0                     CMP EDX,EAX
0071358A  7D 03                     JGE 0x0071358f
0071358C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071358f:
0071358F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00713592  33 D2                     XOR EDX,EDX
00713594  85 C0                     TEST EAX,EAX
00713596  0F 9E C2                  SETLE DL
00713599  4A                        DEC EDX
0071359A  23 D0                     AND EDX,EAX
0071359C  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
0071359F  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
007135A2  3B D0                     CMP EDX,EAX
007135A4  7D 03                     JGE 0x007135a9
007135A6  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_007135a9:
007135A9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
007135AC  85 C0                     TEST EAX,EAX
007135AE  7D 18                     JGE 0x007135c8
007135B0  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
007135B3  2B C6                     SUB EAX,ESI
007135B5  99                        CDQ
007135B6  2B C2                     SUB EAX,EDX
007135B8  D1 F8                     SAR EAX,0x1
007135BA  85 C0                     TEST EAX,EAX
007135BC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
007135BF  7D 07                     JGE 0x007135c8
007135C1  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
LAB_007135c8:
007135C8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007135CB  83 F8 FB                  CMP EAX,-0x5
007135CE  74 0A                     JZ 0x007135da
007135D0  83 F8 FA                  CMP EAX,-0x6
007135D3  74 05                     JZ 0x007135da
007135D5  83 F8 F9                  CMP EAX,-0x7
007135D8  75 09                     JNZ 0x007135e3
LAB_007135da:
007135DA  83 C0 03                  ADD EAX,0x3
007135DD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007135E0  83 F8 F9                  CMP EAX,-0x7
LAB_007135e3:
007135E3  7D 0A                     JGE 0x007135ef
007135E5  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
007135EC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_007135ef:
007135EF  83 F8 FF                  CMP EAX,-0x1
007135F2  75 0D                     JNZ 0x00713601
007135F4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007135F7  2B C1                     SUB EAX,ECX
007135F9  99                        CDQ
007135FA  2B C2                     SUB EAX,EDX
007135FC  D1 F8                     SAR EAX,0x1
007135FE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00713601:
00713601  57                        PUSH EDI
00713602  8B CB                     MOV ECX,EBX
00713604  E8 B7 DE FF FF            CALL 0x007114c0
00713609  8B F0                     MOV ESI,EAX
0071360B  83 C6 03                  ADD ESI,0x3
0071360E  8D 04 B5 31 00 00 00      LEA EAX,[ESI*0x4 + 0x31]
00713615  50                        PUSH EAX
00713616  E8 F5 75 F9 FF            CALL 0x006aac10
0071361B  66 8B 55 E4               MOV DX,word ptr [EBP + -0x1c]
0071361F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00713622  66 89 70 23               MOV word ptr [EAX + 0x23],SI
00713626  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00713629  6A 01                     PUSH 0x1
0071362B  66 89 51 29               MOV word ptr [ECX + 0x29],DX
0071362F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00713632  66 8B 4D CC               MOV CX,word ptr [EBP + -0x34]
00713636  66 89 48 2B               MOV word ptr [EAX + 0x2b],CX
0071363A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0071363D  8B CB                     MOV ECX,EBX
0071363F  0F BF 50 2B               MOVSX EDX,word ptr [EAX + 0x2b]
00713643  0F BF 40 29               MOVSX EAX,word ptr [EAX + 0x29]
00713647  52                        PUSH EDX
00713648  50                        PUSH EAX
00713649  6A 00                     PUSH 0x0
0071364B  6A 00                     PUSH 0x0
0071364D  6A 00                     PUSH 0x0
0071364F  6A 00                     PUSH 0x0
00713651  E8 4A D5 FF FF            CALL 0x00710ba0
00713656  8D 74 36 0A               LEA ESI,[ESI + ESI*0x1 + 0xa]
0071365A  8B F8                     MOV EDI,EAX
0071365C  56                        PUSH ESI
0071365D  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
00713660  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
00713663  E8 A8 75 F9 FF            CALL 0x006aac10
00713668  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0071366B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071366E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00713671  33 C9                     XOR ECX,ECX
00713673  66 39 4A 23               CMP word ptr [EDX + 0x23],CX
00713677  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0071367A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0071367D  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00713680  0F 8E 9A 03 00 00         JLE 0x00713a20
00713686  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00713689  EB 03                     JMP 0x0071368e
LAB_0071368b:
0071368B  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_0071368e:
0071368E  8B 77 14                  MOV ESI,dword ptr [EDI + 0x14]
00713691  85 F6                     TEST ESI,ESI
00713693  75 18                     JNZ 0x007136ad
00713695  66 8B 77 0E               MOV SI,word ptr [EDI + 0xe]
00713699  0F AF 77 04               IMUL ESI,dword ptr [EDI + 0x4]
0071369D  83 C6 1F                  ADD ESI,0x1f
007136A0  C1 EE 03                  SHR ESI,0x3
007136A3  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
007136A9  0F AF 77 08               IMUL ESI,dword ptr [EDI + 0x8]
LAB_007136ad:
007136AD  57                        PUSH EDI
007136AE  E8 ED 18 FA FF            CALL 0x006b4fa0
007136B3  8B CE                     MOV ECX,ESI
007136B5  8B F8                     MOV EDI,EAX
007136B7  8B D1                     MOV EDX,ECX
007136B9  33 C0                     XOR EAX,EAX
007136BB  C1 E9 02                  SHR ECX,0x2
007136BE  F3 AB                     STOSD.REP ES:EDI
007136C0  8B CA                     MOV ECX,EDX
007136C2  83 E1 03                  AND ECX,0x3
007136C5  F3 AA                     STOSB.REP ES:EDI
007136C7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007136CA  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
007136CD  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
007136D1  83 C0 FD                  ADD EAX,-0x3
007136D4  3B C8                     CMP ECX,EAX
007136D6  0F 8D 83 02 00 00         JGE 0x0071395f
007136DC  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
007136DF  33 C0                     XOR EAX,EAX
007136E1  3B F0                     CMP ESI,EAX
007136E3  7C 13                     JL 0x007136f8
007136E5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007136E8  C7 45 C8 FF FF FF FF      MOV dword ptr [EBP + -0x38],0xffffffff
007136EF  8D 74 0E 01               LEA ESI,[ESI + ECX*0x1 + 0x1]
007136F3  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
007136F6  EB 03                     JMP 0x007136fb
LAB_007136f8:
007136F8  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
LAB_007136fb:
007136FB  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
007136FE  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00713701  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00713704  8D 83 9E 00 00 00         LEA EAX,[EBX + 0x9e]
0071370A  57                        PUSH EDI
0071370B  50                        PUSH EAX
0071370C  E8 7F 96 FF FF            CALL 0x0070cd90
00713711  83 C4 08                  ADD ESP,0x8
00713714  85 C0                     TEST EAX,EAX
00713716  75 49                     JNZ 0x00713761
00713718  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0071371B  42                        INC EDX
0071371C  47                        INC EDI
0071371D  57                        PUSH EDI
0071371E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00713721  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00713724  E8 97 96 FF FF            CALL 0x0070cdc0
00713729  83 C4 04                  ADD ESP,0x4
0071372C  85 C0                     TEST EAX,EAX
0071372E  7C 0D                     JL 0x0071373d
00713730  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00713733  41                        INC ECX
00713734  47                        INC EDI
00713735  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00713738  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0071373B  EB 24                     JMP 0x00713761
LAB_0071373d:
0071373D  8D 83 9E 00 00 00         LEA EAX,[EBX + 0x9e]
00713743  57                        PUSH EDI
00713744  50                        PUSH EAX
00713745  E8 46 96 FF FF            CALL 0x0070cd90
0071374A  83 C4 08                  ADD ESP,0x8
0071374D  85 C0                     TEST EAX,EAX
0071374F  75 09                     JNZ 0x0071375a
00713751  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
00713758  EB 07                     JMP 0x00713761
LAB_0071375a:
0071375A  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
LAB_00713761:
00713761  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00713764  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00713767  8B D1                     MOV EDX,ECX
00713769  33 C0                     XOR EAX,EAX
0071376B  C1 E9 02                  SHR ECX,0x2
0071376E  F3 AB                     STOSD.REP ES:EDI
00713770  8B CA                     MOV ECX,EDX
00713772  83 E1 03                  AND ECX,0x3
00713775  F3 AA                     STOSB.REP ES:EDI
00713777  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0071377A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071377D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00713780  50                        PUSH EAX
00713781  51                        PUSH ECX
00713782  52                        PUSH EDX
00713783  E8 B8 AB 01 00            CALL 0x0072e340
00713788  BF F4 8F 7C 00            MOV EDI,0x7c8ff4
0071378D  83 C9 FF                  OR ECX,0xffffffff
00713790  33 C0                     XOR EAX,EAX
00713792  F2 AE                     SCASB.REPNE ES:EDI
00713794  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00713797  F7 D1                     NOT ECX
00713799  49                        DEC ECX
0071379A  51                        PUSH ECX
0071379B  68 F4 8F 7C 00            PUSH 0x7c8ff4
007137A0  50                        PUSH EAX
007137A1  E8 4A AF 01 00            CALL 0x0072e6f0
007137A6  83 C4 18                  ADD ESP,0x18
007137A9  85 C0                     TEST EAX,EAX
007137AB  0F 84 FF 00 00 00         JZ 0x007138b0
007137B1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
007137B4  85 C0                     TEST EAX,EAX
007137B6  75 33                     JNZ 0x007137eb
007137B8  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
007137BB  85 C0                     TEST EAX,EAX
007137BD  75 2C                     JNZ 0x007137eb
007137BF  8D BB 9E 00 00 00         LEA EDI,[EBX + 0x9e]
007137C5  83 C9 FF                  OR ECX,0xffffffff
007137C8  33 C0                     XOR EAX,EAX
007137CA  F2 AE                     SCASB.REPNE ES:EDI
007137CC  F7 D1                     NOT ECX
007137CE  2B F9                     SUB EDI,ECX
007137D0  8B F7                     MOV ESI,EDI
007137D2  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
007137D5  8B D1                     MOV EDX,ECX
007137D7  83 C9 FF                  OR ECX,0xffffffff
007137DA  F2 AE                     SCASB.REPNE ES:EDI
007137DC  8B CA                     MOV ECX,EDX
007137DE  4F                        DEC EDI
007137DF  C1 E9 02                  SHR ECX,0x2
007137E2  F3 A5                     MOVSD.REP ES:EDI,ESI
007137E4  8B CA                     MOV ECX,EDX
007137E6  83 E1 03                  AND ECX,0x3
007137E9  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_007137eb:
007137EB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
007137EE  8D 45 AC                  LEA EAX,[EBP + -0x54]
007137F1  6A 10                     PUSH 0x10
007137F3  50                        PUSH EAX
007137F4  51                        PUSH ECX
007137F5  E8 66 A6 01 00            CALL 0x0072de60
007137FA  8B F8                     MOV EDI,EAX
007137FC  83 C9 FF                  OR ECX,0xffffffff
007137FF  33 C0                     XOR EAX,EAX
00713801  6A 01                     PUSH 0x1
00713803  F2 AE                     SCASB.REPNE ES:EDI
00713805  F7 D1                     NOT ECX
00713807  2B F9                     SUB EDI,ECX
00713809  8B F7                     MOV ESI,EDI
0071380B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0071380E  8B D1                     MOV EDX,ECX
00713810  83 C9 FF                  OR ECX,0xffffffff
00713813  F2 AE                     SCASB.REPNE ES:EDI
00713815  8B CA                     MOV ECX,EDX
00713817  4F                        DEC EDI
00713818  C1 E9 02                  SHR ECX,0x2
0071381B  F3 A5                     MOVSD.REP ES:EDI,ESI
0071381D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00713820  8B CA                     MOV ECX,EDX
00713822  83 E1 03                  AND ECX,0x3
00713825  50                        PUSH EAX
00713826  F3 A4                     MOVSB.REP ES:EDI,ESI
00713828  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071382B  51                        PUSH ECX
0071382C  E8 1F B5 01 00            CALL 0x0072ed50
00713831  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00713834  83 C4 18                  ADD ESP,0x18
00713837  85 C0                     TEST EAX,EAX
00713839  74 12                     JZ 0x0071384d
0071383B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0071383E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00713841  6A 01                     PUSH 0x1
00713843  52                        PUSH EDX
00713844  50                        PUSH EAX
00713845  E8 06 B5 01 00            CALL 0x0072ed50
0071384A  83 C4 0C                  ADD ESP,0xc
LAB_0071384d:
0071384D  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
LAB_00713850:
00713850  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00713853  83 C9 FF                  OR ECX,0xffffffff
00713856  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00713859  8D 42 07                  LEA EAX,[EDX + 0x7]
0071385C  83 F8 05                  CMP EAX,0x5
0071385F  0F 87 D9 00 00 00         JA 0x0071393e
switchD_00713865::switchD:
00713865  FF 24 85 DC 3A 71 00      JMP dword ptr [EAX*0x4 + 0x713adc]
switchD_00713865::caseD_fffffffe:
0071386C  68 F4 8F 7C 00            PUSH 0x7c8ff4
00713871  56                        PUSH ESI
00713872  E8 19 CD 01 00            CALL 0x00730590
00713877  8B F8                     MOV EDI,EAX
00713879  83 C4 08                  ADD ESP,0x8
0071387C  85 FF                     TEST EDI,EDI
0071387E  74 08                     JZ 0x00713888
00713880  8A 07                     MOV AL,byte ptr [EDI]
00713882  C6 07 00                  MOV byte ptr [EDI],0x0
00713885  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
LAB_00713888:
00713888  56                        PUSH ESI
00713889  8B CB                     MOV ECX,EBX
0071388B  E8 80 D8 FF FF            CALL 0x00711110
00713890  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00713893  2B C8                     SUB ECX,EAX
00713895  8B C1                     MOV EAX,ECX
00713897  99                        CDQ
00713898  2B C2                     SUB EAX,EDX
0071389A  8B C8                     MOV ECX,EAX
0071389C  D1 F9                     SAR ECX,0x1
0071389E  85 FF                     TEST EDI,EDI
007138A0  0F 84 98 00 00 00         JZ 0x0071393e
007138A6  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
007138A9  88 17                     MOV byte ptr [EDI],DL
007138AB  E9 8E 00 00 00            JMP 0x0071393e
LAB_007138b0:
007138B0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007138B3  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
007138B6  EB 98                     JMP 0x00713850
switchD_00713865::caseD_fffffffd:
007138B8  68 F4 8F 7C 00            PUSH 0x7c8ff4
007138BD  56                        PUSH ESI
007138BE  E8 CD CC 01 00            CALL 0x00730590
007138C3  8B F8                     MOV EDI,EAX
007138C5  83 C4 08                  ADD ESP,0x8
007138C8  85 FF                     TEST EDI,EDI
007138CA  74 08                     JZ 0x007138d4
007138CC  8A 07                     MOV AL,byte ptr [EDI]
007138CE  C6 07 00                  MOV byte ptr [EDI],0x0
007138D1  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
LAB_007138d4:
007138D4  56                        PUSH ESI
007138D5  8B CB                     MOV ECX,EBX
007138D7  E8 34 D8 FF FF            CALL 0x00711110
007138DC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
007138DF  2B C8                     SUB ECX,EAX
007138E1  85 FF                     TEST EDI,EDI
007138E3  74 59                     JZ 0x0071393e
007138E5  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
007138E8  88 17                     MOV byte ptr [EDI],DL
007138EA  EB 52                     JMP 0x0071393e
switchD_00713865::caseD_fffffffc:
007138EC  68 F4 8F 7C 00            PUSH 0x7c8ff4
007138F1  56                        PUSH ESI
007138F2  E8 99 CC 01 00            CALL 0x00730590
007138F7  8B F8                     MOV EDI,EAX
007138F9  83 C4 08                  ADD ESP,0x8
007138FC  85 FF                     TEST EDI,EDI
007138FE  74 08                     JZ 0x00713908
00713900  8A 07                     MOV AL,byte ptr [EDI]
00713902  C6 07 00                  MOV byte ptr [EDI],0x0
00713905  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
LAB_00713908:
00713908  56                        PUSH ESI
00713909  8B CB                     MOV ECX,EBX
0071390B  E8 00 D8 FF FF            CALL 0x00711110
00713910  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
00713913  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00713916  8B C8                     MOV ECX,EAX
00713918  8D 04 16                  LEA EAX,[ESI + EDX*0x1]
0071391B  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0071391E  99                        CDQ
0071391F  2B C2                     SUB EAX,EDX
00713921  8B C8                     MOV ECX,EAX
00713923  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00713926  D1 F9                     SAR ECX,0x1
00713928  2B C8                     SUB ECX,EAX
0071392A  85 FF                     TEST EDI,EDI
0071392C  74 05                     JZ 0x00713933
0071392E  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00713931  88 17                     MOV byte ptr [EDI],DL
LAB_00713933:
00713933  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00713936  EB 06                     JMP 0x0071393e
switchD_00713865::caseD_fffffff9:
00713938  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0071393B  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
switchD_00713865::caseD_fffffffa:
0071393E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00713941  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00713944  52                        PUSH EDX
00713945  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00713948  51                        PUSH ECX
00713949  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0071394C  50                        PUSH EAX
0071394D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00713950  51                        PUSH ECX
00713951  52                        PUSH EDX
00713952  50                        PUSH EAX
00713953  8B CB                     MOV ECX,EBX
00713955  E8 16 E2 FF FF            CALL 0x00711b70
0071395A  E9 85 00 00 00            JMP 0x007139e4
LAB_0071395f:
0071395F  75 1D                     JNZ 0x0071397e
00713961  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00713964  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00713967  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0071396A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071396D  6A FF                     PUSH -0x1
0071396F  6A FF                     PUSH -0x1
00713971  51                        PUSH ECX
00713972  56                        PUSH ESI
00713973  57                        PUSH EDI
00713974  52                        PUSH EDX
00713975  8B CB                     MOV ECX,EBX
00713977  E8 F4 E1 FF FF            CALL 0x00711b70
0071397C  EB 06                     JMP 0x00713984
LAB_0071397e:
0071397E  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00713981  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
LAB_00713984:
00713984  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00713987  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
0071398B  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0071398E  83 E9 02                  SUB ECX,0x2
00713991  3B C1                     CMP EAX,ECX
00713993  75 1B                     JNZ 0x007139b0
00713995  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00713998  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071399B  6A FF                     PUSH -0x1
0071399D  6A FF                     PUSH -0x1
0071399F  50                        PUSH EAX
007139A0  56                        PUSH ESI
007139A1  57                        PUSH EDI
007139A2  52                        PUSH EDX
007139A3  8B CB                     MOV ECX,EBX
007139A5  89 83 82 00 00 00         MOV dword ptr [EBX + 0x82],EAX
007139AB  E8 C0 E1 FF FF            CALL 0x00711b70
LAB_007139b0:
007139B0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007139B3  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
007139B7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007139BA  49                        DEC ECX
007139BB  3B C1                     CMP EAX,ECX
007139BD  75 1B                     JNZ 0x007139da
007139BF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
007139C2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007139C5  6A FF                     PUSH -0x1
007139C7  6A FF                     PUSH -0x1
007139C9  50                        PUSH EAX
007139CA  56                        PUSH ESI
007139CB  57                        PUSH EDI
007139CC  52                        PUSH EDX
007139CD  8B CB                     MOV ECX,EBX
007139CF  89 83 82 00 00 00         MOV dword ptr [EBX + 0x82],EAX
007139D5  E8 96 E1 FF FF            CALL 0x00711b70
LAB_007139da:
007139DA  C7 83 82 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x82],0xffffffff
LAB_007139e4:
007139E4  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
007139E7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007139EA  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
007139ED  6A 00                     PUSH 0x0
007139EF  6A 00                     PUSH 0x0
007139F1  50                        PUSH EAX
007139F2  8D 44 91 2D               LEA EAX,[ECX + EDX*0x4 + 0x2d]
007139F6  50                        PUSH EAX
007139F7  E8 24 11 FA FF            CALL 0x006b4b20
007139FC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007139FF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00713A02  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00713A05  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00713A08  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
00713A0C  47                        INC EDI
00713A0D  46                        INC ESI
00713A0E  40                        INC EAX
00713A0F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00713A12  3B C2                     CMP EAX,EDX
00713A14  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00713A17  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00713A1A  0F 8C 6B FC FF FF         JL 0x0071368b
LAB_00713a20:
00713A20  8B CB                     MOV ECX,EBX
00713A22  E8 D9 D4 FF FF            CALL 0x00710f00
00713A27  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00713A2A  85 C0                     TEST EAX,EAX
00713A2C  74 09                     JZ 0x00713a37
00713A2E  8D 45 F8                  LEA EAX,[EBP + -0x8]
00713A31  50                        PUSH EAX
00713A32  E8 29 76 F9 FF            CALL 0x006ab060
LAB_00713a37:
00713A37  8D 8D 20 FF FF FF         LEA ECX,[EBP + 0xffffff20]
00713A3D  51                        PUSH ECX
00713A3E  8B CB                     MOV ECX,EBX
00713A40  E8 AB CF FF FF            CALL 0x007109f0
00713A45  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
00713A4B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00713A4E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00713A54  5F                        POP EDI
00713A55  5E                        POP ESI
00713A56  5B                        POP EBX
00713A57  8B E5                     MOV ESP,EBP
00713A59  5D                        POP EBP
00713A5A  C2 20 00                  RET 0x20
LAB_00713a5d:
00713A5D  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00713A63  68 A4 03 7F 00            PUSH 0x7f03a4
00713A68  68 CC 4C 7A 00            PUSH 0x7a4ccc
00713A6D  57                        PUSH EDI
00713A6E  56                        PUSH ESI
00713A6F  68 D0 09 00 00            PUSH 0x9d0
00713A74  68 90 01 7F 00            PUSH 0x7f0190
00713A79  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00713A7E  E8 4D 9A F9 FF            CALL 0x006ad4d0
00713A83  83 C4 18                  ADD ESP,0x18
00713A86  85 C0                     TEST EAX,EAX
00713A88  74 01                     JZ 0x00713a8b
00713A8A  CC                        INT3
LAB_00713a8b:
00713A8B  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
00713A8E  8B CB                     MOV ECX,EBX
00713A90  E8 6B D4 FF FF            CALL 0x00710f00
00713A95  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
00713A98  74 09                     JZ 0x00713aa3
00713A9A  8D 4D F8                  LEA ECX,[EBP + -0x8]
00713A9D  51                        PUSH ECX
00713A9E  E8 BD 75 F9 FF            CALL 0x006ab060
LAB_00713aa3:
00713AA3  8D 55 F4                  LEA EDX,[EBP + -0xc]
00713AA6  52                        PUSH EDX
00713AA7  E8 84 23 01 00            CALL 0x00725e30
00713AAC  83 C4 04                  ADD ESP,0x4
00713AAF  8D 85 20 FF FF FF         LEA EAX,[EBP + 0xffffff20]
00713AB5  8B CB                     MOV ECX,EBX
00713AB7  50                        PUSH EAX
00713AB8  E8 33 CF FF FF            CALL 0x007109f0
00713ABD  68 D5 09 00 00            PUSH 0x9d5
00713AC2  68 90 01 7F 00            PUSH 0x7f0190
00713AC7  56                        PUSH ESI
00713AC8  57                        PUSH EDI
00713AC9  E8 72 23 F9 FF            CALL 0x006a5e40
00713ACE  5F                        POP EDI
00713ACF  5E                        POP ESI
00713AD0  33 C0                     XOR EAX,EAX
00713AD2  5B                        POP EBX
00713AD3  8B E5                     MOV ESP,EBP
00713AD5  5D                        POP EBP
00713AD6  C2 20 00                  RET 0x20
