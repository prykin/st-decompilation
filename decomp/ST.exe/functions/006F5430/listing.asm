FUN_006f5430:
006F5430  55                        PUSH EBP
006F5431  8B EC                     MOV EBP,ESP
006F5433  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006F5436  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F5439  53                        PUSH EBX
006F543A  56                        PUSH ESI
006F543B  57                        PUSH EDI
006F543C  A3 34 70 85 00            MOV [0x00857034],EAX
006F5441  89 0D F8 6F 85 00         MOV dword ptr [0x00856ff8],ECX
006F5447  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F5451  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5454  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5457  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006f545a:
006F545A  33 C9                     XOR ECX,ECX
006F545C  8A 0E                     MOV CL,byte ptr [ESI]
006F545E  46                        INC ESI
006F545F  0B C9                     OR ECX,ECX
006F5461  0F 84 E1 02 00 00         JZ 0x006f5748
006F5467  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
LAB_006f546a:
006F546A  F6 C1 80                  TEST CL,0x80
006F546D  75 10                     JNZ 0x006f547f
LAB_006f546f:
006F546F  3B CA                     CMP ECX,EDX
006F5471  7F 36                     JG 0x006f54a9
006F5473  2B D1                     SUB EDX,ECX
006F5475  33 C9                     XOR ECX,ECX
006F5477  8A 0E                     MOV CL,byte ptr [ESI]
006F5479  46                        INC ESI
006F547A  F6 C1 80                  TEST CL,0x80
006F547D  74 F0                     JZ 0x006f546f
LAB_006f547f:
006F547F  F6 C1 40                  TEST CL,0x40
006F5482  74 13                     JZ 0x006f5497
006F5484  80 E1 3F                  AND CL,0x3f
006F5487  3B CA                     CMP ECX,EDX
006F5489  7F 2F                     JG 0x006f54ba
006F548B  2B D1                     SUB EDX,ECX
006F548D  33 C9                     XOR ECX,ECX
006F548F  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
006F5492  83 C6 02                  ADD ESI,0x2
006F5495  EB D3                     JMP 0x006f546a
LAB_006f5497:
006F5497  80 E1 3F                  AND CL,0x3f
006F549A  3B CA                     CMP ECX,EDX
006F549C  7F 2A                     JG 0x006f54c8
006F549E  03 F1                     ADD ESI,ECX
006F54A0  2B D1                     SUB EDX,ECX
006F54A2  33 C9                     XOR ECX,ECX
006F54A4  8A 0E                     MOV CL,byte ptr [ESI]
006F54A6  46                        INC ESI
006F54A7  EB C1                     JMP 0x006f546a
LAB_006f54a9:
006F54A9  2A CA                     SUB CL,DL
006F54AB  55                        PUSH EBP
006F54AC  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F54AF  8B 6D 18                  MOV EBP,dword ptr [EBP + 0x18]
006F54B2  C1 E5 10                  SHL EBP,0x10
006F54B5  E9 04 01 00 00            JMP 0x006f55be
LAB_006f54ba:
006F54BA  2A CA                     SUB CL,DL
006F54BC  55                        PUSH EBP
006F54BD  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F54C0  8B 6D 18                  MOV EBP,dword ptr [EBP + 0x18]
006F54C3  C1 E5 10                  SHL EBP,0x10
006F54C6  EB 1E                     JMP 0x006f54e6
LAB_006f54c8:
006F54C8  03 F2                     ADD ESI,EDX
006F54CA  2A CA                     SUB CL,DL
006F54CC  55                        PUSH EBP
006F54CD  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F54D0  8B 6D 18                  MOV EBP,dword ptr [EBP + 0x18]
006F54D3  C1 E5 10                  SHL EBP,0x10
006F54D6  EB 73                     JMP 0x006f554b
LAB_006f54d8:
006F54D8  F6 C1 80                  TEST CL,0x80
006F54DB  0F 84 DD 00 00 00         JZ 0x006f55be
006F54E1  F6 C1 40                  TEST CL,0x40
006F54E4  74 65                     JZ 0x006f554b
LAB_006f54e6:
006F54E6  83 E1 3F                  AND ECX,0x3f
006F54E9  AC                        LODSB ESI
006F54EA  3B CA                     CMP ECX,EDX
006F54EC  0F 8F F5 00 00 00         JG 0x006f55e7
006F54F2  2B D1                     SUB EDX,ECX
LAB_006f54f4:
006F54F4  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F54F7  77 14                     JA 0x006f550d
LAB_006f54f9:
006F54F9  88 07                     MOV byte ptr [EDI],AL
006F54FB  83 C3 02                  ADD EBX,0x2
006F54FE  47                        INC EDI
006F54FF  FF 05 34 70 85 00         INC dword ptr [0x00857034]
006F5505  49                        DEC ECX
006F5506  7F EC                     JG 0x006f54f4
006F5508  E9 C6 00 00 00            JMP 0x006f55d3
LAB_006f550d:
006F550D  56                        PUSH ESI
006F550E  52                        PUSH EDX
006F550F  8B 35 34 70 85 00         MOV ESI,dword ptr [0x00857034]
006F5515  50                        PUSH EAX
006F5516  8B 15 F8 6F 85 00         MOV EDX,dword ptr [0x00856ff8]
LAB_006f551c:
006F551C  33 C0                     XOR EAX,EAX
006F551E  8A 06                     MOV AL,byte ptr [ESI]
006F5520  46                        INC ESI
006F5521  83 C3 02                  ADD EBX,0x2
006F5524  8A 04 02                  MOV AL,byte ptr [EDX + EAX*0x1]
006F5527  88 07                     MOV byte ptr [EDI],AL
006F5529  47                        INC EDI
006F552A  49                        DEC ECX
006F552B  7E 10                     JLE 0x006f553d
006F552D  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F5530  77 EA                     JA 0x006f551c
006F5532  58                        POP EAX
006F5533  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F5539  5A                        POP EDX
006F553A  5E                        POP ESI
006F553B  EB BC                     JMP 0x006f54f9
LAB_006f553d:
006F553D  58                        POP EAX
006F553E  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F5544  5A                        POP EDX
006F5545  5E                        POP ESI
006F5546  E9 88 00 00 00            JMP 0x006f55d3
LAB_006f554b:
006F554B  83 E1 3F                  AND ECX,0x3f
006F554E  3B CA                     CMP ECX,EDX
006F5550  0F 8F F8 00 00 00         JG 0x006f564e
006F5556  2B D1                     SUB EDX,ECX
LAB_006f5558:
006F5558  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F555B  77 14                     JA 0x006f5571
LAB_006f555d:
006F555D  8A 06                     MOV AL,byte ptr [ESI]
006F555F  46                        INC ESI
006F5560  88 07                     MOV byte ptr [EDI],AL
006F5562  83 C3 02                  ADD EBX,0x2
006F5565  FF 05 34 70 85 00         INC dword ptr [0x00857034]
006F556B  47                        INC EDI
006F556C  49                        DEC ECX
006F556D  7F E9                     JG 0x006f5558
006F556F  EB 62                     JMP 0x006f55d3
LAB_006f5571:
006F5571  52                        PUSH EDX
006F5572  89 35 14 70 85 00         MOV dword ptr [0x00857014],ESI
006F5578  8B 15 F8 6F 85 00         MOV EDX,dword ptr [0x00856ff8]
006F557E  8B 35 34 70 85 00         MOV ESI,dword ptr [0x00857034]
LAB_006f5584:
006F5584  33 C0                     XOR EAX,EAX
006F5586  8A 06                     MOV AL,byte ptr [ESI]
006F5588  83 C3 02                  ADD EBX,0x2
006F558B  FF 05 14 70 85 00         INC dword ptr [0x00857014]
006F5591  8A 04 02                  MOV AL,byte ptr [EDX + EAX*0x1]
006F5594  88 07                     MOV byte ptr [EDI],AL
006F5596  46                        INC ESI
006F5597  47                        INC EDI
006F5598  49                        DEC ECX
006F5599  7E 14                     JLE 0x006f55af
006F559B  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F559E  77 E4                     JA 0x006f5584
006F55A0  5A                        POP EDX
006F55A1  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F55A7  8B 35 14 70 85 00         MOV ESI,dword ptr [0x00857014]
006F55AD  EB AE                     JMP 0x006f555d
LAB_006f55af:
006F55AF  5A                        POP EDX
006F55B0  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F55B6  8B 35 14 70 85 00         MOV ESI,dword ptr [0x00857014]
006F55BC  EB 15                     JMP 0x006f55d3
LAB_006f55be:
006F55BE  3B CA                     CMP ECX,EDX
006F55C0  0F 8F F9 00 00 00         JG 0x006f56bf
006F55C6  2B D1                     SUB EDX,ECX
006F55C8  03 F9                     ADD EDI,ECX
006F55CA  01 0D 34 70 85 00         ADD dword ptr [0x00857034],ECX
006F55D0  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
LAB_006f55d3:
006F55D3  33 C9                     XOR ECX,ECX
006F55D5  0B D2                     OR EDX,EDX
006F55D7  0F 8E F5 00 00 00         JLE 0x006f56d2
006F55DD  33 C9                     XOR ECX,ECX
006F55DF  8A 0E                     MOV CL,byte ptr [ESI]
006F55E1  46                        INC ESI
006F55E2  E9 F1 FE FF FF            JMP 0x006f54d8
LAB_006f55e7:
006F55E7  87 CA                     XCHG EDX,ECX
006F55E9  4E                        DEC ESI
006F55EA  80 CA C0                  OR DL,0xc0
006F55ED  0B C9                     OR ECX,ECX
006F55EF  0F 8E DD 00 00 00         JLE 0x006f56d2
006F55F5  2B D1                     SUB EDX,ECX
LAB_006f55f7:
006F55F7  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F55FA  77 14                     JA 0x006f5610
LAB_006f55fc:
006F55FC  88 07                     MOV byte ptr [EDI],AL
006F55FE  83 C3 02                  ADD EBX,0x2
006F5601  47                        INC EDI
006F5602  FF 05 34 70 85 00         INC dword ptr [0x00857034]
006F5608  49                        DEC ECX
006F5609  7F EC                     JG 0x006f55f7
006F560B  E9 C2 00 00 00            JMP 0x006f56d2
LAB_006f5610:
006F5610  56                        PUSH ESI
006F5611  52                        PUSH EDX
006F5612  8B 35 34 70 85 00         MOV ESI,dword ptr [0x00857034]
006F5618  50                        PUSH EAX
006F5619  8B 15 F8 6F 85 00         MOV EDX,dword ptr [0x00856ff8]
LAB_006f561f:
006F561F  33 C0                     XOR EAX,EAX
006F5621  8A 06                     MOV AL,byte ptr [ESI]
006F5623  46                        INC ESI
006F5624  83 C3 02                  ADD EBX,0x2
006F5627  8A 04 02                  MOV AL,byte ptr [EDX + EAX*0x1]
006F562A  88 07                     MOV byte ptr [EDI],AL
006F562C  47                        INC EDI
006F562D  49                        DEC ECX
006F562E  7E 10                     JLE 0x006f5640
006F5630  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F5633  77 EA                     JA 0x006f561f
006F5635  58                        POP EAX
006F5636  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F563C  5A                        POP EDX
006F563D  5E                        POP ESI
006F563E  EB BC                     JMP 0x006f55fc
LAB_006f5640:
006F5640  58                        POP EAX
006F5641  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F5647  5A                        POP EDX
006F5648  5E                        POP ESI
006F5649  E9 84 00 00 00            JMP 0x006f56d2
LAB_006f564e:
006F564E  87 CA                     XCHG EDX,ECX
006F5650  80 CA 80                  OR DL,0x80
006F5653  0B C9                     OR ECX,ECX
006F5655  7E 7B                     JLE 0x006f56d2
006F5657  2B D1                     SUB EDX,ECX
LAB_006f5659:
006F5659  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F565C  77 14                     JA 0x006f5672
LAB_006f565e:
006F565E  8A 06                     MOV AL,byte ptr [ESI]
006F5660  46                        INC ESI
006F5661  88 07                     MOV byte ptr [EDI],AL
006F5663  83 C3 02                  ADD EBX,0x2
006F5666  FF 05 34 70 85 00         INC dword ptr [0x00857034]
006F566C  47                        INC EDI
006F566D  49                        DEC ECX
006F566E  7F E9                     JG 0x006f5659
006F5670  EB 60                     JMP 0x006f56d2
LAB_006f5672:
006F5672  52                        PUSH EDX
006F5673  89 35 14 70 85 00         MOV dword ptr [0x00857014],ESI
006F5679  8B 15 F8 6F 85 00         MOV EDX,dword ptr [0x00856ff8]
006F567F  8B 35 34 70 85 00         MOV ESI,dword ptr [0x00857034]
LAB_006f5685:
006F5685  33 C0                     XOR EAX,EAX
006F5687  8A 06                     MOV AL,byte ptr [ESI]
006F5689  83 C3 02                  ADD EBX,0x2
006F568C  FF 05 14 70 85 00         INC dword ptr [0x00857014]
006F5692  8A 04 02                  MOV AL,byte ptr [EDX + EAX*0x1]
006F5695  88 07                     MOV byte ptr [EDI],AL
006F5697  46                        INC ESI
006F5698  47                        INC EDI
006F5699  49                        DEC ECX
006F569A  7E 14                     JLE 0x006f56b0
006F569C  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F569F  77 E4                     JA 0x006f5685
006F56A1  5A                        POP EDX
006F56A2  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F56A8  8B 35 14 70 85 00         MOV ESI,dword ptr [0x00857014]
006F56AE  EB AE                     JMP 0x006f565e
LAB_006f56b0:
006F56B0  5A                        POP EDX
006F56B1  89 35 34 70 85 00         MOV dword ptr [0x00857034],ESI
006F56B7  8B 35 14 70 85 00         MOV ESI,dword ptr [0x00857014]
006F56BD  EB 13                     JMP 0x006f56d2
LAB_006f56bf:
006F56BF  87 CA                     XCHG EDX,ECX
006F56C1  0B C9                     OR ECX,ECX
006F56C3  7E 0D                     JLE 0x006f56d2
006F56C5  2B D1                     SUB EDX,ECX
006F56C7  03 F9                     ADD EDI,ECX
006F56C9  01 0D 34 70 85 00         ADD dword ptr [0x00857034],ECX
006F56CF  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
LAB_006f56d2:
006F56D2  5D                        POP EBP
006F56D3  8B CA                     MOV ECX,EDX
006F56D5  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006F56D8  2B 55 28                  SUB EDX,dword ptr [EBP + 0x28]
006F56DB  2B 55 24                  SUB EDX,dword ptr [EBP + 0x24]
LAB_006f56de:
006F56DE  F6 C1 80                  TEST CL,0x80
006F56E1  75 10                     JNZ 0x006f56f3
LAB_006f56e3:
006F56E3  3B CA                     CMP ECX,EDX
006F56E5  7D 36                     JGE 0x006f571d
006F56E7  2B D1                     SUB EDX,ECX
006F56E9  33 C9                     XOR ECX,ECX
006F56EB  8A 0E                     MOV CL,byte ptr [ESI]
006F56ED  46                        INC ESI
006F56EE  F6 C1 80                  TEST CL,0x80
006F56F1  74 F0                     JZ 0x006f56e3
LAB_006f56f3:
006F56F3  F6 C1 40                  TEST CL,0x40
006F56F6  74 11                     JZ 0x006f5709
006F56F8  80 E1 3F                  AND CL,0x3f
006F56FB  46                        INC ESI
006F56FC  3B CA                     CMP ECX,EDX
006F56FE  7D 1D                     JGE 0x006f571d
006F5700  2B D1                     SUB EDX,ECX
006F5702  33 C9                     XOR ECX,ECX
006F5704  8A 0E                     MOV CL,byte ptr [ESI]
006F5706  46                        INC ESI
006F5707  EB D5                     JMP 0x006f56de
LAB_006f5709:
006F5709  80 E1 3F                  AND CL,0x3f
006F570C  3B CA                     CMP ECX,EDX
006F570E  7D 0B                     JGE 0x006f571b
006F5710  03 F1                     ADD ESI,ECX
006F5712  2B D1                     SUB EDX,ECX
006F5714  33 C9                     XOR ECX,ECX
006F5716  8A 0E                     MOV CL,byte ptr [ESI]
006F5718  46                        INC ESI
006F5719  EB C3                     JMP 0x006f56de
LAB_006f571b:
006F571B  03 F1                     ADD ESI,ECX
LAB_006f571d:
006F571D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F5720  8B 0D 34 70 85 00         MOV ECX,dword ptr [0x00857034]
006F5726  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5729  03 4D 34                  ADD ECX,dword ptr [EBP + 0x34]
006F572C  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F572F  2B CA                     SUB ECX,EDX
006F5731  2B DA                     SUB EBX,EDX
006F5733  89 0D 34 70 85 00         MOV dword ptr [0x00857034],ECX
006F5739  2B FA                     SUB EDI,EDX
006F573B  2B DA                     SUB EBX,EDX
006F573D  FF 4D 2C                  DEC dword ptr [EBP + 0x2c]
006F5740  0F 8F 14 FD FF FF         JG 0x006f545a
006F5746  EB 0F                     JMP 0x006f5757
LAB_006f5748:
006F5748  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F574B  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F574E  FF 4D 2C                  DEC dword ptr [EBP + 0x2c]
006F5751  0F 8F 03 FD FF FF         JG 0x006f545a
LAB_006f5757:
006F5757  5F                        POP EDI
006F5758  5E                        POP ESI
006F5759  5B                        POP EBX
006F575A  5D                        POP EBP
006F575B  C2 34 00                  RET 0x34
