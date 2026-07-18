FUN_006d63e0:
006D63E0  55                        PUSH EBP
006D63E1  8B EC                     MOV EBP,ESP
006D63E3  6A FF                     PUSH -0x1
006D63E5  68 90 DD 79 00            PUSH 0x79dd90
006D63EA  68 64 D9 72 00            PUSH 0x72d964
006D63EF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D63F5  50                        PUSH EAX
006D63F6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D63FD  81 EC D4 00 00 00         SUB ESP,0xd4
006D6403  53                        PUSH EBX
006D6404  56                        PUSH ESI
006D6405  57                        PUSH EDI
006D6406  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D6409  8B F9                     MOV EDI,ECX
006D640B  89 BD 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDI
006D6411  8B B7 84 02 00 00         MOV ESI,dword ptr [EDI + 0x284]
006D6417  83 C6 30                  ADD ESI,0x30
006D641A  33 DB                     XOR EBX,EBX
006D641C  89 9D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EBX
006D6422  8B 87 88 02 00 00         MOV EAX,dword ptr [EDI + 0x288]
006D6428  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D642B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006D642E  F6 C4 01                  TEST AH,0x1
006D6431  0F 85 C4 05 00 00         JNZ 0x006d69fb
006D6437  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D643A  8B 10                     MOV EDX,dword ptr [EAX]
006D643C  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
006D6442  51                        PUSH ECX
006D6443  50                        PUSH EAX
006D6444  FF 52 0C                  CALL dword ptr [EDX + 0xc]
006D6447  3B C3                     CMP EAX,EBX
006D6449  0F 8C AE 05 00 00         JL 0x006d69fd
006D644F  8B 97 88 02 00 00         MOV EDX,dword ptr [EDI + 0x288]
006D6455  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D6458  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D645F  74 0C                     JZ 0x006d646d
006D6461  05 F0 04 00 00            ADD EAX,0x4f0
006D6466  50                        PUSH EAX
006D6467  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006d646d:
006D646D  8B 87 88 02 00 00         MOV EAX,dword ptr [EDI + 0x288]
006D6473  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006D6476  F6 C1 08                  TEST CL,0x8
006D6479  75 7D                     JNZ 0x006d64f8
006D647B  F6 C1 04                  TEST CL,0x4
006D647E  74 10                     JZ 0x006d6490
006D6480  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
006D6483  3B 48 10                  CMP ECX,dword ptr [EAX + 0x10]
006D6486  75 70                     JNZ 0x006d64f8
006D6488  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
006D648B  3B 50 14                  CMP EDX,dword ptr [EAX + 0x14]
006D648E  75 68                     JNZ 0x006d64f8
LAB_006d6490:
006D6490  8D 48 18                  LEA ECX,[EAX + 0x18]
006D6493  8B 19                     MOV EBX,dword ptr [ECX]
006D6495  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
006D6498  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006D649B  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
006D64A1  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006D64A4  8B 40 28                  MOV EAX,dword ptr [EAX + 0x28]
006D64A7  8B 88 E4 04 00 00         MOV ECX,dword ptr [EAX + 0x4e4]
006D64AD  85 C9                     TEST ECX,ECX
006D64AF  74 13                     JZ 0x006d64c4
006D64B1  52                        PUSH EDX
006D64B2  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
006D64B8  52                        PUSH EDX
006D64B9  57                        PUSH EDI
006D64BA  53                        PUSH EBX
006D64BB  8B 80 EC 04 00 00         MOV EAX,dword ptr [EAX + 0x4ec]
006D64C1  50                        PUSH EAX
006D64C2  FF D1                     CALL ECX
LAB_006d64c4:
006D64C4  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
006D64CA  8B 81 88 02 00 00         MOV EAX,dword ptr [ECX + 0x288]
006D64D0  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006D64D3  52                        PUSH EDX
006D64D4  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006D64D7  51                        PUSH ECX
006D64D8  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006D64DB  52                        PUSH EDX
006D64DC  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006D64DF  51                        PUSH ECX
006D64E0  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006D64E6  52                        PUSH EDX
006D64E7  56                        PUSH ESI
006D64E8  57                        PUSH EDI
006D64E9  53                        PUSH EBX
006D64EA  8B 40 28                  MOV EAX,dword ptr [EAX + 0x28]
006D64ED  50                        PUSH EAX
006D64EE  E8 DD DD FD FF            CALL 0x006b42d0
006D64F3  E9 DF 04 00 00            JMP 0x006d69d7
LAB_006d64f8:
006D64F8  F6 40 04 08               TEST byte ptr [EAX + 0x4],0x8
006D64FC  75 1C                     JNZ 0x006d651a
006D64FE  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006D6501  D1 E1                     SHL ECX,0x1
006D6503  39 48 20                  CMP dword ptr [EAX + 0x20],ECX
006D6506  75 0A                     JNZ 0x006d6512
006D6508  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006D650B  D1 E2                     SHL EDX,0x1
006D650D  39 50 24                  CMP dword ptr [EAX + 0x24],EDX
006D6510  74 08                     JZ 0x006d651a
LAB_006d6512:
006D6512  89 9D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EBX
006D6518  EB 0A                     JMP 0x006d6524
LAB_006d651a:
006D651A  C7 85 44 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff44],0x1
LAB_006d6524:
006D6524  8D 48 18                  LEA ECX,[EAX + 0x18]
006D6527  8B 19                     MOV EBX,dword ptr [ECX]
006D6529  89 9D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EBX
006D652F  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006D6532  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006D6538  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
006D653B  89 BD 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDI
006D6541  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
006D6544  89 BD 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDI
006D654A  8B 40 28                  MOV EAX,dword ptr [EAX + 0x28]
006D654D  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006D6550  89 8D 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ECX
006D6556  8B 88 E4 04 00 00         MOV ECX,dword ptr [EAX + 0x4e4]
006D655C  85 C9                     TEST ECX,ECX
006D655E  74 13                     JZ 0x006d6573
006D6560  57                        PUSH EDI
006D6561  8B BD 64 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff64]
006D6567  57                        PUSH EDI
006D6568  52                        PUSH EDX
006D6569  53                        PUSH EBX
006D656A  8B 90 EC 04 00 00         MOV EDX,dword ptr [EAX + 0x4ec]
006D6570  52                        PUSH EDX
006D6571  FF D1                     CALL ECX
LAB_006d6573:
006D6573  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
006D6579  8B B8 88 02 00 00         MOV EDI,dword ptr [EAX + 0x288]
006D657F  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
006D6582  83 79 20 10               CMP dword ptr [ECX + 0x20],0x10
006D6586  0F 8F D9 02 00 00         JG 0x006d6865
006D658C  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
006D6590  66 3D 10 00               CMP AX,0x10
006D6594  0F 87 CB 02 00 00         JA 0x006d6865
006D659A  25 FF FF 00 00            AND EAX,0xffff
006D659F  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
006D65A3  83 C0 1F                  ADD EAX,0x1f
006D65A6  C1 E8 03                  SHR EAX,0x3
006D65A9  25 FC FF FF 1F            AND EAX,0x1ffffffc
006D65AE  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
006D65B1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006D65B4  2B 4F 0C                  SUB ECX,dword ptr [EDI + 0xc]
006D65B7  2B CA                     SUB ECX,EDX
006D65B9  0F AF C8                  IMUL ECX,EAX
006D65BC  0F AF C2                  IMUL EAX,EDX
006D65BF  50                        PUSH EAX
006D65C0  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006D65C6  03 CA                     ADD ECX,EDX
006D65C8  51                        PUSH ECX
006D65C9  FF 15 B8 BB 85 00         CALL dword ptr [0x0085bbb8]
006D65CF  85 C0                     TEST EAX,EAX
006D65D1  0F 85 78 02 00 00         JNZ 0x006d684f
006D65D7  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006D65DD  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006D65E3  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
006D65E9  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
006D65EF  03 D9                     ADD EBX,ECX
006D65F1  89 9D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EBX
006D65F7  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006D65FD  03 C2                     ADD EAX,EDX
006D65FF  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
006D6605  B9 1F 00 00 00            MOV ECX,0x1f
006D660A  33 C0                     XOR EAX,EAX
006D660C  8D BD 6C FF FF FF         LEA EDI,[EBP + 0xffffff6c]
006D6612  F3 AB                     STOSD.REP ES:EDI
006D6614  C7 85 6C FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x7c
006D661E  33 DB                     XOR EBX,EBX
LAB_006d6620:
006D6620  8B 85 2C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff2c]
006D6626  8B 08                     MOV ECX,dword ptr [EAX]
006D6628  6A 00                     PUSH 0x0
006D662A  6A 21                     PUSH 0x21
006D662C  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
006D6632  52                        PUSH EDX
006D6633  8D 95 34 FF FF FF         LEA EDX,[EBP + 0xffffff34]
006D6639  52                        PUSH EDX
006D663A  50                        PUSH EAX
006D663B  FF 51 64                  CALL dword ptr [ECX + 0x64]
006D663E  8B F8                     MOV EDI,EAX
006D6640  85 FF                     TEST EDI,EDI
006D6642  74 2B                     JZ 0x006d666f
006D6644  81 FF C2 01 76 88         CMP EDI,0x887601c2
006D664A  75 1B                     JNZ 0x006d6667
006D664C  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
006D6652  8B 88 88 02 00 00         MOV ECX,dword ptr [EAX + 0x288]
006D6658  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
006D665B  52                        PUSH EDX
006D665C  E8 DF 85 FF FF            CALL 0x006cec40
006D6661  43                        INC EBX
006D6662  83 FB 02                  CMP EBX,0x2
006D6665  7C B9                     JL 0x006d6620
LAB_006d6667:
006D6667  85 FF                     TEST EDI,EDI
006D6669  0F 85 E0 01 00 00         JNZ 0x006d684f
LAB_006d666f:
006D666F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D6676  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
006D667C  8B 80 88 02 00 00         MOV EAX,dword ptr [EAX + 0x288]
006D6682  8B 78 28                  MOV EDI,dword ptr [EAX + 0x28]
006D6685  83 7F 20 08               CMP dword ptr [EDI + 0x20],0x8
006D6689  0F 85 8B 00 00 00         JNZ 0x006d671a
006D668F  33 C9                     XOR ECX,ECX
006D6691  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
006D6695  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
006D6699  83 C1 1F                  ADD ECX,0x1f
006D669C  C1 E9 03                  SHR ECX,0x3
006D669F  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006D66A5  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D66A8  2B 50 0C                  SUB EDX,dword ptr [EAX + 0xc]
006D66AB  4A                        DEC EDX
006D66AC  0F AF D1                  IMUL EDX,ECX
006D66AF  03 50 08                  ADD EDX,dword ptr [EAX + 0x8]
006D66B2  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
006D66B8  8B B5 44 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff44]
006D66BE  85 F6                     TEST ESI,ESI
006D66C0  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
006D66C3  56                        PUSH ESI
006D66C4  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
006D66C7  50                        PUSH EAX
006D66C8  74 21                     JZ 0x006d66eb
006D66CA  F7 D9                     NEG ECX
006D66CC  51                        PUSH ECX
006D66CD  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D66D3  03 D1                     ADD EDX,ECX
006D66D5  52                        PUSH EDX
006D66D6  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006D66DC  52                        PUSH EDX
006D66DD  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006D66E0  50                        PUSH EAX
006D66E1  E8 6A 4D 00 00            CALL 0x006db450
006D66E6  E9 5D 01 00 00            JMP 0x006d6848
LAB_006d66eb:
006D66EB  F7 D9                     NEG ECX
006D66ED  51                        PUSH ECX
006D66EE  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D66F4  03 D1                     ADD EDX,ECX
006D66F6  52                        PUSH EDX
006D66F7  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006D66FD  52                        PUSH EDX
006D66FE  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006D6704  50                        PUSH EAX
006D6705  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006D670B  51                        PUSH ECX
006D670C  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006D670F  52                        PUSH EDX
006D6710  E8 FB 4B 00 00            CALL 0x006db310
006D6715  E9 2E 01 00 00            JMP 0x006d6848
LAB_006d671a:
006D671A  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
006D671E  66 83 F9 08               CMP CX,0x8
006D6722  0F 85 8F 00 00 00         JNZ 0x006d67b7
006D6728  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006D672B  8D 0C CD 1F 00 00 00      LEA ECX,[ECX*0x8 + 0x1f]
006D6732  C1 E9 03                  SHR ECX,0x3
006D6735  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006D673B  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D673E  2B 50 0C                  SUB EDX,dword ptr [EAX + 0xc]
006D6741  4A                        DEC EDX
006D6742  0F AF D1                  IMUL EDX,ECX
006D6745  03 50 08                  ADD EDX,dword ptr [EAX + 0x8]
006D6748  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
006D674E  8B B5 44 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff44]
006D6754  85 F6                     TEST ESI,ESI
006D6756  8B B7 C0 04 00 00         MOV ESI,dword ptr [EDI + 0x4c0]
006D675C  56                        PUSH ESI
006D675D  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
006D6760  56                        PUSH ESI
006D6761  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
006D6764  50                        PUSH EAX
006D6765  74 21                     JZ 0x006d6788
006D6767  F7 D9                     NEG ECX
006D6769  51                        PUSH ECX
006D676A  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D6770  03 D1                     ADD EDX,ECX
006D6772  52                        PUSH EDX
006D6773  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006D6779  52                        PUSH EDX
006D677A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006D677D  50                        PUSH EAX
006D677E  E8 6D 4A 00 00            CALL 0x006db1f0
006D6783  E9 C0 00 00 00            JMP 0x006d6848
LAB_006d6788:
006D6788  F7 D9                     NEG ECX
006D678A  51                        PUSH ECX
006D678B  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D6791  03 D1                     ADD EDX,ECX
006D6793  52                        PUSH EDX
006D6794  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006D679A  52                        PUSH EDX
006D679B  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006D67A1  50                        PUSH EAX
006D67A2  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006D67A8  51                        PUSH ECX
006D67A9  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006D67AC  52                        PUSH EDX
006D67AD  E8 1E 49 00 00            CALL 0x006db0d0
006D67B2  E9 91 00 00 00            JMP 0x006d6848
LAB_006d67b7:
006D67B7  81 E1 FF FF 00 00         AND ECX,0xffff
006D67BD  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
006D67C1  83 C1 1F                  ADD ECX,0x1f
006D67C4  C1 E9 03                  SHR ECX,0x3
006D67C7  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006D67CD  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D67D0  2B 50 0C                  SUB EDX,dword ptr [EAX + 0xc]
006D67D3  4A                        DEC EDX
006D67D4  0F AF D1                  IMUL EDX,ECX
006D67D7  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006D67DA  8D 14 72                  LEA EDX,[EDX + ESI*0x2]
006D67DD  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
006D67E3  8B B5 44 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff44]
006D67E9  85 F6                     TEST ESI,ESI
006D67EB  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
006D67EE  56                        PUSH ESI
006D67EF  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
006D67F2  50                        PUSH EAX
006D67F3  74 1E                     JZ 0x006d6813
006D67F5  F7 D9                     NEG ECX
006D67F7  51                        PUSH ECX
006D67F8  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D67FE  03 D1                     ADD EDX,ECX
006D6800  52                        PUSH EDX
006D6801  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006D6807  52                        PUSH EDX
006D6808  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006D680B  50                        PUSH EAX
006D680C  E8 BF 47 00 00            CALL 0x006dafd0
006D6811  EB 35                     JMP 0x006d6848
LAB_006d6813:
006D6813  F7 D9                     NEG ECX
006D6815  51                        PUSH ECX
006D6816  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D681C  03 D1                     ADD EDX,ECX
006D681E  52                        PUSH EDX
006D681F  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006D6825  52                        PUSH EDX
006D6826  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006D682C  50                        PUSH EAX
006D682D  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006D6833  51                        PUSH ECX
006D6834  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006D6837  52                        PUSH EDX
006D6838  E8 93 46 00 00            CALL 0x006daed0
006D683D  EB 09                     JMP 0x006d6848
LAB_006d6848:
006D6848  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006d684f:
006D684F  8B 85 2C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff2c]
006D6855  8B 08                     MOV ECX,dword ptr [EAX]
006D6857  6A 00                     PUSH 0x0
006D6859  50                        PUSH EAX
006D685A  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006D6860  E9 72 01 00 00            JMP 0x006d69d7
LAB_006d6865:
006D6865  8B 59 40                  MOV EBX,dword ptr [ECX + 0x40]
006D6868  C7 85 4C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff4c],0x0
LAB_006d6872:
006D6872  8B 13                     MOV EDX,dword ptr [EBX]
006D6874  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
006D687A  50                        PUSH EAX
006D687B  53                        PUSH EBX
006D687C  FF 52 44                  CALL dword ptr [EDX + 0x44]
006D687F  8B F8                     MOV EDI,EAX
006D6881  85 FF                     TEST EDI,EDI
006D6883  74 43                     JZ 0x006d68c8
006D6885  81 FF C2 01 76 88         CMP EDI,0x887601c2
006D688B  75 17                     JNZ 0x006d68a4
006D688D  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
006D6893  8B 91 88 02 00 00         MOV EDX,dword ptr [ECX + 0x288]
006D6899  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D689C  50                        PUSH EAX
006D689D  E8 9E 83 FF FF            CALL 0x006cec40
006D68A2  EB 08                     JMP 0x006d68ac
LAB_006d68a4:
006D68A4  81 FF 1C 02 76 88         CMP EDI,0x8876021c
006D68AA  75 14                     JNZ 0x006d68c0
LAB_006d68ac:
006D68AC  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
006D68B2  40                        INC EAX
006D68B3  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
006D68B9  3D 40 9C 00 00            CMP EAX,0x9c40
006D68BE  7C B2                     JL 0x006d6872
LAB_006d68c0:
006D68C0  85 FF                     TEST EDI,EDI
006D68C2  0F 85 F6 00 00 00         JNZ 0x006d69be
LAB_006d68c8:
006D68C8  8B BD 1C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff1c]
006D68CE  8B 8F 88 02 00 00         MOV ECX,dword ptr [EDI + 0x288]
006D68D4  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006D68D7  6A 00                     PUSH 0x0
006D68D9  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006D68DC  52                        PUSH EDX
006D68DD  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
006D68E0  50                        PUSH EAX
006D68E1  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006D68E7  51                        PUSH ECX
006D68E8  FF 15 B0 BA 85 00         CALL dword ptr [0x0085bab0]
006D68EE  8B 97 88 02 00 00         MOV EDX,dword ptr [EDI + 0x288]
006D68F4  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D68F7  8B 80 94 04 00 00         MOV EAX,dword ptr [EAX + 0x494]
006D68FD  85 C0                     TEST EAX,EAX
006D68FF  74 0E                     JZ 0x006d690f
006D6901  50                        PUSH EAX
006D6902  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006D6908  51                        PUSH ECX
006D6909  FF 15 AC BA 85 00         CALL dword ptr [0x0085baac]
LAB_006d690f:
006D690F  8B 97 88 02 00 00         MOV EDX,dword ptr [EDI + 0x288]
006D6915  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D6918  8D 8D 50 FF FF FF         LEA ECX,[EBP + 0xffffff50]
006D691E  89 88 7C 04 00 00         MOV dword ptr [EAX + 0x47c],ECX
006D6924  8B 97 88 02 00 00         MOV EDX,dword ptr [EDI + 0x288]
006D692A  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D692D  89 98 80 04 00 00         MOV dword ptr [EAX + 0x480],EBX
006D6933  8B 87 88 02 00 00         MOV EAX,dword ptr [EDI + 0x288]
006D6939  68 20 00 CC 00            PUSH 0xcc0020
006D693E  6A 00                     PUSH 0x0
006D6940  56                        PUSH ESI
006D6941  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006D6947  51                        PUSH ECX
006D6948  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006D694B  52                        PUSH EDX
006D694C  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006D694F  51                        PUSH ECX
006D6950  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006D6953  52                        PUSH EDX
006D6954  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006D6957  50                        PUSH EAX
006D6958  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006D695E  51                        PUSH ECX
006D695F  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
006D6965  52                        PUSH EDX
006D6966  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006D696C  50                        PUSH EAX
006D696D  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
006D6973  51                        PUSH ECX
006D6974  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
006D697A  52                        PUSH EDX
006D697B  FF 15 A4 BA 85 00         CALL dword ptr [0x0085baa4]
006D6981  33 F6                     XOR ESI,ESI
LAB_006d6983:
006D6983  8B 03                     MOV EAX,dword ptr [EBX]
006D6985  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006D698B  51                        PUSH ECX
006D698C  53                        PUSH EBX
006D698D  FF 50 68                  CALL dword ptr [EAX + 0x68]
006D6990  85 C0                     TEST EAX,EAX
006D6992  74 30                     JZ 0x006d69c4
006D6994  3D C2 01 76 88            CMP EAX,0x887601c2
006D6999  75 11                     JNZ 0x006d69ac
006D699B  8B 97 88 02 00 00         MOV EDX,dword ptr [EDI + 0x288]
006D69A1  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D69A4  50                        PUSH EAX
006D69A5  E8 96 82 FF FF            CALL 0x006cec40
006D69AA  EB 07                     JMP 0x006d69b3
LAB_006d69ac:
006D69AC  3D 1C 02 76 88            CMP EAX,0x8876021c
006D69B1  75 11                     JNZ 0x006d69c4
LAB_006d69b3:
006D69B3  46                        INC ESI
006D69B4  81 FE 40 9C 00 00         CMP ESI,0x9c40
006D69BA  7C C7                     JL 0x006d6983
006D69BC  EB 06                     JMP 0x006d69c4
LAB_006d69be:
006D69BE  8B BD 1C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff1c]
LAB_006d69c4:
006D69C4  8B 8F 88 02 00 00         MOV ECX,dword ptr [EDI + 0x288]
006D69CA  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
006D69CD  C7 82 7C 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x47c],0x0
LAB_006d69d7:
006D69D7  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
006D69DD  8B 88 88 02 00 00         MOV ECX,dword ptr [EAX + 0x288]
006D69E3  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006D69E6  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D69ED  74 0C                     JZ 0x006d69fb
006D69EF  05 F0 04 00 00            ADD EAX,0x4f0
006D69F4  50                        PUSH EAX
006D69F5  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d69fb:
006D69FB  33 C0                     XOR EAX,EAX
LAB_006d69fd:
006D69FD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D6A00  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D6A07  5F                        POP EDI
006D6A08  5E                        POP ESI
006D6A09  5B                        POP EBX
006D6A0A  8B E5                     MOV ESP,EBP
006D6A0C  5D                        POP EBP
006D6A0D  C2 04 00                  RET 0x4
