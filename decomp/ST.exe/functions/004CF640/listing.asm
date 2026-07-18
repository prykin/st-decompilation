FUN_004cf640:
004CF640  55                        PUSH EBP
004CF641  8B EC                     MOV EBP,ESP
004CF643  81 EC F8 00 00 00         SUB ESP,0xf8
004CF649  53                        PUSH EBX
004CF64A  56                        PUSH ESI
004CF64B  33 F6                     XOR ESI,ESI
004CF64D  57                        PUSH EDI
004CF64E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CF651  8B D9                     MOV EBX,ECX
004CF653  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004CF656  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004CF659  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004CF65C  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
004CF65F  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_004cf666:
004CF666  39 37                     CMP dword ptr [EDI],ESI
004CF668  75 0E                     JNZ 0x004cf678
004CF66A  6A 05                     PUSH 0x5
004CF66C  6A 30                     PUSH 0x30
004CF66E  6A 05                     PUSH 0x5
004CF670  56                        PUSH ESI
004CF671  E8 1A EC 1D 00            CALL 0x006ae290
004CF676  89 07                     MOV dword ptr [EDI],EAX
LAB_004cf678:
004CF678  8B 07                     MOV EAX,dword ptr [EDI]
004CF67A  83 C7 04                  ADD EDI,0x4
004CF67D  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
004CF680  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CF683  48                        DEC EAX
004CF684  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CF687  75 DD                     JNZ 0x004cf666
004CF689  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CF68F  83 F8 32                  CMP EAX,0x32
004CF692  74 09                     JZ 0x004cf69d
004CF694  83 F8 5C                  CMP EAX,0x5c
004CF697  0F 85 87 02 00 00         JNZ 0x004cf924
LAB_004cf69d:
004CF69D  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004CF6A0  51                        PUSH ECX
004CF6A1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF6A7  E8 0B 53 F3 FF            CALL 0x004049b7
004CF6AC  25 FF 00 00 00            AND EAX,0xff
004CF6B1  B9 28 00 00 00            MOV ECX,0x28
004CF6B6  48                        DEC EAX
004CF6B7  8D BD 08 FF FF FF         LEA EDI,[EBP + 0xffffff08]
004CF6BD  8B D0                     MOV EDX,EAX
004CF6BF  33 C0                     XOR EAX,EAX
004CF6C1  F3 AB                     STOSD.REP ES:EDI
004CF6C3  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CF6C9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004CF6CC  83 F8 5C                  CMP EAX,0x5c
004CF6CF  75 74                     JNZ 0x004cf745
004CF6D1  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004CF6D4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CF6D7  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004CF6DA  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004CF6DD  C1 E1 04                  SHL ECX,0x4
004CF6E0  03 C8                     ADD ECX,EAX
004CF6E2  8B 0C 4D FE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fe]
004CF6E9  3B CE                     CMP ECX,ESI
004CF6EB  74 58                     JZ 0x004cf745
004CF6ED  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004CF6F0  33 FF                     XOR EDI,EDI
004CF6F2  3B C6                     CMP EAX,ESI
004CF6F4  7E 4F                     JLE 0x004cf745
LAB_004cf6f6:
004CF6F6  8D 55 DC                  LEA EDX,[EBP + -0x24]
004CF6F9  52                        PUSH EDX
004CF6FA  8B D7                     MOV EDX,EDI
004CF6FC  E8 6F D5 1D 00            CALL 0x006acc70
004CF701  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004CF704  8D 85 08 FF FF FF         LEA EAX,[EBP + 0xffffff08]
004CF70A  81 C1 E0 04 00 00         ADD ECX,0x4e0
004CF710  BA 28 00 00 00            MOV EDX,0x28
LAB_004cf715:
004CF715  8B 31                     MOV ESI,dword ptr [ECX]
004CF717  83 C1 04                  ADD ECX,0x4
004CF71A  01 30                     ADD dword ptr [EAX],ESI
004CF71C  83 C0 04                  ADD EAX,0x4
004CF71F  4A                        DEC EDX
004CF720  75 F3                     JNZ 0x004cf715
004CF722  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004CF725  47                        INC EDI
004CF726  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004CF729  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004CF72C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004CF72F  C1 E2 04                  SHL EDX,0x4
004CF732  03 D0                     ADD EDX,EAX
004CF734  8B 0C 55 FE 57 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f57fe]
004CF73B  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004CF73E  7C B6                     JL 0x004cf6f6
004CF740  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004CF743  33 F6                     XOR ESI,ESI
LAB_004cf745:
004CF745  33 C9                     XOR ECX,ECX
004CF747  C1 E2 04                  SHL EDX,0x4
004CF74A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004CF74D  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004CF750  EB 05                     JMP 0x004cf757
LAB_004cf752:
004CF752  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004CF755  33 F6                     XOR ESI,ESI
LAB_004cf757:
004CF757  8D 82 30 13 80 00         LEA EAX,[EDX + 0x801330]
004CF75D  83 F9 03                  CMP ECX,0x3
004CF760  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004CF763  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004CF766  77 2E                     JA 0x004cf796
switchD_004cf768::switchD:
004CF768  FF 24 8D 30 F9 4C 00      JMP dword ptr [ECX*0x4 + 0x4cf930]
switchD_004cf768::caseD_0:
004CF76F  C7 45 F8 50 14 80 00      MOV dword ptr [EBP + -0x8],0x801450
004CF776  EB 1E                     JMP 0x004cf796
switchD_004cf768::caseD_1:
004CF778  C7 45 F8 80 14 80 00      MOV dword ptr [EBP + -0x8],0x801480
004CF77F  EB 15                     JMP 0x004cf796
switchD_004cf768::caseD_2:
004CF781  C7 45 F8 10 0F 80 00      MOV dword ptr [EBP + -0x8],0x800f10
004CF788  EB 0C                     JMP 0x004cf796
switchD_004cf768::caseD_3:
004CF78A  8D 82 F0 13 80 00         LEA EAX,[EDX + 0x8013f0]
004CF790  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004CF793  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
switchD_004cf768::default:
004CF796  8D 85 08 FF FF FF         LEA EAX,[EBP + 0xffffff08]
004CF79C  BE 01 00 00 00            MOV ESI,0x1
004CF7A1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004cf7a4:
004CF7A4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CF7A7  85 C0                     TEST EAX,EAX
004CF7A9  74 17                     JZ 0x004cf7c2
004CF7AB  8D 4E 41                  LEA ECX,[ESI + 0x41]
004CF7AE  6A FF                     PUSH -0x1
004CF7B0  51                        PUSH ECX
004CF7B1  50                        PUSH EAX
004CF7B2  E8 19 18 1E 00            CALL 0x006b0fd0
004CF7B7  83 C4 0C                  ADD ESP,0xc
004CF7BA  85 C0                     TEST EAX,EAX
004CF7BC  0F 84 3C 01 00 00         JZ 0x004cf8fe
LAB_004cf7c2:
004CF7C2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004CF7C5  8D 7E 41                  LEA EDI,[ESI + 0x41]
004CF7C8  6A FF                     PUSH -0x1
004CF7CA  57                        PUSH EDI
004CF7CB  52                        PUSH EDX
004CF7CC  E8 FF 17 1E 00            CALL 0x006b0fd0
004CF7D1  83 C4 0C                  ADD ESP,0xc
004CF7D4  85 C0                     TEST EAX,EAX
004CF7D6  0F 84 22 01 00 00         JZ 0x004cf8fe
004CF7DC  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004CF7DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF7E5  57                        PUSH EDI
004CF7E6  50                        PUSH EAX
004CF7E7  E8 31 5F F3 FF            CALL 0x0040571d
004CF7EC  85 C0                     TEST EAX,EAX
004CF7EE  0F 84 0A 01 00 00         JZ 0x004cf8fe
004CF7F4  B9 0C 00 00 00            MOV ECX,0xc
004CF7F9  33 C0                     XOR EAX,EAX
004CF7FB  8D 7D A8                  LEA EDI,[EBP + -0x58]
004CF7FE  6A FF                     PUSH -0x1
004CF800  F3 AB                     STOSD.REP ES:EDI
004CF802  56                        PUSH ESI
004CF803  6A 01                     PUSH 0x1
004CF805  8B CB                     MOV ECX,EBX
004CF807  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
004CF80A  E8 4A 23 F3 FF            CALL 0x00401b59
004CF80F  8B 8B 61 03 00 00         MOV ECX,dword ptr [EBX + 0x361]
004CF815  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004CF818  83 F9 01                  CMP ECX,0x1
004CF81B  75 11                     JNZ 0x004cf82e
004CF81D  39 B3 69 03 00 00         CMP dword ptr [EBX + 0x369],ESI
004CF823  75 09                     JNZ 0x004cf82e
004CF825  03 83 6D 03 00 00         ADD EAX,dword ptr [EBX + 0x36d]
004CF82B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_004cf82e:
004CF82E  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004CF831  56                        PUSH ESI
004CF832  51                        PUSH ECX
004CF833  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF839  E8 FF 48 F3 FF            CALL 0x0040413d
004CF83E  85 C0                     TEST EAX,EAX
004CF840  74 16                     JZ 0x004cf858
004CF842  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004CF849  8B 83 B8 05 00 00         MOV EAX,dword ptr [EBX + 0x5b8]
004CF84F  4A                        DEC EDX
004CF850  3B C2                     CMP EAX,EDX
004CF852  C6 45 B0 01               MOV byte ptr [EBP + -0x50],0x1
004CF856  7C 04                     JL 0x004cf85c
LAB_004cf858:
004CF858  C6 45 B0 00               MOV byte ptr [EBP + -0x50],0x0
LAB_004cf85c:
004CF85C  8D 45 E0                  LEA EAX,[EBP + -0x20]
004CF85F  8D 4D E8                  LEA ECX,[EBP + -0x18]
004CF862  50                        PUSH EAX
004CF863  8D 55 EC                  LEA EDX,[EBP + -0x14]
004CF866  51                        PUSH ECX
004CF867  8D 45 E4                  LEA EAX,[EBP + -0x1c]
004CF86A  52                        PUSH EDX
004CF86B  50                        PUSH EAX
004CF86C  56                        PUSH ESI
004CF86D  6A 01                     PUSH 0x1
004CF86F  8B CB                     MOV ECX,EBX
004CF871  E8 69 3D F3 FF            CALL 0x004035df
004CF876  66 8B 4D E4               MOV CX,word ptr [EBP + -0x1c]
004CF87A  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004CF87D  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
004CF881  66 89 4D B6               MOV word ptr [EBP + -0x4a],CX
004CF885  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF88B  50                        PUSH EAX
004CF88C  66 89 55 B2               MOV word ptr [EBP + -0x4e],DX
004CF890  E8 22 51 F3 FF            CALL 0x004049b7
004CF895  3C 03                     CMP AL,0x3
004CF897  74 0A                     JZ 0x004cf8a3
004CF899  66 8B 4D E8               MOV CX,word ptr [EBP + -0x18]
004CF89D  66 89 4D B4               MOV word ptr [EBP + -0x4c],CX
004CF8A1  EB 08                     JMP 0x004cf8ab
LAB_004cf8a3:
004CF8A3  66 8B 55 E0               MOV DX,word ptr [EBP + -0x20]
004CF8A7  66 89 55 B4               MOV word ptr [EBP + -0x4c],DX
LAB_004cf8ab:
004CF8AB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004CF8AE  66 C7 45 B8 FF FF         MOV word ptr [EBP + -0x48],0xffff
004CF8B4  8B 00                     MOV EAX,dword ptr [EAX]
004CF8B6  85 C0                     TEST EAX,EAX
004CF8B8  74 04                     JZ 0x004cf8be
004CF8BA  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
LAB_004cf8be:
004CF8BE  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004CF8C1  51                        PUSH ECX
004CF8C2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF8C8  E8 EA 50 F3 FF            CALL 0x004049b7
004CF8CD  88 45 B1                  MOV byte ptr [EBP + -0x4f],AL
004CF8D0  8A 45 B0                  MOV AL,byte ptr [EBP + -0x50]
004CF8D3  84 C0                     TEST AL,AL
004CF8D5  75 14                     JNZ 0x004cf8eb
004CF8D7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004CF8DA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF8E0  8D 55 BA                  LEA EDX,[EBP + -0x46]
004CF8E3  52                        PUSH EDX
004CF8E4  56                        PUSH ESI
004CF8E5  50                        PUSH EAX
004CF8E6  E8 47 35 F3 FF            CALL 0x00402e32
LAB_004cf8eb:
004CF8EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CF8EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CF8F1  8D 4D A8                  LEA ECX,[EBP + -0x58]
004CF8F4  51                        PUSH ECX
004CF8F5  8B 0C 82                  MOV ECX,dword ptr [EDX + EAX*0x4]
004CF8F8  51                        PUSH ECX
004CF8F9  E8 C2 E8 1D 00            CALL 0x006ae1c0
LAB_004cf8fe:
004CF8FE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004CF901  83 C2 04                  ADD EDX,0x4
004CF904  46                        INC ESI
004CF905  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004CF908  8D 56 FF                  LEA EDX,[ESI + -0x1]
004CF90B  83 FA 28                  CMP EDX,0x28
004CF90E  0F 8C 90 FE FF FF         JL 0x004cf7a4
004CF914  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CF917  41                        INC ECX
004CF918  83 F9 04                  CMP ECX,0x4
004CF91B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004CF91E  0F 8C 2E FE FF FF         JL 0x004cf752
LAB_004cf924:
004CF924  5F                        POP EDI
004CF925  5E                        POP ESI
004CF926  5B                        POP EBX
004CF927  8B E5                     MOV ESP,EBP
004CF929  5D                        POP EBP
004CF92A  C2 04 00                  RET 0x4
