FUN_0063c510:
0063C510  55                        PUSH EBP
0063C511  8B EC                     MOV EBP,ESP
0063C513  83 EC 0C                  SUB ESP,0xc
0063C516  53                        PUSH EBX
0063C517  56                        PUSH ESI
0063C518  8B F1                     MOV ESI,ECX
0063C51A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063C51D  8B 86 8E 02 00 00         MOV EAX,dword ptr [ESI + 0x28e]
0063C523  2B C8                     SUB ECX,EAX
0063C525  8B 86 96 02 00 00         MOV EAX,dword ptr [ESI + 0x296]
0063C52B  0F AF C1                  IMUL EAX,ECX
0063C52E  0F AF C1                  IMUL EAX,ECX
0063C531  99                        CDQ
0063C532  2B C2                     SUB EAX,EDX
0063C534  8B D0                     MOV EDX,EAX
0063C536  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
0063C53C  0F AF C1                  IMUL EAX,ECX
0063C53F  D1 FA                     SAR EDX,0x1
0063C541  2B C2                     SUB EAX,EDX
0063C543  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0063C546  B8 67 66 66 66            MOV EAX,0x66666667
0063C54B  F7 E9                     IMUL ECX
0063C54D  C1 FA 02                  SAR EDX,0x2
0063C550  8B C2                     MOV EAX,EDX
0063C552  C1 E8 1F                  SHR EAX,0x1f
0063C555  03 D0                     ADD EDX,EAX
0063C557  83 FA 01                  CMP EDX,0x1
0063C55A  7F 05                     JG 0x0063c561
0063C55C  BA 01 00 00 00            MOV EDX,0x1
LAB_0063c561:
0063C561  8B 86 9A 02 00 00         MOV EAX,dword ptr [ESI + 0x29a]
0063C567  48                        DEC EAX
0063C568  0F 85 8B 00 00 00         JNZ 0x0063c5f9
0063C56E  0F BF 86 51 02 00 00      MOVSX EAX,word ptr [ESI + 0x251]
0063C575  8B 8E 6E 02 00 00         MOV ECX,dword ptr [ESI + 0x26e]
0063C57B  2B C2                     SUB EAX,EDX
0063C57D  89 8E 7A 02 00 00         MOV dword ptr [ESI + 0x27a],ECX
0063C583  8B 8E 82 02 00 00         MOV ECX,dword ptr [ESI + 0x282]
0063C589  3B C1                     CMP EAX,ECX
0063C58B  89 86 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EAX
0063C591  7D 06                     JGE 0x0063c599
0063C593  89 8E 6E 02 00 00         MOV dword ptr [ESI + 0x26e],ECX
LAB_0063c599:
0063C599  8B 86 6E 02 00 00         MOV EAX,dword ptr [ESI + 0x26e]
0063C59F  3D E8 03 00 00            CMP EAX,0x3e8
0063C5A4  7D 53                     JGE 0x0063c5f9
0063C5A6  66 8B 96 61 02 00 00      MOV DX,word ptr [ESI + 0x261]
0063C5AD  8B 8E 5D 02 00 00         MOV ECX,dword ptr [ESI + 0x25d]
0063C5B3  6A 00                     PUSH 0x0
0063C5B5  6A 00                     PUSH 0x0
0063C5B7  68 A8 00 00 00            PUSH 0xa8
0063C5BC  52                        PUSH EDX
0063C5BD  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
0063C5C3  51                        PUSH ECX
0063C5C4  8B 8E 7A 02 00 00         MOV ECX,dword ptr [ESI + 0x27a]
0063C5CA  68 50 C3 00 00            PUSH 0xc350
0063C5CF  52                        PUSH EDX
0063C5D0  8B 96 76 02 00 00         MOV EDX,dword ptr [ESI + 0x276]
0063C5D6  51                        PUSH ECX
0063C5D7  8B 8E 72 02 00 00         MOV ECX,dword ptr [ESI + 0x272]
0063C5DD  52                        PUSH EDX
0063C5DE  8B 96 6A 02 00 00         MOV EDX,dword ptr [ESI + 0x26a]
0063C5E4  51                        PUSH ECX
0063C5E5  50                        PUSH EAX
0063C5E6  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
0063C5EC  52                        PUSH EDX
0063C5ED  50                        PUSH EAX
0063C5EE  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063C5F4  E8 1D 7F DC FF            CALL 0x00404516
LAB_0063c5f9:
0063C5F9  8B CE                     MOV ECX,ESI
0063C5FB  E8 36 69 DC FF            CALL 0x00402f36
0063C600  8B D8                     MOV EBX,EAX
0063C602  83 FB 03                  CMP EBX,0x3
0063C605  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063C608  0F 85 FD 01 00 00         JNZ 0x0063c80b
0063C60E  8A 86 9E 02 00 00         MOV AL,byte ptr [ESI + 0x29e]
0063C614  3C 04                     CMP AL,0x4
0063C616  74 25                     JZ 0x0063c63d
0063C618  3C 01                     CMP AL,0x1
0063C61A  74 21                     JZ 0x0063c63d
0063C61C  8B 8E 6E 02 00 00         MOV ECX,dword ptr [ESI + 0x26e]
0063C622  8B 86 82 02 00 00         MOV EAX,dword ptr [ESI + 0x282]
0063C628  3B C8                     CMP ECX,EAX
0063C62A  0F 85 DB 01 00 00         JNZ 0x0063c80b
0063C630  5E                        POP ESI
0063C631  B8 04 00 00 00            MOV EAX,0x4
0063C636  5B                        POP EBX
0063C637  8B E5                     MOV ESP,EBP
0063C639  5D                        POP EBP
0063C63A  C2 04 00                  RET 0x4
LAB_0063c63d:
0063C63D  57                        PUSH EDI
0063C63E  6A 00                     PUSH 0x0
0063C640  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0063C646  6A 13                     PUSH 0x13
0063C648  6A 00                     PUSH 0x0
0063C64A  6A 0D                     PUSH 0xd
0063C64C  8B CF                     MOV ECX,EDI
0063C64E  E8 67 58 DC FF            CALL 0x00401eba
0063C653  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063C659  8B CF                     MOV ECX,EDI
0063C65B  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063C661  50                        PUSH EAX
0063C662  6A 0D                     PUSH 0xd
0063C664  E8 D7 8B DC FF            CALL 0x00405240
0063C669  6A 0D                     PUSH 0xd
0063C66B  8B CF                     MOV ECX,EDI
0063C66D  C6 86 9F 02 00 00 01      MOV byte ptr [ESI + 0x29f],0x1
0063C674  E8 5C 51 DC FF            CALL 0x004017d5
0063C679  66 8B 8E 6E 02 00 00      MOV CX,word ptr [ESI + 0x26e]
0063C680  66 8B 96 6A 02 00 00      MOV DX,word ptr [ESI + 0x26a]
0063C687  66 8B 86 66 02 00 00      MOV AX,word ptr [ESI + 0x266]
0063C68E  51                        PUSH ECX
0063C68F  52                        PUSH EDX
0063C690  50                        PUSH EAX
0063C691  8B CE                     MOV ECX,ESI
0063C693  E8 6F 6A DC FF            CALL 0x00403107
0063C698  8B 16                     MOV EDX,dword ptr [ESI]
0063C69A  8B CE                     MOV ECX,ESI
0063C69C  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0063C6A2  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0063C6A8  85 FF                     TEST EDI,EDI
0063C6AA  0F 84 42 01 00 00         JZ 0x0063c7f2
0063C6B0  8B 8E 6E 02 00 00         MOV ECX,dword ptr [ESI + 0x26e]
0063C6B6  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063C6BB  85 C9                     TEST ECX,ECX
0063C6BD  7C 14                     JL 0x0063c6d3
0063C6BF  F7 E9                     IMUL ECX
0063C6C1  C1 FA 06                  SAR EDX,0x6
0063C6C4  8B C2                     MOV EAX,EDX
0063C6C6  C1 E8 1F                  SHR EAX,0x1f
0063C6C9  03 D0                     ADD EDX,EAX
0063C6CB  0F BF CA                  MOVSX ECX,DX
0063C6CE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063C6D1  EB 13                     JMP 0x0063c6e6
LAB_0063c6d3:
0063C6D3  F7 E9                     IMUL ECX
0063C6D5  C1 FA 06                  SAR EDX,0x6
0063C6D8  8B C2                     MOV EAX,EDX
0063C6DA  C1 E8 1F                  SHR EAX,0x1f
0063C6DD  03 D0                     ADD EDX,EAX
0063C6DF  0F BF C2                  MOVSX EAX,DX
0063C6E2  48                        DEC EAX
0063C6E3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0063c6e6:
0063C6E6  8B 8E 6A 02 00 00         MOV ECX,dword ptr [ESI + 0x26a]
0063C6EC  B8 79 19 8C 02            MOV EAX,0x28c1979
0063C6F1  85 C9                     TEST ECX,ECX
0063C6F3  7C 10                     JL 0x0063c705
0063C6F5  F7 E9                     IMUL ECX
0063C6F7  D1 FA                     SAR EDX,0x1
0063C6F9  8B CA                     MOV ECX,EDX
0063C6FB  C1 E9 1F                  SHR ECX,0x1f
0063C6FE  03 D1                     ADD EDX,ECX
0063C700  0F BF DA                  MOVSX EBX,DX
0063C703  EB 0F                     JMP 0x0063c714
LAB_0063c705:
0063C705  F7 E9                     IMUL ECX
0063C707  D1 FA                     SAR EDX,0x1
0063C709  8B C2                     MOV EAX,EDX
0063C70B  C1 E8 1F                  SHR EAX,0x1f
0063C70E  03 D0                     ADD EDX,EAX
0063C710  0F BF DA                  MOVSX EBX,DX
0063C713  4B                        DEC EBX
LAB_0063c714:
0063C714  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
0063C71A  B8 79 19 8C 02            MOV EAX,0x28c1979
0063C71F  85 C9                     TEST ECX,ECX
0063C721  7C 10                     JL 0x0063c733
0063C723  F7 E9                     IMUL ECX
0063C725  D1 FA                     SAR EDX,0x1
0063C727  8B CA                     MOV ECX,EDX
0063C729  C1 E9 1F                  SHR ECX,0x1f
0063C72C  03 D1                     ADD EDX,ECX
0063C72E  0F BF C2                  MOVSX EAX,DX
0063C731  EB 0F                     JMP 0x0063c742
LAB_0063c733:
0063C733  F7 E9                     IMUL ECX
0063C735  D1 FA                     SAR EDX,0x1
0063C737  8B C2                     MOV EAX,EDX
0063C739  C1 E8 1F                  SHR EAX,0x1f
0063C73C  03 D0                     ADD EDX,EAX
0063C73E  0F BF C2                  MOVSX EAX,DX
0063C741  48                        DEC EAX
LAB_0063c742:
0063C742  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063C749  74 68                     JZ 0x0063c7b3
0063C74B  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0063C751  85 C9                     TEST ECX,ECX
0063C753  74 5E                     JZ 0x0063c7b3
0063C755  8D 4D F4                  LEA ECX,[EBP + -0xc]
0063C758  8D 55 F8                  LEA EDX,[EBP + -0x8]
0063C75B  51                        PUSH ECX
0063C75C  52                        PUSH EDX
0063C75D  53                        PUSH EBX
0063C75E  50                        PUSH EAX
0063C75F  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0063C765  8B CF                     MOV ECX,EDI
0063C767  50                        PUSH EAX
0063C768  E8 E6 77 DC FF            CALL 0x00403f53
0063C76D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063C770  85 C0                     TEST EAX,EAX
0063C772  7C 3F                     JL 0x0063c7b3
0063C774  83 F8 05                  CMP EAX,0x5
0063C777  7D 3A                     JGE 0x0063c7b3
0063C779  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0063C77C  85 D2                     TEST EDX,EDX
0063C77E  7C 33                     JL 0x0063c7b3
0063C780  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0063C783  3B D1                     CMP EDX,ECX
0063C785  7D 2C                     JGE 0x0063c7b3
0063C787  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0063C78E  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0063C791  03 C3                     ADD EAX,EBX
0063C793  85 C0                     TEST EAX,EAX
0063C795  7C 1C                     JL 0x0063c7b3
0063C797  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0063C79A  7D 17                     JGE 0x0063c7b3
0063C79C  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0063C79F  85 FF                     TEST EDI,EDI
0063C7A1  74 10                     JZ 0x0063c7b3
0063C7A3  0F AF C1                  IMUL EAX,ECX
0063C7A6  03 C7                     ADD EAX,EDI
0063C7A8  33 C9                     XOR ECX,ECX
0063C7AA  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0063C7AD  8B C1                     MOV EAX,ECX
0063C7AF  85 C0                     TEST EAX,EAX
0063C7B1  74 20                     JZ 0x0063c7d3
LAB_0063c7b3:
0063C7B3  8A 86 9F 02 00 00         MOV AL,byte ptr [ESI + 0x29f]
0063C7B9  84 C0                     TEST AL,AL
0063C7BB  75 32                     JNZ 0x0063c7ef
0063C7BD  6A 00                     PUSH 0x0
0063C7BF  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0063C7C5  E8 B8 61 DC FF            CALL 0x00402982
0063C7CA  C6 86 9F 02 00 00 01      MOV byte ptr [ESI + 0x29f],0x1
0063C7D1  EB 1C                     JMP 0x0063c7ef
LAB_0063c7d3:
0063C7D3  8A 86 9F 02 00 00         MOV AL,byte ptr [ESI + 0x29f]
0063C7D9  84 C0                     TEST AL,AL
0063C7DB  74 12                     JZ 0x0063c7ef
0063C7DD  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0063C7E3  E8 27 75 DC FF            CALL 0x00403d0f
0063C7E8  C6 86 9F 02 00 00 00      MOV byte ptr [ESI + 0x29f],0x0
LAB_0063c7ef:
0063C7EF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0063c7f2:
0063C7F2  C6 86 65 02 00 00 06      MOV byte ptr [ESI + 0x265],0x6
0063C7F9  C6 86 9E 02 00 00 02      MOV byte ptr [ESI + 0x29e],0x2
0063C800  5F                        POP EDI
0063C801  8B C3                     MOV EAX,EBX
0063C803  5E                        POP ESI
0063C804  5B                        POP EBX
0063C805  8B E5                     MOV ESP,EBP
0063C807  5D                        POP EBP
0063C808  C2 04 00                  RET 0x4
LAB_0063c80b:
0063C80B  8B C3                     MOV EAX,EBX
0063C80D  5E                        POP ESI
0063C80E  5B                        POP EBX
0063C80F  8B E5                     MOV ESP,EBP
0063C811  5D                        POP EBP
0063C812  C2 04 00                  RET 0x4
