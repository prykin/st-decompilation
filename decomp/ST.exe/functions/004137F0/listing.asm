FUN_004137f0:
004137F0  55                        PUSH EBP
004137F1  8B EC                     MOV EBP,ESP
004137F3  51                        PUSH ECX
004137F4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004137F7  85 C0                     TEST EAX,EAX
004137F9  7D 09                     JGE 0x00413804
004137FB  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
00413802  EB 0C                     JMP 0x00413810
LAB_00413804:
00413804  83 F8 09                  CMP EAX,0x9
00413807  7E 07                     JLE 0x00413810
00413809  C7 45 10 09 00 00 00      MOV dword ptr [EBP + 0x10],0x9
LAB_00413810:
00413810  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00413813  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00413816  53                        PUSH EBX
00413817  56                        PUSH ESI
00413818  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0041381B  8D 0C 8D 2D 00 00 00      LEA ECX,[ECX*0x4 + 0x2d]
00413822  57                        PUSH EDI
00413823  89 46 51                  MOV dword ptr [ESI + 0x51],EAX
00413826  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0041382B  F7 E9                     IMUL ECX
0041382D  03 D1                     ADD EDX,ECX
0041382F  C1 FA 06                  SAR EDX,0x6
00413832  8B C2                     MOV EAX,EDX
00413834  C1 E8 1F                  SHR EAX,0x1f
00413837  03 D0                     ADD EDX,EAX
00413839  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0041383C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041383F  D1 E0                     SHL EAX,0x1
00413841  99                        CDQ
00413842  83 E2 03                  AND EDX,0x3
00413845  03 C2                     ADD EAX,EDX
00413847  8B D8                     MOV EBX,EAX
00413849  C1 FB 02                  SAR EBX,0x2
0041384C  81 FB 68 01 00 00         CMP EBX,0x168
00413852  75 02                     JNZ 0x00413856
00413854  33 DB                     XOR EBX,EBX
LAB_00413856:
00413856  8B 4E 49                  MOV ECX,dword ptr [ESI + 0x49]
00413859  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0041385C  83 C9 01                  OR ECX,0x1
0041385F  83 FF FF                  CMP EDI,-0x1
00413862  89 5E 55                  MOV dword ptr [ESI + 0x55],EBX
00413865  89 4E 49                  MOV dword ptr [ESI + 0x49],ECX
00413868  74 0C                     JZ 0x00413876
0041386A  8D 4E 59                  LEA ECX,[ESI + 0x59]
0041386D  89 7E 4D                  MOV dword ptr [ESI + 0x4d],EDI
00413870  51                        PUSH ECX
00413871  E8 EA 77 29 00            CALL 0x006ab060
LAB_00413876:
00413876  83 FF FE                  CMP EDI,-0x2
00413879  74 09                     JZ 0x00413884
0041387B  83 FF FD                  CMP EDI,-0x3
0041387E  0F 85 BA 01 00 00         JNZ 0x00413a3e
LAB_00413884:
00413884  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
00413887  8B 4E 49                  MOV ECX,dword ptr [ESI + 0x49]
0041388A  83 E1 FE                  AND ECX,0xfffffffe
0041388D  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00413890  89 4E 49                  MOV dword ptr [ESI + 0x49],ECX
00413893  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00413896  33 C9                     XOR ECX,ECX
00413898  C1 E0 04                  SHL EAX,0x4
0041389B  83 C0 0C                  ADD EAX,0xc
0041389E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004138A1  50                        PUSH EAX
004138A2  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004138A5  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004138A8  E8 C3 73 29 00            CALL 0x006aac70
004138AD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004138B0  89 46 59                  MOV dword ptr [ESI + 0x59],EAX
004138B3  8D 78 0C                  LEA EDI,[EAX + 0xc]
004138B6  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
004138B9  8B 46 59                  MOV EAX,dword ptr [ESI + 0x59]
004138BC  33 DB                     XOR EBX,EBX
004138BE  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
004138C1  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004138C4  8B 56 59                  MOV EDX,dword ptr [ESI + 0x59]
004138C7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004138CA  85 C0                     TEST EAX,EAX
004138CC  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004138D2  0F 8E 09 01 00 00         JLE 0x004139e1
LAB_004138d8:
004138D8  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004138DB  3B 59 0C                  CMP EBX,dword ptr [ECX + 0xc]
004138DE  0F 83 FD 00 00 00         JNC 0x004139e1
004138E4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
004138E7  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
004138EA  0F AF C3                  IMUL EAX,EBX
004138ED  03 C2                     ADD EAX,EDX
004138EF  0F 84 EC 00 00 00         JZ 0x004139e1
004138F5  66 8B 00                  MOV AX,word ptr [EAX]
004138F8  66 3D FF FF               CMP AX,0xffff
004138FC  0F 84 D0 00 00 00         JZ 0x004139d2
00413902  50                        PUSH EAX
00413903  8B CE                     MOV ECX,ESI
00413905  E8 65 EF FE FF            CALL 0x0040286f
0041390A  85 C0                     TEST EAX,EAX
0041390C  0F 84 C0 00 00 00         JZ 0x004139d2
00413912  8B 90 C7 00 00 00         MOV EDX,dword ptr [EAX + 0xc7]
00413918  85 D2                     TEST EDX,EDX
0041391A  7C 56                     JL 0x00413972
0041391C  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00413923  3B D1                     CMP EDX,ECX
00413925  7D 4B                     JGE 0x00413972
00413927  8B 88 CB 00 00 00         MOV ECX,dword ptr [EAX + 0xcb]
0041392D  85 C9                     TEST ECX,ECX
0041392F  7C 41                     JL 0x00413972
00413931  0F BF 1D 7A B2 7F 00      MOVSX EBX,word ptr [0x007fb27a]
00413938  3B CB                     CMP ECX,EBX
0041393A  7D 36                     JGE 0x00413972
0041393C  8B 88 CF 00 00 00         MOV ECX,dword ptr [EAX + 0xcf]
00413942  85 C9                     TEST ECX,ECX
00413944  7C 2C                     JL 0x00413972
00413946  0F BF 1D 7C B2 7F 00      MOVSX EBX,word ptr [0x007fb27c]
0041394D  3B CB                     CMP ECX,EBX
0041394F  7D 21                     JGE 0x00413972
00413951  8D 14 95 02 00 00 00      LEA EDX,[EDX*0x4 + 0x2]
00413958  89 17                     MOV dword ptr [EDI],EDX
0041395A  8B 88 CB 00 00 00         MOV ECX,dword ptr [EAX + 0xcb]
00413960  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
00413967  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
0041396A  8B 88 CF 00 00 00         MOV ECX,dword ptr [EAX + 0xcf]
00413970  EB 1F                     JMP 0x00413991
LAB_00413972:
00413972  0F BF 48 5B               MOVSX ECX,word ptr [EAX + 0x5b]
00413976  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
0041397D  89 17                     MOV dword ptr [EDI],EDX
0041397F  0F BF 48 5D               MOVSX ECX,word ptr [EAX + 0x5d]
00413983  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
0041398A  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
0041398D  0F BF 48 5F               MOVSX ECX,word ptr [EAX + 0x5f]
LAB_00413991:
00413991  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
00413998  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0041399B  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0041399E  8B 0F                     MOV ECX,dword ptr [EDI]
004139A0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004139A3  03 D1                     ADD EDX,ECX
004139A5  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004139A8  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004139AB  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
004139AE  03 DA                     ADD EBX,EDX
004139B0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004139B3  03 D1                     ADD EDX,ECX
004139B5  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
004139B8  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004139BB  33 D2                     XOR EDX,EDX
004139BD  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
004139C1  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004139C4  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
004139C7  8B 46 59                  MOV EAX,dword ptr [ESI + 0x59]
004139CA  8B 08                     MOV ECX,dword ptr [EAX]
004139CC  41                        INC ECX
004139CD  83 C7 10                  ADD EDI,0x10
004139D0  89 08                     MOV dword ptr [EAX],ECX
LAB_004139d2:
004139D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004139D5  43                        INC EBX
004139D6  3B D8                     CMP EBX,EAX
004139D8  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
004139DB  0F 8C F7 FE FF FF         JL 0x004138d8
LAB_004139e1:
004139E1  8B 5E 59                  MOV EBX,dword ptr [ESI + 0x59]
004139E4  8B 3B                     MOV EDI,dword ptr [EBX]
004139E6  8B C7                     MOV EAX,EDI
004139E8  99                        CDQ
004139E9  2B C2                     SUB EAX,EDX
004139EB  8B C8                     MOV ECX,EAX
004139ED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004139F0  D1 F9                     SAR ECX,0x1
004139F2  03 C1                     ADD EAX,ECX
004139F4  99                        CDQ
004139F5  F7 FF                     IDIV EDI
004139F7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004139FA  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004139FD  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
00413A00  99                        CDQ
00413A01  F7 FF                     IDIV EDI
00413A03  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00413A06  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00413A09  03 C1                     ADD EAX,ECX
00413A0B  8D 4B 0C                  LEA ECX,[EBX + 0xc]
00413A0E  99                        CDQ
00413A0F  F7 FF                     IDIV EDI
00413A11  33 D2                     XOR EDX,EDX
00413A13  85 FF                     TEST EDI,EDI
00413A15  7E 27                     JLE 0x00413a3e
LAB_00413a17:
00413A17  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00413A1A  8B 19                     MOV EBX,dword ptr [ECX]
00413A1C  2B DF                     SUB EBX,EDI
00413A1E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00413A21  89 19                     MOV dword ptr [ECX],EBX
00413A23  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
00413A26  2B DF                     SUB EBX,EDI
00413A28  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00413A2B  2B F8                     SUB EDI,EAX
00413A2D  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
00413A30  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
00413A33  8B 7E 59                  MOV EDI,dword ptr [ESI + 0x59]
00413A36  42                        INC EDX
00413A37  83 C1 10                  ADD ECX,0x10
00413A3A  3B 17                     CMP EDX,dword ptr [EDI]
00413A3C  7C D9                     JL 0x00413a17
LAB_00413a3e:
00413A3E  5F                        POP EDI
00413A3F  5E                        POP ESI
00413A40  33 C0                     XOR EAX,EAX
00413A42  5B                        POP EBX
00413A43  8B E5                     MOV ESP,EBP
00413A45  5D                        POP EBP
00413A46  C2 10 00                  RET 0x10
