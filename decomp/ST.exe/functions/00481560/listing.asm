FUN_00481560:
00481560  55                        PUSH EBP
00481561  8B EC                     MOV EBP,ESP
00481563  81 EC 00 01 00 00         SUB ESP,0x100
00481569  0F BF 81 37 02 00 00      MOVSX EAX,word ptr [ECX + 0x237]
00481570  99                        CDQ
00481571  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00481577  33 C0                     XOR EAX,EAX
00481579  53                        PUSH EBX
0048157A  56                        PUSH ESI
0048157B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048157E  57                        PUSH EDI
0048157F  8B FA                     MOV EDI,EDX
00481581  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
00481587  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0048158B  B8 01 00 00 00            MOV EAX,0x1
00481590  3B D0                     CMP EDX,EAX
00481592  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00481595  0F 84 A3 0B 00 00         JZ 0x0048213e
0048159B  39 81 42 07 00 00         CMP dword ptr [ECX + 0x742],EAX
004815A1  0F 84 97 0B 00 00         JZ 0x0048213e
004815A7  0F BF 5D 10               MOVSX EBX,word ptr [EBP + 0x10]
004815AB  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
004815AF  0F BF 75 08               MOVSX ESI,word ptr [EBP + 0x8]
004815B3  0F BF 51 45               MOVSX EDX,word ptr [ECX + 0x45]
004815B7  53                        PUSH EBX
004815B8  50                        PUSH EAX
004815B9  0F BF 41 43               MOVSX EAX,word ptr [ECX + 0x43]
004815BD  0F BF 49 41               MOVSX ECX,word ptr [ECX + 0x41]
004815C1  56                        PUSH ESI
004815C2  52                        PUSH EDX
004815C3  50                        PUSH EAX
004815C4  51                        PUSH ECX
004815C5  E8 43 B9 22 00            CALL 0x006acf0d
004815CA  99                        CDQ
004815CB  83 C4 18                  ADD ESP,0x18
004815CE  3B D7                     CMP EDX,EDI
004815D0  7C 12                     JL 0x004815e4
004815D2  0F 8F 66 0B 00 00         JG 0x0048213e
004815D8  3B 85 74 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff74]
004815DE  0F 87 5A 0B 00 00         JA 0x0048213e
LAB_004815e4:
004815E4  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
004815E8  2B C6                     SUB EAX,ESI
004815EA  33 FF                     XOR EDI,EDI
004815EC  99                        CDQ
004815ED  8B F0                     MOV ESI,EAX
004815EF  8B CA                     MOV ECX,EDX
004815F1  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
004815F5  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
004815F9  2B C2                     SUB EAX,EDX
004815FB  51                        PUSH ECX
004815FC  99                        CDQ
004815FD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00481600  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00481603  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00481607  2B C3                     SUB EAX,EBX
00481609  56                        PUSH ESI
0048160A  99                        CDQ
0048160B  8B D8                     MOV EBX,EAX
0048160D  51                        PUSH ECX
0048160E  56                        PUSH ESI
0048160F  C7 45 E8 00 CA 9A 3B      MOV dword ptr [EBP + -0x18],0x3b9aca00
00481616  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00481619  C7 45 C0 FF FF FF FF      MOV dword ptr [EBP + -0x40],0xffffffff
00481620  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00481623  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00481626  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
00481629  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0048162C  E8 BF CE 2A 00            CALL 0x0072e4f0
00481631  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00481634  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00481637  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0048163A  51                        PUSH ECX
0048163B  50                        PUSH EAX
0048163C  51                        PUSH ECX
0048163D  50                        PUSH EAX
0048163E  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00481641  E8 AA CE 2A 00            CALL 0x0072e4f0
00481646  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00481649  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0048164C  50                        PUSH EAX
0048164D  53                        PUSH EBX
0048164E  50                        PUSH EAX
0048164F  53                        PUSH EBX
00481650  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00481653  E8 98 CE 2A 00            CALL 0x0072e4f0
00481658  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0048165B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0048165E  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
00481661  8B D6                     MOV EDX,ESI
00481663  0B D0                     OR EDX,EAX
00481665  75 3B                     JNZ 0x004816a2
00481667  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0048166A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0048166D  0B C1                     OR EAX,ECX
0048166F  75 31                     JNZ 0x004816a2
00481671  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00481674  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00481677  41                        INC ECX
00481678  40                        INC EAX
00481679  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0048167C  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0048167F  B8 01 00 00 00            MOV EAX,0x1
00481684  33 C9                     XOR ECX,ECX
00481686  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00481689  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0048168C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0048168F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00481692  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00481695  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00481698  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0048169B  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0048169E  8B F0                     MOV ESI,EAX
004816A0  EB 02                     JMP 0x004816a4
LAB_004816a2:
004816A2  33 C9                     XOR ECX,ECX
LAB_004816a4:
004816A4  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
004816A7  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
004816AA  8A 90 81 02 00 00         MOV DL,byte ptr [EAX + 0x281]
004816B0  84 D2                     TEST DL,DL
004816B2  0F 86 86 0A 00 00         JBE 0x0048213e
004816B8  05 3B 02 00 00            ADD EAX,0x23b
004816BD  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
004816C3  EB 05                     JMP 0x004816ca
LAB_004816c5:
004816C5  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
004816C8  33 C9                     XOR ECX,ECX
LAB_004816ca:
004816CA  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
004816CE  66 89 4D DC               MOV word ptr [EBP + -0x24],CX
004816D2  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
004816D6  66 8B 10                  MOV DX,word ptr [EAX]
004816D9  0F BF 40 04               MOVSX EAX,word ptr [EAX + 0x4]
004816DD  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
004816E1  99                        CDQ
004816E2  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004816E8  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
004816EB  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
004816F1  66 8B 50 6C               MOV DX,word ptr [EAX + 0x6c]
004816F5  52                        PUSH EDX
004816F6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004816F9  83 EC 08                  SUB ESP,0x8
004816FC  8B C4                     MOV EAX,ESP
004816FE  89 10                     MOV dword ptr [EAX],EDX
00481700  66 89 48 04               MOV word ptr [EAX + 0x4],CX
00481704  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00481707  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
0048170D  50                        PUSH EAX
0048170E  E8 19 1D F8 FF            CALL 0x0040342c
00481713  8B 08                     MOV ECX,dword ptr [EAX]
00481715  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00481718  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0048171B  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0048171F  66 8B 42 41               MOV AX,word ptr [EDX + 0x41]
00481723  66 01 45 D8               ADD word ptr [EBP + -0x28],AX
00481727  66 8B 42 43               MOV AX,word ptr [EDX + 0x43]
0048172B  66 03 4A 45               ADD CX,word ptr [EDX + 0x45]
0048172F  66 2B 45 DA               SUB AX,word ptr [EBP + -0x26]
00481733  8B D6                     MOV EDX,ESI
00481735  0B 55 E4                  OR EDX,dword ptr [EBP + -0x1c]
00481738  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
0048173C  66 89 4D DC               MOV word ptr [EBP + -0x24],CX
00481740  0F 85 D8 03 00 00         JNZ 0x00481b1e
00481746  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0048174A  0F BF C9                  MOVSX ECX,CX
0048174D  2B C1                     SUB EAX,ECX
0048174F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00481752  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00481755  51                        PUSH ECX
00481756  99                        CDQ
00481757  53                        PUSH EBX
00481758  52                        PUSH EDX
00481759  50                        PUSH EAX
0048175A  E8 91 CD 2A 00            CALL 0x0072e4f0
0048175F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00481762  51                        PUSH ECX
00481763  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00481766  51                        PUSH ECX
00481767  52                        PUSH EDX
00481768  50                        PUSH EAX
00481769  E8 82 CD 2A 00            CALL 0x0072e4f0
0048176E  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00481771  8B F0                     MOV ESI,EAX
00481773  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00481776  8B DA                     MOV EBX,EDX
00481778  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0048177B  03 C1                     ADD EAX,ECX
0048177D  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00481780  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00481783  0F BF 4D DA               MOVSX ECX,word ptr [EBP + -0x26]
00481787  13 C2                     ADC EAX,EDX
00481789  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0048178C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0048178F  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
00481792  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00481796  99                        CDQ
00481797  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
0048179D  8B C1                     MOV EAX,ECX
0048179F  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004817A2  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
004817A8  51                        PUSH ECX
004817A9  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004817AC  99                        CDQ
004817AD  51                        PUSH ECX
004817AE  52                        PUSH EDX
004817AF  50                        PUSH EAX
004817B0  89 5D 90                  MOV dword ptr [EBP + -0x70],EBX
004817B3  E8 38 CD 2A 00            CALL 0x0072e4f0
004817B8  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
004817BE  2B F0                     SUB ESI,EAX
004817C0  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
004817C3  1B DA                     SBB EBX,EDX
004817C5  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
004817C8  52                        PUSH EDX
004817C9  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
004817CF  50                        PUSH EAX
004817D0  51                        PUSH ECX
004817D1  52                        PUSH EDX
004817D2  E8 19 CD 2A 00            CALL 0x0072e4f0
004817D7  2B F0                     SUB ESI,EAX
004817D9  6A 00                     PUSH 0x0
004817DB  1B DA                     SBB EBX,EDX
004817DD  6A 02                     PUSH 0x2
004817DF  53                        PUSH EBX
004817E0  56                        PUSH ESI
004817E1  E8 0A CD 2A 00            CALL 0x0072e4f0
004817E6  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
004817EA  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004817ED  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
004817F0  0F BF 45 D8               MOVSX EAX,word ptr [EBP + -0x28]
004817F4  2B C8                     SUB ECX,EAX
004817F6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004817F9  8B D1                     MOV EDX,ECX
004817FB  0F AF C0                  IMUL EAX,EAX
004817FE  0F AF D1                  IMUL EDX,ECX
00481801  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00481804  03 C2                     ADD EAX,EDX
00481806  8B D1                     MOV EDX,ECX
00481808  0F AF D1                  IMUL EDX,ECX
0048180B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00481811  03 C2                     ADD EAX,EDX
00481813  99                        CDQ
00481814  8B F0                     MOV ESI,EAX
00481816  8B DA                     MOV EBX,EDX
00481818  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
0048181E  51                        PUSH ECX
0048181F  50                        PUSH EAX
00481820  51                        PUSH ECX
00481821  50                        PUSH EAX
00481822  E8 C9 CC 2A 00            CALL 0x0072e4f0
00481827  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0048182A  2B F0                     SUB ESI,EAX
0048182C  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0048182F  1B DA                     SBB EBX,EDX
00481831  50                        PUSH EAX
00481832  51                        PUSH ECX
00481833  53                        PUSH EBX
00481834  56                        PUSH ESI
00481835  E8 B6 CC 2A 00            CALL 0x0072e4f0
0048183A  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0048183D  8B F0                     MOV ESI,EAX
0048183F  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00481843  03 C0                     ADD EAX,EAX
00481845  8B DA                     MOV EBX,EDX
00481847  51                        PUSH ECX
00481848  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0048184B  99                        CDQ
0048184C  51                        PUSH ECX
0048184D  52                        PUSH EDX
0048184E  50                        PUSH EAX
0048184F  E8 9C CC 2A 00            CALL 0x0072e4f0
00481854  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
0048185A  2B F0                     SUB ESI,EAX
0048185C  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
00481862  51                        PUSH ECX
00481863  50                        PUSH EAX
00481864  51                        PUSH ECX
00481865  50                        PUSH EAX
00481866  1B DA                     SBB EBX,EDX
00481868  E8 83 CC 2A 00            CALL 0x0072e4f0
0048186D  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
00481870  51                        PUSH ECX
00481871  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00481874  51                        PUSH ECX
00481875  52                        PUSH EDX
00481876  50                        PUSH EAX
00481877  E8 74 CC 2A 00            CALL 0x0072e4f0
0048187C  03 F0                     ADD ESI,EAX
0048187E  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00481881  13 DA                     ADC EBX,EDX
00481883  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00481886  52                        PUSH EDX
00481887  50                        PUSH EAX
00481888  53                        PUSH EBX
00481889  56                        PUSH ESI
0048188A  E8 61 CC 2A 00            CALL 0x0072e4f0
0048188F  6A 00                     PUSH 0x0
00481891  6A 04                     PUSH 0x4
00481893  52                        PUSH EDX
00481894  50                        PUSH EAX
00481895  E8 56 CC 2A 00            CALL 0x0072e4f0
0048189A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0048189D  8B F0                     MOV ESI,EAX
0048189F  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004818A2  51                        PUSH ECX
004818A3  50                        PUSH EAX
004818A4  51                        PUSH ECX
004818A5  50                        PUSH EAX
004818A6  8B DA                     MOV EBX,EDX
004818A8  E8 43 CC 2A 00            CALL 0x0072e4f0
004818AD  2B C6                     SUB EAX,ESI
004818AF  1B D3                     SBB EDX,EBX
004818B1  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
004818B7  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004818BD  0F 88 3E 07 00 00         JS 0x00482001
004818C3  7F 08                     JG 0x004818cd
004818C5  85 C0                     TEST EAX,EAX
004818C7  0F 82 34 07 00 00         JC 0x00482001
LAB_004818cd:
004818CD  0B C2                     OR EAX,EDX
004818CF  0F 85 BA 00 00 00         JNZ 0x0048198f
004818D5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004818D8  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004818DB  6A FF                     PUSH -0x1
004818DD  6A FE                     PUSH -0x2
004818DF  51                        PUSH ECX
004818E0  52                        PUSH EDX
004818E1  E8 0A CC 2A 00            CALL 0x0072e4f0
004818E6  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004818E9  52                        PUSH EDX
004818EA  50                        PUSH EAX
004818EB  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004818EE  50                        PUSH EAX
004818EF  51                        PUSH ECX
004818F0  E8 4B CB 2A 00            CALL 0x0072e440
004818F5  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
004818F9  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
004818FC  8B F0                     MOV ESI,EAX
004818FE  2B C1                     SUB EAX,ECX
00481900  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00481903  99                        CDQ
00481904  51                        PUSH ECX
00481905  53                        PUSH EBX
00481906  52                        PUSH EDX
00481907  50                        PUSH EAX
00481908  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0048190B  E8 E0 CB 2A 00            CALL 0x0072e4f0
00481910  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00481913  51                        PUSH ECX
00481914  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00481917  51                        PUSH ECX
00481918  52                        PUSH EDX
00481919  50                        PUSH EAX
0048191A  E8 21 CB 2A 00            CALL 0x0072e440
0048191F  0F BF 55 18               MOVSX EDX,word ptr [EBP + 0x18]
00481923  8B C8                     MOV ECX,EAX
00481925  2B D6                     SUB EDX,ESI
00481927  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0048192B  0F BF 75 08               MOVSX ESI,word ptr [EBP + 0x8]
0048192F  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00481932  03 C8                     ADD ECX,EAX
00481934  0F BF 55 14               MOVSX EDX,word ptr [EBP + 0x14]
00481938  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
0048193C  2B D6                     SUB EDX,ESI
0048193E  2B C1                     SUB EAX,ECX
00481940  8B F2                     MOV ESI,EDX
00481942  0F AF C0                  IMUL EAX,EAX
00481945  0F AF F2                  IMUL ESI,EDX
00481948  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0048194B  03 C6                     ADD EAX,ESI
0048194D  8B F2                     MOV ESI,EDX
0048194F  0F AF F2                  IMUL ESI,EDX
00481952  03 C6                     ADD EAX,ESI
00481954  99                        CDQ
00481955  3B D7                     CMP EDX,EDI
00481957  0F 8F A7 06 00 00         JG 0x00482004
0048195D  7C 09                     JL 0x00481968
0048195F  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00481962  0F 83 9C 06 00 00         JNC 0x00482004
LAB_00481968:
00481968  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0048196B  8B FA                     MOV EDI,EDX
0048196D  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00481971  66 8B 55 D4               MOV DX,word ptr [EBP + -0x2c]
00481975  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00481979  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0048197C  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0048197F  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
00481983  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00481987  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0048198A  E9 75 06 00 00            JMP 0x00482004
LAB_0048198f:
0048198F  DF AD 64 FF FF FF         FILD qword ptr [EBP + 0xffffff64]
00481995  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00481998  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0048199B  6A 00                     PUSH 0x0
0048199D  6A 02                     PUSH 0x2
0048199F  D9 FA                     FSQRT
004819A1  51                        PUSH ECX
004819A2  52                        PUSH EDX
004819A3  DD 9D 6C FF FF FF         FSTP double ptr [EBP + 0xffffff6c]
004819A9  E8 42 CB 2A 00            CALL 0x0072e4f0
004819AE  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
004819B4  89 95 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EDX
004819BA  DF AD 20 FF FF FF         FILD qword ptr [EBP + 0xffffff20]
004819C0  DD 9D 58 FF FF FF         FSTP double ptr [EBP + 0xffffff58]
004819C6  DF 6D A8                  FILD qword ptr [EBP + -0x58]
004819C9  DC AD 6C FF FF FF         FSUBR double ptr [EBP + 0xffffff6c]
004819CF  DC B5 58 FF FF FF         FDIV double ptr [EBP + 0xffffff58]
004819D5  E8 AE C8 2A 00            CALL 0x0072e288
004819DA  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
004819DE  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
004819E1  8B F0                     MOV ESI,EAX
004819E3  2B C1                     SUB EAX,ECX
004819E5  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
004819E8  99                        CDQ
004819E9  51                        PUSH ECX
004819EA  53                        PUSH EBX
004819EB  52                        PUSH EDX
004819EC  50                        PUSH EAX
004819ED  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004819F0  E8 FB CA 2A 00            CALL 0x0072e4f0
004819F5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004819F8  51                        PUSH ECX
004819F9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004819FC  51                        PUSH ECX
004819FD  52                        PUSH EDX
004819FE  50                        PUSH EAX
004819FF  E8 3C CA 2A 00            CALL 0x0072e440
00481A04  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
00481A08  03 C1                     ADD EAX,ECX
00481A0A  0F BF 4D 1C               MOVSX ECX,word ptr [EBP + 0x1c]
00481A0E  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
00481A12  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00481A15  2B C8                     SUB ECX,EAX
00481A17  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
00481A1B  2B C6                     SUB EAX,ESI
00481A1D  0F BF 75 14               MOVSX ESI,word ptr [EBP + 0x14]
00481A21  0F AF C0                  IMUL EAX,EAX
00481A24  2B F2                     SUB ESI,EDX
00481A26  8B D1                     MOV EDX,ECX
00481A28  0F AF F6                  IMUL ESI,ESI
00481A2B  0F AF D1                  IMUL EDX,ECX
00481A2E  8B CE                     MOV ECX,ESI
00481A30  03 CA                     ADD ECX,EDX
00481A32  03 C1                     ADD EAX,ECX
00481A34  99                        CDQ
00481A35  3B D7                     CMP EDX,EDI
00481A37  7F 2D                     JG 0x00481a66
00481A39  7C 05                     JL 0x00481a40
00481A3B  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00481A3E  73 26                     JNC 0x00481a66
LAB_00481a40:
00481A40  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00481A43  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00481A46  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00481A4A  8B FA                     MOV EDI,EDX
00481A4C  66 8B 55 D4               MOV DX,word ptr [EBP + -0x2c]
00481A50  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00481A54  66 8B 45 B8               MOV AX,word ptr [EBP + -0x48]
00481A58  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00481A5B  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
00481A5F  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00481A63  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_00481a66:
00481A66  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00481A69  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00481A6C  F7 D9                     NEG ECX
00481A6E  83 D0 00                  ADC EAX,0x0
00481A71  89 8D 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],ECX
00481A77  F7 D8                     NEG EAX
00481A79  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
00481A7F  DF AD 18 FF FF FF         FILD qword ptr [EBP + 0xffffff18]
00481A85  DC A5 6C FF FF FF         FSUB double ptr [EBP + 0xffffff6c]
00481A8B  DC B5 58 FF FF FF         FDIV double ptr [EBP + 0xffffff58]
00481A91  E8 F2 C7 2A 00            CALL 0x0072e288
00481A96  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
00481A9A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00481A9D  2B C1                     SUB EAX,ECX
00481A9F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00481AA2  99                        CDQ
00481AA3  51                        PUSH ECX
00481AA4  53                        PUSH EBX
00481AA5  52                        PUSH EDX
00481AA6  50                        PUSH EAX
00481AA7  E8 44 CA 2A 00            CALL 0x0072e4f0
00481AAC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00481AAF  51                        PUSH ECX
00481AB0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00481AB3  51                        PUSH ECX
00481AB4  52                        PUSH EDX
00481AB5  50                        PUSH EAX
00481AB6  E8 85 C9 2A 00            CALL 0x0072e440
00481ABB  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
00481ABF  03 C1                     ADD EAX,ECX
00481AC1  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00481AC4  0F BF 4D 1C               MOVSX ECX,word ptr [EBP + 0x1c]
00481AC8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00481ACB  2B C8                     SUB ECX,EAX
00481ACD  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
00481AD1  2B C2                     SUB EAX,EDX
00481AD3  8B D1                     MOV EDX,ECX
00481AD5  0F AF D1                  IMUL EDX,ECX
00481AD8  0F AF C0                  IMUL EAX,EAX
00481ADB  03 F2                     ADD ESI,EDX
00481ADD  03 C6                     ADD EAX,ESI
00481ADF  99                        CDQ
00481AE0  3B D7                     CMP EDX,EDI
00481AE2  0F 8F 1C 05 00 00         JG 0x00482004
00481AE8  7C 09                     JL 0x00481af3
00481AEA  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00481AED  0F 83 11 05 00 00         JNC 0x00482004
LAB_00481af3:
00481AF3  66 8B 4D B8               MOV CX,word ptr [EBP + -0x48]
00481AF7  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00481AFA  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00481AFE  8B FA                     MOV EDI,EDX
00481B00  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00481B03  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00481B07  66 8B 45 D4               MOV AX,word ptr [EBP + -0x2c]
00481B0B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00481B0E  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00481B12  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00481B16  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00481B19  E9 E6 04 00 00            JMP 0x00482004
LAB_00481b1e:
00481B1E  0F BF C8                  MOVSX ECX,AX
00481B21  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00481B25  2B C1                     SUB EAX,ECX
00481B27  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481B2A  99                        CDQ
00481B2B  51                        PUSH ECX
00481B2C  56                        PUSH ESI
00481B2D  52                        PUSH EDX
00481B2E  50                        PUSH EAX
00481B2F  E8 BC C9 2A 00            CALL 0x0072e4f0
00481B34  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481B37  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00481B3A  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
00481B3E  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
00481B41  51                        PUSH ECX
00481B42  0F BF 55 DC               MOVSX EDX,word ptr [EBP + -0x24]
00481B46  2B C2                     SUB EAX,EDX
00481B48  56                        PUSH ESI
00481B49  99                        CDQ
00481B4A  52                        PUSH EDX
00481B4B  50                        PUSH EAX
00481B4C  E8 9F C9 2A 00            CALL 0x0072e4f0
00481B51  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00481B54  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
00481B5A  51                        PUSH ECX
00481B5B  53                        PUSH EBX
00481B5C  52                        PUSH EDX
00481B5D  50                        PUSH EAX
00481B5E  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
00481B64  E8 87 C9 2A 00            CALL 0x0072e4f0
00481B69  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
00481B6C  8B DA                     MOV EBX,EDX
00481B6E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00481B71  8B F8                     MOV EDI,EAX
00481B73  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00481B76  52                        PUSH EDX
00481B77  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00481B7A  50                        PUSH EAX
00481B7B  51                        PUSH ECX
00481B7C  52                        PUSH EDX
00481B7D  E8 6E C9 2A 00            CALL 0x0072e4f0
00481B82  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00481B85  8B 75 88                  MOV ESI,dword ptr [EBP + -0x78]
00481B88  03 F8                     ADD EDI,EAX
00481B8A  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00481B8D  13 DA                     ADC EBX,EDX
00481B8F  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00481B92  03 CA                     ADD ECX,EDX
00481B94  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00481B97  13 F0                     ADC ESI,EAX
00481B99  8B C1                     MOV EAX,ECX
00481B9B  03 C2                     ADD EAX,EDX
00481B9D  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00481BA0  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00481BA3  8B C6                     MOV EAX,ESI
00481BA5  13 C2                     ADC EAX,EDX
00481BA7  56                        PUSH ESI
00481BA8  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00481BAB  51                        PUSH ECX
00481BAC  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00481BB0  99                        CDQ
00481BB1  52                        PUSH EDX
00481BB2  50                        PUSH EAX
00481BB3  89 BD 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDI
00481BB9  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
00481BBF  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
00481BC5  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
00481BCB  E8 20 C9 2A 00            CALL 0x0072e4f0
00481BD0  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00481BD3  8B F0                     MOV ESI,EAX
00481BD5  0F BF 45 D8               MOVSX EAX,word ptr [EBP + -0x28]
00481BD9  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
00481BDF  51                        PUSH ECX
00481BE0  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00481BE3  89 B5 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ESI
00481BE9  99                        CDQ
00481BEA  51                        PUSH ECX
00481BEB  52                        PUSH EDX
00481BEC  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00481BF2  89 95 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDX
00481BF8  50                        PUSH EAX
00481BF9  E8 F2 C8 2A 00            CALL 0x0072e4f0
00481BFE  2B F8                     SUB EDI,EAX
00481C00  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
00481C06  1B DA                     SBB EBX,EDX
00481C08  2B FE                     SUB EDI,ESI
00481C0A  1B D8                     SBB EBX,EAX
00481C0C  6A 00                     PUSH 0x0
00481C0E  6A 02                     PUSH 0x2
00481C10  53                        PUSH EBX
00481C11  57                        PUSH EDI
00481C12  E8 D9 C8 2A 00            CALL 0x0072e4f0
00481C17  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
00481C1D  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00481C20  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
00481C26  51                        PUSH ECX
00481C27  50                        PUSH EAX
00481C28  8B F2                     MOV ESI,EDX
00481C2A  51                        PUSH ECX
00481C2B  50                        PUSH EAX
00481C2C  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
00481C2F  E8 BC C8 2A 00            CALL 0x0072e4f0
00481C34  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00481C3A  8B F8                     MOV EDI,EAX
00481C3C  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
00481C42  51                        PUSH ECX
00481C43  50                        PUSH EAX
00481C44  51                        PUSH ECX
00481C45  50                        PUSH EAX
00481C46  8B DA                     MOV EBX,EDX
00481C48  E8 A3 C8 2A 00            CALL 0x0072e4f0
00481C4D  2B F8                     SUB EDI,EAX
00481C4F  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00481C52  1B DA                     SBB EBX,EDX
00481C54  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00481C57  52                        PUSH EDX
00481C58  50                        PUSH EAX
00481C59  53                        PUSH EBX
00481C5A  57                        PUSH EDI
00481C5B  E8 90 C8 2A 00            CALL 0x0072e4f0
00481C60  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
00481C66  8B DA                     MOV EBX,EDX
00481C68  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
00481C6E  6A 00                     PUSH 0x0
00481C70  6A 02                     PUSH 0x2
00481C72  51                        PUSH ECX
00481C73  52                        PUSH EDX
00481C74  8B F8                     MOV EDI,EAX
00481C76  E8 75 C8 2A 00            CALL 0x0072e4f0
00481C7B  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
00481C81  2B C8                     SUB ECX,EAX
00481C83  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
00481C89  1B C2                     SBB EAX,EDX
00481C8B  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
00481C91  52                        PUSH EDX
00481C92  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00481C98  52                        PUSH EDX
00481C99  50                        PUSH EAX
00481C9A  51                        PUSH ECX
00481C9B  E8 50 C8 2A 00            CALL 0x0072e4f0
00481CA0  8B 8D 3C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff3c]
00481CA6  03 F8                     ADD EDI,EAX
00481CA8  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
00481CAE  51                        PUSH ECX
00481CAF  50                        PUSH EAX
00481CB0  51                        PUSH ECX
00481CB1  50                        PUSH EAX
00481CB2  13 DA                     ADC EBX,EDX
00481CB4  E8 37 C8 2A 00            CALL 0x0072e4f0
00481CB9  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
00481CBC  03 F8                     ADD EDI,EAX
00481CBE  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00481CC1  51                        PUSH ECX
00481CC2  50                        PUSH EAX
00481CC3  51                        PUSH ECX
00481CC4  50                        PUSH EAX
00481CC5  13 DA                     ADC EBX,EDX
00481CC7  E8 24 C8 2A 00            CALL 0x0072e4f0
00481CCC  03 F8                     ADD EDI,EAX
00481CCE  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00481CD1  13 DA                     ADC EBX,EDX
00481CD3  50                        PUSH EAX
00481CD4  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00481CD7  51                        PUSH ECX
00481CD8  53                        PUSH EBX
00481CD9  57                        PUSH EDI
00481CDA  E8 11 C8 2A 00            CALL 0x0072e4f0
00481CDF  6A 00                     PUSH 0x0
00481CE1  6A 04                     PUSH 0x4
00481CE3  52                        PUSH EDX
00481CE4  50                        PUSH EAX
00481CE5  E8 06 C8 2A 00            CALL 0x0072e4f0
00481CEA  8B F8                     MOV EDI,EAX
00481CEC  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00481CEF  56                        PUSH ESI
00481CF0  50                        PUSH EAX
00481CF1  56                        PUSH ESI
00481CF2  50                        PUSH EAX
00481CF3  8B DA                     MOV EBX,EDX
00481CF5  E8 F6 C7 2A 00            CALL 0x0072e4f0
00481CFA  2B C7                     SUB EAX,EDI
00481CFC  1B D3                     SBB EDX,EBX
00481CFE  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
00481D04  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
00481D0A  0F 88 EE 02 00 00         JS 0x00481ffe
00481D10  7F 08                     JG 0x00481d1a
00481D12  85 C0                     TEST EAX,EAX
00481D14  0F 82 E4 02 00 00         JC 0x00481ffe
LAB_00481d1a:
00481D1A  0B C2                     OR EAX,EDX
00481D1C  0F 85 E1 00 00 00         JNZ 0x00481e03
00481D22  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00481D25  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00481D28  6A FF                     PUSH -0x1
00481D2A  6A FE                     PUSH -0x2
00481D2C  52                        PUSH EDX
00481D2D  50                        PUSH EAX
00481D2E  E8 BD C7 2A 00            CALL 0x0072e4f0
00481D33  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00481D36  52                        PUSH EDX
00481D37  50                        PUSH EAX
00481D38  56                        PUSH ESI
00481D39  51                        PUSH ECX
00481D3A  E8 01 C7 2A 00            CALL 0x0072e440
00481D3F  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
00481D43  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00481D46  2B C1                     SUB EAX,ECX
00481D48  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00481D4B  99                        CDQ
00481D4C  8B F8                     MOV EDI,EAX
00481D4E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00481D51  50                        PUSH EAX
00481D52  51                        PUSH ECX
00481D53  52                        PUSH EDX
00481D54  57                        PUSH EDI
00481D55  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00481D58  E8 93 C7 2A 00            CALL 0x0072e4f0
00481D5D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481D60  51                        PUSH ECX
00481D61  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00481D64  51                        PUSH ECX
00481D65  52                        PUSH EDX
00481D66  50                        PUSH EAX
00481D67  E8 D4 C6 2A 00            CALL 0x0072e440
00481D6C  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00481D6F  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
00481D72  8B F0                     MOV ESI,EAX
00481D74  52                        PUSH EDX
00481D75  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00481D79  03 F0                     ADD ESI,EAX
00481D7B  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00481D7E  53                        PUSH EBX
00481D7F  50                        PUSH EAX
00481D80  57                        PUSH EDI
00481D81  E8 6A C7 2A 00            CALL 0x0072e4f0
00481D86  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481D89  51                        PUSH ECX
00481D8A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00481D8D  51                        PUSH ECX
00481D8E  52                        PUSH EDX
00481D8F  50                        PUSH EAX
00481D90  E8 AB C6 2A 00            CALL 0x0072e440
00481D95  0F BF 55 18               MOVSX EDX,word ptr [EBP + 0x18]
00481D99  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00481D9C  8B C8                     MOV ECX,EAX
00481D9E  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
00481DA2  2B D6                     SUB EDX,ESI
00481DA4  03 C8                     ADD ECX,EAX
00481DA6  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00481DAA  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00481DAD  2B C1                     SUB EAX,ECX
00481DAF  0F BF 55 14               MOVSX EDX,word ptr [EBP + 0x14]
00481DB3  0F AF C0                  IMUL EAX,EAX
00481DB6  2B D7                     SUB EDX,EDI
00481DB8  8B FA                     MOV EDI,EDX
00481DBA  0F AF FA                  IMUL EDI,EDX
00481DBD  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00481DC0  03 C7                     ADD EAX,EDI
00481DC2  8B FA                     MOV EDI,EDX
00481DC4  0F AF FA                  IMUL EDI,EDX
00481DC7  03 C7                     ADD EAX,EDI
00481DC9  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00481DCC  99                        CDQ
00481DCD  3B D7                     CMP EDX,EDI
00481DCF  0F 8F 2F 02 00 00         JG 0x00482004
00481DD5  7C 09                     JL 0x00481de0
00481DD7  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00481DDA  0F 83 24 02 00 00         JNC 0x00482004
LAB_00481de0:
00481DE0  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00481DE3  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00481DE6  8B FA                     MOV EDI,EDX
00481DE8  66 8B 55 BC               MOV DX,word ptr [EBP + -0x44]
00481DEC  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00481DEF  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00481DF3  66 89 75 FA               MOV word ptr [EBP + -0x6],SI
00481DF7  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00481DFB  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00481DFE  E9 01 02 00 00            JMP 0x00482004
LAB_00481e03:
00481E03  DF AD 64 FF FF FF         FILD qword ptr [EBP + 0xffffff64]
00481E09  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00481E0C  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00481E0F  6A 00                     PUSH 0x0
00481E11  6A 02                     PUSH 0x2
00481E13  D9 FA                     FSQRT
00481E15  51                        PUSH ECX
00481E16  52                        PUSH EDX
00481E17  DD 9D 6C FF FF FF         FSTP double ptr [EBP + 0xffffff6c]
00481E1D  E8 CE C6 2A 00            CALL 0x0072e4f0
00481E22  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00481E28  89 95 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EDX
00481E2E  DF AD 10 FF FF FF         FILD qword ptr [EBP + 0xffffff10]
00481E34  DD 9D 58 FF FF FF         FSTP double ptr [EBP + 0xffffff58]
00481E3A  DF 6D A8                  FILD qword ptr [EBP + -0x58]
00481E3D  DC AD 6C FF FF FF         FSUBR double ptr [EBP + 0xffffff6c]
00481E43  DC B5 58 FF FF FF         FDIV double ptr [EBP + 0xffffff58]
00481E49  E8 3A C4 2A 00            CALL 0x0072e288
00481E4E  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
00481E52  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00481E55  2B C1                     SUB EAX,ECX
00481E57  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00481E5A  99                        CDQ
00481E5B  8B F8                     MOV EDI,EAX
00481E5D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00481E60  50                        PUSH EAX
00481E61  51                        PUSH ECX
00481E62  52                        PUSH EDX
00481E63  57                        PUSH EDI
00481E64  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00481E67  E8 84 C6 2A 00            CALL 0x0072e4f0
00481E6C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481E6F  51                        PUSH ECX
00481E70  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00481E73  51                        PUSH ECX
00481E74  52                        PUSH EDX
00481E75  50                        PUSH EAX
00481E76  E8 C5 C5 2A 00            CALL 0x0072e440
00481E7B  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
00481E7F  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00481E82  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
00481E85  03 C1                     ADD EAX,ECX
00481E87  52                        PUSH EDX
00481E88  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00481E8B  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00481E8E  53                        PUSH EBX
00481E8F  50                        PUSH EAX
00481E90  57                        PUSH EDI
00481E91  E8 5A C6 2A 00            CALL 0x0072e4f0
00481E96  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481E99  51                        PUSH ECX
00481E9A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00481E9D  51                        PUSH ECX
00481E9E  52                        PUSH EDX
00481E9F  50                        PUSH EAX
00481EA0  E8 9B C5 2A 00            CALL 0x0072e440
00481EA5  0F BF 55 18               MOVSX EDX,word ptr [EBP + 0x18]
00481EA9  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00481EAC  8B C8                     MOV ECX,EAX
00481EAE  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
00481EB2  2B D7                     SUB EDX,EDI
00481EB4  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00481EB7  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00481EBA  03 C8                     ADD ECX,EAX
00481EBC  0F BF 55 14               MOVSX EDX,word ptr [EBP + 0x14]
00481EC0  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00481EC4  2B D7                     SUB EDX,EDI
00481EC6  2B C1                     SUB EAX,ECX
00481EC8  8B FA                     MOV EDI,EDX
00481ECA  0F AF C0                  IMUL EAX,EAX
00481ECD  0F AF FA                  IMUL EDI,EDX
00481ED0  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00481ED3  03 C7                     ADD EAX,EDI
00481ED5  8B FA                     MOV EDI,EDX
00481ED7  0F AF FA                  IMUL EDI,EDX
00481EDA  03 C7                     ADD EAX,EDI
00481EDC  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00481EDF  99                        CDQ
00481EE0  3B D7                     CMP EDX,EDI
00481EE2  7F 29                     JG 0x00481f0d
00481EE4  7C 05                     JL 0x00481eeb
00481EE6  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00481EE9  73 22                     JNC 0x00481f0d
LAB_00481eeb:
00481EEB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00481EEE  66 8B 45 D4               MOV AX,word ptr [EBP + -0x2c]
00481EF2  8B FA                     MOV EDI,EDX
00481EF4  66 8B 55 BC               MOV DX,word ptr [EBP + -0x44]
00481EF8  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00481EFC  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00481EFF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00481F02  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00481F06  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00481F0A  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_00481f0d:
00481F0D  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00481F10  F7 D8                     NEG EAX
00481F12  83 D6 00                  ADC ESI,0x0
00481F15  89 85 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EAX
00481F1B  F7 DE                     NEG ESI
00481F1D  89 B5 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],ESI
00481F23  DF AD 08 FF FF FF         FILD qword ptr [EBP + 0xffffff08]
00481F29  DC A5 6C FF FF FF         FSUB double ptr [EBP + 0xffffff6c]
00481F2F  DC B5 58 FF FF FF         FDIV double ptr [EBP + 0xffffff58]
00481F35  E8 4E C3 2A 00            CALL 0x0072e288
00481F3A  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
00481F3E  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00481F41  2B C1                     SUB EAX,ECX
00481F43  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00481F46  51                        PUSH ECX
00481F47  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00481F4A  99                        CDQ
00481F4B  51                        PUSH ECX
00481F4C  52                        PUSH EDX
00481F4D  50                        PUSH EAX
00481F4E  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00481F54  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00481F57  E8 94 C5 2A 00            CALL 0x0072e4f0
00481F5C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481F5F  51                        PUSH ECX
00481F60  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00481F63  51                        PUSH ECX
00481F64  52                        PUSH EDX
00481F65  50                        PUSH EAX
00481F66  E8 D5 C4 2A 00            CALL 0x0072e440
00481F6B  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00481F6E  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00481F74  8B F0                     MOV ESI,EAX
00481F76  52                        PUSH EDX
00481F77  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00481F7B  03 F0                     ADD ESI,EAX
00481F7D  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00481F80  53                        PUSH EBX
00481F81  50                        PUSH EAX
00481F82  51                        PUSH ECX
00481F83  E8 68 C5 2A 00            CALL 0x0072e4f0
00481F88  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00481F8B  51                        PUSH ECX
00481F8C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00481F8F  51                        PUSH ECX
00481F90  52                        PUSH EDX
00481F91  50                        PUSH EAX
00481F92  E8 A9 C4 2A 00            CALL 0x0072e440
00481F97  8B C8                     MOV ECX,EAX
00481F99  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00481F9C  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
00481FA0  03 C8                     ADD ECX,EAX
00481FA2  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00481FA6  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00481FA9  2B C1                     SUB EAX,ECX
00481FAB  0F BF 4D 18               MOVSX ECX,word ptr [EBP + 0x18]
00481FAF  0F AF C0                  IMUL EAX,EAX
00481FB2  2B CE                     SUB ECX,ESI
00481FB4  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00481FB7  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
00481FBB  2B CA                     SUB ECX,EDX
00481FBD  8B D1                     MOV EDX,ECX
00481FBF  0F AF D1                  IMUL EDX,ECX
00481FC2  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00481FC5  03 C2                     ADD EAX,EDX
00481FC7  8B D1                     MOV EDX,ECX
00481FC9  0F AF D1                  IMUL EDX,ECX
00481FCC  03 C2                     ADD EAX,EDX
00481FCE  99                        CDQ
00481FCF  3B D7                     CMP EDX,EDI
00481FD1  7F 31                     JG 0x00482004
00481FD3  7C 05                     JL 0x00481fda
00481FD5  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00481FD8  73 2A                     JNC 0x00482004
LAB_00481fda:
00481FDA  66 8B 4D B8               MOV CX,word ptr [EBP + -0x48]
00481FDE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00481FE1  66 8B 45 BC               MOV AX,word ptr [EBP + -0x44]
00481FE5  8B FA                     MOV EDI,EDX
00481FE7  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00481FEA  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00481FED  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00481FF1  66 89 75 FA               MOV word ptr [EBP + -0x6],SI
00481FF5  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00481FF9  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00481FFC  EB 06                     JMP 0x00482004
LAB_00481ffe:
00481FFE  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_00482001:
00482001  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
LAB_00482004:
00482004  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00482007  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
0048200A  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00482010  33 C9                     XOR ECX,ECX
00482012  8A 8A 81 02 00 00         MOV CL,byte ptr [EDX + 0x281]
00482018  46                        INC ESI
00482019  83 C0 08                  ADD EAX,0x8
0048201C  3B F1                     CMP ESI,ECX
0048201E  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
00482021  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
00482027  0F 8C 98 F6 FF FF         JL 0x004816c5
0048202D  83 7D C0 FF               CMP dword ptr [EBP + -0x40],-0x1
00482031  0F 84 07 01 00 00         JZ 0x0048213e
00482037  8B F2                     MOV ESI,EDX
00482039  66 BA 68 01               MOV DX,0x168
0048203D  66 2B 56 6C               SUB DX,word ptr [ESI + 0x6c]
00482041  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00482045  66 2B 4D FA               SUB CX,word ptr [EBP + -0x6]
00482049  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0048204D  66 29 45 F8               SUB word ptr [EBP + -0x8],AX
00482051  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
00482055  66 2B 46 45               SUB AX,word ptr [ESI + 0x45]
00482059  52                        PUSH EDX
0048205A  83 EC 08                  SUB ESP,0x8
0048205D  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
00482061  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00482064  8B CC                     MOV ECX,ESP
00482066  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0048206A  89 11                     MOV dword ptr [ECX],EDX
0048206C  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00482070  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
00482076  50                        PUSH EAX
00482077  8B CE                     MOV ECX,ESI
00482079  E8 AE 13 F8 FF            CALL 0x0040342c
0048207E  8B 08                     MOV ECX,dword ptr [EAX]
00482080  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00482083  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00482086  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0048208A  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0048208E  8B BC 9E 82 02 00 00      MOV EDI,dword ptr [ESI + EBX*0x4 + 0x282]
00482095  85 FF                     TEST EDI,EDI
00482097  75 31                     JNZ 0x004820ca
00482099  6A 01                     PUSH 0x1
0048209B  6A 06                     PUSH 0x6
0048209D  6A 01                     PUSH 0x1
0048209F  57                        PUSH EDI
004820A0  E8 EB C1 22 00            CALL 0x006ae290
004820A5  8D 4D F8                  LEA ECX,[EBP + -0x8]
004820A8  89 84 9E 82 02 00 00      MOV dword ptr [ESI + EBX*0x4 + 0x282],EAX
004820AF  51                        PUSH ECX
004820B0  50                        PUSH EAX
004820B1  E8 0A C1 22 00            CALL 0x006ae1c0
004820B6  C1 E0 10                  SHL EAX,0x10
004820B9  81 E3 FF FF 00 00         AND EBX,0xffff
004820BF  0B C3                     OR EAX,EBX
004820C1  5F                        POP EDI
004820C2  5E                        POP ESI
004820C3  5B                        POP EBX
004820C4  8B E5                     MOV ESP,EBP
004820C6  5D                        POP EBP
004820C7  C2 18 00                  RET 0x18
LAB_004820ca:
004820CA  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
004820CD  C7 45 08 FF FF FF FF      MOV dword ptr [EBP + 0x8],0xffffffff
004820D4  4E                        DEC ESI
004820D5  78 23                     JS 0x004820fa
LAB_004820d7:
004820D7  8D 55 D8                  LEA EDX,[EBP + -0x28]
004820DA  8B CF                     MOV ECX,EDI
004820DC  52                        PUSH EDX
004820DD  8B D6                     MOV EDX,ESI
004820DF  E8 8C AB 22 00            CALL 0x006acc70
004820E4  66 81 7D D8 FF 7F         CMP word ptr [EBP + -0x28],0x7fff
004820EA  75 03                     JNZ 0x004820ef
004820EC  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_004820ef:
004820EF  4E                        DEC ESI
004820F0  79 E5                     JNS 0x004820d7
004820F2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004820F5  83 FE FF                  CMP ESI,-0x1
004820F8  75 23                     JNZ 0x0048211d
LAB_004820fa:
004820FA  8D 45 F8                  LEA EAX,[EBP + -0x8]
004820FD  50                        PUSH EAX
004820FE  57                        PUSH EDI
004820FF  E8 BC C0 22 00            CALL 0x006ae1c0
00482104  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00482107  8B F0                     MOV ESI,EAX
00482109  C1 E0 10                  SHL EAX,0x10
0048210C  81 E3 FF FF 00 00         AND EBX,0xffff
00482112  0B C3                     OR EAX,EBX
00482114  5F                        POP EDI
00482115  5E                        POP ESI
00482116  5B                        POP EBX
00482117  8B E5                     MOV ESP,EBP
00482119  5D                        POP EBP
0048211A  C2 18 00                  RET 0x18
LAB_0048211d:
0048211D  8D 4D F8                  LEA ECX,[EBP + -0x8]
00482120  51                        PUSH ECX
00482121  56                        PUSH ESI
00482122  57                        PUSH EDI
00482123  E8 18 C0 22 00            CALL 0x006ae140
00482128  8B C6                     MOV EAX,ESI
0048212A  81 E3 FF FF 00 00         AND EBX,0xffff
00482130  C1 E0 10                  SHL EAX,0x10
00482133  0B C3                     OR EAX,EBX
00482135  5F                        POP EDI
00482136  5E                        POP ESI
00482137  5B                        POP EBX
00482138  8B E5                     MOV ESP,EBP
0048213A  5D                        POP EBP
0048213B  C2 18 00                  RET 0x18
LAB_0048213e:
0048213E  5F                        POP EDI
0048213F  5E                        POP ESI
00482140  83 C8 FF                  OR EAX,0xffffffff
00482143  5B                        POP EBX
00482144  8B E5                     MOV ESP,EBP
00482146  5D                        POP EBP
00482147  C2 18 00                  RET 0x18
