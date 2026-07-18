ccFntTy::FormIndentSarr:
007126E0  55                        PUSH EBP
007126E1  8B EC                     MOV EBP,ESP
007126E3  83 EC 64                  SUB ESP,0x64
007126E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007126E9  53                        PUSH EBX
007126EA  33 DB                     XOR EBX,EBX
007126EC  56                        PUSH ESI
007126ED  3B C3                     CMP EAX,EBX
007126EF  57                        PUSH EDI
007126F0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007126F3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007126F6  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
007126F9  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007126FC  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007126FF  0F 84 BF 02 00 00         JZ 0x007129c4
00712705  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00712708  0F 84 B6 02 00 00         JZ 0x007129c4
0071270E  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00712711  0F 84 AD 02 00 00         JZ 0x007129c4
00712717  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
0071271A  0F 8E A4 02 00 00         JLE 0x007129c4
00712720  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00712723  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00712726  83 F9 FF                  CMP ECX,-0x1
00712729  75 05                     JNZ 0x00712730
0071272B  8B C8                     MOV ECX,EAX
0071272D  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_00712730:
00712730  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00712733  3B D0                     CMP EDX,EAX
00712735  0F 8D 89 02 00 00         JGE 0x007129c4
0071273B  3B CB                     CMP ECX,EBX
0071273D  0F 84 81 02 00 00         JZ 0x007129c4
00712743  03 CA                     ADD ECX,EDX
00712745  3B C8                     CMP ECX,EAX
00712747  7E 05                     JLE 0x0071274e
00712749  2B C2                     SUB EAX,EDX
0071274B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_0071274e:
0071274E  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00712754  8D 4D A0                  LEA ECX,[EBP + -0x60]
00712757  8D 45 9C                  LEA EAX,[EBP + -0x64]
0071275A  53                        PUSH EBX
0071275B  51                        PUSH ECX
0071275C  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0071275F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00712764  E8 87 B0 01 00            CALL 0x0072d7f0
00712769  8B F0                     MOV ESI,EAX
0071276B  83 C4 08                  ADD ESP,0x8
0071276E  3B F3                     CMP ESI,EBX
00712770  0F 85 EA 01 00 00         JNZ 0x00712960
00712776  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00712779  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0071277C  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
0071277F  52                        PUSH EDX
00712780  56                        PUSH ESI
00712781  53                        PUSH EBX
00712782  E8 69 2D FA FF            CALL 0x006b54f0
00712787  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071278A  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0071278D  50                        PUSH EAX
0071278E  56                        PUSH ESI
0071278F  53                        PUSH EBX
00712790  E8 5B 2D FA FF            CALL 0x006b54f0
00712795  8B F8                     MOV EDI,EAX
00712797  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0071279A  03 F0                     ADD ESI,EAX
0071279C  8B D8                     MOV EBX,EAX
0071279E  3B C6                     CMP EAX,ESI
007127A0  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
007127A3  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
007127A6  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
007127A9  7D 66                     JGE 0x00712811
LAB_007127ab:
007127AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007127AE  3B 58 08                  CMP EBX,dword ptr [EAX + 0x8]
007127B1  7D 08                     JGE 0x007127bb
007127B3  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007127B6  8B 34 99                  MOV ESI,dword ptr [ECX + EBX*0x4]
007127B9  EB 02                     JMP 0x007127bd
LAB_007127bb:
007127BB  33 F6                     XOR ESI,ESI
LAB_007127bd:
007127BD  85 F6                     TEST ESI,ESI
007127BF  74 50                     JZ 0x00712811
007127C1  8A 0E                     MOV CL,byte ptr [ESI]
007127C3  8B C6                     MOV EAX,ESI
007127C5  84 C9                     TEST CL,CL
007127C7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007127CA  74 2F                     JZ 0x007127fb
LAB_007127cc:
007127CC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007127CF  85 C0                     TEST EAX,EAX
007127D1  0F 84 C6 00 00 00         JZ 0x0071289d
007127D7  56                        PUSH ESI
007127D8  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
007127DF  E8 DC A5 FF FF            CALL 0x0070cdc0
007127E4  83 C4 04                  ADD ESP,0x4
007127E7  85 C0                     TEST EAX,EAX
007127E9  0F 8C D8 00 00 00         JL 0x007128c7
LAB_007127ef:
007127EF  46                        INC ESI
LAB_007127f0:
007127F0  80 3E 00                  CMP byte ptr [ESI],0x0
007127F3  75 D7                     JNZ 0x007127cc
007127F5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007127F8  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_007127fb:
007127FB  3B C6                     CMP EAX,ESI
007127FD  74 07                     JZ 0x00712806
007127FF  50                        PUSH EAX
00712800  57                        PUSH EDI
00712801  E8 9A 32 FA FF            CALL 0x006b5aa0
LAB_00712806:
00712806  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00712809  43                        INC EBX
0071280A  3B D8                     CMP EBX,EAX
0071280C  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0071280F  7C 9A                     JL 0x007127ab
LAB_00712811:
00712811  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00712814  85 C0                     TEST EAX,EAX
00712816  7E 66                     JLE 0x0071287e
00712818  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0071281B  85 C0                     TEST EAX,EAX
0071281D  74 09                     JZ 0x00712828
0071281F  50                        PUSH EAX
00712820  6A 00                     PUSH 0x0
00712822  57                        PUSH EDI
00712823  E8 28 05 04 00            CALL 0x00752d50
LAB_00712828:
00712828  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0071282B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0071282E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00712831  50                        PUSH EAX
00712832  6A FF                     PUSH -0x1
00712834  6A 00                     PUSH 0x0
00712836  51                        PUSH ECX
00712837  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0071283A  52                        PUSH EDX
0071283B  57                        PUSH EDI
0071283C  E8 AF F9 FF FF            CALL 0x007121f0
00712841  8B F0                     MOV ESI,EAX
00712843  85 FF                     TEST EDI,EDI
00712845  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00712848  74 16                     JZ 0x00712860
0071284A  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0071284D  85 C0                     TEST EAX,EAX
0071284F  74 0F                     JZ 0x00712860
LAB_00712851:
00712851  6A 00                     PUSH 0x0
00712853  57                        PUSH EDI
00712854  E8 D7 4F FA FF            CALL 0x006b7830
00712859  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0071285C  85 C0                     TEST EAX,EAX
0071285E  75 F1                     JNZ 0x00712851
LAB_00712860:
00712860  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00712863  56                        PUSH ESI
00712864  50                        PUSH EAX
00712865  E8 D6 83 00 00            CALL 0x0071ac40
0071286A  83 C4 08                  ADD ESP,0x8
0071286D  85 F6                     TEST ESI,ESI
0071286F  74 0D                     JZ 0x0071287e
00712871  56                        PUSH ESI
00712872  E8 F9 2C FA FF            CALL 0x006b5570
00712877  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0071287e:
0071287E  85 FF                     TEST EDI,EDI
00712880  74 06                     JZ 0x00712888
00712882  57                        PUSH EDI
00712883  E8 E8 2C FA FF            CALL 0x006b5570
LAB_00712888:
00712888  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0071288B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071288E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712894  5F                        POP EDI
00712895  5E                        POP ESI
00712896  5B                        POP EBX
00712897  8B E5                     MOV ESP,EBP
00712899  5D                        POP EBP
0071289A  C2 20 00                  RET 0x20
LAB_0071289d:
0071289D  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
007128A0  56                        PUSH ESI
007128A1  8D 93 9E 00 00 00         LEA EDX,[EBX + 0x9e]
007128A7  52                        PUSH EDX
007128A8  E8 E3 A4 FF FF            CALL 0x0070cd90
007128AD  83 C4 08                  ADD ESP,0x8
007128B0  85 C0                     TEST EAX,EAX
007128B2  75 13                     JNZ 0x007128c7
007128B4  8B 43 7E                  MOV EAX,dword ptr [EBX + 0x7e]
007128B7  85 C0                     TEST EAX,EAX
007128B9  74 0C                     JZ 0x007128c7
007128BB  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
007128C2  E9 28 FF FF FF            JMP 0x007127ef
LAB_007128c7:
007128C7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007128CA  56                        PUSH ESI
007128CB  50                        PUSH EAX
007128CC  E8 2F A5 FF FF            CALL 0x0070ce00
007128D1  83 C4 08                  ADD ESP,0x8
007128D4  85 C0                     TEST EAX,EAX
007128D6  0F 84 13 FF FF FF         JZ 0x007127ef
007128DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007128DF  8A 1E                     MOV BL,byte ptr [ESI]
007128E1  51                        PUSH ECX
007128E2  57                        PUSH EDI
007128E3  C6 06 00                  MOV byte ptr [ESI],0x0
007128E6  E8 B5 31 FA FF            CALL 0x006b5aa0
007128EB  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007128EE  88 1E                     MOV byte ptr [ESI],BL
007128F0  46                        INC ESI
007128F1  85 C0                     TEST EAX,EAX
007128F3  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
007128F6  74 09                     JZ 0x00712901
007128F8  50                        PUSH EAX
007128F9  6A 00                     PUSH 0x0
007128FB  57                        PUSH EDI
007128FC  E8 4F 04 04 00            CALL 0x00752d50
LAB_00712901:
00712901  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00712904  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00712907  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071290A  52                        PUSH EDX
0071290B  6A FF                     PUSH -0x1
0071290D  6A 00                     PUSH 0x0
0071290F  50                        PUSH EAX
00712910  51                        PUSH ECX
00712911  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00712914  57                        PUSH EDI
00712915  E8 D6 F8 FF FF            CALL 0x007121f0
0071291A  8B D8                     MOV EBX,EAX
0071291C  85 FF                     TEST EDI,EDI
0071291E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00712921  74 16                     JZ 0x00712939
00712923  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00712926  85 C0                     TEST EAX,EAX
00712928  74 0F                     JZ 0x00712939
LAB_0071292a:
0071292A  6A 00                     PUSH 0x0
0071292C  57                        PUSH EDI
0071292D  E8 FE 4E FA FF            CALL 0x006b7830
00712932  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00712935  85 C0                     TEST EAX,EAX
00712937  75 F1                     JNZ 0x0071292a
LAB_00712939:
00712939  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071293C  53                        PUSH EBX
0071293D  52                        PUSH EDX
0071293E  E8 FD 82 00 00            CALL 0x0071ac40
00712943  83 C4 08                  ADD ESP,0x8
00712946  85 DB                     TEST EBX,EBX
00712948  0F 84 A2 FE FF FF         JZ 0x007127f0
0071294E  53                        PUSH EBX
0071294F  E8 1C 2C FA FF            CALL 0x006b5570
00712954  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0071295B  E9 90 FE FF FF            JMP 0x007127f0
LAB_00712960:
00712960  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00712963  68 EC 02 7F 00            PUSH 0x7f02ec
00712968  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071296D  56                        PUSH ESI
0071296E  53                        PUSH EBX
0071296F  68 1F 08 00 00            PUSH 0x81f
00712974  68 90 01 7F 00            PUSH 0x7f0190
00712979  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071297F  E8 4C AB F9 FF            CALL 0x006ad4d0
00712984  83 C4 18                  ADD ESP,0x18
00712987  85 C0                     TEST EAX,EAX
00712989  74 01                     JZ 0x0071298c
0071298B  CC                        INT3
LAB_0071298c:
0071298C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071298F  3B C3                     CMP EAX,EBX
00712991  74 06                     JZ 0x00712999
00712993  50                        PUSH EAX
00712994  E8 D7 2B FA FF            CALL 0x006b5570
LAB_00712999:
00712999  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071299C  3B C3                     CMP EAX,EBX
0071299E  74 06                     JZ 0x007129a6
007129A0  50                        PUSH EAX
007129A1  E8 CA 2B FA FF            CALL 0x006b5570
LAB_007129a6:
007129A6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007129A9  3B C3                     CMP EAX,EBX
007129AB  74 06                     JZ 0x007129b3
007129AD  50                        PUSH EAX
007129AE  E8 BD 2B FA FF            CALL 0x006b5570
LAB_007129b3:
007129B3  68 25 08 00 00            PUSH 0x825
007129B8  68 90 01 7F 00            PUSH 0x7f0190
007129BD  53                        PUSH EBX
007129BE  56                        PUSH ESI
007129BF  E8 7C 34 F9 FF            CALL 0x006a5e40
LAB_007129c4:
007129C4  5F                        POP EDI
007129C5  5E                        POP ESI
007129C6  33 C0                     XOR EAX,EAX
007129C8  5B                        POP EBX
007129C9  8B E5                     MOV ESP,EBP
007129CB  5D                        POP EBP
007129CC  C2 20 00                  RET 0x20
