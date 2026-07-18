FUN_00742fb0:
00742FB0  55                        PUSH EBP
00742FB1  8B EC                     MOV EBP,ESP
00742FB3  83 EC 74                  SUB ESP,0x74
00742FB6  66 C7 45 9C 10 4D         MOV word ptr [EBP + -0x64],0x4d10
00742FBC  66 C7 45 C4 4D 00         MOV word ptr [EBP + -0x3c],0x4d
00742FC2  66 C7 45 A0 9A 00         MOV word ptr [EBP + -0x60],0x9a
00742FC8  C7 45 E0 F4 12 43 13      MOV dword ptr [EBP + -0x20],0x134312f4
00742FCF  C6 45 AC CC               MOV byte ptr [EBP + -0x54],0xcc
00742FD3  C6 45 AD CC               MOV byte ptr [EBP + -0x53],0xcc
00742FD7  C6 45 AE CC               MOV byte ptr [EBP + -0x52],0xcc
00742FDB  C6 45 AF CC               MOV byte ptr [EBP + -0x51],0xcc
00742FDF  C6 45 B0 CC               MOV byte ptr [EBP + -0x50],0xcc
00742FE3  C6 45 B1 CC               MOV byte ptr [EBP + -0x4f],0xcc
00742FE7  C6 45 B2 CC               MOV byte ptr [EBP + -0x4e],0xcc
00742FEB  C6 45 B3 CC               MOV byte ptr [EBP + -0x4d],0xcc
00742FEF  C6 45 B4 CC               MOV byte ptr [EBP + -0x4c],0xcc
00742FF3  C6 45 B5 CC               MOV byte ptr [EBP + -0x4b],0xcc
00742FF7  C6 45 B6 FB               MOV byte ptr [EBP + -0x4a],0xfb
00742FFB  C6 45 B7 3F               MOV byte ptr [EBP + -0x49],0x3f
00742FFF  C7 45 A8 01 00 00 00      MOV dword ptr [EBP + -0x58],0x1
00743006  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0074300A  66 89 45 90               MOV word ptr [EBP + -0x70],AX
0074300E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00743011  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00743014  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00743017  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0074301A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0074301D  25 FF FF 00 00            AND EAX,0xffff
00743022  25 00 80 00 00            AND EAX,0x8000
00743027  66 89 45 98               MOV word ptr [EBP + -0x68],AX
0074302B  66 8B 4D 90               MOV CX,word ptr [EBP + -0x70]
0074302F  66 81 E1 FF 7F            AND CX,0x7fff
00743034  66 89 4D 90               MOV word ptr [EBP + -0x70],CX
00743038  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0074303B  81 E2 FF FF 00 00         AND EDX,0xffff
00743041  85 D2                     TEST EDX,EDX
00743043  74 09                     JZ 0x0074304e
00743045  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743048  C6 40 02 2D               MOV byte ptr [EAX + 0x2],0x2d
0074304C  EB 07                     JMP 0x00743055
LAB_0074304e:
0074304E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743051  C6 41 02 20               MOV byte ptr [ECX + 0x2],0x20
LAB_00743055:
00743055  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00743058  81 E2 FF FF 00 00         AND EDX,0xffff
0074305E  85 D2                     TEST EDX,EDX
00743060  75 3A                     JNZ 0x0074309c
00743062  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
00743066  75 34                     JNZ 0x0074309c
00743068  83 7D B8 00               CMP dword ptr [EBP + -0x48],0x0
0074306C  75 2E                     JNZ 0x0074309c
0074306E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743071  66 C7 00 00 00            MOV word ptr [EAX],0x0
00743076  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743079  C6 41 02 20               MOV byte ptr [ECX + 0x2],0x20
0074307D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00743080  C6 42 03 01               MOV byte ptr [EDX + 0x3],0x1
00743084  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743087  C6 40 04 30               MOV byte ptr [EAX + 0x4],0x30
0074308B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0074308E  C6 41 05 00               MOV byte ptr [ECX + 0x5],0x0
00743092  B8 01 00 00 00            MOV EAX,0x1
00743097  E9 26 04 00 00            JMP 0x007434c2
LAB_0074309c:
0074309C  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0074309F  81 E2 FF FF 00 00         AND EDX,0xffff
007430A5  81 FA FF 7F 00 00         CMP EDX,0x7fff
007430AB  0F 85 E5 00 00 00         JNZ 0x00743196
007430B1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007430B4  66 C7 00 01 00            MOV word ptr [EAX],0x1
007430B9  81 7D DC 00 00 00 80      CMP dword ptr [EBP + -0x24],0x80000000
007430C0  75 06                     JNZ 0x007430c8
007430C2  83 7D B8 00               CMP dword ptr [EBP + -0x48],0x0
007430C6  74 34                     JZ 0x007430fc
LAB_007430c8:
007430C8  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007430CB  81 E1 00 00 00 40         AND ECX,0x40000000
007430D1  85 C9                     TEST ECX,ECX
007430D3  75 27                     JNZ 0x007430fc
007430D5  68 D4 0F 7A 00            PUSH 0x7a0fd4
007430DA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007430DD  83 C2 04                  ADD EDX,0x4
007430E0  52                        PUSH EDX
007430E1  E8 5A 71 FF FF            CALL 0x0073a240
007430E6  83 C4 08                  ADD ESP,0x8
007430E9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007430EC  C6 40 03 06               MOV byte ptr [EAX + 0x3],0x6
007430F0  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
007430F7  E9 95 00 00 00            JMP 0x00743191
LAB_007430fc:
007430FC  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
007430FF  81 E1 FF FF 00 00         AND ECX,0xffff
00743105  85 C9                     TEST ECX,ECX
00743107  74 33                     JZ 0x0074313c
00743109  81 7D DC 00 00 00 C0      CMP dword ptr [EBP + -0x24],0xc0000000
00743110  75 2A                     JNZ 0x0074313c
00743112  83 7D B8 00               CMP dword ptr [EBP + -0x48],0x0
00743116  75 24                     JNZ 0x0074313c
00743118  68 CC 0F 7A 00            PUSH 0x7a0fcc
0074311D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00743120  83 C2 04                  ADD EDX,0x4
00743123  52                        PUSH EDX
00743124  E8 17 71 FF FF            CALL 0x0073a240
00743129  83 C4 08                  ADD ESP,0x8
0074312C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0074312F  C6 40 03 05               MOV byte ptr [EAX + 0x3],0x5
00743133  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
0074313A  EB 55                     JMP 0x00743191
LAB_0074313c:
0074313C  81 7D DC 00 00 00 80      CMP dword ptr [EBP + -0x24],0x80000000
00743143  75 2A                     JNZ 0x0074316f
00743145  83 7D B8 00               CMP dword ptr [EBP + -0x48],0x0
00743149  75 24                     JNZ 0x0074316f
0074314B  68 C4 0F 7A 00            PUSH 0x7a0fc4
00743150  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743153  83 C1 04                  ADD ECX,0x4
00743156  51                        PUSH ECX
00743157  E8 E4 70 FF FF            CALL 0x0073a240
0074315C  83 C4 08                  ADD ESP,0x8
0074315F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00743162  C6 42 03 05               MOV byte ptr [EDX + 0x3],0x5
00743166  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
0074316D  EB 22                     JMP 0x00743191
LAB_0074316f:
0074316F  68 BC 0F 7A 00            PUSH 0x7a0fbc
00743174  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743177  83 C0 04                  ADD EAX,0x4
0074317A  50                        PUSH EAX
0074317B  E8 C0 70 FF FF            CALL 0x0073a240
00743180  83 C4 08                  ADD ESP,0x8
00743183  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743186  C6 41 03 06               MOV byte ptr [ECX + 0x3],0x6
0074318A  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
LAB_00743191:
00743191  E9 29 03 00 00            JMP 0x007434bf
LAB_00743196:
00743196  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00743199  81 E2 FF FF 00 00         AND EDX,0xffff
0074319F  C1 FA 08                  SAR EDX,0x8
007431A2  66 89 55 94               MOV word ptr [EBP + -0x6c],DX
007431A6  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
007431A9  25 FF FF 00 00            AND EAX,0xffff
007431AE  25 FF 00 00 00            AND EAX,0xff
007431B3  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
007431B7  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007431BA  C1 E9 18                  SHR ECX,0x18
007431BD  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
007431C1  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
007431C4  81 E2 FF FF 00 00         AND EDX,0xffff
007431CA  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
007431CD  25 FF FF 00 00            AND EAX,0xffff
007431D2  0F AF D0                  IMUL EDX,EAX
007431D5  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
007431D8  81 E1 FF FF 00 00         AND ECX,0xffff
007431DE  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
007431E1  25 FF FF 00 00            AND EAX,0xffff
007431E6  0F AF C8                  IMUL ECX,EAX
007431E9  03 D1                     ADD EDX,ECX
007431EB  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
007431EE  81 E1 FF FF 00 00         AND ECX,0xffff
007431F4  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
007431F7  25 FF FF 00 00            AND EAX,0xffff
007431FC  0F AF C8                  IMUL ECX,EAX
007431FF  03 D1                     ADD EDX,ECX
00743201  2B 55 E0                  SUB EDX,dword ptr [EBP + -0x20]
00743204  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00743207  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0074320A  C1 F9 10                  SAR ECX,0x10
0074320D  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
00743211  66 8B 55 90               MOV DX,word ptr [EBP + -0x70]
00743215  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
00743219  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0074321C  89 45 CE                  MOV dword ptr [EBP + -0x32],EAX
0074321F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00743222  89 4D CA                  MOV dword ptr [EBP + -0x36],ECX
00743225  66 C7 45 C8 00 00         MOV word ptr [EBP + -0x38],0x0
0074322B  6A 01                     PUSH 0x1
0074322D  0F BF 55 A4               MOVSX EDX,word ptr [EBP + -0x5c]
00743231  F7 DA                     NEG EDX
00743233  52                        PUSH EDX
00743234  8D 45 C8                  LEA EAX,[EBP + -0x38]
00743237  50                        PUSH EAX
00743238  E8 43 2C 00 00            CALL 0x00745e80
0074323D  83 C4 0C                  ADD ESP,0xc
00743240  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
00743243  81 E1 FF FF 00 00         AND ECX,0xffff
00743249  81 F9 FF 3F 00 00         CMP ECX,0x3fff
0074324F  7C 1C                     JL 0x0074326d
00743251  66 8B 55 A4               MOV DX,word ptr [EBP + -0x5c]
00743255  66 83 C2 01               ADD DX,0x1
00743259  66 89 55 A4               MOV word ptr [EBP + -0x5c],DX
0074325D  8D 45 AC                  LEA EAX,[EBP + -0x54]
00743260  50                        PUSH EAX
00743261  8D 4D C8                  LEA ECX,[EBP + -0x38]
00743264  51                        PUSH ECX
00743265  E8 D6 27 00 00            CALL 0x00745a40
0074326A  83 C4 08                  ADD ESP,0x8
LAB_0074326d:
0074326D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00743270  66 8B 45 A4               MOV AX,word ptr [EBP + -0x5c]
00743274  66 89 02                  MOV word ptr [EDX],AX
00743277  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0074327A  83 E1 01                  AND ECX,0x1
0074327D  85 C9                     TEST ECX,ECX
0074327F  74 40                     JZ 0x007432c1
00743281  0F BF 55 A4               MOVSX EDX,word ptr [EBP + -0x5c]
00743285  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00743288  03 C2                     ADD EAX,EDX
0074328A  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0074328D  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
00743291  7F 2E                     JG 0x007432c1
00743293  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743296  66 C7 01 00 00            MOV word ptr [ECX],0x0
0074329B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0074329E  C6 42 02 20               MOV byte ptr [EDX + 0x2],0x20
007432A2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007432A5  C6 40 03 01               MOV byte ptr [EAX + 0x3],0x1
007432A9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007432AC  C6 41 04 30               MOV byte ptr [ECX + 0x4],0x30
007432B0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007432B3  C6 42 05 00               MOV byte ptr [EDX + 0x5],0x0
007432B7  B8 01 00 00 00            MOV EAX,0x1
007432BC  E9 01 02 00 00            JMP 0x007434c2
LAB_007432c1:
007432C1  83 7D 14 15               CMP dword ptr [EBP + 0x14],0x15
007432C5  7E 07                     JLE 0x007432ce
007432C7  C7 45 14 15 00 00 00      MOV dword ptr [EBP + 0x14],0x15
LAB_007432ce:
007432CE  8B 45 D2                  MOV EAX,dword ptr [EBP + -0x2e]
007432D1  25 FF FF 00 00            AND EAX,0xffff
007432D6  2D FE 3F 00 00            SUB EAX,0x3ffe
007432DB  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
007432DE  66 C7 45 D2 00 00         MOV word ptr [EBP + -0x2e],0x0
007432E4  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
007432EB  EB 09                     JMP 0x007432f6
LAB_007432ed:
007432ED  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
007432F0  83 C1 01                  ADD ECX,0x1
007432F3  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_007432f6:
007432F6  83 7D BC 08               CMP dword ptr [EBP + -0x44],0x8
007432FA  7D 0E                     JGE 0x0074330a
007432FC  8D 55 C8                  LEA EDX,[EBP + -0x38]
007432FF  52                        PUSH EDX
00743300  E8 BB 16 00 00            CALL 0x007449c0
00743305  83 C4 04                  ADD ESP,0x4
00743308  EB E3                     JMP 0x007432ed
LAB_0074330a:
0074330A  83 7D D4 00               CMP dword ptr [EBP + -0x2c],0x0
0074330E  7D 2C                     JGE 0x0074333c
00743310  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00743313  F7 D8                     NEG EAX
00743315  25 FF 00 00 00            AND EAX,0xff
0074331A  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0074331D  EB 09                     JMP 0x00743328
LAB_0074331f:
0074331F  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
00743322  83 E9 01                  SUB ECX,0x1
00743325  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
LAB_00743328:
00743328  83 7D 8C 00               CMP dword ptr [EBP + -0x74],0x0
0074332C  7E 0E                     JLE 0x0074333c
0074332E  8D 55 C8                  LEA EDX,[EBP + -0x38]
00743331  52                        PUSH EDX
00743332  E8 E9 16 00 00            CALL 0x00744a20
00743337  83 C4 04                  ADD ESP,0x4
0074333A  EB E3                     JMP 0x0074331f
LAB_0074333c:
0074333C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0074333F  83 C0 04                  ADD EAX,0x4
00743342  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00743345  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00743348  83 C1 01                  ADD ECX,0x1
0074334B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0074334E  EB 09                     JMP 0x00743359
LAB_00743350:
00743350  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00743353  83 EA 01                  SUB EDX,0x1
00743356  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00743359:
00743359  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0074335D  7E 66                     JLE 0x007433c5
0074335F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00743362  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00743365  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00743368  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0074336B  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0074336E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00743371  8D 45 C8                  LEA EAX,[EBP + -0x38]
00743374  50                        PUSH EAX
00743375  E8 46 16 00 00            CALL 0x007449c0
0074337A  83 C4 04                  ADD ESP,0x4
0074337D  8D 4D C8                  LEA ECX,[EBP + -0x38]
00743380  51                        PUSH ECX
00743381  E8 3A 16 00 00            CALL 0x007449c0
00743386  83 C4 04                  ADD ESP,0x4
00743389  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0074338C  52                        PUSH EDX
0074338D  8D 45 C8                  LEA EAX,[EBP + -0x38]
00743390  50                        PUSH EAX
00743391  E8 7A 15 00 00            CALL 0x00744910
00743396  83 C4 08                  ADD ESP,0x8
00743399  8D 4D C8                  LEA ECX,[EBP + -0x38]
0074339C  51                        PUSH ECX
0074339D  E8 1E 16 00 00            CALL 0x007449c0
007433A2  83 C4 04                  ADD ESP,0x4
007433A5  8B 55 D3                  MOV EDX,dword ptr [EBP + -0x2d]
007433A8  81 E2 FF 00 00 00         AND EDX,0xff
007433AE  83 C2 30                  ADD EDX,0x30
007433B1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007433B4  88 10                     MOV byte ptr [EAX],DL
007433B6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007433B9  83 C1 01                  ADD ECX,0x1
007433BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007433BF  C6 45 D3 00               MOV byte ptr [EBP + -0x2d],0x0
007433C3  EB 8B                     JMP 0x00743350
LAB_007433c5:
007433C5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007433C8  83 EA 01                  SUB EDX,0x1
007433CB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007433CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007433D1  8A 08                     MOV CL,byte ptr [EAX]
007433D3  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
007433D6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007433D9  83 EA 01                  SUB EDX,0x1
007433DC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007433DF  0F BE 45 D8               MOVSX EAX,byte ptr [EBP + -0x28]
007433E3  83 F8 35                  CMP EAX,0x35
007433E6  7C 5B                     JL 0x00743443
007433E8  EB 09                     JMP 0x007433f3
LAB_007433ea:
007433EA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007433ED  83 E9 01                  SUB ECX,0x1
007433F0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007433f3:
007433F3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007433F6  83 C2 04                  ADD EDX,0x4
007433F9  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
007433FC  72 13                     JC 0x00743411
007433FE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743401  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00743404  83 F9 39                  CMP ECX,0x39
00743407  75 08                     JNZ 0x00743411
00743409  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074340C  C6 02 30                  MOV byte ptr [EDX],0x30
0074340F  EB D9                     JMP 0x007433ea
LAB_00743411:
00743411  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743414  83 C0 04                  ADD EAX,0x4
00743417  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0074341A  73 19                     JNC 0x00743435
0074341C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074341F  83 C1 01                  ADD ECX,0x1
00743422  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00743425  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00743428  66 8B 02                  MOV AX,word ptr [EDX]
0074342B  66 05 01 00               ADD AX,0x1
0074342F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743432  66 89 01                  MOV word ptr [ECX],AX
LAB_00743435:
00743435  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743438  8A 02                     MOV AL,byte ptr [EDX]
0074343A  04 01                     ADD AL,0x1
0074343C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074343F  88 01                     MOV byte ptr [ECX],AL
00743441  EB 59                     JMP 0x0074349c
LAB_00743443:
00743443  EB 09                     JMP 0x0074344e
LAB_00743445:
00743445  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743448  83 EA 01                  SUB EDX,0x1
0074344B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0074344e:
0074344E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743451  83 C0 04                  ADD EAX,0x4
00743454  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
00743457  72 0D                     JC 0x00743466
00743459  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074345C  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0074345F  83 FA 30                  CMP EDX,0x30
00743462  75 02                     JNZ 0x00743466
00743464  EB DF                     JMP 0x00743445
LAB_00743466:
00743466  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743469  83 C0 04                  ADD EAX,0x4
0074346C  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0074346F  73 2B                     JNC 0x0074349c
00743471  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00743474  66 C7 01 00 00            MOV word ptr [ECX],0x0
00743479  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0074347C  C6 42 02 20               MOV byte ptr [EDX + 0x2],0x20
00743480  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00743483  C6 40 03 01               MOV byte ptr [EAX + 0x3],0x1
00743487  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0074348A  C6 41 04 30               MOV byte ptr [ECX + 0x4],0x30
0074348E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00743491  C6 42 05 00               MOV byte ptr [EDX + 0x5],0x0
00743495  B8 01 00 00 00            MOV EAX,0x1
0074349A  EB 26                     JMP 0x007434c2
LAB_0074349c:
0074349C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0074349F  83 C0 04                  ADD EAX,0x4
007434A2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007434A5  2B C8                     SUB ECX,EAX
007434A7  83 C1 01                  ADD ECX,0x1
007434AA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007434AD  88 4A 03                  MOV byte ptr [EDX + 0x3],CL
007434B0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007434B3  0F BE 48 03               MOVSX ECX,byte ptr [EAX + 0x3]
007434B7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007434BA  C6 44 0A 04 00            MOV byte ptr [EDX + ECX*0x1 + 0x4],0x0
LAB_007434bf:
007434BF  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
LAB_007434c2:
007434C2  8B E5                     MOV ESP,EBP
007434C4  5D                        POP EBP
007434C5  C3                        RET
