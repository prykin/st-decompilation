FUN_006fb4a0:
006FB4A0  55                        PUSH EBP
006FB4A1  8B EC                     MOV EBP,ESP
006FB4A3  83 EC 14                  SUB ESP,0x14
006FB4A6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FB4A9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FB4B3  48                        DEC EAX
006FB4B4  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FB4B7  0F 88 35 08 00 00         JS 0x006fbcf2
006FB4BD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB4C0  53                        PUSH EBX
006FB4C1  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006FB4C4  56                        PUSH ESI
006FB4C5  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FB4C8  57                        PUSH EDI
006FB4C9  EB 09                     JMP 0x006fb4d4
LAB_006fb4cb:
006FB4CB  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006FB4CE  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB4D1  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_006fb4d4:
006FB4D4  F6 C3 01                  TEST BL,0x1
006FB4D7  75 4E                     JNZ 0x006fb527
LAB_006fb4d9:
006FB4D9  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FB4DC  48                        DEC EAX
006FB4DD  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FB4E0  78 42                     JS 0x006fb524
006FB4E2  33 C0                     XOR EAX,EAX
006FB4E4  8A 02                     MOV AL,byte ptr [EDX]
006FB4E6  42                        INC EDX
006FB4E7  85 C0                     TEST EAX,EAX
006FB4E9  74 2C                     JZ 0x006fb517
006FB4EB  8B CE                     MOV ECX,ESI
LAB_006fb4ed:
006FB4ED  A8 80                     TEST AL,0x80
006FB4EF  74 16                     JZ 0x006fb507
006FB4F1  A8 40                     TEST AL,0x40
006FB4F3  74 06                     JZ 0x006fb4fb
006FB4F5  42                        INC EDX
006FB4F6  83 E0 3F                  AND EAX,0x3f
006FB4F9  EB 0F                     JMP 0x006fb50a
LAB_006fb4fb:
006FB4FB  8B F8                     MOV EDI,EAX
006FB4FD  83 E7 3F                  AND EDI,0x3f
006FB500  03 D7                     ADD EDX,EDI
006FB502  83 E0 3F                  AND EAX,0x3f
006FB505  EB 03                     JMP 0x006fb50a
LAB_006fb507:
006FB507  83 E0 7F                  AND EAX,0x7f
LAB_006fb50a:
006FB50A  2B C8                     SUB ECX,EAX
006FB50C  85 C9                     TEST ECX,ECX
006FB50E  7E 07                     JLE 0x006fb517
006FB510  33 C0                     XOR EAX,EAX
006FB512  8A 02                     MOV AL,byte ptr [EDX]
006FB514  42                        INC EDX
006FB515  EB D6                     JMP 0x006fb4ed
LAB_006fb517:
006FB517  43                        INC EBX
006FB518  83 FB 04                  CMP EBX,0x4
006FB51B  7E 02                     JLE 0x006fb51f
006FB51D  33 DB                     XOR EBX,EBX
LAB_006fb51f:
006FB51F  F6 C3 01                  TEST BL,0x1
006FB522  74 B5                     JZ 0x006fb4d9
LAB_006fb524:
006FB524  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
LAB_006fb527:
006FB527  33 C0                     XOR EAX,EAX
006FB529  8A 02                     MOV AL,byte ptr [EDX]
006FB52B  42                        INC EDX
006FB52C  85 C0                     TEST EAX,EAX
006FB52E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006FB531  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FB534  0F 84 74 07 00 00         JZ 0x006fbcae
006FB53A  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006FB53D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006FB540  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006FB543  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006FB546  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FB549  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB54C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006fb54f:
006FB54F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FB552  A8 80                     TEST AL,0x80
006FB554  74 1D                     JZ 0x006fb573
006FB556  83 E0 3F                  AND EAX,0x3f
006FB559  3B C7                     CMP EAX,EDI
006FB55B  7F 2F                     JG 0x006fb58c
006FB55D  F6 45 F4 40               TEST byte ptr [EBP + -0xc],0x40
006FB561  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB564  74 06                     JZ 0x006fb56c
006FB566  42                        INC EDX
006FB567  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FB56A  EB 0E                     JMP 0x006fb57a
LAB_006fb56c:
006FB56C  03 D0                     ADD EDX,EAX
006FB56E  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FB571  EB 07                     JMP 0x006fb57a
LAB_006fb573:
006FB573  83 E0 7F                  AND EAX,0x7f
006FB576  3B C7                     CMP EAX,EDI
006FB578  7F 12                     JG 0x006fb58c
LAB_006fb57a:
006FB57A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB57D  2B F8                     SUB EDI,EAX
006FB57F  33 C0                     XOR EAX,EAX
006FB581  8A 02                     MOV AL,byte ptr [EDX]
006FB583  42                        INC EDX
006FB584  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006FB587  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FB58A  EB C3                     JMP 0x006fb54f
LAB_006fb58c:
006FB58C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006FB58F  2B C7                     SUB EAX,EDI
006FB591  81 E2 C0 00 00 00         AND EDX,0xc0
006FB597  80 FA 80                  CMP DL,0x80
006FB59A  75 03                     JNZ 0x006fb59f
006FB59C  01 7D 1C                  ADD dword ptr [EBP + 0x1c],EDI
LAB_006fb59f:
006FB59F  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FB5A2  3B C7                     CMP EAX,EDI
006FB5A4  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FB5A7  0F 8F BE 03 00 00         JG 0x006fb96b
006FB5AD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006FB5B0  81 E2 80 00 00 00         AND EDX,0x80
LAB_006fb5b6:
006FB5B6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FB5B9  2B F8                     SUB EDI,EAX
006FB5BB  85 D2                     TEST EDX,EDX
006FB5BD  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FB5C0  0F 84 44 03 00 00         JZ 0x006fb90a
006FB5C6  F6 45 F4 40               TEST byte ptr [EBP + -0xc],0x40
006FB5CA  0F 84 96 01 00 00         JZ 0x006fb766
006FB5D0  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB5D3  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FB5D6  33 D2                     XOR EDX,EDX
006FB5D8  8A 17                     MOV DL,byte ptr [EDI]
006FB5DA  8B FA                     MOV EDI,EDX
006FB5DC  33 D2                     XOR EDX,EDX
006FB5DE  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FB5E1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB5E4  47                        INC EDI
006FB5E5  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006FB5E8  85 C9                     TEST ECX,ECX
006FB5EA  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB5ED  0F 8E B9 00 00 00         JLE 0x006fb6ac
006FB5F3  8D 51 FF                  LEA EDX,[ECX + -0x1]
006FB5F6  83 FA 03                  CMP EDX,0x3
006FB5F9  0F 87 AD 00 00 00         JA 0x006fb6ac
switchD_006fb5ff::switchD:
006FB5FF  FF 24 95 F8 BC 6F 00      JMP dword ptr [EDX*0x4 + 0x6fbcf8]
switchD_006fb5ff::caseD_1:
006FB606  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB609  33 C9                     XOR ECX,ECX
006FB60B  66 8B 0A                  MOV CX,word ptr [EDX]
006FB60E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB611  3B D1                     CMP EDX,ECX
006FB613  77 0A                     JA 0x006fb61f
006FB615  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
006FB618  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FB61B  88 0E                     MOV byte ptr [ESI],CL
006FB61D  EB 0F                     JMP 0x006fb62e
LAB_006fb61f:
006FB61F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FB622  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB625  33 D2                     XOR EDX,EDX
006FB627  8A 13                     MOV DL,byte ptr [EBX]
006FB629  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB62C  88 16                     MOV byte ptr [ESI],DL
LAB_006fb62e:
006FB62E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB631  B9 02 00 00 00            MOV ECX,0x2
006FB636  03 D1                     ADD EDX,ECX
006FB638  46                        INC ESI
006FB639  43                        INC EBX
006FB63A  48                        DEC EAX
006FB63B  85 C0                     TEST EAX,EAX
006FB63D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FB640  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB643  0F 8E EB 02 00 00         JLE 0x006fb934
006FB649  EB 03                     JMP 0x006fb64e
switchD_006fb5ff::caseD_2:
006FB64B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006fb64e:
006FB64E  48                        DEC EAX
006FB64F  B9 03 00 00 00            MOV ECX,0x3
006FB654  85 C0                     TEST EAX,EAX
006FB656  0F 8E D8 02 00 00         JLE 0x006fb934
006FB65C  EB 03                     JMP 0x006fb661
switchD_006fb5ff::caseD_3:
006FB65E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006fb661:
006FB661  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB664  33 C9                     XOR ECX,ECX
006FB666  66 8B 0A                  MOV CX,word ptr [EDX]
006FB669  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB66C  3B D1                     CMP EDX,ECX
006FB66E  77 07                     JA 0x006fb677
006FB670  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
006FB673  88 0E                     MOV byte ptr [ESI],CL
006FB675  EB 0C                     JMP 0x006fb683
LAB_006fb677:
006FB677  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB67A  33 D2                     XOR EDX,EDX
006FB67C  8A 13                     MOV DL,byte ptr [EBX]
006FB67E  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB681  88 16                     MOV byte ptr [ESI],DL
LAB_006fb683:
006FB683  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FB686  83 C1 02                  ADD ECX,0x2
006FB689  46                        INC ESI
006FB68A  43                        INC EBX
006FB68B  48                        DEC EAX
006FB68C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FB68F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB692  85 C0                     TEST EAX,EAX
006FB694  B9 04 00 00 00            MOV ECX,0x4
006FB699  0F 8E 95 02 00 00         JLE 0x006fb934
006FB69F  33 C9                     XOR ECX,ECX
006FB6A1  48                        DEC EAX
006FB6A2  EB 0B                     JMP 0x006fb6af
switchD_006fb5ff::caseD_4:
006FB6A4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FB6A7  33 C9                     XOR ECX,ECX
006FB6A9  48                        DEC EAX
006FB6AA  EB 03                     JMP 0x006fb6af
LAB_006fb6ac:
006FB6AC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
switchD_006fb5ff::default:
006FB6AF  85 C0                     TEST EAX,EAX
006FB6B1  0F 8E 7D 02 00 00         JLE 0x006fb934
006FB6B7  48                        DEC EAX
006FB6B8  B9 01 00 00 00            MOV ECX,0x1
006FB6BD  85 C0                     TEST EAX,EAX
006FB6BF  0F 8E 6F 02 00 00         JLE 0x006fb934
LAB_006fb6c5:
006FB6C5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB6C8  33 C9                     XOR ECX,ECX
006FB6CA  66 8B 0A                  MOV CX,word ptr [EDX]
006FB6CD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB6D0  3B D1                     CMP EDX,ECX
006FB6D2  77 07                     JA 0x006fb6db
006FB6D4  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
006FB6D7  88 0E                     MOV byte ptr [ESI],CL
006FB6D9  EB 0C                     JMP 0x006fb6e7
LAB_006fb6db:
006FB6DB  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB6DE  33 D2                     XOR EDX,EDX
006FB6E0  8A 13                     MOV DL,byte ptr [EBX]
006FB6E2  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB6E5  88 16                     MOV byte ptr [ESI],DL
LAB_006fb6e7:
006FB6E7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB6EA  B9 02 00 00 00            MOV ECX,0x2
006FB6EF  03 D1                     ADD EDX,ECX
006FB6F1  46                        INC ESI
006FB6F2  43                        INC EBX
006FB6F3  48                        DEC EAX
006FB6F4  85 C0                     TEST EAX,EAX
006FB6F6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FB6F9  0F 8E 06 02 00 00         JLE 0x006fb905
006FB6FF  48                        DEC EAX
006FB700  B9 03 00 00 00            MOV ECX,0x3
006FB705  85 C0                     TEST EAX,EAX
006FB707  0F 8E F8 01 00 00         JLE 0x006fb905
006FB70D  33 C9                     XOR ECX,ECX
006FB70F  66 8B 0A                  MOV CX,word ptr [EDX]
006FB712  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB715  3B D1                     CMP EDX,ECX
006FB717  77 07                     JA 0x006fb720
006FB719  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
006FB71C  88 0E                     MOV byte ptr [ESI],CL
006FB71E  EB 0C                     JMP 0x006fb72c
LAB_006fb720:
006FB720  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB723  33 D2                     XOR EDX,EDX
006FB725  8A 13                     MOV DL,byte ptr [EBX]
006FB727  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB72A  88 16                     MOV byte ptr [ESI],DL
LAB_006fb72c:
006FB72C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FB72F  83 C1 02                  ADD ECX,0x2
006FB732  46                        INC ESI
006FB733  43                        INC EBX
006FB734  48                        DEC EAX
006FB735  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FB738  B9 04 00 00 00            MOV ECX,0x4
006FB73D  85 C0                     TEST EAX,EAX
006FB73F  0F 8E C0 01 00 00         JLE 0x006fb905
006FB745  33 C9                     XOR ECX,ECX
006FB747  48                        DEC EAX
006FB748  85 C0                     TEST EAX,EAX
006FB74A  0F 8E B5 01 00 00         JLE 0x006fb905
006FB750  48                        DEC EAX
006FB751  B9 01 00 00 00            MOV ECX,0x1
006FB756  85 C0                     TEST EAX,EAX
006FB758  0F 8F 67 FF FF FF         JG 0x006fb6c5
006FB75E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB761  E9 CE 01 00 00            JMP 0x006fb934
LAB_006fb766:
006FB766  85 C9                     TEST ECX,ECX
006FB768  0F 8E DB 00 00 00         JLE 0x006fb849
006FB76E  8D 51 FF                  LEA EDX,[ECX + -0x1]
006FB771  83 FA 03                  CMP EDX,0x3
006FB774  0F 87 CF 00 00 00         JA 0x006fb849
switchD_006fb77a::switchD:
006FB77A  FF 24 95 08 BD 6F 00      JMP dword ptr [EDX*0x4 + 0x6fbd08]
switchD_006fb77a::caseD_1:
006FB781  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB784  33 C9                     XOR ECX,ECX
006FB786  66 8B 0A                  MOV CX,word ptr [EDX]
006FB789  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB78C  3B D1                     CMP EDX,ECX
006FB78E  77 11                     JA 0x006fb7a1
006FB790  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB793  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB796  33 C9                     XOR ECX,ECX
006FB798  8A 0F                     MOV CL,byte ptr [EDI]
006FB79A  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB79D  88 0E                     MOV byte ptr [ESI],CL
006FB79F  EB 0F                     JMP 0x006fb7b0
LAB_006fb7a1:
006FB7A1  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB7A4  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB7A7  33 D2                     XOR EDX,EDX
006FB7A9  8A 13                     MOV DL,byte ptr [EBX]
006FB7AB  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB7AE  88 16                     MOV byte ptr [ESI],DL
LAB_006fb7b0:
006FB7B0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB7B3  B9 02 00 00 00            MOV ECX,0x2
006FB7B8  03 D1                     ADD EDX,ECX
006FB7BA  46                        INC ESI
006FB7BB  43                        INC EBX
006FB7BC  47                        INC EDI
006FB7BD  48                        DEC EAX
006FB7BE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FB7C1  85 C0                     TEST EAX,EAX
006FB7C3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB7C6  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB7C9  0F 8E 65 01 00 00         JLE 0x006fb934
006FB7CF  EB 03                     JMP 0x006fb7d4
switchD_006fb77a::caseD_2:
006FB7D1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006fb7d4:
006FB7D4  47                        INC EDI
006FB7D5  48                        DEC EAX
006FB7D6  85 C0                     TEST EAX,EAX
006FB7D8  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB7DB  B9 03 00 00 00            MOV ECX,0x3
006FB7E0  0F 8E 4E 01 00 00         JLE 0x006fb934
006FB7E6  EB 03                     JMP 0x006fb7eb
switchD_006fb77a::caseD_3:
006FB7E8  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006fb7eb:
006FB7EB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB7EE  33 C9                     XOR ECX,ECX
006FB7F0  66 8B 0A                  MOV CX,word ptr [EDX]
006FB7F3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB7F6  3B D1                     CMP EDX,ECX
006FB7F8  77 0E                     JA 0x006fb808
006FB7FA  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB7FD  33 C9                     XOR ECX,ECX
006FB7FF  8A 0F                     MOV CL,byte ptr [EDI]
006FB801  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB804  88 0E                     MOV byte ptr [ESI],CL
006FB806  EB 0C                     JMP 0x006fb814
LAB_006fb808:
006FB808  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB80B  33 D2                     XOR EDX,EDX
006FB80D  8A 13                     MOV DL,byte ptr [EBX]
006FB80F  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB812  88 16                     MOV byte ptr [ESI],DL
LAB_006fb814:
006FB814  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB817  B9 04 00 00 00            MOV ECX,0x4
006FB81C  83 C2 02                  ADD EDX,0x2
006FB81F  46                        INC ESI
006FB820  43                        INC EBX
006FB821  47                        INC EDI
006FB822  48                        DEC EAX
006FB823  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FB826  85 C0                     TEST EAX,EAX
006FB828  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB82B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB82E  0F 8E 00 01 00 00         JLE 0x006fb934
006FB834  47                        INC EDI
006FB835  33 C9                     XOR ECX,ECX
006FB837  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB83A  48                        DEC EAX
006FB83B  EB 0F                     JMP 0x006fb84c
switchD_006fb77a::caseD_4:
006FB83D  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB840  33 C9                     XOR ECX,ECX
006FB842  47                        INC EDI
006FB843  48                        DEC EAX
006FB844  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB847  EB 03                     JMP 0x006fb84c
LAB_006fb849:
006FB849  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
switchD_006fb77a::default:
006FB84C  85 C0                     TEST EAX,EAX
006FB84E  0F 8E E0 00 00 00         JLE 0x006fb934
006FB854  47                        INC EDI
006FB855  48                        DEC EAX
006FB856  85 C0                     TEST EAX,EAX
006FB858  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB85B  B9 01 00 00 00            MOV ECX,0x1
006FB860  0F 8E CE 00 00 00         JLE 0x006fb934
LAB_006fb866:
006FB866  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB869  33 C9                     XOR ECX,ECX
006FB86B  66 8B 0A                  MOV CX,word ptr [EDX]
006FB86E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB871  3B D1                     CMP EDX,ECX
006FB873  77 0E                     JA 0x006fb883
006FB875  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB878  33 C9                     XOR ECX,ECX
006FB87A  8A 0F                     MOV CL,byte ptr [EDI]
006FB87C  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB87F  88 0E                     MOV byte ptr [ESI],CL
006FB881  EB 0C                     JMP 0x006fb88f
LAB_006fb883:
006FB883  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB886  33 D2                     XOR EDX,EDX
006FB888  8A 13                     MOV DL,byte ptr [EBX]
006FB88A  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB88D  88 16                     MOV byte ptr [ESI],DL
LAB_006fb88f:
006FB88F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB892  B9 02 00 00 00            MOV ECX,0x2
006FB897  03 D1                     ADD EDX,ECX
006FB899  46                        INC ESI
006FB89A  43                        INC EBX
006FB89B  47                        INC EDI
006FB89C  48                        DEC EAX
006FB89D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FB8A0  85 C0                     TEST EAX,EAX
006FB8A2  7E 5E                     JLE 0x006fb902
006FB8A4  47                        INC EDI
006FB8A5  48                        DEC EAX
006FB8A6  85 C0                     TEST EAX,EAX
006FB8A8  B9 03 00 00 00            MOV ECX,0x3
006FB8AD  7E 53                     JLE 0x006fb902
006FB8AF  33 C9                     XOR ECX,ECX
006FB8B1  66 8B 0A                  MOV CX,word ptr [EDX]
006FB8B4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB8B7  3B D1                     CMP EDX,ECX
006FB8B9  77 0E                     JA 0x006fb8c9
006FB8BB  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB8BE  33 C9                     XOR ECX,ECX
006FB8C0  8A 0F                     MOV CL,byte ptr [EDI]
006FB8C2  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB8C5  88 0E                     MOV byte ptr [ESI],CL
006FB8C7  EB 0C                     JMP 0x006fb8d5
LAB_006fb8c9:
006FB8C9  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB8CC  33 D2                     XOR EDX,EDX
006FB8CE  8A 13                     MOV DL,byte ptr [EBX]
006FB8D0  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB8D3  88 16                     MOV byte ptr [ESI],DL
LAB_006fb8d5:
006FB8D5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FB8D8  B9 04 00 00 00            MOV ECX,0x4
006FB8DD  83 C2 02                  ADD EDX,0x2
006FB8E0  46                        INC ESI
006FB8E1  43                        INC EBX
006FB8E2  47                        INC EDI
006FB8E3  48                        DEC EAX
006FB8E4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FB8E7  85 C0                     TEST EAX,EAX
006FB8E9  7E 17                     JLE 0x006fb902
006FB8EB  47                        INC EDI
006FB8EC  33 C9                     XOR ECX,ECX
006FB8EE  48                        DEC EAX
006FB8EF  85 C0                     TEST EAX,EAX
006FB8F1  7E 0F                     JLE 0x006fb902
006FB8F3  47                        INC EDI
006FB8F4  48                        DEC EAX
006FB8F5  85 C0                     TEST EAX,EAX
006FB8F7  B9 01 00 00 00            MOV ECX,0x1
006FB8FC  0F 8F 64 FF FF FF         JG 0x006fb866
LAB_006fb902:
006FB902  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fb905:
006FB905  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FB908  EB 2A                     JMP 0x006fb934
LAB_006fb90a:
006FB90A  48                        DEC EAX
006FB90B  78 24                     JS 0x006fb931
006FB90D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FB910  40                        INC EAX
LAB_006fb911:
006FB911  8B D1                     MOV EDX,ECX
006FB913  83 E2 01                  AND EDX,0x1
006FB916  80 FA 01                  CMP DL,0x1
006FB919  75 05                     JNZ 0x006fb920
006FB91B  46                        INC ESI
006FB91C  43                        INC EBX
006FB91D  83 C7 02                  ADD EDI,0x2
LAB_006fb920:
006FB920  41                        INC ECX
006FB921  83 F9 04                  CMP ECX,0x4
006FB924  7E 02                     JLE 0x006fb928
006FB926  33 C9                     XOR ECX,ECX
LAB_006fb928:
006FB928  48                        DEC EAX
006FB929  75 E6                     JNZ 0x006fb911
006FB92B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006FB92E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006fb931:
006FB931  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006fb934:
006FB934  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FB937  85 C0                     TEST EAX,EAX
006FB939  7E 2B                     JLE 0x006fb966
006FB93B  33 D2                     XOR EDX,EDX
006FB93D  8A 17                     MOV DL,byte ptr [EDI]
006FB93F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006FB942  81 E2 80 00 00 00         AND EDX,0x80
006FB948  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FB94B  47                        INC EDI
006FB94C  85 D2                     TEST EDX,EDX
006FB94E  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB951  74 05                     JZ 0x006fb958
006FB953  83 E0 3F                  AND EAX,0x3f
006FB956  EB 03                     JMP 0x006fb95b
LAB_006fb958:
006FB958  83 E0 7F                  AND EAX,0x7f
LAB_006fb95b:
006FB95B  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006FB95E  0F 8E 52 FC FF FF         JLE 0x006fb5b6
006FB964  EB 02                     JMP 0x006fb968
LAB_006fb966:
006FB966  33 C0                     XOR EAX,EAX
LAB_006fb968:
006FB968  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006fb96b:
006FB96B  2B C7                     SUB EAX,EDI
006FB96D  85 FF                     TEST EDI,EDI
006FB96F  0F 8E E4 02 00 00         JLE 0x006fbc59
006FB975  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
006FB978  F6 C2 80                  TEST DL,0x80
006FB97B  0F 84 D8 02 00 00         JZ 0x006fbc59
006FB981  F6 C2 40                  TEST DL,0x40
006FB984  0F 84 56 01 00 00         JZ 0x006fbae0
006FB98A  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB98D  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FB990  33 D2                     XOR EDX,EDX
006FB992  8A 17                     MOV DL,byte ptr [EDI]
006FB994  8B FA                     MOV EDI,EDX
006FB996  33 D2                     XOR EDX,EDX
006FB998  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FB99B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FB99E  43                        INC EBX
006FB99F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006FB9A2  85 C9                     TEST ECX,ECX
006FB9A4  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FB9A7  0F 8E A6 00 00 00         JLE 0x006fba53
006FB9AD  49                        DEC ECX
006FB9AE  83 F9 03                  CMP ECX,0x3
006FB9B1  0F 87 9C 00 00 00         JA 0x006fba53
switchD_006fb9b7::switchD:
006FB9B7  FF 24 8D 18 BD 6F 00      JMP dword ptr [ECX*0x4 + 0x6fbd18]
switchD_006fb9b7::caseD_1:
006FB9BE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FB9C1  33 C9                     XOR ECX,ECX
006FB9C3  66 8B 0F                  MOV CX,word ptr [EDI]
006FB9C6  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FB9C9  3B F9                     CMP EDI,ECX
006FB9CB  77 07                     JA 0x006fb9d4
006FB9CD  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FB9D0  88 16                     MOV byte ptr [ESI],DL
006FB9D2  EB 0F                     JMP 0x006fb9e3
LAB_006fb9d4:
006FB9D4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FB9D7  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FB9DA  33 D2                     XOR EDX,EDX
006FB9DC  8A 17                     MOV DL,byte ptr [EDI]
006FB9DE  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB9E1  88 16                     MOV byte ptr [ESI],DL
LAB_006fb9e3:
006FB9E3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FB9E6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FB9E9  83 C3 02                  ADD EBX,0x2
006FB9EC  46                        INC ESI
006FB9ED  47                        INC EDI
006FB9EE  49                        DEC ECX
006FB9EF  85 C9                     TEST ECX,ECX
006FB9F1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FB9F4  0F 8E 5F 02 00 00         JLE 0x006fbc59
006FB9FA  EB 06                     JMP 0x006fba02
switchD_006fb9b7::caseD_2:
006FB9FC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FB9FF  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006fba02:
006FBA02  49                        DEC ECX
006FBA03  85 C9                     TEST ECX,ECX
006FBA05  0F 8E 4E 02 00 00         JLE 0x006fbc59
006FBA0B  EB 06                     JMP 0x006fba13
switchD_006fb9b7::caseD_3:
006FBA0D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FBA10  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006fba13:
006FBA13  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FBA16  33 D2                     XOR EDX,EDX
006FBA18  66 8B 13                  MOV DX,word ptr [EBX]
006FBA1B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FBA1E  3B DA                     CMP EBX,EDX
006FBA20  77 05                     JA 0x006fba27
006FBA22  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
006FBA25  EB 0A                     JMP 0x006fba31
LAB_006fba27:
006FBA27  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FBA2A  33 D2                     XOR EDX,EDX
006FBA2C  8A 17                     MOV DL,byte ptr [EDI]
006FBA2E  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006fba31:
006FBA31  88 16                     MOV byte ptr [ESI],DL
006FBA33  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBA36  83 C2 02                  ADD EDX,0x2
006FBA39  46                        INC ESI
006FBA3A  47                        INC EDI
006FBA3B  49                        DEC ECX
006FBA3C  85 C9                     TEST ECX,ECX
006FBA3E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBA41  0F 8E 12 02 00 00         JLE 0x006fbc59
006FBA47  49                        DEC ECX
006FBA48  EB 0F                     JMP 0x006fba59
switchD_006fb9b7::caseD_4:
006FBA4A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FBA4D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FBA50  49                        DEC ECX
006FBA51  EB 06                     JMP 0x006fba59
LAB_006fba53:
006FBA53  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FBA56  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
switchD_006fb9b7::default:
006FBA59  85 C9                     TEST ECX,ECX
006FBA5B  0F 8E F8 01 00 00         JLE 0x006fbc59
006FBA61  49                        DEC ECX
006FBA62  85 C9                     TEST ECX,ECX
006FBA64  0F 8E EF 01 00 00         JLE 0x006fbc59
LAB_006fba6a:
006FBA6A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FBA6D  33 D2                     XOR EDX,EDX
006FBA6F  66 8B 13                  MOV DX,word ptr [EBX]
006FBA72  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FBA75  3B DA                     CMP EBX,EDX
006FBA77  77 05                     JA 0x006fba7e
006FBA79  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
006FBA7C  EB 0A                     JMP 0x006fba88
LAB_006fba7e:
006FBA7E  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FBA81  33 D2                     XOR EDX,EDX
006FBA83  8A 17                     MOV DL,byte ptr [EDI]
006FBA85  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006fba88:
006FBA88  88 16                     MOV byte ptr [ESI],DL
006FBA8A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBA8D  83 C2 02                  ADD EDX,0x2
006FBA90  46                        INC ESI
006FBA91  83 E9 02                  SUB ECX,0x2
006FBA94  47                        INC EDI
006FBA95  85 C9                     TEST ECX,ECX
006FBA97  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBA9A  0F 8E B9 01 00 00         JLE 0x006fbc59
006FBAA0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FBAA3  33 D2                     XOR EDX,EDX
006FBAA5  66 8B 13                  MOV DX,word ptr [EBX]
006FBAA8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FBAAB  3B DA                     CMP EBX,EDX
006FBAAD  77 05                     JA 0x006fbab4
006FBAAF  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
006FBAB2  EB 0A                     JMP 0x006fbabe
LAB_006fbab4:
006FBAB4  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FBAB7  33 D2                     XOR EDX,EDX
006FBAB9  8A 17                     MOV DL,byte ptr [EDI]
006FBABB  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006fbabe:
006FBABE  88 16                     MOV byte ptr [ESI],DL
006FBAC0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBAC3  83 C2 02                  ADD EDX,0x2
006FBAC6  46                        INC ESI
006FBAC7  83 E9 02                  SUB ECX,0x2
006FBACA  47                        INC EDI
006FBACB  85 C9                     TEST ECX,ECX
006FBACD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBAD0  0F 8E 83 01 00 00         JLE 0x006fbc59
006FBAD6  49                        DEC ECX
006FBAD7  85 C9                     TEST ECX,ECX
006FBAD9  7F 8F                     JG 0x006fba6a
006FBADB  E9 79 01 00 00            JMP 0x006fbc59
LAB_006fbae0:
006FBAE0  85 C9                     TEST ECX,ECX
006FBAE2  0F 8E B7 00 00 00         JLE 0x006fbb9f
006FBAE8  49                        DEC ECX
006FBAE9  83 F9 03                  CMP ECX,0x3
006FBAEC  0F 87 AD 00 00 00         JA 0x006fbb9f
switchD_006fbaf2::switchD:
006FBAF2  FF 24 8D 28 BD 6F 00      JMP dword ptr [ECX*0x4 + 0x6fbd28]
switchD_006fbaf2::caseD_1:
006FBAF9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBAFC  33 C9                     XOR ECX,ECX
006FBAFE  66 8B 0A                  MOV CX,word ptr [EDX]
006FBB01  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FBB04  3B D1                     CMP EDX,ECX
006FBB06  77 11                     JA 0x006fbb19
006FBB08  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FBB0B  33 C9                     XOR ECX,ECX
006FBB0D  8A 0A                     MOV CL,byte ptr [EDX]
006FBB0F  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FBB12  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FBB15  88 0E                     MOV byte ptr [ESI],CL
006FBB17  EB 0C                     JMP 0x006fbb25
LAB_006fbb19:
006FBB19  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FBB1C  33 D2                     XOR EDX,EDX
006FBB1E  8A 13                     MOV DL,byte ptr [EBX]
006FBB20  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FBB23  88 16                     MOV byte ptr [ESI],DL
LAB_006fbb25:
006FBB25  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBB28  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBB2B  83 C2 02                  ADD EDX,0x2
006FBB2E  46                        INC ESI
006FBB2F  43                        INC EBX
006FBB30  41                        INC ECX
006FBB31  4F                        DEC EDI
006FBB32  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBB35  85 FF                     TEST EDI,EDI
006FBB37  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBB3A  0F 8E 19 01 00 00         JLE 0x006fbc59
switchD_006fbaf2::caseD_2:
006FBB40  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBB43  41                        INC ECX
006FBB44  4F                        DEC EDI
006FBB45  85 FF                     TEST EDI,EDI
006FBB47  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBB4A  0F 8E 09 01 00 00         JLE 0x006fbc59
switchD_006fbaf2::caseD_3:
006FBB50  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBB53  33 C9                     XOR ECX,ECX
006FBB55  66 8B 0A                  MOV CX,word ptr [EDX]
006FBB58  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FBB5B  3B D1                     CMP EDX,ECX
006FBB5D  77 11                     JA 0x006fbb70
006FBB5F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FBB62  33 C9                     XOR ECX,ECX
006FBB64  8A 0A                     MOV CL,byte ptr [EDX]
006FBB66  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FBB69  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FBB6C  88 0E                     MOV byte ptr [ESI],CL
006FBB6E  EB 0C                     JMP 0x006fbb7c
LAB_006fbb70:
006FBB70  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FBB73  33 D2                     XOR EDX,EDX
006FBB75  8A 13                     MOV DL,byte ptr [EBX]
006FBB77  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FBB7A  88 16                     MOV byte ptr [ESI],DL
LAB_006fbb7c:
006FBB7C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBB7F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBB82  83 C2 02                  ADD EDX,0x2
006FBB85  46                        INC ESI
006FBB86  43                        INC EBX
006FBB87  41                        INC ECX
006FBB88  4F                        DEC EDI
006FBB89  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBB8C  85 FF                     TEST EDI,EDI
006FBB8E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBB91  0F 8E C2 00 00 00         JLE 0x006fbc59
switchD_006fbaf2::caseD_4:
006FBB97  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FBB9A  42                        INC EDX
006FBB9B  4F                        DEC EDI
006FBB9C  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
switchD_006fbaf2::default:
006FBB9F  85 FF                     TEST EDI,EDI
006FBBA1  0F 8E B2 00 00 00         JLE 0x006fbc59
006FBBA7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBBAA  41                        INC ECX
006FBBAB  4F                        DEC EDI
006FBBAC  85 FF                     TEST EDI,EDI
006FBBAE  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBBB1  0F 8E A2 00 00 00         JLE 0x006fbc59
LAB_006fbbb7:
006FBBB7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBBBA  33 C9                     XOR ECX,ECX
006FBBBC  66 8B 0A                  MOV CX,word ptr [EDX]
006FBBBF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FBBC2  3B D1                     CMP EDX,ECX
006FBBC4  77 11                     JA 0x006fbbd7
006FBBC6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FBBC9  33 C9                     XOR ECX,ECX
006FBBCB  8A 0A                     MOV CL,byte ptr [EDX]
006FBBCD  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FBBD0  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FBBD3  88 0E                     MOV byte ptr [ESI],CL
006FBBD5  EB 0C                     JMP 0x006fbbe3
LAB_006fbbd7:
006FBBD7  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FBBDA  33 D2                     XOR EDX,EDX
006FBBDC  8A 13                     MOV DL,byte ptr [EBX]
006FBBDE  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FBBE1  88 16                     MOV byte ptr [ESI],DL
LAB_006fbbe3:
006FBBE3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBBE6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBBE9  83 C2 02                  ADD EDX,0x2
006FBBEC  46                        INC ESI
006FBBED  43                        INC EBX
006FBBEE  41                        INC ECX
006FBBEF  4F                        DEC EDI
006FBBF0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBBF3  85 FF                     TEST EDI,EDI
006FBBF5  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBBF8  7E 5F                     JLE 0x006fbc59
006FBBFA  41                        INC ECX
006FBBFB  4F                        DEC EDI
006FBBFC  85 FF                     TEST EDI,EDI
006FBBFE  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBC01  7E 56                     JLE 0x006fbc59
006FBC03  33 C9                     XOR ECX,ECX
006FBC05  66 8B 0A                  MOV CX,word ptr [EDX]
006FBC08  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FBC0B  3B D1                     CMP EDX,ECX
006FBC0D  77 11                     JA 0x006fbc20
006FBC0F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FBC12  33 C9                     XOR ECX,ECX
006FBC14  8A 0A                     MOV CL,byte ptr [EDX]
006FBC16  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FBC19  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FBC1C  88 0E                     MOV byte ptr [ESI],CL
006FBC1E  EB 0C                     JMP 0x006fbc2c
LAB_006fbc20:
006FBC20  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FBC23  33 D2                     XOR EDX,EDX
006FBC25  8A 13                     MOV DL,byte ptr [EBX]
006FBC27  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FBC2A  88 16                     MOV byte ptr [ESI],DL
LAB_006fbc2c:
006FBC2C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006FBC2F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBC32  83 C2 02                  ADD EDX,0x2
006FBC35  46                        INC ESI
006FBC36  43                        INC EBX
006FBC37  41                        INC ECX
006FBC38  4F                        DEC EDI
006FBC39  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006FBC3C  85 FF                     TEST EDI,EDI
006FBC3E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBC41  7E 16                     JLE 0x006fbc59
006FBC43  41                        INC ECX
006FBC44  4F                        DEC EDI
006FBC45  85 FF                     TEST EDI,EDI
006FBC47  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBC4A  7E 0D                     JLE 0x006fbc59
006FBC4C  41                        INC ECX
006FBC4D  4F                        DEC EDI
006FBC4E  85 FF                     TEST EDI,EDI
006FBC50  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBC53  0F 8F 5E FF FF FF         JG 0x006fbbb7
FUN_006fb4a0::cf_common_join_006FBC59:
006FBC59  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FBC5C  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FBC5F  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FBC62  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006FBC65  2B CF                     SUB ECX,EDI
006FBC67  2B CE                     SUB ECX,ESI
006FBC69  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FBC6C  3B C1                     CMP EAX,ECX
006FBC6E  7D 2E                     JGE 0x006fbc9e
LAB_006fbc70:
006FBC70  81 E2 C0 00 00 00         AND EDX,0xc0
006FBC76  2B C8                     SUB ECX,EAX
006FBC78  80 FA 80                  CMP DL,0x80
006FBC7B  75 02                     JNZ 0x006fbc7f
006FBC7D  03 F0                     ADD ESI,EAX
LAB_006fbc7f:
006FBC7F  33 D2                     XOR EDX,EDX
006FBC81  8A 16                     MOV DL,byte ptr [ESI]
006FBC83  8B C2                     MOV EAX,EDX
006FBC85  24 80                     AND AL,0x80
006FBC87  46                        INC ESI
006FBC88  84 C0                     TEST AL,AL
006FBC8A  8B C2                     MOV EAX,EDX
006FBC8C  74 09                     JZ 0x006fbc97
006FBC8E  83 E0 3F                  AND EAX,0x3f
006FBC91  F6 C2 40                  TEST DL,0x40
006FBC94  74 01                     JZ 0x006fbc97
006FBC96  46                        INC ESI
LAB_006fbc97:
006FBC97  3B C1                     CMP EAX,ECX
006FBC99  7C D5                     JL 0x006fbc70
006FBC9B  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fbc9e:
006FBC9E  81 E2 C0 00 00 00         AND EDX,0xc0
006FBCA4  80 FA 80                  CMP DL,0x80
006FBCA7  75 05                     JNZ 0x006fbcae
006FBCA9  03 F1                     ADD ESI,ECX
006FBCAB  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fbcae:
006FBCAE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006FBCB1  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006FBCB4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FBCB7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006FBCBA  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006FBCBD  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006FBCC0  03 F0                     ADD ESI,EAX
006FBCC2  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FBCC5  03 D9                     ADD EBX,ECX
006FBCC7  03 FA                     ADD EDI,EDX
006FBCC9  40                        INC EAX
006FBCCA  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006FBCCD  83 F8 04                  CMP EAX,0x4
006FBCD0  89 7D 3C                  MOV dword ptr [EBP + 0x3c],EDI
006FBCD3  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006FBCD6  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FBCD9  7E 07                     JLE 0x006fbce2
006FBCDB  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fbce2:
006FBCE2  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FBCE5  48                        DEC EAX
006FBCE6  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FBCE9  0F 89 DC F7 FF FF         JNS 0x006fb4cb
006FBCEF  5F                        POP EDI
006FBCF0  5E                        POP ESI
006FBCF1  5B                        POP EBX
LAB_006fbcf2:
006FBCF2  8B E5                     MOV ESP,EBP
006FBCF4  5D                        POP EBP
006FBCF5  C2 40 00                  RET 0x40
