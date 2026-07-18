FUN_006a64e0:
006A64E0  55                        PUSH EBP
006A64E1  8B EC                     MOV EBP,ESP
006A64E3  83 EC 50                  SUB ESP,0x50
006A64E6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A64E9  53                        PUSH EBX
006A64EA  8B C1                     MOV EAX,ECX
006A64EC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006A64EF  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006A64F3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A64F6  0F AF 45 20               IMUL EAX,dword ptr [EBP + 0x20]
006A64FA  8B D1                     MOV EDX,ECX
006A64FC  56                        PUSH ESI
006A64FD  0F AF 55 1C               IMUL EDX,dword ptr [EBP + 0x1c]
006A6501  8B F3                     MOV ESI,EBX
006A6503  57                        PUSH EDI
006A6504  03 F0                     ADD ESI,EAX
006A6506  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A6509  03 D6                     ADD EDX,ESI
006A650B  33 FF                     XOR EDI,EDI
006A650D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A6510  66 C7 04 50 01 00         MOV word ptr [EAX + EDX*0x2],0x1
006A6516  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A6519  3B D8                     CMP EBX,EAX
006A651B  75 1F                     JNZ 0x006a653c
006A651D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6520  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A6523  3B D0                     CMP EDX,EAX
006A6525  75 15                     JNZ 0x006a653c
006A6527  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A652A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A652D  3B C2                     CMP EAX,EDX
006A652F  75 0B                     JNZ 0x006a653c
006A6531  5F                        POP EDI
006A6532  5E                        POP ESI
006A6533  33 C0                     XOR EAX,EAX
006A6535  5B                        POP EBX
006A6536  8B E5                     MOV ESP,EBP
006A6538  5D                        POP EBP
006A6539  C2 28 00                  RET 0x28
LAB_006a653c:
006A653C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A653F  8D 34 11                  LEA ESI,[ECX + EDX*0x1]
006A6542  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
006A6546  D1 E6                     SHL ESI,0x1
006A6548  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006A654B  8D 04 F5 00 00 00 00      LEA EAX,[ESI*0x8 + 0x0]
006A6552  50                        PUSH EAX
006A6553  E8 18 96 01 00            CALL 0x006bfb70
006A6558  3B C7                     CMP EAX,EDI
006A655A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006A655D  0F 84 74 09 00 00         JZ 0x006a6ed7
006A6563  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006A6566  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6569  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A656C  8D 04 B0                  LEA EAX,[EAX + ESI*0x4]
006A656F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A6572  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
006A6579  88 18                     MOV byte ptr [EAX],BL
006A657B  88 48 01                  MOV byte ptr [EAX + 0x1],CL
006A657E  88 50 02                  MOV byte ptr [EAX + 0x2],DL
006A6581  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
006A6584  C7 45 B0 02 00 00 00      MOV dword ptr [EBP + -0x50],0x2
LAB_006a658b:
006A658B  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A658E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006A6591  3B C7                     CMP EAX,EDI
006A6593  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006A6596  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006A6599  0F 8E 3F 09 00 00         JLE 0x006a6ede
006A659F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006a65a2:
006A65A2  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006A65A5  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006A65A8  33 C9                     XOR ECX,ECX
006A65AA  33 DB                     XOR EBX,EBX
006A65AC  8A 4C BA 01               MOV CL,byte ptr [EDX + EDI*0x4 + 0x1]
006A65B0  8A 1C BA                  MOV BL,byte ptr [EDX + EDI*0x4]
006A65B3  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006A65B6  33 C9                     XOR ECX,ECX
006A65B8  8A 4C BA 02               MOV CL,byte ptr [EDX + EDI*0x4 + 0x2]
006A65BC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A65BF  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006A65C2  0F AF D1                  IMUL EDX,ECX
006A65C5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A65C8  8B FB                     MOV EDI,EBX
006A65CA  0F AF C8                  IMUL ECX,EAX
006A65CD  03 FA                     ADD EDI,EDX
006A65CF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A65D2  03 CF                     ADD ECX,EDI
006A65D4  0F BF 3C 4A               MOVSX EDI,word ptr [EDX + ECX*0x2]
006A65D8  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006A65DB  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006A65DE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A65E1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A65E4  83 C1 1A                  ADD ECX,0x1a
006A65E7  3B CA                     CMP ECX,EDX
006A65E9  0F 8E 8A 00 00 00         JLE 0x006a6679
006A65EF  8B C2                     MOV EAX,EDX
006A65F1  05 80 00 00 00            ADD EAX,0x80
006A65F6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006A65F9  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
006A6600  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A6603  52                        PUSH EDX
006A6604  50                        PUSH EAX
006A6605  E8 46 95 01 00            CALL 0x006bfb50
006A660A  85 C0                     TEST EAX,EAX
006A660C  0F 84 C5 08 00 00         JZ 0x006a6ed7
006A6612  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A6615  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006A6618  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006A661B  2B CA                     SUB ECX,EDX
006A661D  2B F2                     SUB ESI,EDX
006A661F  C1 F9 02                  SAR ECX,0x2
006A6622  C1 FE 02                  SAR ESI,0x2
006A6625  8D 0C 88                  LEA ECX,[EAX + ECX*0x4]
006A6628  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
006A662B  3B C8                     CMP ECX,EAX
006A662D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006A6630  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006A6633  75 0D                     JNZ 0x006a6642
006A6635  8B CA                     MOV ECX,EDX
006A6637  81 C1 00 02 00 00         ADD ECX,0x200
006A663D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006A6640  EB 09                     JMP 0x006a664b
LAB_006a6642:
006A6642  81 C1 00 02 00 00         ADD ECX,0x200
006A6648  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_006a664b:
006A664B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A664E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6651  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006A6654  8D 34 91                  LEA ESI,[ECX + EDX*0x4]
006A6657  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006A665A  8D 14 8D 00 FE FF FF      LEA EDX,[ECX*0x4 + 0xfffffe00]
006A6661  52                        PUSH EDX
006A6662  8D 94 88 00 FE FF FF      LEA EDX,[EAX + ECX*0x4 + 0xfffffe00]
006A6669  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006A666C  52                        PUSH EDX
006A666D  50                        PUSH EAX
006A666E  E8 FD 73 08 00            CALL 0x0072da70
006A6673  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A6676  83 C4 0C                  ADD ESP,0xc
LAB_006a6679:
006A6679  8D 48 FF                  LEA ECX,[EAX + -0x1]
006A667C  C7 45 F8 FF 00 00 00      MOV dword ptr [EBP + -0x8],0xff
006A6683  3B D9                     CMP EBX,ECX
006A6685  7D 07                     JGE 0x006a668e
006A6687  C7 45 F8 FE 00 00 00      MOV dword ptr [EBP + -0x8],0xfe
LAB_006a668e:
006A668E  85 DB                     TEST EBX,EBX
006A6690  7E 04                     JLE 0x006a6696
006A6692  83 65 F8 EF               AND dword ptr [EBP + -0x8],0xffffffef
LAB_006a6696:
006A6696  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A6699  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A669C  4A                        DEC EDX
006A669D  3B CA                     CMP ECX,EDX
006A669F  7D 04                     JGE 0x006a66a5
006A66A1  83 65 F8 FD               AND dword ptr [EBP + -0x8],0xfffffffd
LAB_006a66a5:
006A66A5  85 C9                     TEST ECX,ECX
006A66A7  7E 04                     JLE 0x006a66ad
006A66A9  83 65 F8 DF               AND dword ptr [EBP + -0x8],0xffffffdf
LAB_006a66ad:
006A66AD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A66B0  8D 51 FF                  LEA EDX,[ECX + -0x1]
006A66B3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A66B6  3B CA                     CMP ECX,EDX
006A66B8  7D 04                     JGE 0x006a66be
006A66BA  83 65 F8 FB               AND dword ptr [EBP + -0x8],0xfffffffb
LAB_006a66be:
006A66BE  85 C9                     TEST ECX,ECX
006A66C0  7E 04                     JLE 0x006a66c6
006A66C2  83 65 F8 BF               AND dword ptr [EBP + -0x8],0xffffffbf
LAB_006a66c6:
006A66C6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A66C9  83 E1 10                  AND ECX,0x10
006A66CC  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006A66CF  75 3D                     JNZ 0x006a670e
006A66D1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A66D4  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006A66D8  66 85 C9                  TEST CX,CX
006A66DB  74 0A                     JZ 0x006a66e7
006A66DD  0F BF C9                  MOVSX ECX,CX
006A66E0  8D 57 03                  LEA EDX,[EDI + 0x3]
006A66E3  3B CA                     CMP ECX,EDX
006A66E5  7E 27                     JLE 0x006a670e
LAB_006a66e7:
006A66E7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A66EA  8D 57 03                  LEA EDX,[EDI + 0x3]
006A66ED  83 C6 04                  ADD ESI,0x4
006A66F0  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006A66F4  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A66F7  8A D3                     MOV DL,BL
006A66F9  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A66FC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A66FF  FE CA                     DEC DL
006A6701  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A6704  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6707  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A670A  41                        INC ECX
006A670B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a670e:
006A670E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6711  83 E1 01                  AND ECX,0x1
006A6714  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A6717  75 3D                     JNZ 0x006a6756
006A6719  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A671C  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006A6720  66 85 C9                  TEST CX,CX
006A6723  74 0A                     JZ 0x006a672f
006A6725  0F BF C9                  MOVSX ECX,CX
006A6728  8D 57 03                  LEA EDX,[EDI + 0x3]
006A672B  3B CA                     CMP ECX,EDX
006A672D  7E 27                     JLE 0x006a6756
LAB_006a672f:
006A672F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6732  8D 57 03                  LEA EDX,[EDI + 0x3]
006A6735  83 C6 04                  ADD ESI,0x4
006A6738  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006A673C  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A673F  8A D3                     MOV DL,BL
006A6741  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6744  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6747  FE C2                     INC DL
006A6749  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A674C  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A674F  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6752  41                        INC ECX
006A6753  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6756:
006A6756  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6759  83 E1 20                  AND ECX,0x20
006A675C  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006A675F  75 41                     JNZ 0x006a67a2
006A6761  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6764  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A6767  2B CA                     SUB ECX,EDX
006A6769  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A676C  66 8B 11                  MOV DX,word ptr [ECX]
006A676F  66 85 D2                  TEST DX,DX
006A6772  74 0D                     JZ 0x006a6781
006A6774  0F BF D2                  MOVSX EDX,DX
006A6777  8D 4F 03                  LEA ECX,[EDI + 0x3]
006A677A  3B D1                     CMP EDX,ECX
006A677C  7E 24                     JLE 0x006a67a2
006A677E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
LAB_006a6781:
006A6781  8D 57 03                  LEA EDX,[EDI + 0x3]
006A6784  83 C6 04                  ADD ESI,0x4
006A6787  66 89 11                  MOV word ptr [ECX],DX
006A678A  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A678D  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6790  FE C9                     DEC CL
006A6792  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6795  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6798  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A679B  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A679E  41                        INC ECX
006A679F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a67a2:
006A67A2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A67A5  83 E1 02                  AND ECX,0x2
006A67A8  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006A67AB  75 3B                     JNZ 0x006a67e8
006A67AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A67B0  66 8B 0C 41               MOV CX,word ptr [ECX + EAX*0x2]
006A67B4  66 85 C9                  TEST CX,CX
006A67B7  74 0A                     JZ 0x006a67c3
006A67B9  0F BF C9                  MOVSX ECX,CX
006A67BC  8D 57 03                  LEA EDX,[EDI + 0x3]
006A67BF  3B CA                     CMP ECX,EDX
006A67C1  7E 25                     JLE 0x006a67e8
LAB_006a67c3:
006A67C3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A67C6  8D 57 03                  LEA EDX,[EDI + 0x3]
006A67C9  83 C6 04                  ADD ESI,0x4
006A67CC  66 89 14 41               MOV word ptr [ECX + EAX*0x2],DX
006A67D0  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A67D3  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A67D6  FE C2                     INC DL
006A67D8  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A67DB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A67DE  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A67E1  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A67E4  41                        INC ECX
006A67E5  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a67e8:
006A67E8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A67EB  83 E1 40                  AND ECX,0x40
006A67EE  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A67F1  75 43                     JNZ 0x006a6836
006A67F3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A67F6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A67F9  03 D2                     ADD EDX,EDX
006A67FB  2B CA                     SUB ECX,EDX
006A67FD  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006A6800  66 8B 11                  MOV DX,word ptr [ECX]
006A6803  66 85 D2                  TEST DX,DX
006A6806  74 0D                     JZ 0x006a6815
006A6808  0F BF D2                  MOVSX EDX,DX
006A680B  8D 4F 03                  LEA ECX,[EDI + 0x3]
006A680E  3B D1                     CMP EDX,ECX
006A6810  7E 24                     JLE 0x006a6836
006A6812  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
LAB_006a6815:
006A6815  8D 57 03                  LEA EDX,[EDI + 0x3]
006A6818  83 C6 04                  ADD ESI,0x4
006A681B  66 89 11                  MOV word ptr [ECX],DX
006A681E  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6821  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A6824  FE CA                     DEC DL
006A6826  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6829  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A682C  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A682F  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6832  41                        INC ECX
006A6833  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6836:
006A6836  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6839  83 E1 04                  AND ECX,0x4
006A683C  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006A683F  75 44                     JNZ 0x006a6885
006A6841  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6844  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A6847  66 8B 0C 51               MOV CX,word ptr [ECX + EDX*0x2]
006A684B  66 85 C9                  TEST CX,CX
006A684E  74 0A                     JZ 0x006a685a
006A6850  0F BF C9                  MOVSX ECX,CX
006A6853  8D 57 03                  LEA EDX,[EDI + 0x3]
006A6856  3B CA                     CMP ECX,EDX
006A6858  7E 2B                     JLE 0x006a6885
LAB_006a685a:
006A685A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A685D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A6860  8D 57 03                  LEA EDX,[EDI + 0x3]
006A6863  83 C6 04                  ADD ESI,0x4
006A6866  66 89 14 48               MOV word ptr [EAX + ECX*0x2],DX
006A686A  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
006A686D  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6870  FE C0                     INC AL
006A6872  88 46 FE                  MOV byte ptr [ESI + -0x2],AL
006A6875  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A6878  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A687B  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A687E  40                        INC EAX
006A687F  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A6882  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006a6885:
006A6885  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006A6888  85 C9                     TEST ECX,ECX
006A688A  0F 85 1A 01 00 00         JNZ 0x006a69aa
006A6890  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6893  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A6896  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006A6899  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A689C  85 D2                     TEST EDX,EDX
006A689E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A68A1  75 3C                     JNZ 0x006a68df
006A68A3  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006A68A7  66 85 D2                  TEST DX,DX
006A68AA  74 0D                     JZ 0x006a68b9
006A68AC  0F BF D2                  MOVSX EDX,DX
006A68AF  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A68B2  3B D1                     CMP EDX,ECX
006A68B4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A68B7  7E 26                     JLE 0x006a68df
LAB_006a68b9:
006A68B9  8D 57 04                  LEA EDX,[EDI + 0x4]
006A68BC  83 C6 04                  ADD ESI,0x4
006A68BF  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006A68C3  8A D3                     MOV DL,BL
006A68C5  FE CA                     DEC DL
006A68C7  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A68CA  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A68CD  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A68D0  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A68D3  FE C2                     INC DL
006A68D5  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A68D8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A68DB  42                        INC EDX
006A68DC  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a68df:
006A68DF  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A68E2  85 D2                     TEST EDX,EDX
006A68E4  75 3C                     JNZ 0x006a6922
006A68E6  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006A68EA  66 85 D2                  TEST DX,DX
006A68ED  74 0D                     JZ 0x006a68fc
006A68EF  0F BF D2                  MOVSX EDX,DX
006A68F2  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A68F5  3B D1                     CMP EDX,ECX
006A68F7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A68FA  7E 26                     JLE 0x006a6922
LAB_006a68fc:
006A68FC  8D 57 04                  LEA EDX,[EDI + 0x4]
006A68FF  83 C6 04                  ADD ESI,0x4
006A6902  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006A6906  8A D3                     MOV DL,BL
006A6908  FE C2                     INC DL
006A690A  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A690D  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6910  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6913  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6916  FE C2                     INC DL
006A6918  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A691B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A691E  42                        INC EDX
006A691F  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a6922:
006A6922  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A6925  85 D2                     TEST EDX,EDX
006A6927  75 3A                     JNZ 0x006a6963
006A6929  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
006A692D  66 85 D2                  TEST DX,DX
006A6930  74 0D                     JZ 0x006a693f
006A6932  0F BF D2                  MOVSX EDX,DX
006A6935  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6938  3B D1                     CMP EDX,ECX
006A693A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A693D  7E 24                     JLE 0x006a6963
LAB_006a693f:
006A693F  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6942  83 C6 04                  ADD ESI,0x4
006A6945  66 89 14 41               MOV word ptr [ECX + EAX*0x2],DX
006A6949  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A694C  FE C2                     INC DL
006A694E  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A6951  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6954  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6957  FE C2                     INC DL
006A6959  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A695C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A695F  42                        INC EDX
006A6960  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a6963:
006A6963  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A6966  85 D2                     TEST EDX,EDX
006A6968  75 40                     JNZ 0x006a69aa
006A696A  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A696D  2B CA                     SUB ECX,EDX
006A696F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006A6972  66 8B 11                  MOV DX,word ptr [ECX]
006A6975  66 85 D2                  TEST DX,DX
006A6978  74 0D                     JZ 0x006a6987
006A697A  0F BF D2                  MOVSX EDX,DX
006A697D  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6980  3B D1                     CMP EDX,ECX
006A6982  7E 26                     JLE 0x006a69aa
006A6984  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006a6987:
006A6987  8D 57 04                  LEA EDX,[EDI + 0x4]
006A698A  83 C6 04                  ADD ESI,0x4
006A698D  66 89 11                  MOV word ptr [ECX],DX
006A6990  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A6993  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6996  FE C9                     DEC CL
006A6998  FE C2                     INC DL
006A699A  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A699D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A69A0  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A69A3  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A69A6  41                        INC ECX
006A69A7  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a69aa:
006A69AA  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006A69AD  85 C9                     TEST ECX,ECX
006A69AF  0F 85 1F 01 00 00         JNZ 0x006a6ad4
006A69B5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A69B8  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006A69BB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A69BE  2B CA                     SUB ECX,EDX
006A69C0  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A69C3  85 D2                     TEST EDX,EDX
006A69C5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A69C8  75 3C                     JNZ 0x006a6a06
006A69CA  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006A69CE  66 85 D2                  TEST DX,DX
006A69D1  74 0D                     JZ 0x006a69e0
006A69D3  0F BF D2                  MOVSX EDX,DX
006A69D6  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A69D9  3B D1                     CMP EDX,ECX
006A69DB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A69DE  7E 26                     JLE 0x006a6a06
LAB_006a69e0:
006A69E0  8D 57 04                  LEA EDX,[EDI + 0x4]
006A69E3  83 C6 04                  ADD ESI,0x4
006A69E6  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006A69EA  8A D3                     MOV DL,BL
006A69EC  FE CA                     DEC DL
006A69EE  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A69F1  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A69F4  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A69F7  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A69FA  FE CA                     DEC DL
006A69FC  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A69FF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6A02  42                        INC EDX
006A6A03  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a6a06:
006A6A06  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A6A09  85 D2                     TEST EDX,EDX
006A6A0B  75 3C                     JNZ 0x006a6a49
006A6A0D  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006A6A11  66 85 D2                  TEST DX,DX
006A6A14  74 0D                     JZ 0x006a6a23
006A6A16  0F BF D2                  MOVSX EDX,DX
006A6A19  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6A1C  3B D1                     CMP EDX,ECX
006A6A1E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A6A21  7E 26                     JLE 0x006a6a49
LAB_006a6a23:
006A6A23  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6A26  83 C6 04                  ADD ESI,0x4
006A6A29  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006A6A2D  8A D3                     MOV DL,BL
006A6A2F  FE C2                     INC DL
006A6A31  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A6A34  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6A37  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6A3A  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6A3D  FE CA                     DEC DL
006A6A3F  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6A42  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6A45  42                        INC EDX
006A6A46  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a6a49:
006A6A49  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A6A4C  85 D2                     TEST EDX,EDX
006A6A4E  75 43                     JNZ 0x006a6a93
006A6A50  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A6A53  2B CA                     SUB ECX,EDX
006A6A55  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006A6A58  66 8B 11                  MOV DX,word ptr [ECX]
006A6A5B  66 85 D2                  TEST DX,DX
006A6A5E  74 0D                     JZ 0x006a6a6d
006A6A60  0F BF D2                  MOVSX EDX,DX
006A6A63  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6A66  3B D1                     CMP EDX,ECX
006A6A68  7E 26                     JLE 0x006a6a90
006A6A6A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006a6a6d:
006A6A6D  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6A70  83 C6 04                  ADD ESI,0x4
006A6A73  66 89 11                  MOV word ptr [ECX],DX
006A6A76  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A6A79  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6A7C  FE C9                     DEC CL
006A6A7E  FE CA                     DEC DL
006A6A80  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6A83  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6A86  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A6A89  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6A8C  41                        INC ECX
006A6A8D  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6a90:
006A6A90  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006a6a93:
006A6A93  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A6A96  85 D2                     TEST EDX,EDX
006A6A98  75 3A                     JNZ 0x006a6ad4
006A6A9A  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
006A6A9E  66 85 D2                  TEST DX,DX
006A6AA1  74 0D                     JZ 0x006a6ab0
006A6AA3  0F BF D2                  MOVSX EDX,DX
006A6AA6  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6AA9  3B D1                     CMP EDX,ECX
006A6AAB  7E 27                     JLE 0x006a6ad4
006A6AAD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006a6ab0:
006A6AB0  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6AB3  83 C6 04                  ADD ESI,0x4
006A6AB6  66 89 14 41               MOV word ptr [ECX + EAX*0x2],DX
006A6ABA  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A6ABD  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6AC0  FE C1                     INC CL
006A6AC2  FE CA                     DEC DL
006A6AC4  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6AC7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6ACA  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006A6ACD  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6AD0  41                        INC ECX
006A6AD1  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6ad4:
006A6AD4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6AD7  83 E1 30                  AND ECX,0x30
006A6ADA  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006A6ADD  75 46                     JNZ 0x006a6b25
006A6ADF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6AE2  8D 54 00 02               LEA EDX,[EAX + EAX*0x1 + 0x2]
006A6AE6  2B CA                     SUB ECX,EDX
006A6AE8  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006A6AEB  66 8B 11                  MOV DX,word ptr [ECX]
006A6AEE  66 85 D2                  TEST DX,DX
006A6AF1  74 0D                     JZ 0x006a6b00
006A6AF3  0F BF D2                  MOVSX EDX,DX
006A6AF6  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6AF9  3B D1                     CMP EDX,ECX
006A6AFB  7E 28                     JLE 0x006a6b25
006A6AFD  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
LAB_006a6b00:
006A6B00  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6B03  83 C6 04                  ADD ESI,0x4
006A6B06  66 89 11                  MOV word ptr [ECX],DX
006A6B09  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6B0C  8A CB                     MOV CL,BL
006A6B0E  FE C9                     DEC CL
006A6B10  FE CA                     DEC DL
006A6B12  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6B15  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6B18  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6B1B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6B1E  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6B21  41                        INC ECX
006A6B22  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6b25:
006A6B25  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6B28  83 E1 21                  AND ECX,0x21
006A6B2B  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006A6B2E  75 49                     JNZ 0x006a6b79
006A6B30  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6B33  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A6B36  2B CA                     SUB ECX,EDX
006A6B38  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006A6B3C  83 C1 02                  ADD ECX,0x2
006A6B3F  66 85 D2                  TEST DX,DX
006A6B42  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A6B45  74 0D                     JZ 0x006a6b54
006A6B47  0F BF D2                  MOVSX EDX,DX
006A6B4A  8D 4F 04                  LEA ECX,[EDI + 0x4]
006A6B4D  3B D1                     CMP EDX,ECX
006A6B4F  7E 28                     JLE 0x006a6b79
006A6B51  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
LAB_006a6b54:
006A6B54  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6B57  83 C6 04                  ADD ESI,0x4
006A6B5A  66 89 11                  MOV word ptr [ECX],DX
006A6B5D  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6B60  8A CB                     MOV CL,BL
006A6B62  FE C1                     INC CL
006A6B64  FE CA                     DEC DL
006A6B66  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6B69  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6B6C  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6B6F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6B72  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6B75  41                        INC ECX
006A6B76  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6b79:
006A6B79  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6B7C  83 E1 12                  AND ECX,0x12
006A6B7F  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A6B82  75 41                     JNZ 0x006a6bc5
006A6B84  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A6B87  66 8B 4C 42 FE            MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
006A6B8C  66 85 C9                  TEST CX,CX
006A6B8F  74 0A                     JZ 0x006a6b9b
006A6B91  0F BF C9                  MOVSX ECX,CX
006A6B94  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6B97  3B CA                     CMP ECX,EDX
006A6B99  7E 2A                     JLE 0x006a6bc5
LAB_006a6b9b:
006A6B9B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6B9E  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6BA1  83 C6 04                  ADD ESI,0x4
006A6BA4  66 89 54 41 FE            MOV word ptr [ECX + EAX*0x2 + -0x2],DX
006A6BA9  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A6BAC  8A D3                     MOV DL,BL
006A6BAE  FE CA                     DEC DL
006A6BB0  FE C1                     INC CL
006A6BB2  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A6BB5  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6BB8  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6BBB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6BBE  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6BC1  41                        INC ECX
006A6BC2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6bc5:
006A6BC5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6BC8  83 E1 03                  AND ECX,0x3
006A6BCB  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006A6BCE  75 41                     JNZ 0x006a6c11
006A6BD0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6BD3  66 8B 4C 41 02            MOV CX,word ptr [ECX + EAX*0x2 + 0x2]
006A6BD8  66 85 C9                  TEST CX,CX
006A6BDB  74 0A                     JZ 0x006a6be7
006A6BDD  0F BF C9                  MOVSX ECX,CX
006A6BE0  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6BE3  3B CA                     CMP ECX,EDX
006A6BE5  7E 2A                     JLE 0x006a6c11
LAB_006a6be7:
006A6BE7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6BEA  8D 57 04                  LEA EDX,[EDI + 0x4]
006A6BED  83 C6 04                  ADD ESI,0x4
006A6BF0  66 89 54 41 02            MOV word ptr [ECX + EAX*0x2 + 0x2],DX
006A6BF5  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006A6BF8  8A D3                     MOV DL,BL
006A6BFA  FE C2                     INC DL
006A6BFC  FE C1                     INC CL
006A6BFE  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006A6C01  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6C04  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006A6C07  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6C0A  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006A6C0D  41                        INC ECX
006A6C0E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6c11:
006A6C11  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006A6C14  83 C7 05                  ADD EDI,0x5
006A6C17  85 C9                     TEST ECX,ECX
006A6C19  0F 85 10 01 00 00         JNZ 0x006a6d2f
006A6C1F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6C22  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A6C25  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006A6C28  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A6C2B  85 D2                     TEST EDX,EDX
006A6C2D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A6C30  75 3C                     JNZ 0x006a6c6e
006A6C32  8D 54 00 02               LEA EDX,[EAX + EAX*0x1 + 0x2]
006A6C36  2B CA                     SUB ECX,EDX
006A6C38  66 8B 11                  MOV DX,word ptr [ECX]
006A6C3B  66 85 D2                  TEST DX,DX
006A6C3E  74 07                     JZ 0x006a6c47
006A6C40  0F BF D2                  MOVSX EDX,DX
006A6C43  3B D7                     CMP EDX,EDI
006A6C45  7E 24                     JLE 0x006a6c6b
LAB_006a6c47:
006A6C47  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6C4A  66 89 39                  MOV word ptr [ECX],DI
006A6C4D  8A CB                     MOV CL,BL
006A6C4F  83 C6 04                  ADD ESI,0x4
006A6C52  FE C9                     DEC CL
006A6C54  FE CA                     DEC DL
006A6C56  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6C59  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6C5C  FE C1                     INC CL
006A6C5E  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6C61  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6C64  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6C67  41                        INC ECX
006A6C68  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6c6b:
006A6C6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006a6c6e:
006A6C6E  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A6C71  85 D2                     TEST EDX,EDX
006A6C73  75 3F                     JNZ 0x006a6cb4
006A6C75  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A6C78  2B CA                     SUB ECX,EDX
006A6C7A  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006A6C7E  83 C1 02                  ADD ECX,0x2
006A6C81  66 85 D2                  TEST DX,DX
006A6C84  74 07                     JZ 0x006a6c8d
006A6C86  0F BF D2                  MOVSX EDX,DX
006A6C89  3B D7                     CMP EDX,EDI
006A6C8B  7E 24                     JLE 0x006a6cb1
LAB_006a6c8d:
006A6C8D  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6C90  66 89 39                  MOV word ptr [ECX],DI
006A6C93  8A CB                     MOV CL,BL
006A6C95  83 C6 04                  ADD ESI,0x4
006A6C98  FE C1                     INC CL
006A6C9A  FE CA                     DEC DL
006A6C9C  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6C9F  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6CA2  FE C1                     INC CL
006A6CA4  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6CA7  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6CAA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6CAD  41                        INC ECX
006A6CAE  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6cb1:
006A6CB1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006a6cb4:
006A6CB4  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A6CB7  85 D2                     TEST EDX,EDX
006A6CB9  75 36                     JNZ 0x006a6cf1
006A6CBB  66 8B 54 41 FE            MOV DX,word ptr [ECX + EAX*0x2 + -0x2]
006A6CC0  66 85 D2                  TEST DX,DX
006A6CC3  74 07                     JZ 0x006a6ccc
006A6CC5  0F BF D2                  MOVSX EDX,DX
006A6CC8  3B D7                     CMP EDX,EDI
006A6CCA  7E 25                     JLE 0x006a6cf1
LAB_006a6ccc:
006A6CCC  8A D3                     MOV DL,BL
006A6CCE  66 89 7C 41 FE            MOV word ptr [ECX + EAX*0x2 + -0x2],DI
006A6CD3  FE CA                     DEC DL
006A6CD5  88 16                     MOV byte ptr [ESI],DL
006A6CD7  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6CDA  FE C2                     INC DL
006A6CDC  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A6CDF  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6CE2  FE C2                     INC DL
006A6CE4  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A6CE7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6CEA  83 C6 04                  ADD ESI,0x4
006A6CED  42                        INC EDX
006A6CEE  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a6cf1:
006A6CF1  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A6CF4  85 D2                     TEST EDX,EDX
006A6CF6  75 37                     JNZ 0x006a6d2f
006A6CF8  66 8B 54 41 02            MOV DX,word ptr [ECX + EAX*0x2 + 0x2]
006A6CFD  66 85 D2                  TEST DX,DX
006A6D00  74 07                     JZ 0x006a6d09
006A6D02  0F BF D2                  MOVSX EDX,DX
006A6D05  3B D7                     CMP EDX,EDI
006A6D07  7E 26                     JLE 0x006a6d2f
LAB_006a6d09:
006A6D09  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6D0C  66 89 7C 41 02            MOV word ptr [ECX + EAX*0x2 + 0x2],DI
006A6D11  8A CB                     MOV CL,BL
006A6D13  83 C6 04                  ADD ESI,0x4
006A6D16  FE C1                     INC CL
006A6D18  FE C2                     INC DL
006A6D1A  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6D1D  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6D20  FE C1                     INC CL
006A6D22  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6D25  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6D28  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6D2B  41                        INC ECX
006A6D2C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6d2f:
006A6D2F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006A6D32  85 C9                     TEST ECX,ECX
006A6D34  0F 85 14 01 00 00         JNZ 0x006a6e4e
006A6D3A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A6D3D  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006A6D40  8B D1                     MOV EDX,ECX
006A6D42  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A6D45  2B CA                     SUB ECX,EDX
006A6D47  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A6D4A  85 D2                     TEST EDX,EDX
006A6D4C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A6D4F  75 3C                     JNZ 0x006a6d8d
006A6D51  8D 54 00 02               LEA EDX,[EAX + EAX*0x1 + 0x2]
006A6D55  2B CA                     SUB ECX,EDX
006A6D57  66 8B 11                  MOV DX,word ptr [ECX]
006A6D5A  66 85 D2                  TEST DX,DX
006A6D5D  74 07                     JZ 0x006a6d66
006A6D5F  0F BF D2                  MOVSX EDX,DX
006A6D62  3B D7                     CMP EDX,EDI
006A6D64  7E 24                     JLE 0x006a6d8a
LAB_006a6d66:
006A6D66  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6D69  66 89 39                  MOV word ptr [ECX],DI
006A6D6C  8A CB                     MOV CL,BL
006A6D6E  83 C6 04                  ADD ESI,0x4
006A6D71  FE C9                     DEC CL
006A6D73  FE CA                     DEC DL
006A6D75  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6D78  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6D7B  FE C9                     DEC CL
006A6D7D  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6D80  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6D83  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6D86  41                        INC ECX
006A6D87  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6d8a:
006A6D8A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006a6d8d:
006A6D8D  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A6D90  85 D2                     TEST EDX,EDX
006A6D92  75 3F                     JNZ 0x006a6dd3
006A6D94  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A6D97  2B CA                     SUB ECX,EDX
006A6D99  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006A6D9D  83 C1 02                  ADD ECX,0x2
006A6DA0  66 85 D2                  TEST DX,DX
006A6DA3  74 07                     JZ 0x006a6dac
006A6DA5  0F BF D2                  MOVSX EDX,DX
006A6DA8  3B D7                     CMP EDX,EDI
006A6DAA  7E 24                     JLE 0x006a6dd0
LAB_006a6dac:
006A6DAC  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6DAF  66 89 39                  MOV word ptr [ECX],DI
006A6DB2  8A CB                     MOV CL,BL
006A6DB4  83 C6 04                  ADD ESI,0x4
006A6DB7  FE C1                     INC CL
006A6DB9  FE CA                     DEC DL
006A6DBB  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6DBE  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6DC1  FE C9                     DEC CL
006A6DC3  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6DC6  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6DC9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6DCC  41                        INC ECX
006A6DCD  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6dd0:
006A6DD0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006a6dd3:
006A6DD3  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A6DD6  85 D2                     TEST EDX,EDX
006A6DD8  75 36                     JNZ 0x006a6e10
006A6DDA  66 8B 54 41 FE            MOV DX,word ptr [ECX + EAX*0x2 + -0x2]
006A6DDF  66 85 D2                  TEST DX,DX
006A6DE2  74 07                     JZ 0x006a6deb
006A6DE4  0F BF D2                  MOVSX EDX,DX
006A6DE7  3B D7                     CMP EDX,EDI
006A6DE9  7E 25                     JLE 0x006a6e10
LAB_006a6deb:
006A6DEB  8A D3                     MOV DL,BL
006A6DED  66 89 7C 41 FE            MOV word ptr [ECX + EAX*0x2 + -0x2],DI
006A6DF2  FE CA                     DEC DL
006A6DF4  88 16                     MOV byte ptr [ESI],DL
006A6DF6  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6DF9  FE C2                     INC DL
006A6DFB  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A6DFE  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6E01  FE CA                     DEC DL
006A6E03  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A6E06  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6E09  83 C6 04                  ADD ESI,0x4
006A6E0C  42                        INC EDX
006A6E0D  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006a6e10:
006A6E10  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A6E13  85 D2                     TEST EDX,EDX
006A6E15  75 37                     JNZ 0x006a6e4e
006A6E17  66 8B 54 41 02            MOV DX,word ptr [ECX + EAX*0x2 + 0x2]
006A6E1C  66 85 D2                  TEST DX,DX
006A6E1F  74 07                     JZ 0x006a6e28
006A6E21  0F BF D2                  MOVSX EDX,DX
006A6E24  3B D7                     CMP EDX,EDI
006A6E26  7E 26                     JLE 0x006a6e4e
LAB_006a6e28:
006A6E28  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6E2B  66 89 7C 41 02            MOV word ptr [ECX + EAX*0x2 + 0x2],DI
006A6E30  8A CB                     MOV CL,BL
006A6E32  83 C6 04                  ADD ESI,0x4
006A6E35  FE C1                     INC CL
006A6E37  FE C2                     INC DL
006A6E39  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006A6E3C  8A 4D 18                  MOV CL,byte ptr [EBP + 0x18]
006A6E3F  FE C9                     DEC CL
006A6E41  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006A6E44  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006A6E47  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A6E4A  41                        INC ECX
006A6E4B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006a6e4e:
006A6E4E  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A6E51  85 C9                     TEST ECX,ECX
006A6E53  7C 42                     JL 0x006a6e97
006A6E55  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A6E58  85 D2                     TEST EDX,EDX
006A6E5A  7C 3B                     JL 0x006a6e97
006A6E5C  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006A6E5F  85 FF                     TEST EDI,EDI
006A6E61  7C 34                     JL 0x006a6e97
006A6E63  8D 7B FF                  LEA EDI,[EBX + -0x1]
006A6E66  3B CF                     CMP ECX,EDI
006A6E68  7C 2D                     JL 0x006a6e97
006A6E6A  43                        INC EBX
006A6E6B  3B CB                     CMP ECX,EBX
006A6E6D  7F 28                     JG 0x006a6e97
006A6E6F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A6E72  8D 79 FF                  LEA EDI,[ECX + -0x1]
006A6E75  3B D7                     CMP EDX,EDI
006A6E77  7C 1E                     JL 0x006a6e97
006A6E79  41                        INC ECX
006A6E7A  3B D1                     CMP EDX,ECX
006A6E7C  7D 19                     JGE 0x006a6e97
006A6E7E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A6E81  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A6E84  8D 79 FF                  LEA EDI,[ECX + -0x1]
006A6E87  3B D7                     CMP EDX,EDI
006A6E89  7C 0C                     JL 0x006a6e97
006A6E8B  41                        INC ECX
006A6E8C  3B D1                     CMP EDX,ECX
006A6E8E  7D 07                     JGE 0x006a6e97
006A6E90  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
LAB_006a6e97:
006A6E97  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A6E9A  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A6E9D  41                        INC ECX
006A6E9E  3B CA                     CMP ECX,EDX
006A6EA0  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006A6EA3  0F 8C F9 F6 FF FF         JL 0x006a65a2
006A6EA9  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A6EAC  85 C0                     TEST EAX,EAX
006A6EAE  75 2E                     JNZ 0x006a6ede
006A6EB0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A6EB3  85 C0                     TEST EAX,EAX
006A6EB5  74 27                     JZ 0x006a6ede
006A6EB7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A6EBA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006A6EBD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A6EC0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A6EC3  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006A6EC6  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006A6EC9  40                        INC EAX
006A6ECA  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006A6ECD  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006A6ED0  33 FF                     XOR EDI,EDI
006A6ED2  E9 B4 F6 FF FF            JMP 0x006a658b
LAB_006a6ed7:
006A6ED7  C7 45 D0 FE FF FF FF      MOV dword ptr [EBP + -0x30],0xfffffffe
LAB_006a6ede:
006A6EDE  8D 4D E0                  LEA ECX,[EBP + -0x20]
006A6EE1  51                        PUSH ECX
006A6EE2  E8 79 41 00 00            CALL 0x006ab060
006A6EE7  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006A6EEA  5F                        POP EDI
006A6EEB  5E                        POP ESI
006A6EEC  5B                        POP EBX
006A6EED  8B E5                     MOV ESP,EBP
006A6EEF  5D                        POP EBP
006A6EF0  C2 28 00                  RET 0x28
