FUN_0040d540:
0040D540  55                        PUSH EBP
0040D541  8B EC                     MOV EBP,ESP
0040D543  83 EC 50                  SUB ESP,0x50
0040D546  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040D549  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D54C  53                        PUSH EBX
0040D54D  56                        PUSH ESI
0040D54E  57                        PUSH EDI
0040D54F  33 FF                     XOR EDI,EDI
0040D551  50                        PUSH EAX
0040D552  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0040D555  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
0040D558  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
0040D55B  E8 0F 53 FF FF            CALL 0x0040286f
0040D560  8B F0                     MOV ESI,EAX
0040D562  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0040D566  8B 8E BB 00 00 00         MOV ECX,dword ptr [ESI + 0xbb]
0040D56C  0F BF C2                  MOVSX EAX,DX
0040D56F  3B C1                     CMP EAX,ECX
0040D571  75 23                     JNZ 0x0040d596
0040D573  0F BF 5E 49               MOVSX EBX,word ptr [ESI + 0x49]
0040D577  3B 9E BF 00 00 00         CMP EBX,dword ptr [ESI + 0xbf]
0040D57D  75 17                     JNZ 0x0040d596
0040D57F  0F BF 5E 4B               MOVSX EBX,word ptr [ESI + 0x4b]
0040D583  3B 9E C3 00 00 00         CMP EBX,dword ptr [ESI + 0xc3]
0040D589  75 0B                     JNZ 0x0040d596
0040D58B  5F                        POP EDI
0040D58C  5E                        POP ESI
0040D58D  33 C0                     XOR EAX,EAX
0040D58F  5B                        POP EBX
0040D590  8B E5                     MOV ESP,EBP
0040D592  5D                        POP EBP
0040D593  C2 08 00                  RET 0x8
LAB_0040d596:
0040D596  39 BE 9F 00 00 00         CMP dword ptr [ESI + 0x9f],EDI
0040D59C  75 3E                     JNZ 0x0040d5dc
0040D59E  8B 96 C3 00 00 00         MOV EDX,dword ptr [ESI + 0xc3]
0040D5A4  52                        PUSH EDX
0040D5A5  8B 96 BF 00 00 00         MOV EDX,dword ptr [ESI + 0xbf]
0040D5AB  52                        PUSH EDX
0040D5AC  51                        PUSH ECX
0040D5AD  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D5B1  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040D5B5  51                        PUSH ECX
0040D5B6  52                        PUSH EDX
0040D5B7  50                        PUSH EAX
0040D5B8  E8 13 D8 29 00            CALL 0x006aadd0
0040D5BD  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
0040D5C3  33 C9                     XOR ECX,ECX
0040D5C5  3B C7                     CMP EAX,EDI
0040D5C7  5F                        POP EDI
0040D5C8  0F 9F C1                  SETG CL
0040D5CB  49                        DEC ECX
0040D5CC  5E                        POP ESI
0040D5CD  83 E1 06                  AND ECX,0x6
0040D5D0  5B                        POP EBX
0040D5D1  83 C1 FA                  ADD ECX,-0x6
0040D5D4  8B C1                     MOV EAX,ECX
0040D5D6  8B E5                     MOV ESP,EBP
0040D5D8  5D                        POP EBP
0040D5D9  C2 08 00                  RET 0x8
LAB_0040d5dc:
0040D5DC  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0040D5E2  8B BE A7 00 00 00         MOV EDI,dword ptr [ESI + 0xa7]
0040D5E8  8D 59 FF                  LEA EBX,[ECX + -0x1]
0040D5EB  3B FB                     CMP EDI,EBX
0040D5ED  7C 0B                     JL 0x0040d5fa
0040D5EF  5F                        POP EDI
0040D5F0  5E                        POP ESI
0040D5F1  33 C0                     XOR EAX,EAX
0040D5F3  5B                        POP EBX
0040D5F4  8B E5                     MOV ESP,EBP
0040D5F6  5D                        POP EBP
0040D5F7  C2 08 00                  RET 0x8
LAB_0040d5fa:
0040D5FA  8D 1C C9                  LEA EBX,[ECX + ECX*0x8]
0040D5FD  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0040D603  66 3B 54 D9 B8            CMP DX,word ptr [ECX + EBX*0x8 + -0x48]
0040D608  8D 4C D9 B8               LEA ECX,[ECX + EBX*0x8 + -0x48]
0040D60C  75 1F                     JNZ 0x0040d62d
0040D60E  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0040D612  66 3B 51 02               CMP DX,word ptr [ECX + 0x2]
0040D616  75 15                     JNZ 0x0040d62d
0040D618  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0040D61C  66 3B 51 04               CMP DX,word ptr [ECX + 0x4]
0040D620  75 0B                     JNZ 0x0040d62d
0040D622  5F                        POP EDI
0040D623  5E                        POP ESI
0040D624  33 C0                     XOR EAX,EAX
0040D626  5B                        POP EBX
0040D627  8B E5                     MOV ESP,EBP
0040D629  5D                        POP EBP
0040D62A  C2 08 00                  RET 0x8
LAB_0040d62d:
0040D62D  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040D634  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
0040D63B  0F BF 5E 49               MOVSX EBX,word ptr [ESI + 0x49]
0040D63F  0F AF CA                  IMUL ECX,EDX
0040D642  0F AF DA                  IMUL EBX,EDX
0040D645  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0040D649  0F AF D1                  IMUL EDX,ECX
0040D64C  03 C3                     ADD EAX,EBX
0040D64E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0040D651  03 D0                     ADD EDX,EAX
0040D653  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0040D658  C7 45 F0 30 75 00 00      MOV dword ptr [EBP + -0x10],0x7530
0040D65F  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0040D662  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
0040D668  8D 14 FF                  LEA EDX,[EDI + EDI*0x8]
0040D66B  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0040D66E  03 D0                     ADD EDX,EAX
0040D670  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0040D676  B9 01 00 00 00            MOV ECX,0x1
0040D67B  0F BF 44 D0 06            MOVSX EAX,word ptr [EAX + EDX*0x8 + 0x6]
0040D680  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0040D683  83 C8 FF                  OR EAX,0xffffffff
0040D686  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0040D689  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0040D68C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0040D68F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0040d692:
0040D692  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0040D698  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0040D69E  2B D0                     SUB EDX,EAX
0040D6A0  3B CA                     CMP ECX,EDX
0040D6A2  0F 8D 05 07 00 00         JGE 0x0040ddad
0040D6A8  03 C1                     ADD EAX,ECX
0040D6AA  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0040D6B0  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0040D6B7  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0040D6BA  8D 3C C1                  LEA EDI,[ECX + EAX*0x8]
LAB_0040d6bd:
0040D6BD  66 8B 07                  MOV AX,word ptr [EDI]
0040D6C0  66 3D FF FF               CMP AX,0xffff
0040D6C4  0F 84 D3 06 00 00         JZ 0x0040dd9d
0040D6CA  0F BF 57 04               MOVSX EDX,word ptr [EDI + 0x4]
0040D6CE  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D6D2  52                        PUSH EDX
0040D6D3  51                        PUSH ECX
0040D6D4  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D6D8  0F BF D0                  MOVSX EDX,AX
0040D6DB  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D6DF  52                        PUSH EDX
0040D6E0  50                        PUSH EAX
0040D6E1  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D6E5  51                        PUSH ECX
0040D6E6  52                        PUSH EDX
0040D6E7  E8 C4 87 29 00            CALL 0x006a5eb0
0040D6EC  3D FE 0F 00 00            CMP EAX,0xffe
0040D6F1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0040D6F4  0F 84 90 06 00 00         JZ 0x0040dd8a
0040D6FA  0F BF 47 06               MOVSX EAX,word ptr [EDI + 0x6]
0040D6FE  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0040D701  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0040D704  3B C1                     CMP EAX,ECX
0040D706  0F 8D 7E 06 00 00         JGE 0x0040dd8a
0040D70C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040D70F  8B C8                     MOV ECX,EAX
0040D711  81 E1 00 60 00 00         AND ECX,0x6000
0040D717  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0040D71A  74 24                     JZ 0x0040d740
0040D71C  8B C8                     MOV ECX,EAX
0040D71E  83 E1 01                  AND ECX,0x1
0040D721  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0040D724  74 08                     JZ 0x0040d72e
0040D726  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040D729  83 C0 05                  ADD EAX,0x5
0040D72C  EB 25                     JMP 0x0040d753
LAB_0040d72e:
0040D72E  80 E4 9F                  AND AH,0x9f
0040D731  3D FE 0F 00 00            CMP EAX,0xffe
0040D736  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040D739  74 15                     JZ 0x0040d750
0040D73B  83 C0 04                  ADD EAX,0x4
0040D73E  EB 13                     JMP 0x0040d753
LAB_0040d740:
0040D740  83 E0 01                  AND EAX,0x1
0040D743  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0040D746  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040D749  74 05                     JZ 0x0040d750
0040D74B  83 C0 04                  ADD EAX,0x4
0040D74E  EB 03                     JMP 0x0040d753
LAB_0040d750:
0040D750  83 C0 03                  ADD EAX,0x3
LAB_0040d753:
0040D753  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040D756  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0040D759  3B C1                     CMP EAX,ECX
0040D75B  0F 8F 29 06 00 00         JG 0x0040dd8a
0040D761  3B C1                     CMP EAX,ECX
0040D763  75 1B                     JNZ 0x0040d780
0040D765  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0040D768  8B 86 AF 00 00 00         MOV EAX,dword ptr [ESI + 0xaf]
0040D76E  3B D0                     CMP EDX,EAX
0040D770  0F 85 14 06 00 00         JNZ 0x0040dd8a
0040D776  83 7D E8 01               CMP dword ptr [EBP + -0x18],0x1
0040D77A  0F 8F 0A 06 00 00         JG 0x0040dd8a
LAB_0040d780:
0040D780  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040D784  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D788  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D78B  50                        PUSH EAX
0040D78C  51                        PUSH ECX
0040D78D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D790  52                        PUSH EDX
0040D791  56                        PUSH ESI
0040D792  E8 16 6D FF FF            CALL 0x004044ad
0040D797  85 C0                     TEST EAX,EAX
0040D799  0F 84 EB 05 00 00         JZ 0x0040dd8a
0040D79F  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040D7A3  0F BF 1F                  MOVSX EBX,word ptr [EDI]
0040D7A6  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D7AA  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040D7AE  2B D8                     SUB EBX,EAX
0040D7B0  8B C1                     MOV EAX,ECX
0040D7B2  2B C2                     SUB EAX,EDX
0040D7B4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0040D7B7  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0040D7BA  85 C0                     TEST EAX,EAX
0040D7BC  0F 84 5B 03 00 00         JZ 0x0040db1d
0040D7C2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040D7C5  66 8B 14 58               MOV DX,word ptr [EAX + EBX*0x2]
0040D7C9  81 E2 00 C0 00 00         AND EDX,0xc000
0040D7CF  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D7D5  0F 84 AF 05 00 00         JZ 0x0040dd8a
0040D7DB  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040D7E2  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
0040D7E6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D7E9  66 8B 04 42               MOV AX,word ptr [EDX + EAX*0x2]
0040D7ED  25 00 C0 00 00            AND EAX,0xc000
0040D7F2  3D 00 C0 00 00            CMP EAX,0xc000
0040D7F7  0F 84 8D 05 00 00         JZ 0x0040dd8a
0040D7FD  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0040D801  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040D805  52                        PUSH EDX
0040D806  51                        PUSH ECX
0040D807  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D80A  50                        PUSH EAX
0040D80B  56                        PUSH ESI
0040D80C  E8 9C 6C FF FF            CALL 0x004044ad
0040D811  85 C0                     TEST EAX,EAX
0040D813  0F 84 71 05 00 00         JZ 0x0040dd8a
0040D819  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D81D  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D821  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D824  50                        PUSH EAX
0040D825  51                        PUSH ECX
0040D826  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D829  52                        PUSH EDX
0040D82A  56                        PUSH ESI
0040D82B  E8 7D 6C FF FF            CALL 0x004044ad
0040D830  85 C0                     TEST EAX,EAX
0040D832  0F 84 52 05 00 00         JZ 0x0040dd8a
0040D838  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040D83B  F6 C4 40                  TEST AH,0x40
0040D83E  0F 84 63 01 00 00         JZ 0x0040d9a7
0040D844  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0040D847  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D84A  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
0040D84D  2B D1                     SUB EDX,ECX
0040D84F  66 8B 02                  MOV AX,word ptr [EDX]
0040D852  25 00 C0 00 00            AND EAX,0xc000
0040D857  3D 00 C0 00 00            CMP EAX,0xc000
0040D85C  0F 84 28 05 00 00         JZ 0x0040dd8a
0040D862  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0040D865  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D868  8B CB                     MOV ECX,EBX
0040D86A  2B C8                     SUB ECX,EAX
0040D86C  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
0040D870  25 00 C0 00 00            AND EAX,0xc000
0040D875  3D 00 C0 00 00            CMP EAX,0xc000
0040D87A  0F 84 0A 05 00 00         JZ 0x0040dd8a
0040D880  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040D887  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
0040D88B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0040D88E  8B C8                     MOV ECX,EAX
0040D890  2B CA                     SUB ECX,EDX
0040D892  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D895  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
0040D899  81 E1 00 C0 00 00         AND ECX,0xc000
0040D89F  81 F9 00 C0 00 00         CMP ECX,0xc000
0040D8A5  0F 84 DF 04 00 00         JZ 0x0040dd8a
0040D8AB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040D8AE  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
0040D8B1  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
0040D8B5  81 E2 00 C0 00 00         AND EDX,0xc000
0040D8BB  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D8C1  0F 84 C3 04 00 00         JZ 0x0040dd8a
0040D8C7  66 8B 14 59               MOV DX,word ptr [ECX + EBX*0x2]
0040D8CB  81 E2 00 C0 00 00         AND EDX,0xc000
0040D8D1  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D8D7  0F 84 AD 04 00 00         JZ 0x0040dd8a
0040D8DD  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0040D8E1  81 E2 00 C0 00 00         AND EDX,0xc000
0040D8E7  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D8ED  0F 84 97 04 00 00         JZ 0x0040dd8a
0040D8F3  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D8F7  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D8FB  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D8FF  48                        DEC EAX
0040D900  50                        PUSH EAX
0040D901  51                        PUSH ECX
0040D902  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D905  52                        PUSH EDX
0040D906  56                        PUSH ESI
0040D907  E8 A1 6B FF FF            CALL 0x004044ad
0040D90C  85 C0                     TEST EAX,EAX
0040D90E  0F 84 76 04 00 00         JZ 0x0040dd8a
0040D914  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D918  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D91C  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D91F  48                        DEC EAX
0040D920  50                        PUSH EAX
0040D921  51                        PUSH ECX
0040D922  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D925  52                        PUSH EDX
0040D926  56                        PUSH ESI
0040D927  E8 81 6B FF FF            CALL 0x004044ad
0040D92C  85 C0                     TEST EAX,EAX
0040D92E  0F 84 56 04 00 00         JZ 0x0040dd8a
0040D934  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D938  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D93C  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D940  48                        DEC EAX
0040D941  50                        PUSH EAX
0040D942  51                        PUSH ECX
0040D943  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D946  52                        PUSH EDX
0040D947  56                        PUSH ESI
0040D948  E8 60 6B FF FF            CALL 0x004044ad
0040D94D  85 C0                     TEST EAX,EAX
0040D94F  0F 84 35 04 00 00         JZ 0x0040dd8a
0040D955  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D959  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D95D  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D960  50                        PUSH EAX
0040D961  51                        PUSH ECX
0040D962  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D965  52                        PUSH EDX
0040D966  56                        PUSH ESI
0040D967  E8 41 6B FF FF            CALL 0x004044ad
0040D96C  85 C0                     TEST EAX,EAX
0040D96E  0F 84 16 04 00 00         JZ 0x0040dd8a
0040D974  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D978  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D97C  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D980  50                        PUSH EAX
0040D981  51                        PUSH ECX
0040D982  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D985  52                        PUSH EDX
0040D986  56                        PUSH ESI
0040D987  E8 21 6B FF FF            CALL 0x004044ad
0040D98C  85 C0                     TEST EAX,EAX
0040D98E  0F 84 F6 03 00 00         JZ 0x0040dd8a
0040D994  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D998  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D99C  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D99F  50                        PUSH EAX
0040D9A0  51                        PUSH ECX
0040D9A1  52                        PUSH EDX
0040D9A2  E9 60 01 00 00            JMP 0x0040db07
LAB_0040d9a7:
0040D9A7  F6 C4 20                  TEST AH,0x20
0040D9AA  0F 84 54 02 00 00         JZ 0x0040dc04
0040D9B0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040D9B3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0040D9B6  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
0040D9BA  81 E2 00 C0 00 00         AND EDX,0xc000
0040D9C0  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D9C6  0F 84 BE 03 00 00         JZ 0x0040dd8a
0040D9CC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D9CF  8B C1                     MOV EAX,ECX
0040D9D1  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
0040D9D4  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
0040D9D8  25 00 C0 00 00            AND EAX,0xc000
0040D9DD  3D 00 C0 00 00            CMP EAX,0xc000
0040D9E2  0F 84 A2 03 00 00         JZ 0x0040dd8a
0040D9E8  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040D9EF  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
0040D9F3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0040D9F6  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0040D9F9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040D9FC  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
0040DA00  81 E2 00 C0 00 00         AND EDX,0xc000
0040DA06  81 FA 00 C0 00 00         CMP EDX,0xc000
0040DA0C  0F 84 78 03 00 00         JZ 0x0040dd8a
0040DA12  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040DA15  8D 0C 18                  LEA ECX,[EAX + EBX*0x1]
0040DA18  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
0040DA1C  81 E1 00 C0 00 00         AND ECX,0xc000
0040DA22  81 F9 00 C0 00 00         CMP ECX,0xc000
0040DA28  0F 84 5C 03 00 00         JZ 0x0040dd8a
0040DA2E  66 8B 0C 5A               MOV CX,word ptr [EDX + EBX*0x2]
0040DA32  81 E1 00 C0 00 00         AND ECX,0xc000
0040DA38  81 F9 00 C0 00 00         CMP ECX,0xc000
0040DA3E  0F 84 46 03 00 00         JZ 0x0040dd8a
0040DA44  66 8B 04 42               MOV AX,word ptr [EDX + EAX*0x2]
0040DA48  25 00 C0 00 00            AND EAX,0xc000
0040DA4D  3D 00 C0 00 00            CMP EAX,0xc000
0040DA52  0F 84 32 03 00 00         JZ 0x0040dd8a
0040DA58  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DA5C  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040DA60  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040DA64  41                        INC ECX
0040DA65  51                        PUSH ECX
0040DA66  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DA69  52                        PUSH EDX
0040DA6A  50                        PUSH EAX
0040DA6B  56                        PUSH ESI
0040DA6C  E8 3C 6A FF FF            CALL 0x004044ad
0040DA71  85 C0                     TEST EAX,EAX
0040DA73  0F 84 11 03 00 00         JZ 0x0040dd8a
0040DA79  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DA7D  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040DA81  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040DA84  41                        INC ECX
0040DA85  51                        PUSH ECX
0040DA86  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DA89  52                        PUSH EDX
0040DA8A  50                        PUSH EAX
0040DA8B  56                        PUSH ESI
0040DA8C  E8 1C 6A FF FF            CALL 0x004044ad
0040DA91  85 C0                     TEST EAX,EAX
0040DA93  0F 84 F1 02 00 00         JZ 0x0040dd8a
0040DA99  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DA9D  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040DAA1  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040DAA5  41                        INC ECX
0040DAA6  51                        PUSH ECX
0040DAA7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DAAA  52                        PUSH EDX
0040DAAB  50                        PUSH EAX
0040DAAC  56                        PUSH ESI
0040DAAD  E8 FB 69 FF FF            CALL 0x004044ad
0040DAB2  85 C0                     TEST EAX,EAX
0040DAB4  0F 84 D0 02 00 00         JZ 0x0040dd8a
0040DABA  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DABE  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040DAC2  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040DAC5  51                        PUSH ECX
0040DAC6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DAC9  52                        PUSH EDX
0040DACA  50                        PUSH EAX
0040DACB  56                        PUSH ESI
0040DACC  E8 DC 69 FF FF            CALL 0x004044ad
0040DAD1  85 C0                     TEST EAX,EAX
0040DAD3  0F 84 B1 02 00 00         JZ 0x0040dd8a
0040DAD9  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DADD  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040DAE1  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040DAE5  51                        PUSH ECX
0040DAE6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DAE9  52                        PUSH EDX
0040DAEA  50                        PUSH EAX
0040DAEB  56                        PUSH ESI
0040DAEC  E8 BC 69 FF FF            CALL 0x004044ad
0040DAF1  85 C0                     TEST EAX,EAX
0040DAF3  0F 84 91 02 00 00         JZ 0x0040dd8a
0040DAF9  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DAFD  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040DB01  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040DB04  51                        PUSH ECX
0040DB05  52                        PUSH EDX
0040DB06  50                        PUSH EAX
LAB_0040db07:
0040DB07  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DB0A  56                        PUSH ESI
0040DB0B  E8 9D 69 FF FF            CALL 0x004044ad
0040DB10  85 C0                     TEST EAX,EAX
0040DB12  0F 85 EC 00 00 00         JNZ 0x0040dc04
0040DB18  E9 6D 02 00 00            JMP 0x0040dd8a
LAB_0040db1d:
0040DB1D  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0040DB20  85 C0                     TEST EAX,EAX
0040DB22  0F 84 DC 00 00 00         JZ 0x0040dc04
0040DB28  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0040DB2B  80 E5 9F                  AND CH,0x9f
0040DB2E  81 F9 FE 0F 00 00         CMP ECX,0xffe
0040DB34  0F 84 CA 00 00 00         JZ 0x0040dc04
0040DB3A  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040DB3E  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DB42  2B C1                     SUB EAX,ECX
0040DB44  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040DB47  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
0040DB4B  66 8B 04 41               MOV AX,word ptr [ECX + EAX*0x2]
0040DB4F  25 00 C0 00 00            AND EAX,0xc000
0040DB54  3D 00 C0 00 00            CMP EAX,0xc000
0040DB59  0F 84 2B 02 00 00         JZ 0x0040dd8a
0040DB5F  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040DB63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DB66  50                        PUSH EAX
0040DB67  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040DB6B  52                        PUSH EDX
0040DB6C  50                        PUSH EAX
0040DB6D  56                        PUSH ESI
0040DB6E  E8 3A 69 FF FF            CALL 0x004044ad
0040DB73  85 C0                     TEST EAX,EAX
0040DB75  0F 84 0F 02 00 00         JZ 0x0040dd8a
0040DB7B  66 8B 4F 02               MOV CX,word ptr [EDI + 0x2]
0040DB7F  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0040DB83  66 3B C8                  CMP CX,AX
0040DB86  75 39                     JNZ 0x0040dbc1
0040DB88  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040DB8B  66 8B 14 59               MOV DX,word ptr [ECX + EBX*0x2]
0040DB8F  81 E2 00 C0 00 00         AND EDX,0xc000
0040DB95  81 FA 00 C0 00 00         CMP EDX,0xc000
0040DB9B  0F 84 E9 01 00 00         JZ 0x0040dd8a
0040DBA1  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040DBA5  0F BF D0                  MOVSX EDX,AX
0040DBA8  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040DBAB  51                        PUSH ECX
0040DBAC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DBAF  52                        PUSH EDX
0040DBB0  50                        PUSH EAX
0040DBB1  56                        PUSH ESI
0040DBB2  E8 F6 68 FF FF            CALL 0x004044ad
0040DBB7  85 C0                     TEST EAX,EAX
0040DBB9  0F 84 CB 01 00 00         JZ 0x0040dd8a
0040DBBF  EB 43                     JMP 0x0040dc04
LAB_0040dbc1:
0040DBC1  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040DBC8  0F AF 55 EC               IMUL EDX,dword ptr [EBP + -0x14]
0040DBCC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040DBCF  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
0040DBD3  81 E2 00 C0 00 00         AND EDX,0xc000
0040DBD9  81 FA 00 C0 00 00         CMP EDX,0xc000
0040DBDF  0F 84 A5 01 00 00         JZ 0x0040dd8a
0040DBE5  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040DBE9  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040DBED  0F BF C9                  MOVSX ECX,CX
0040DBF0  50                        PUSH EAX
0040DBF1  51                        PUSH ECX
0040DBF2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DBF5  52                        PUSH EDX
0040DBF6  56                        PUSH ESI
0040DBF7  E8 B1 68 FF FF            CALL 0x004044ad
0040DBFC  85 C0                     TEST EAX,EAX
0040DBFE  0F 84 86 01 00 00         JZ 0x0040dd8a
LAB_0040dc04:
0040DC04  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040DC07  8B 8E AF 00 00 00         MOV ECX,dword ptr [ESI + 0xaf]
0040DC0D  3B C1                     CMP EAX,ECX
0040DC0F  0F 84 3B 01 00 00         JZ 0x0040dd50
0040DC15  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DC18  8B 51 29                  MOV EDX,dword ptr [ECX + 0x29]
0040DC1B  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0040DC1E  33 D2                     XOR EDX,EDX
0040DC20  85 C0                     TEST EAX,EAX
0040DC22  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0040DC25  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0040DC28  0F 8E 22 01 00 00         JLE 0x0040dd50
LAB_0040dc2e:
0040DC2E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040DC31  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
0040DC34  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0040DC37  0F 83 13 01 00 00         JNC 0x0040dd50
0040DC3D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0040DC40  0F AF C2                  IMUL EAX,EDX
0040DC43  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0040DC46  0F 84 04 01 00 00         JZ 0x0040dd50
0040DC4C  66 8B 00                  MOV AX,word ptr [EAX]
0040DC4F  66 3D FF FF               CMP AX,0xffff
0040DC53  0F 84 E5 00 00 00         JZ 0x0040dd3e
0040DC59  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040DC5C  50                        PUSH EAX
0040DC5D  E8 0D 4C FF FF            CALL 0x0040286f
0040DC62  8B D8                     MOV EBX,EAX
0040DC64  85 DB                     TEST EBX,EBX
0040DC66  0F 84 D2 00 00 00         JZ 0x0040dd3e
0040DC6C  3B DE                     CMP EBX,ESI
0040DC6E  0F 84 CA 00 00 00         JZ 0x0040dd3e
0040DC74  8B 83 97 00 00 00         MOV EAX,dword ptr [EBX + 0x97]
0040DC7A  85 C0                     TEST EAX,EAX
0040DC7C  0F 84 BC 00 00 00         JZ 0x0040dd3e
0040DC82  8B 8B 9F 00 00 00         MOV ECX,dword ptr [EBX + 0x9f]
0040DC88  85 C9                     TEST ECX,ECX
0040DC8A  0F 84 AE 00 00 00         JZ 0x0040dd3e
0040DC90  66 8B 0F                  MOV CX,word ptr [EDI]
0040DC93  66 39 48 08               CMP word ptr [EAX + 0x8],CX
0040DC97  75 18                     JNZ 0x0040dcb1
0040DC99  66 8B 50 0A               MOV DX,word ptr [EAX + 0xa]
0040DC9D  66 3B 57 02               CMP DX,word ptr [EDI + 0x2]
0040DCA1  75 0E                     JNZ 0x0040dcb1
0040DCA3  66 8B 40 0C               MOV AX,word ptr [EAX + 0xc]
0040DCA7  66 3B 47 04               CMP AX,word ptr [EDI + 0x4]
0040DCAB  0F 84 D9 00 00 00         JZ 0x0040dd8a
LAB_0040dcb1:
0040DCB1  0F BF 57 04               MOVSX EDX,word ptr [EDI + 0x4]
0040DCB5  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
0040DCB9  0F BF C9                  MOVSX ECX,CX
0040DCBC  52                        PUSH EDX
0040DCBD  50                        PUSH EAX
0040DCBE  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
0040DCC2  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
0040DCC6  51                        PUSH ECX
0040DCC7  52                        PUSH EDX
0040DCC8  0F BF 4B 47               MOVSX ECX,word ptr [EBX + 0x47]
0040DCCC  50                        PUSH EAX
0040DCCD  51                        PUSH ECX
0040DCCE  E8 DD 81 29 00            CALL 0x006a5eb0
0040DCD3  3D FE 0F 00 00            CMP EAX,0xffe
0040DCD8  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0040DCDB  74 61                     JZ 0x0040dd3e
0040DCDD  3B 83 AF 00 00 00         CMP EAX,dword ptr [EBX + 0xaf]
0040DCE3  75 21                     JNZ 0x0040dd06
0040DCE5  8B 83 A7 00 00 00         MOV EAX,dword ptr [EBX + 0xa7]
0040DCEB  8B 8B AB 00 00 00         MOV ECX,dword ptr [EBX + 0xab]
0040DCF1  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0040DCF4  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040DCFA  03 D1                     ADD EDX,ECX
0040DCFC  0F BF 4C D0 06            MOVSX ECX,word ptr [EAX + EDX*0x8 + 0x6]
0040DD01  3B 4D CC                  CMP ECX,dword ptr [EBP + -0x34]
0040DD04  7D 38                     JGE 0x0040dd3e
LAB_0040dd06:
0040DD06  8D 55 BC                  LEA EDX,[EBP + -0x44]
0040DD09  8D 45 B0                  LEA EAX,[EBP + -0x50]
0040DD0C  52                        PUSH EDX
0040DD0D  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0040DD10  50                        PUSH EAX
0040DD11  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040DD14  8D 55 B8                  LEA EDX,[EBP + -0x48]
0040DD17  51                        PUSH ECX
0040DD18  52                        PUSH EDX
0040DD19  53                        PUSH EBX
0040DD1A  50                        PUSH EAX
0040DD1B  E8 F3 47 FF FF            CALL 0x00402513
0040DD20  85 C0                     TEST EAX,EAX
0040DD22  74 1A                     JZ 0x0040dd3e
0040DD24  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0040DD27  39 4D B8                  CMP dword ptr [EBP + -0x48],ECX
0040DD2A  75 12                     JNZ 0x0040dd3e
0040DD2C  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040DD30  39 55 B4                  CMP dword ptr [EBP + -0x4c],EDX
0040DD33  75 09                     JNZ 0x0040dd3e
0040DD35  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040DD39  39 45 B0                  CMP dword ptr [EBP + -0x50],EAX
0040DD3C  74 4C                     JZ 0x0040dd8a
LAB_0040dd3e:
0040DD3E  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0040DD41  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0040DD44  42                        INC EDX
0040DD45  3B D0                     CMP EDX,EAX
0040DD47  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0040DD4A  0F 8C DE FE FF FF         JL 0x0040dc2e
LAB_0040dd50:
0040DD50  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0040DD53  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0040DD56  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0040DD59  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040DD5D  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0040DD60  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040DD63  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040DD67  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0040DD6A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0040DD6D  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0040DD70  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0040DD73  85 C0                     TEST EAX,EAX
0040DD75  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0040DD78  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0040DD7B  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0040DD7E  75 0A                     JNZ 0x0040dd8a
0040DD80  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
0040DD86  85 C0                     TEST EAX,EAX
0040DD88  74 50                     JZ 0x0040ddda
LAB_0040dd8a:
0040DD8A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0040DD8D  83 C7 08                  ADD EDI,0x8
0040DD90  40                        INC EAX
0040DD91  83 F8 09                  CMP EAX,0x9
0040DD94  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040DD97  0F 8C 20 F9 FF FF         JL 0x0040d6bd
LAB_0040dd9d:
0040DD9D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0040DDA0  41                        INC ECX
0040DDA1  83 F9 03                  CMP ECX,0x3
0040DDA4  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0040DDA7  0F 8C E5 F8 FF FF         JL 0x0040d692
LAB_0040ddad:
0040DDAD  81 7D F0 30 75 00 00      CMP dword ptr [EBP + -0x10],0x7530
0040DDB4  75 2B                     JNZ 0x0040dde1
0040DDB6  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0040DDB9  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0040DDBC  51                        PUSH ECX
0040DDBD  8D 45 D8                  LEA EAX,[EBP + -0x28]
0040DDC0  52                        PUSH EDX
0040DDC1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040DDC4  8D 4D DC                  LEA ECX,[EBP + -0x24]
0040DDC7  50                        PUSH EAX
0040DDC8  51                        PUSH ECX
0040DDC9  56                        PUSH ESI
0040DDCA  52                        PUSH EDX
0040DDCB  E8 43 47 FF FF            CALL 0x00402513
0040DDD0  85 C0                     TEST EAX,EAX
0040DDD2  0F 84 A8 00 00 00         JZ 0x0040de80
0040DDD8  EB 0D                     JMP 0x0040dde7
LAB_0040ddda:
0040DDDA  81 7D F0 30 75 00 00      CMP dword ptr [EBP + -0x10],0x7530
LAB_0040dde1:
0040DDE1  0F 8D 99 00 00 00         JGE 0x0040de80
LAB_0040dde7:
0040DDE7  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0040DDED  50                        PUSH EAX
0040DDEE  E8 9D 80 29 00            CALL 0x006a5e90
0040DDF3  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0040DDF6  8B BE A7 00 00 00         MOV EDI,dword ptr [ESI + 0xa7]
0040DDFC  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0040DDFF  03 F9                     ADD EDI,ECX
0040DE01  6A 10                     PUSH 0x10
0040DE03  89 BE A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDI
0040DE09  89 96 AB 00 00 00         MOV dword ptr [ESI + 0xab],EDX
0040DE0F  E8 FC CD 29 00            CALL 0x006aac10
0040DE14  85 C0                     TEST EAX,EAX
0040DE16  89 86 97 00 00 00         MOV dword ptr [ESI + 0x97],EAX
0040DE1C  75 0E                     JNZ 0x0040de2c
0040DE1E  5F                        POP EDI
0040DE1F  5E                        POP ESI
0040DE20  B8 FE FF FF FF            MOV EAX,0xfffffffe
0040DE25  5B                        POP EBX
0040DE26  8B E5                     MOV ESP,EBP
0040DE28  5D                        POP EBP
0040DE29  C2 08 00                  RET 0x8
LAB_0040de2c:
0040DE2C  C7 86 9B 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0x9b],0x2
0040DE36  66 8B 4D DC               MOV CX,word ptr [EBP + -0x24]
0040DE3A  66 89 48 08               MOV word ptr [EAX + 0x8],CX
0040DE3E  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
0040DE44  66 8B 45 D8               MOV AX,word ptr [EBP + -0x28]
0040DE48  5F                        POP EDI
0040DE49  66 89 42 0A               MOV word ptr [EDX + 0xa],AX
0040DE4D  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
0040DE53  66 8B 55 D4               MOV DX,word ptr [EBP + -0x2c]
0040DE57  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
0040DE5B  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0040DE61  66 8B 4D E4               MOV CX,word ptr [EBP + -0x1c]
0040DE65  66 89 48 0E               MOV word ptr [EAX + 0xe],CX
0040DE69  B8 01 00 00 00            MOV EAX,0x1
0040DE6E  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
0040DE72  89 96 AF 00 00 00         MOV dword ptr [ESI + 0xaf],EDX
0040DE78  5E                        POP ESI
0040DE79  5B                        POP EBX
0040DE7A  8B E5                     MOV ESP,EBP
0040DE7C  5D                        POP EBP
0040DE7D  C2 08 00                  RET 0x8
LAB_0040de80:
0040DE80  5F                        POP EDI
0040DE81  5E                        POP ESI
0040DE82  B8 02 00 00 00            MOV EAX,0x2
0040DE87  5B                        POP EBX
0040DE88  8B E5                     MOV ESP,EBP
0040DE8A  5D                        POP EBP
0040DE8B  C2 08 00                  RET 0x8
