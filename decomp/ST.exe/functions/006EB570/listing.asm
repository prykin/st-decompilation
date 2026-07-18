FUN_006eb570:
006EB570  55                        PUSH EBP
006EB571  8B EC                     MOV EBP,ESP
006EB573  6A FF                     PUSH -0x1
006EB575  68 D8 E1 79 00            PUSH 0x79e1d8
006EB57A  68 64 D9 72 00            PUSH 0x72d964
006EB57F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006EB585  50                        PUSH EAX
006EB586  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006EB58D  81 EC 9C 00 00 00         SUB ESP,0x9c
006EB593  53                        PUSH EBX
006EB594  56                        PUSH ESI
006EB595  57                        PUSH EDI
006EB596  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006EB599  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006EB59C  8B 06                     MOV EAX,dword ptr [ESI]
006EB59E  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
006EB5A1  89 9D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EBX
006EB5A7  33 D2                     XOR EDX,EDX
006EB5A9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006EB5AC  39 56 18                  CMP dword ptr [ESI + 0x18],EDX
006EB5AF  0F 84 AB 07 00 00         JZ 0x006ebd60
006EB5B5  39 96 66 04 00 00         CMP dword ptr [ESI + 0x466],EDX
006EB5BB  0F 84 9F 07 00 00         JZ 0x006ebd60
006EB5C1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006EB5C4  3B FA                     CMP EDI,EDX
006EB5C6  74 1B                     JZ 0x006eb5e3
006EB5C8  8B C7                     MOV EAX,EDI
006EB5CA  8B 08                     MOV ECX,dword ptr [EAX]
006EB5CC  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006EB5CF  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006EB5D2  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006EB5D5  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006EB5D8  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006EB5DB  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006EB5DE  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006EB5E1  EB 18                     JMP 0x006eb5fb
LAB_006eb5e3:
006EB5E3  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006EB5E6  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006EB5E9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006EB5EC  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006EB5EF  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006EB5F2  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006EB5F5  8D 7D D0                  LEA EDI,[EBP + -0x30]
006EB5F8  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006eb5fb:
006EB5FB  8D 86 8E 04 00 00         LEA EAX,[ESI + 0x48e]
006EB601  50                        PUSH EAX
006EB602  8D 55 D0                  LEA EDX,[EBP + -0x30]
006EB605  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006EB608  E8 53 4E FC FF            CALL 0x006b0460
006EB60D  85 C0                     TEST EAX,EAX
006EB60F  75 33                     JNZ 0x006eb644
006EB611  8B 8B 78 04 00 00         MOV ECX,dword ptr [EBX + 0x478]
006EB617  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006EB61A  8B 17                     MOV EDX,dword ptr [EDI]
006EB61C  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
006EB622  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
006EB625  52                        PUSH EDX
006EB626  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006EB629  52                        PUSH EDX
006EB62A  51                        PUSH ECX
006EB62B  8B F8                     MOV EDI,EAX
006EB62D  0F AF F9                  IMUL EDI,ECX
006EB630  03 BB 74 04 00 00         ADD EDI,dword ptr [EBX + 0x474]
006EB636  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
006EB63C  03 FA                     ADD EDI,EDX
006EB63E  57                        PUSH EDI
006EB63F  E9 96 07 00 00            JMP 0x006ebdda
LAB_006eb644:
006EB644  8B 7D 94                  MOV EDI,dword ptr [EBP + -0x6c]
006EB647  2B BE 76 04 00 00         SUB EDI,dword ptr [ESI + 0x476]
006EB64D  2B BE 8E 04 00 00         SUB EDI,dword ptr [ESI + 0x48e]
006EB653  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
006EB656  8B 8E E2 04 00 00         MOV ECX,dword ptr [ESI + 0x4e2]
006EB65C  8B C7                     MOV EAX,EDI
006EB65E  99                        CDQ
006EB65F  F7 F9                     IDIV ECX
006EB661  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EB664  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006EB667  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006EB66B  99                        CDQ
006EB66C  F7 F9                     IDIV ECX
006EB66E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006EB671  0F AF 4D B8               IMUL ECX,dword ptr [EBP + -0x48]
006EB675  2B F9                     SUB EDI,ECX
006EB677  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
006EB67A  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
006EB67D  2B BE 92 04 00 00         SUB EDI,dword ptr [ESI + 0x492]
006EB683  2B BE 7A 04 00 00         SUB EDI,dword ptr [ESI + 0x47a]
006EB689  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
006EB68C  8B 8E E6 04 00 00         MOV ECX,dword ptr [ESI + 0x4e6]
006EB692  8B C7                     MOV EAX,EDI
006EB694  99                        CDQ
006EB695  F7 F9                     IDIV ECX
006EB697  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
006EB69A  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006EB69D  8D 44 3A FF               LEA EAX,[EDX + EDI*0x1 + -0x1]
006EB6A1  99                        CDQ
006EB6A2  F7 F9                     IDIV ECX
006EB6A4  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006EB6AA  8B C1                     MOV EAX,ECX
006EB6AC  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006EB6AF  0F AF C2                  IMUL EAX,EDX
006EB6B2  2B F8                     SUB EDI,EAX
006EB6B4  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
006EB6B7  8B 86 7E 04 00 00         MOV EAX,dword ptr [ESI + 0x47e]
006EB6BD  01 45 B8                  ADD dword ptr [EBP + -0x48],EAX
006EB6C0  01 45 AC                  ADD dword ptr [EBP + -0x54],EAX
006EB6C3  8B 86 82 04 00 00         MOV EAX,dword ptr [ESI + 0x482]
006EB6C9  03 D0                     ADD EDX,EAX
006EB6CB  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
006EB6CE  01 85 74 FF FF FF         ADD dword ptr [EBP + 0xffffff74],EAX
006EB6D4  8B BE B2 04 00 00         MOV EDI,dword ptr [ESI + 0x4b2]
006EB6DA  0F AF FA                  IMUL EDI,EDX
006EB6DD  03 7E 18                  ADD EDI,dword ptr [ESI + 0x18]
006EB6E0  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
006EB6E6  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006EB6E9  80 3C 17 FF               CMP byte ptr [EDI + EDX*0x1],0xff
006EB6ED  0F 85 E0 00 00 00         JNZ 0x006eb7d3
006EB6F3  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006EB6F6  80 3C 07 FF               CMP byte ptr [EDI + EAX*0x1],0xff
006EB6FA  0F 85 D3 00 00 00         JNZ 0x006eb7d3
006EB700  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006EB703  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006EB706  2B 4D A8                  SUB ECX,dword ptr [EBP + -0x58]
006EB709  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
006EB70F  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006EB712  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_006eb715:
006EB715  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006EB718  3B 85 74 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff74]
006EB71E  7F 43                     JG 0x006eb763
006EB720  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006EB723  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006EB726  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
LAB_006eb729:
006EB729  3B C1                     CMP EAX,ECX
006EB72B  7F 10                     JG 0x006eb73d
006EB72D  80 3C 38 FF               CMP byte ptr [EAX + EDI*0x1],0xff
006EB731  75 06                     JNZ 0x006eb739
006EB733  40                        INC EAX
006EB734  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006EB737  EB F0                     JMP 0x006eb729
LAB_006eb739:
006EB739  3B C1                     CMP EAX,ECX
006EB73B  7E 26                     JLE 0x006eb763
LAB_006eb73d:
006EB73D  03 95 68 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff68]
006EB743  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006EB746  8B 8E E6 04 00 00         MOV ECX,dword ptr [ESI + 0x4e6]
006EB74C  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
006EB752  03 BE B2 04 00 00         ADD EDI,dword ptr [ESI + 0x4b2]
006EB758  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
006EB75E  FF 45 BC                  INC dword ptr [EBP + -0x44]
006EB761  EB B2                     JMP 0x006eb715
LAB_006eb763:
006EB763  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006EB766  3B 85 74 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff74]
006EB76C  7E 49                     JLE 0x006eb7b7
006EB76E  8B 93 78 04 00 00         MOV EDX,dword ptr [EBX + 0x478]
006EB774  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EB777  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006EB77A  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
006EB780  8B 01                     MOV EAX,dword ptr [ECX]
006EB782  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
006EB788  8B 86 EE 04 00 00         MOV EAX,dword ptr [ESI + 0x4ee]
006EB78E  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
006EB791  57                        PUSH EDI
006EB792  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006EB795  51                        PUSH ECX
006EB796  52                        PUSH EDX
006EB797  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
006EB79D  8B F9                     MOV EDI,ECX
006EB79F  0F AF FA                  IMUL EDI,EDX
006EB7A2  03 BB 74 04 00 00         ADD EDI,dword ptr [EBX + 0x474]
006EB7A8  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
006EB7AE  03 FA                     ADD EDI,EDX
006EB7B0  57                        PUSH EDI
006EB7B1  50                        PUSH EAX
006EB7B2  E9 2A 06 00 00            JMP 0x006ebde1
LAB_006eb7b7:
006EB7B7  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006EB7BA  3B D0                     CMP EDX,EAX
006EB7BC  7E 15                     JLE 0x006eb7d3
006EB7BE  2B C2                     SUB EAX,EDX
006EB7C0  01 45 A0                  ADD dword ptr [EBP + -0x60],EAX
006EB7C3  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
006EB7C6  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006EB7C9  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
006EB7CC  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
LAB_006eb7d3:
006EB7D3  8B 8E B2 04 00 00         MOV ECX,dword ptr [ESI + 0x4b2]
006EB7D9  0F AF 8D 74 FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff74]
006EB7E0  03 4E 18                  ADD ECX,dword ptr [ESI + 0x18]
006EB7E3  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
006EB7E6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006EB7E9  80 3C 01 FF               CMP byte ptr [ECX + EAX*0x1],0xff
006EB7ED  0F 85 AC 00 00 00         JNZ 0x006eb89f
006EB7F3  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006EB7F6  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
006EB7FA  0F 85 9F 00 00 00         JNZ 0x006eb89f
006EB800  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006EB803  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006EB806  03 C2                     ADD EAX,EDX
006EB808  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006EB80B  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006EB811  2B 96 82 04 00 00         SUB EDX,dword ptr [ESI + 0x482]
006EB817  0F AF 96 E6 04 00 00      IMUL EDX,dword ptr [ESI + 0x4e6]
006EB81E  2B C2                     SUB EAX,EDX
006EB820  2B 86 92 04 00 00         SUB EAX,dword ptr [ESI + 0x492]
006EB826  2B 86 7A 04 00 00         SUB EAX,dword ptr [ESI + 0x47a]
006EB82C  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006EB832  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006EB835  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
LAB_006eb83b:
006EB83B  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006EB83E  8B D1                     MOV EDX,ECX
006EB840  3B 55 88                  CMP EDX,dword ptr [EBP + -0x78]
006EB843  7E 3A                     JLE 0x006eb87f
006EB845  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
LAB_006eb848:
006EB848  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006EB84B  3B 4D AC                  CMP ECX,dword ptr [EBP + -0x54]
006EB84E  7F 11                     JG 0x006eb861
006EB850  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006EB853  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
006EB857  75 03                     JNZ 0x006eb85c
006EB859  41                        INC ECX
006EB85A  EB EC                     JMP 0x006eb848
LAB_006eb85c:
006EB85C  3B 4D AC                  CMP ECX,dword ptr [EBP + -0x54]
006EB85F  7E 1E                     JLE 0x006eb87f
LAB_006eb861:
006EB861  29 45 C8                  SUB dword ptr [EBP + -0x38],EAX
006EB864  8B 86 E6 04 00 00         MOV EAX,dword ptr [ESI + 0x4e6]
006EB86A  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006EB870  8B 8E B2 04 00 00         MOV ECX,dword ptr [ESI + 0x4b2]
006EB876  29 4D CC                  SUB dword ptr [EBP + -0x34],ECX
006EB879  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006EB87C  49                        DEC ECX
006EB87D  EB BC                     JMP 0x006eb83b
LAB_006eb87f:
006EB87F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006EB882  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006EB885  03 D1                     ADD EDX,ECX
006EB887  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006EB88A  3B C2                     CMP EAX,EDX
006EB88C  7D 0E                     JGE 0x006eb89c
006EB88E  2B C1                     SUB EAX,ECX
006EB890  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006EB893  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006EB896  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
LAB_006eb89c:
006EB89C  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
LAB_006eb89f:
006EB89F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006EB8A2  80 3C 17 FF               CMP byte ptr [EDI + EDX*0x1],0xff
006EB8A6  0F 85 93 00 00 00         JNZ 0x006eb93f
006EB8AC  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
006EB8B0  0F 85 89 00 00 00         JNZ 0x006eb93f
006EB8B6  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006EB8B9  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006EB8BC  8B 8E E2 04 00 00         MOV ECX,dword ptr [ESI + 0x4e2]
006EB8C2  2B 4D 80                  SUB ECX,dword ptr [EBP + -0x80]
006EB8C5  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006EB8CB  8B CA                     MOV ECX,EDX
LAB_006eb8cd:
006EB8CD  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006EB8D0  3B 4D AC                  CMP ECX,dword ptr [EBP + -0x54]
006EB8D3  7F 4B                     JG 0x006eb920
006EB8D5  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
006EB8D8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EB8DB  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
LAB_006eb8de:
006EB8DE  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006EB8E1  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006EB8E7  39 55 BC                  CMP dword ptr [EBP + -0x44],EDX
006EB8EA  7F 14                     JG 0x006eb900
006EB8EC  80 38 FF                  CMP byte ptr [EAX],0xff
006EB8EF  75 0F                     JNZ 0x006eb900
006EB8F1  03 86 B2 04 00 00         ADD EAX,dword ptr [ESI + 0x4b2]
006EB8F7  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EB8FA  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006EB8FD  42                        INC EDX
006EB8FE  EB DE                     JMP 0x006eb8de
LAB_006eb900:
006EB900  39 55 BC                  CMP dword ptr [EBP + -0x44],EDX
006EB903  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006EB906  7E 18                     JLE 0x006eb920
006EB908  03 85 78 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff78]
006EB90E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006EB911  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
006EB917  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
006EB91D  41                        INC ECX
006EB91E  EB AD                     JMP 0x006eb8cd
LAB_006eb920:
006EB920  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EB923  3B C2                     CMP EAX,EDX
006EB925  7E 15                     JLE 0x006eb93c
006EB927  2B D0                     SUB EDX,EAX
006EB929  01 55 9C                  ADD dword ptr [EBP + -0x64],EDX
006EB92C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006EB92F  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006EB932  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006EB935  C7 45 80 00 00 00 00      MOV dword ptr [EBP + -0x80],0x0
LAB_006eb93c:
006EB93C  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
LAB_006eb93f:
006EB93F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006EB942  80 3C 17 FF               CMP byte ptr [EDI + EDX*0x1],0xff
006EB946  0F 85 A1 00 00 00         JNZ 0x006eb9ed
006EB94C  8B C2                     MOV EAX,EDX
006EB94E  80 3C 01 FF               CMP byte ptr [ECX + EAX*0x1],0xff
006EB952  0F 85 95 00 00 00         JNZ 0x006eb9ed
006EB958  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006EB95B  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EB95E  03 CA                     ADD ECX,EDX
006EB960  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006EB963  8B D0                     MOV EDX,EAX
006EB965  2B 96 7E 04 00 00         SUB EDX,dword ptr [ESI + 0x47e]
006EB96B  0F AF 96 E2 04 00 00      IMUL EDX,dword ptr [ESI + 0x4e2]
006EB972  2B CA                     SUB ECX,EDX
006EB974  2B 8E 8E 04 00 00         SUB ECX,dword ptr [ESI + 0x48e]
006EB97A  2B 8E 76 04 00 00         SUB ECX,dword ptr [ESI + 0x476]
006EB980  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
LAB_006eb986:
006EB986  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006EB989  3B 45 B8                  CMP EAX,dword ptr [EBP + -0x48]
006EB98C  7E 47                     JLE 0x006eb9d5
006EB98E  03 C7                     ADD EAX,EDI
006EB990  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EB993  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
LAB_006eb996:
006EB996  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006EB999  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006EB99F  39 55 BC                  CMP dword ptr [EBP + -0x44],EDX
006EB9A2  7F 14                     JG 0x006eb9b8
006EB9A4  80 38 FF                  CMP byte ptr [EAX],0xff
006EB9A7  75 0F                     JNZ 0x006eb9b8
006EB9A9  03 86 B2 04 00 00         ADD EAX,dword ptr [ESI + 0x4b2]
006EB9AF  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EB9B2  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006EB9B5  42                        INC EDX
006EB9B6  EB DE                     JMP 0x006eb996
LAB_006eb9b8:
006EB9B8  39 55 BC                  CMP dword ptr [EBP + -0x44],EDX
006EB9BB  7E 15                     JLE 0x006eb9d2
006EB9BD  29 4D E0                  SUB dword ptr [EBP + -0x20],ECX
006EB9C0  8B 8E E2 04 00 00         MOV ECX,dword ptr [ESI + 0x4e2]
006EB9C6  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006EB9CC  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006EB9CF  48                        DEC EAX
006EB9D0  EB B4                     JMP 0x006eb986
LAB_006eb9d2:
006EB9D2  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
LAB_006eb9d5:
006EB9D5  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006EB9D8  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006EB9DB  03 D1                     ADD EDX,ECX
006EB9DD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EB9E0  3B CA                     CMP ECX,EDX
006EB9E2  7D 09                     JGE 0x006eb9ed
006EB9E4  2B 4D 94                  SUB ECX,dword ptr [EBP + -0x6c]
006EB9E7  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
006EB9EA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_006eb9ed:
006EB9ED  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006EB9F0  3B 45 D4                  CMP EAX,dword ptr [EBP + -0x2c]
006EB9F3  7E 3B                     JLE 0x006eba30
006EB9F5  8B 83 78 04 00 00         MOV EAX,dword ptr [EBX + 0x478]
006EB9FB  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBA01  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006EBA04  2B 55 D4                  SUB EDX,dword ptr [EBP + -0x2c]
006EBA07  52                        PUSH EDX
006EBA08  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006EBA0B  52                        PUSH EDX
006EBA0C  50                        PUSH EAX
006EBA0D  0F AF 45 D4               IMUL EAX,dword ptr [EBP + -0x2c]
006EBA11  03 83 74 04 00 00         ADD EAX,dword ptr [EBX + 0x474]
006EBA17  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006EBA1A  03 C2                     ADD EAX,EDX
006EBA1C  50                        PUSH EAX
006EBA1D  51                        PUSH ECX
006EBA1E  0F AF 4D D4               IMUL ECX,dword ptr [EBP + -0x2c]
006EBA22  03 8E EA 04 00 00         ADD ECX,dword ptr [ESI + 0x4ea]
006EBA28  03 CA                     ADD ECX,EDX
006EBA2A  51                        PUSH ECX
006EBA2B  E8 30 30 FE FF            CALL 0x006cea60
LAB_006eba30:
006EBA30  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006EBA33  2B 4D A0                  SUB ECX,dword ptr [EBP + -0x60]
006EBA36  2B 4D 98                  SUB ECX,dword ptr [EBP + -0x68]
006EBA39  03 4D D4                  ADD ECX,dword ptr [EBP + -0x2c]
006EBA3C  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
006EBA42  85 C9                     TEST ECX,ECX
006EBA44  7E 3F                     JLE 0x006eba85
006EBA46  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006EBA49  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006EBA4C  03 C2                     ADD EAX,EDX
006EBA4E  51                        PUSH ECX
006EBA4F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006EBA52  51                        PUSH ECX
006EBA53  8B 8B 78 04 00 00         MOV ECX,dword ptr [EBX + 0x478]
006EBA59  51                        PUSH ECX
006EBA5A  8B D0                     MOV EDX,EAX
006EBA5C  0F AF D1                  IMUL EDX,ECX
006EBA5F  03 93 74 04 00 00         ADD EDX,dword ptr [EBX + 0x474]
006EBA65  8B CA                     MOV ECX,EDX
006EBA67  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006EBA6A  03 CA                     ADD ECX,EDX
006EBA6C  51                        PUSH ECX
006EBA6D  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBA73  51                        PUSH ECX
006EBA74  0F AF C1                  IMUL EAX,ECX
006EBA77  03 86 EA 04 00 00         ADD EAX,dword ptr [ESI + 0x4ea]
006EBA7D  03 C2                     ADD EAX,EDX
006EBA7F  50                        PUSH EAX
006EBA80  E8 DB 2F FE FF            CALL 0x006cea60
LAB_006eba85:
006EBA85  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EBA88  3B 55 D0                  CMP EDX,dword ptr [EBP + -0x30]
006EBA8B  7E 3B                     JLE 0x006ebac8
006EBA8D  8B 83 78 04 00 00         MOV EAX,dword ptr [EBX + 0x478]
006EBA93  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBA99  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006EBA9C  52                        PUSH EDX
006EBA9D  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EBAA0  2B 55 D0                  SUB EDX,dword ptr [EBP + -0x30]
006EBAA3  52                        PUSH EDX
006EBAA4  50                        PUSH EAX
006EBAA5  0F AF 45 98               IMUL EAX,dword ptr [EBP + -0x68]
006EBAA9  03 83 74 04 00 00         ADD EAX,dword ptr [EBX + 0x474]
006EBAAF  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006EBAB2  03 C2                     ADD EAX,EDX
006EBAB4  50                        PUSH EAX
006EBAB5  51                        PUSH ECX
006EBAB6  0F AF 4D 98               IMUL ECX,dword ptr [EBP + -0x68]
006EBABA  03 8E EA 04 00 00         ADD ECX,dword ptr [ESI + 0x4ea]
006EBAC0  03 CA                     ADD ECX,EDX
006EBAC2  51                        PUSH ECX
006EBAC3  E8 98 2F FE FF            CALL 0x006cea60
LAB_006ebac8:
006EBAC8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006EBACB  2B 45 9C                  SUB EAX,dword ptr [EBP + -0x64]
006EBACE  2B 45 94                  SUB EAX,dword ptr [EBP + -0x6c]
006EBAD1  03 45 D0                  ADD EAX,dword ptr [EBP + -0x30]
006EBAD4  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006EBADA  85 C0                     TEST EAX,EAX
006EBADC  7E 41                     JLE 0x006ebb1f
006EBADE  8B 83 78 04 00 00         MOV EAX,dword ptr [EBX + 0x478]
006EBAE4  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBAEA  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006EBAED  52                        PUSH EDX
006EBAEE  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
006EBAF4  52                        PUSH EDX
006EBAF5  50                        PUSH EAX
006EBAF6  0F AF 45 98               IMUL EAX,dword ptr [EBP + -0x68]
006EBAFA  03 83 74 04 00 00         ADD EAX,dword ptr [EBX + 0x474]
006EBB00  03 45 9C                  ADD EAX,dword ptr [EBP + -0x64]
006EBB03  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EBB06  03 C2                     ADD EAX,EDX
006EBB08  50                        PUSH EAX
006EBB09  51                        PUSH ECX
006EBB0A  0F AF 4D 98               IMUL ECX,dword ptr [EBP + -0x68]
006EBB0E  03 8E EA 04 00 00         ADD ECX,dword ptr [ESI + 0x4ea]
006EBB14  03 4D 9C                  ADD ECX,dword ptr [EBP + -0x64]
006EBB17  03 CA                     ADD ECX,EDX
006EBB19  51                        PUSH ECX
006EBB1A  E8 41 2F FE FF            CALL 0x006cea60
LAB_006ebb1f:
006EBB1F  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
006EBB22  8B 86 E6 04 00 00         MOV EAX,dword ptr [ESI + 0x4e6]
006EBB28  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
006EBB2B  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006EBB31  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006EBB34  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006EBB37  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006EBB3A  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
LAB_006ebb3d:
006EBB3D  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006EBB40  3B 8D 74 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff74]
006EBB46  0F 8F A6 02 00 00         JG 0x006ebdf2
006EBB4C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006EBB4F  3B C1                     CMP EAX,ECX
006EBB51  7E 06                     JLE 0x006ebb59
006EBB53  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
LAB_006ebb59:
006EBB59  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006EBB5C  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006EBB5F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EBB62  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006EBB65  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006EBB68  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006EBB6B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006EBB6E  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
LAB_006ebb71:
006EBB71  8B 86 EE 04 00 00         MOV EAX,dword ptr [ESI + 0x4ee]
006EBB77  0F AF 45 C8               IMUL EAX,dword ptr [EBP + -0x38]
006EBB7B  03 86 EA 04 00 00         ADD EAX,dword ptr [ESI + 0x4ea]
006EBB81  03 C2                     ADD EAX,EDX
006EBB83  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006EBB89  8B 8B 78 04 00 00         MOV ECX,dword ptr [EBX + 0x478]
006EBB8F  0F AF 4D C8               IMUL ECX,dword ptr [EBP + -0x38]
006EBB93  03 8B 74 04 00 00         ADD ECX,dword ptr [EBX + 0x474]
006EBB99  03 CA                     ADD ECX,EDX
006EBB9B  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006EBB9E  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
006EBBA4  2B 55 B4                  SUB EDX,dword ptr [EBP + -0x4c]
006EBBA7  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
006EBBAD  33 D2                     XOR EDX,EDX
006EBBAF  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
006EBBB2  8A 14 3B                  MOV DL,byte ptr [EBX + EDI*0x1]
006EBBB5  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
006EBBBB  81 FA FF 00 00 00         CMP EDX,0xff
006EBBC1  74 78                     JZ 0x006ebc3b
006EBBC3  83 FA 20                  CMP EDX,0x20
006EBBC6  74 73                     JZ 0x006ebc3b
006EBBC8  85 D2                     TEST EDX,EDX
006EBBCA  74 6F                     JZ 0x006ebc3b
006EBBCC  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006EBBCF  39 95 78 FF FF FF         CMP dword ptr [EBP + 0xffffff78],EDX
006EBBD5  7E 06                     JLE 0x006ebbdd
006EBBD7  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
LAB_006ebbdd:
006EBBDD  8B 96 72 04 00 00         MOV EDX,dword ptr [ESI + 0x472]
006EBBE3  8B BE E2 04 00 00         MOV EDI,dword ptr [ESI + 0x4e2]
006EBBE9  0F AF 7D A8               IMUL EDI,dword ptr [EBP + -0x58]
006EBBED  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
006EBBF3  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
006EBBF6  03 D7                     ADD EDX,EDI
006EBBF8  03 55 B4                  ADD EDX,dword ptr [EBP + -0x4c]
006EBBFB  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006EBBFE  8B BE 54 01 00 00         MOV EDI,dword ptr [ESI + 0x154]
006EBC04  57                        PUSH EDI
006EBC05  8B BD 68 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff68]
006EBC0B  57                        PUSH EDI
006EBC0C  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
006EBC12  57                        PUSH EDI
006EBC13  8B 9E E2 04 00 00         MOV EBX,dword ptr [ESI + 0x4e2]
006EBC19  53                        PUSH EBX
006EBC1A  52                        PUSH EDX
006EBC1B  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
006EBC21  8B 93 78 04 00 00         MOV EDX,dword ptr [EBX + 0x478]
006EBC27  52                        PUSH EDX
006EBC28  51                        PUSH ECX
006EBC29  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBC2F  51                        PUSH ECX
006EBC30  50                        PUSH EAX
006EBC31  E8 2A 4A 06 00            CALL 0x00750660
006EBC36  E9 C1 00 00 00            JMP 0x006ebcfc
LAB_006ebc3b:
006EBC3B  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
006EBC41  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
LAB_006ebc44:
006EBC44  3B 5D AC                  CMP EBX,dword ptr [EBP + -0x54]
006EBC47  7D 34                     JGE 0x006ebc7d
006EBC49  33 D2                     XOR EDX,EDX
006EBC4B  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
006EBC51  8A 54 3B 01               MOV DL,byte ptr [EBX + EDI*0x1 + 0x1]
006EBC55  3B 95 64 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff64]
006EBC5B  75 1A                     JNZ 0x006ebc77
006EBC5D  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
006EBC63  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
006EBC69  03 FA                     ADD EDI,EDX
006EBC6B  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
006EBC71  43                        INC EBX
006EBC72  89 5D 90                  MOV dword ptr [EBP + -0x70],EBX
006EBC75  EB CD                     JMP 0x006ebc44
LAB_006ebc77:
006EBC77  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
LAB_006ebc7d:
006EBC7D  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006EBC80  3B FA                     CMP EDI,EDX
006EBC82  7E 08                     JLE 0x006ebc8c
006EBC84  8B FA                     MOV EDI,EDX
006EBC86  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
LAB_006ebc8c:
006EBC8C  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
006EBC92  81 FA FF 00 00 00         CMP EDX,0xff
006EBC98  75 25                     JNZ 0x006ebcbf
006EBC9A  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006EBCA0  52                        PUSH EDX
006EBCA1  57                        PUSH EDI
006EBCA2  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
006EBCA8  8B 93 78 04 00 00         MOV EDX,dword ptr [EBX + 0x478]
006EBCAE  52                        PUSH EDX
006EBCAF  51                        PUSH ECX
006EBCB0  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBCB6  51                        PUSH ECX
006EBCB7  50                        PUSH EAX
006EBCB8  E8 A3 2D FE FF            CALL 0x006cea60
006EBCBD  EB 3D                     JMP 0x006ebcfc
LAB_006ebcbf:
006EBCBF  83 FA 20                  CMP EDX,0x20
006EBCC2  8B 96 54 01 00 00         MOV EDX,dword ptr [ESI + 0x154]
006EBCC8  75 08                     JNZ 0x006ebcd2
006EBCCA  81 C2 00 10 00 00         ADD EDX,0x1000
006EBCD0  EB 06                     JMP 0x006ebcd8
LAB_006ebcd2:
006EBCD2  81 C2 00 18 00 00         ADD EDX,0x1800
LAB_006ebcd8:
006EBCD8  52                        PUSH EDX
006EBCD9  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006EBCDF  52                        PUSH EDX
006EBCE0  57                        PUSH EDI
006EBCE1  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
006EBCE7  8B 93 78 04 00 00         MOV EDX,dword ptr [EBX + 0x478]
006EBCED  52                        PUSH EDX
006EBCEE  51                        PUSH ECX
006EBCEF  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBCF5  51                        PUSH ECX
006EBCF6  50                        PUSH EAX
006EBCF7  E8 94 48 06 00            CALL 0x00750590
LAB_006ebcfc:
006EBCFC  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006EBCFF  40                        INC EAX
006EBD00  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
006EBD03  3B 45 AC                  CMP EAX,dword ptr [EBP + -0x54]
006EBD06  7E 3B                     JLE 0x006ebd43
006EBD08  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
006EBD0E  29 45 A0                  SUB dword ptr [EBP + -0x60],EAX
006EBD11  01 45 C8                  ADD dword ptr [EBP + -0x38],EAX
006EBD14  8B 86 E6 04 00 00         MOV EAX,dword ptr [ESI + 0x4e6]
006EBD1A  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006EBD20  8B 96 B2 04 00 00         MOV EDX,dword ptr [ESI + 0x4b2]
006EBD26  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
006EBD2C  03 FA                     ADD EDI,EDX
006EBD2E  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
006EBD34  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
006EBD3B  FF 45 84                  INC dword ptr [EBP + -0x7c]
006EBD3E  E9 FA FD FF FF            JMP 0x006ebb3d
LAB_006ebd43:
006EBD43  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
006EBD4A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006EBD4D  03 D7                     ADD EDX,EDI
006EBD4F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006EBD52  29 7D C4                  SUB dword ptr [EBP + -0x3c],EDI
006EBD55  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
006EBD5B  E9 11 FE FF FF            JMP 0x006ebb71
LAB_006ebd60:
006EBD60  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EBD63  3B CA                     CMP ECX,EDX
006EBD65  75 45                     JNZ 0x006ebdac
006EBD67  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006EBD6A  51                        PUSH ECX
006EBD6B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006EBD6E  52                        PUSH EDX
006EBD6F  8B 83 78 04 00 00         MOV EAX,dword ptr [EBX + 0x478]
006EBD75  50                        PUSH EAX
006EBD76  8B 8B 74 04 00 00         MOV ECX,dword ptr [EBX + 0x474]
006EBD7C  51                        PUSH ECX
006EBD7D  8B 96 EE 04 00 00         MOV EDX,dword ptr [ESI + 0x4ee]
006EBD83  52                        PUSH EDX
006EBD84  8B 86 EA 04 00 00         MOV EAX,dword ptr [ESI + 0x4ea]
006EBD8A  50                        PUSH EAX
006EBD8B  E8 D0 2C FE FF            CALL 0x006cea60
006EBD90  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006EBD97  33 C0                     XOR EAX,EAX
006EBD99  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EBD9C  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006EBDA3  5F                        POP EDI
006EBDA4  5E                        POP ESI
006EBDA5  5B                        POP EBX
006EBDA6  8B E5                     MOV ESP,EBP
006EBDA8  5D                        POP EBP
006EBDA9  C2 08 00                  RET 0x8
LAB_006ebdac:
006EBDAC  8B 93 78 04 00 00         MOV EDX,dword ptr [EBX + 0x478]
006EBDB2  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006EBDB5  8B 39                     MOV EDI,dword ptr [ECX]
006EBDB7  89 BD 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDI
006EBDBD  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
006EBDC0  57                        PUSH EDI
006EBDC1  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006EBDC4  51                        PUSH ECX
006EBDC5  52                        PUSH EDX
006EBDC6  8B C8                     MOV ECX,EAX
006EBDC8  0F AF CA                  IMUL ECX,EDX
006EBDCB  03 8B 74 04 00 00         ADD ECX,dword ptr [EBX + 0x474]
006EBDD1  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
006EBDD7  03 CA                     ADD ECX,EDX
006EBDD9  51                        PUSH ECX
LAB_006ebdda:
006EBDDA  8B 8E EE 04 00 00         MOV ECX,dword ptr [ESI + 0x4ee]
006EBDE0  51                        PUSH ECX
LAB_006ebde1:
006EBDE1  0F AF C1                  IMUL EAX,ECX
006EBDE4  03 86 EA 04 00 00         ADD EAX,dword ptr [ESI + 0x4ea]
006EBDEA  03 C2                     ADD EAX,EDX
006EBDEC  50                        PUSH EAX
006EBDED  E8 6E 2C FE FF            CALL 0x006cea60
LAB_006ebdf2:
006EBDF2  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006EBDF9  33 C0                     XOR EAX,EAX
006EBDFB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EBDFE  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006EBE05  5F                        POP EDI
006EBE06  5E                        POP ESI
006EBE07  5B                        POP EBX
006EBE08  8B E5                     MOV ESP,EBP
006EBE0A  5D                        POP EBP
006EBE0B  C2 08 00                  RET 0x8
