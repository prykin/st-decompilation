FUN_00740700:
00740700  55                        PUSH EBP
00740701  8B EC                     MOV EBP,ESP
00740703  83 EC 48                  SUB ESP,0x48
00740706  C7 45 DC 0C 00 00 00      MOV dword ptr [EBP + -0x24],0xc
0074070D  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00740714  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740717  25 80 00 00 00            AND EAX,0x80
0074071C  85 C0                     TEST EAX,EAX
0074071E  74 0D                     JZ 0x0074072d
00740720  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00740727  C6 45 C8 10               MOV byte ptr [EBP + -0x38],0x10
0074072B  EB 0B                     JMP 0x00740738
LAB_0074072d:
0074072D  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
00740734  C6 45 C8 00               MOV byte ptr [EBP + -0x38],0x0
LAB_00740738:
00740738  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074073B  81 E1 00 80 00 00         AND ECX,0x8000
00740741  85 C9                     TEST ECX,ECX
00740743  75 2C                     JNZ 0x00740771
00740745  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00740748  81 E2 00 40 00 00         AND EDX,0x4000
0074074E  85 D2                     TEST EDX,EDX
00740750  74 0A                     JZ 0x0074075c
00740752  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
00740755  0C 80                     OR AL,0x80
00740757  88 45 C8                  MOV byte ptr [EBP + -0x38],AL
0074075A  EB 15                     JMP 0x00740771
LAB_0074075c:
0074075C  81 3D 30 74 85 00 00 80 00 00  CMP dword ptr [0x00857430],0x8000
00740766  74 09                     JZ 0x00740771
00740768  8A 4D C8                  MOV CL,byte ptr [EBP + -0x38]
0074076B  80 C9 80                  OR CL,0x80
0074076E  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
LAB_00740771:
00740771  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00740774  83 E2 03                  AND EDX,0x3
00740777  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0074077A  83 7D C0 00               CMP dword ptr [EBP + -0x40],0x0
0074077E  74 0E                     JZ 0x0074078e
00740780  83 7D C0 01               CMP dword ptr [EBP + -0x40],0x1
00740784  74 11                     JZ 0x00740797
00740786  83 7D C0 02               CMP dword ptr [EBP + -0x40],0x2
0074078A  74 14                     JZ 0x007407a0
0074078C  EB 1B                     JMP 0x007407a9
LAB_0074078e:
0074078E  C7 45 CC 00 00 00 80      MOV dword ptr [EBP + -0x34],0x80000000
00740795  EB 2E                     JMP 0x007407c5
LAB_00740797:
00740797  C7 45 CC 00 00 00 40      MOV dword ptr [EBP + -0x34],0x40000000
0074079E  EB 25                     JMP 0x007407c5
LAB_007407a0:
007407A0  C7 45 CC 00 00 00 C0      MOV dword ptr [EBP + -0x34],0xc0000000
007407A7  EB 1C                     JMP 0x007407c5
LAB_007407a9:
007407A9  C7 05 48 71 85 00 16 00 00 00  MOV dword ptr [0x00857148],0x16
007407B3  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
007407BD  83 C8 FF                  OR EAX,0xffffffff
007407C0  E9 E2 03 00 00            JMP 0x00740ba7
LAB_007407c5:
007407C5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007407C8  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
007407CB  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
007407CE  83 E9 10                  SUB ECX,0x10
007407D1  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
007407D4  83 7D BC 30               CMP dword ptr [EBP + -0x44],0x30
007407D8  77 36                     JA 0x00740810
007407DA  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
007407DD  33 D2                     XOR EDX,EDX
007407DF  8A 90 BF 0B 74 00         MOV DL,byte ptr [EAX + 0x740bbf]
switchD_007407e5::switchD:
007407E5  FF 24 95 AB 0B 74 00      JMP dword ptr [EDX*0x4 + 0x740bab]
switchD_007407e5::caseD_10:
007407EC  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007407F3  EB 37                     JMP 0x0074082c
switchD_007407e5::caseD_20:
007407F5  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
007407FC  EB 2E                     JMP 0x0074082c
switchD_007407e5::caseD_30:
007407FE  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
00740805  EB 25                     JMP 0x0074082c
switchD_007407e5::caseD_40:
00740807  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
0074080E  EB 1C                     JMP 0x0074082c
switchD_007407e5::caseD_11:
00740810  C7 05 48 71 85 00 16 00 00 00  MOV dword ptr [0x00857148],0x16
0074081A  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00740824  83 C8 FF                  OR EAX,0xffffffff
00740827  E9 7B 03 00 00            JMP 0x00740ba7
LAB_0074082c:
0074082C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074082F  81 E1 00 07 00 00         AND ECX,0x700
00740835  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00740838  81 7D B8 00 04 00 00      CMP dword ptr [EBP + -0x48],0x400
0074083F  7F 37                     JG 0x00740878
00740841  81 7D B8 00 04 00 00      CMP dword ptr [EBP + -0x48],0x400
00740848  74 4B                     JZ 0x00740895
0074084A  81 7D B8 00 02 00 00      CMP dword ptr [EBP + -0x48],0x200
00740851  7F 1A                     JG 0x0074086d
00740853  81 7D B8 00 02 00 00      CMP dword ptr [EBP + -0x48],0x200
0074085A  74 54                     JZ 0x007408b0
0074085C  83 7D B8 00               CMP dword ptr [EBP + -0x48],0x0
00740860  74 33                     JZ 0x00740895
00740862  81 7D B8 00 01 00 00      CMP dword ptr [EBP + -0x48],0x100
00740869  74 33                     JZ 0x0074089e
0074086B  EB 55                     JMP 0x007408c2
LAB_0074086d:
0074086D  81 7D B8 00 03 00 00      CMP dword ptr [EBP + -0x48],0x300
00740874  74 43                     JZ 0x007408b9
00740876  EB 4A                     JMP 0x007408c2
LAB_00740878:
00740878  81 7D B8 00 05 00 00      CMP dword ptr [EBP + -0x48],0x500
0074087F  74 26                     JZ 0x007408a7
00740881  81 7D B8 00 06 00 00      CMP dword ptr [EBP + -0x48],0x600
00740888  74 26                     JZ 0x007408b0
0074088A  81 7D B8 00 07 00 00      CMP dword ptr [EBP + -0x48],0x700
00740891  74 14                     JZ 0x007408a7
00740893  EB 2D                     JMP 0x007408c2
LAB_00740895:
00740895  C7 45 E8 03 00 00 00      MOV dword ptr [EBP + -0x18],0x3
0074089C  EB 40                     JMP 0x007408de
LAB_0074089e:
0074089E  C7 45 E8 04 00 00 00      MOV dword ptr [EBP + -0x18],0x4
007408A5  EB 37                     JMP 0x007408de
LAB_007408a7:
007408A7  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
007408AE  EB 2E                     JMP 0x007408de
LAB_007408b0:
007408B0  C7 45 E8 05 00 00 00      MOV dword ptr [EBP + -0x18],0x5
007408B7  EB 25                     JMP 0x007408de
LAB_007408b9:
007408B9  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
007408C0  EB 1C                     JMP 0x007408de
LAB_007408c2:
007408C2  C7 05 48 71 85 00 16 00 00 00  MOV dword ptr [0x00857148],0x16
007408CC  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
007408D6  83 C8 FF                  OR EAX,0xffffffff
007408D9  E9 C9 02 00 00            JMP 0x00740ba7
LAB_007408de:
007408DE  C7 45 D8 80 00 00 00      MOV dword ptr [EBP + -0x28],0x80
007408E5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007408E8  81 E2 00 01 00 00         AND EDX,0x100
007408EE  85 D2                     TEST EDX,EDX
007408F0  74 3D                     JZ 0x0074092f
007408F2  8D 45 14                  LEA EAX,[EBP + 0x14]
007408F5  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
007408F8  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
007408FB  83 C1 04                  ADD ECX,0x4
007408FE  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00740901  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00740904  8B 42 FC                  MOV EAX,dword ptr [EDX + -0x4]
00740907  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0074090A  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00740911  8B 0D 50 71 85 00         MOV ECX,dword ptr [0x00857150]
00740917  F7 D1                     NOT ECX
00740919  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0074091C  23 D1                     AND EDX,ECX
0074091E  81 E2 80 00 00 00         AND EDX,0x80
00740924  85 D2                     TEST EDX,EDX
00740926  75 07                     JNZ 0x0074092f
00740928  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_0074092f:
0074092F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740932  83 E0 40                  AND EAX,0x40
00740935  85 C0                     TEST EAX,EAX
00740937  74 18                     JZ 0x00740951
00740939  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0074093C  81 C9 00 00 00 04         OR ECX,0x4000000
00740942  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00740945  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00740948  81 CA 00 00 01 00         OR EDX,0x10000
0074094E  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_00740951:
00740951  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740954  25 00 10 00 00            AND EAX,0x1000
00740959  85 C0                     TEST EAX,EAX
0074095B  74 09                     JZ 0x00740966
0074095D  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00740960  80 CD 01                  OR CH,0x1
00740963  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_00740966:
00740966  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00740969  83 E2 20                  AND EDX,0x20
0074096C  85 D2                     TEST EDX,EDX
0074096E  74 0D                     JZ 0x0074097d
00740970  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00740973  0D 00 00 00 08            OR EAX,0x8000000
00740978  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0074097B  EB 16                     JMP 0x00740993
LAB_0074097d:
0074097D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00740980  83 E1 10                  AND ECX,0x10
00740983  85 C9                     TEST ECX,ECX
00740985  74 0C                     JZ 0x00740993
00740987  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0074098A  81 CA 00 00 00 10         OR EDX,0x10000000
00740990  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
LAB_00740993:
00740993  E8 E8 02 00 00            CALL 0x00740c80
00740998  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0074099B  83 7D EC FF               CMP dword ptr [EBP + -0x14],-0x1
0074099F  75 1C                     JNZ 0x007409bd
007409A1  C7 05 48 71 85 00 18 00 00 00  MOV dword ptr [0x00857148],0x18
007409AB  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
007409B5  83 C8 FF                  OR EAX,0xffffffff
007409B8  E9 EA 01 00 00            JMP 0x00740ba7
LAB_007409bd:
007409BD  6A 00                     PUSH 0x0
007409BF  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007409C2  50                        PUSH EAX
007409C3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007409C6  51                        PUSH ECX
007409C7  8D 55 DC                  LEA EDX,[EBP + -0x24]
007409CA  52                        PUSH EDX
007409CB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007409CE  50                        PUSH EAX
007409CF  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007409D2  51                        PUSH ECX
007409D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007409D6  52                        PUSH EDX
007409D7  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
007409DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007409E0  83 7D FC FF               CMP dword ptr [EBP + -0x4],-0x1
007409E4  75 17                     JNZ 0x007409fd
007409E6  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
007409EC  50                        PUSH EAX
007409ED  E8 FE 01 00 00            CALL 0x00740bf0
007409F2  83 C4 04                  ADD ESP,0x4
007409F5  83 C8 FF                  OR EAX,0xffffffff
007409F8  E9 AA 01 00 00            JMP 0x00740ba7
LAB_007409fd:
007409FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740A00  50                        PUSH EAX
00740A01  FF 15 54 BC 85 00         CALL dword ptr [0x0085bc54]
00740A07  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00740A0A  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00740A0E  75 21                     JNZ 0x00740a31
00740A10  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740A13  51                        PUSH ECX
00740A14  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
00740A1A  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
00740A20  50                        PUSH EAX
00740A21  E8 CA 01 00 00            CALL 0x00740bf0
00740A26  83 C4 04                  ADD ESP,0x4
00740A29  83 C8 FF                  OR EAX,0xffffffff
00740A2C  E9 76 01 00 00            JMP 0x00740ba7
LAB_00740a31:
00740A31  83 7D F4 02               CMP dword ptr [EBP + -0xc],0x2
00740A35  75 0B                     JNZ 0x00740a42
00740A37  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00740A3A  80 CA 40                  OR DL,0x40
00740A3D  88 55 C8                  MOV byte ptr [EBP + -0x38],DL
00740A40  EB 0E                     JMP 0x00740a50
LAB_00740a42:
00740A42  83 7D F4 03               CMP dword ptr [EBP + -0xc],0x3
00740A46  75 08                     JNZ 0x00740a50
00740A48  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
00740A4B  0C 08                     OR AL,0x8
00740A4D  88 45 C8                  MOV byte ptr [EBP + -0x38],AL
LAB_00740a50:
00740A50  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740A53  51                        PUSH ECX
00740A54  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740A57  52                        PUSH EDX
00740A58  E8 53 03 00 00            CALL 0x00740db0
00740A5D  83 C4 08                  ADD ESP,0x8
00740A60  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
00740A63  0C 01                     OR AL,0x1
00740A65  88 45 C8                  MOV byte ptr [EBP + -0x38],AL
00740A68  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00740A6B  C1 F9 05                  SAR ECX,0x5
00740A6E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740A71  83 E2 1F                  AND EDX,0x1f
00740A74  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00740A7B  8A 4D C8                  MOV CL,byte ptr [EBP + -0x38]
00740A7E  88 4C D0 04               MOV byte ptr [EAX + EDX*0x8 + 0x4],CL
00740A82  0F BE 55 C8               MOVSX EDX,byte ptr [EBP + -0x38]
00740A86  83 E2 48                  AND EDX,0x48
00740A89  85 D2                     TEST EDX,EDX
00740A8B  0F 85 CD 00 00 00         JNZ 0x00740b5e
00740A91  0F BE 45 C8               MOVSX EAX,byte ptr [EBP + -0x38]
00740A95  25 80 00 00 00            AND EAX,0x80
00740A9A  85 C0                     TEST EAX,EAX
00740A9C  0F 84 BC 00 00 00         JZ 0x00740b5e
00740AA2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00740AA5  83 E1 02                  AND ECX,0x2
00740AA8  85 C9                     TEST ECX,ECX
00740AAA  0F 84 AE 00 00 00         JZ 0x00740b5e
00740AB0  6A 02                     PUSH 0x2
00740AB2  6A FF                     PUSH -0x1
00740AB4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740AB7  52                        PUSH EDX
00740AB8  E8 93 22 00 00            CALL 0x00742d50
00740ABD  83 C4 0C                  ADD ESP,0xc
00740AC0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00740AC3  83 7D C4 FF               CMP dword ptr [EBP + -0x3c],-0x1
00740AC7  75 22                     JNZ 0x00740aeb
00740AC9  81 3D 4C 71 85 00 83 00 00 00  CMP dword ptr [0x0085714c],0x83
00740AD3  74 14                     JZ 0x00740ae9
00740AD5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00740AD8  50                        PUSH EAX
00740AD9  E8 32 66 FF FF            CALL 0x00737110
00740ADE  83 C4 04                  ADD ESP,0x4
00740AE1  83 C8 FF                  OR EAX,0xffffffff
00740AE4  E9 BE 00 00 00            JMP 0x00740ba7
LAB_00740ae9:
00740AE9  EB 73                     JMP 0x00740b5e
LAB_00740aeb:
00740AEB  C6 45 D0 00               MOV byte ptr [EBP + -0x30],0x0
00740AEF  6A 01                     PUSH 0x1
00740AF1  8D 4D D0                  LEA ECX,[EBP + -0x30]
00740AF4  51                        PUSH ECX
00740AF5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740AF8  52                        PUSH EDX
00740AF9  E8 52 35 00 00            CALL 0x00744050
00740AFE  83 C4 0C                  ADD ESP,0xc
00740B01  85 C0                     TEST EAX,EAX
00740B03  75 2F                     JNZ 0x00740b34
00740B05  0F BE 45 D0               MOVSX EAX,byte ptr [EBP + -0x30]
00740B09  83 F8 1A                  CMP EAX,0x1a
00740B0C  75 26                     JNZ 0x00740b34
00740B0E  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00740B11  51                        PUSH ECX
00740B12  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740B15  52                        PUSH EDX
00740B16  E8 B5 40 00 00            CALL 0x00744bd0
00740B1B  83 C4 08                  ADD ESP,0x8
00740B1E  83 F8 FF                  CMP EAX,-0x1
00740B21  75 11                     JNZ 0x00740b34
00740B23  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00740B26  50                        PUSH EAX
00740B27  E8 E4 65 FF FF            CALL 0x00737110
00740B2C  83 C4 04                  ADD ESP,0x4
00740B2F  83 C8 FF                  OR EAX,0xffffffff
00740B32  EB 73                     JMP 0x00740ba7
LAB_00740b34:
00740B34  6A 00                     PUSH 0x0
00740B36  6A 00                     PUSH 0x0
00740B38  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00740B3B  51                        PUSH ECX
00740B3C  E8 0F 22 00 00            CALL 0x00742d50
00740B41  83 C4 0C                  ADD ESP,0xc
00740B44  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00740B47  83 7D C4 FF               CMP dword ptr [EBP + -0x3c],-0x1
00740B4B  75 11                     JNZ 0x00740b5e
00740B4D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740B50  52                        PUSH EDX
00740B51  E8 BA 65 FF FF            CALL 0x00737110
00740B56  83 C4 04                  ADD ESP,0x4
00740B59  83 C8 FF                  OR EAX,0xffffffff
00740B5C  EB 49                     JMP 0x00740ba7
LAB_00740b5e:
00740B5E  0F BE 45 C8               MOVSX EAX,byte ptr [EBP + -0x38]
00740B62  83 E0 48                  AND EAX,0x48
00740B65  85 C0                     TEST EAX,EAX
00740B67  75 3B                     JNZ 0x00740ba4
00740B69  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00740B6C  83 E1 08                  AND ECX,0x8
00740B6F  85 C9                     TEST ECX,ECX
00740B71  74 31                     JZ 0x00740ba4
00740B73  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00740B76  C1 FA 05                  SAR EDX,0x5
00740B79  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00740B7C  83 E0 1F                  AND EAX,0x1f
00740B7F  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00740B86  8A 54 C1 04               MOV DL,byte ptr [ECX + EAX*0x8 + 0x4]
00740B8A  80 CA 20                  OR DL,0x20
00740B8D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00740B90  C1 F8 05                  SAR EAX,0x5
00740B93  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00740B96  83 E1 1F                  AND ECX,0x1f
00740B99  8B 04 85 A0 A1 85 00      MOV EAX,dword ptr [EAX*0x4 + 0x85a1a0]
00740BA0  88 54 C8 04               MOV byte ptr [EAX + ECX*0x8 + 0x4],DL
LAB_00740ba4:
00740BA4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_00740ba7:
00740BA7  8B E5                     MOV ESP,EBP
00740BA9  5D                        POP EBP
00740BAA  C3                        RET
