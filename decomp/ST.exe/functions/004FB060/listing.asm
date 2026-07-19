CPanelTy::GetMessage:
004FB060  55                        PUSH EBP
004FB061  8B EC                     MOV EBP,ESP
004FB063  81 EC CC 00 00 00         SUB ESP,0xcc
004FB069  53                        PUSH EBX
004FB06A  56                        PUSH ESI
004FB06B  8B F1                     MOV ESI,ECX
004FB06D  57                        PUSH EDI
004FB06E  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
004FB071  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004FB074  E8 37 A1 1E 00            CALL 0x006e51b0
004FB079  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
004FB07C  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FB081  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
004FB087  8D 8D 34 FF FF FF         LEA ECX,[EBP + 0xffffff34]
004FB08D  6A 00                     PUSH 0x0
004FB08F  52                        PUSH EDX
004FB090  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
004FB096  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FB09C  E8 4F 27 23 00            CALL 0x0072d7f0
004FB0A1  8B F0                     MOV ESI,EAX
004FB0A3  83 C4 08                  ADD ESP,0x8
004FB0A6  85 F6                     TEST ESI,ESI
004FB0A8  0F 85 7D 25 00 00         JNZ 0x004fd62b
004FB0AE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FB0B1  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
004FB0B4  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
004FB0B7  81 FB 74 B1 00 00         CMP EBX,0xb174
004FB0BD  0F 87 DE 1B 00 00         JA 0x004fcca1
004FB0C3  81 FB 6F B1 00 00         CMP EBX,0xb16f
004FB0C9  0F 83 55 1B 00 00         JNC 0x004fcc24
004FB0CF  81 FB 0E B1 00 00         CMP EBX,0xb10e
004FB0D5  0F 87 09 17 00 00         JA 0x004fc7e4
004FB0DB  0F 84 8C 16 00 00         JZ 0x004fc76d
004FB0E1  81 FB 06 B1 00 00         CMP EBX,0xb106
004FB0E7  0F 87 79 14 00 00         JA 0x004fc566
004FB0ED  0F 84 39 14 00 00         JZ 0x004fc52c
004FB0F3  83 FB 60                  CMP EBX,0x60
004FB0F6  0F 87 D7 0B 00 00         JA 0x004fbcd3
004FB0FC  0F 84 3E 08 00 00         JZ 0x004fb940
004FB102  83 FB 05                  CMP EBX,0x5
004FB105  0F 87 00 25 00 00         JA 0x004fd60b
switchD_004fb10b::switchD:
004FB10B  FF 24 9D 7C D6 4F 00      JMP dword ptr [EBX*0x4 + 0x4fd67c]
switchD_004fb10b::caseD_2:
004FB112  8B CE                     MOV ECX,ESI
004FB114  E8 88 63 F0 FF            CALL 0x004014a1
004FB119  E9 ED 24 00 00            JMP 0x004fd60b
switchD_004fb10b::caseD_3:
004FB11E  8B CE                     MOV ECX,ESI
004FB120  E8 1D 9A F0 FF            CALL 0x00404b42
004FB125  E9 E1 24 00 00            JMP 0x004fd60b
switchD_004fb10b::caseD_5:
004FB12A  32 C9                     XOR CL,CL
004FB12C  8D 9E 48 01 00 00         LEA EBX,[ESI + 0x148]
004FB132  80 F9 0B                  CMP CL,0xb
004FB135  88 4D F7                  MOV byte ptr [EBP + -0x9],CL
004FB138  73 25                     JNC 0x004fb15f
LAB_004fb13a:
004FB13A  8B 03                     MOV EAX,dword ptr [EBX]
004FB13C  85 C0                     TEST EAX,EAX
004FB13E  7C 1F                     JL 0x004fb15f
004FB140  8B 8B 4C FF FF FF         MOV ECX,dword ptr [EBX + 0xffffff4c]
004FB146  8B 93 F4 FE FF FF         MOV EDX,dword ptr [EBX + 0xfffffef4]
004FB14C  51                        PUSH ECX
004FB14D  52                        PUSH EDX
004FB14E  6A FF                     PUSH -0x1
004FB150  50                        PUSH EAX
004FB151  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB156  50                        PUSH EAX
004FB157  E8 E4 84 1B 00            CALL 0x006b3640
004FB15C  8A 4D F7                  MOV CL,byte ptr [EBP + -0x9]
LAB_004fb15f:
004FB15F  FE C1                     INC CL
004FB161  83 C3 04                  ADD EBX,0x4
004FB164  80 F9 0B                  CMP CL,0xb
004FB167  88 4D F7                  MOV byte ptr [EBP + -0x9],CL
004FB16A  72 CE                     JC 0x004fb13a
004FB16C  E9 9A 24 00 00            JMP 0x004fd60b
switchD_004fb10b::caseD_0:
004FB171  8B 86 53 02 00 00         MOV EAX,dword ptr [ESI + 0x253]
004FB177  8B CE                     MOV ECX,ESI
004FB179  40                        INC EAX
004FB17A  89 86 53 02 00 00         MOV dword ptr [ESI + 0x253],EAX
004FB180  E8 DD 7E F0 FF            CALL 0x00403062
004FB185  8B CE                     MOV ECX,ESI
004FB187  E8 DE 80 F0 FF            CALL 0x0040326a
004FB18C  8B CE                     MOV ECX,ESI
004FB18E  E8 9E A0 F0 FF            CALL 0x00405231
004FB193  8B CE                     MOV ECX,ESI
004FB195  E8 DB 75 F0 FF            CALL 0x00402775
004FB19A  32 DB                     XOR BL,BL
004FB19C  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
LAB_004fb19f:
004FB19F  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004FB1A2  81 E7 FF 00 00 00         AND EDI,0xff
004FB1A8  8A 84 37 4F 0B 00 00      MOV AL,byte ptr [EDI + ESI*0x1 + 0xb4f]
004FB1AF  84 C0                     TEST AL,AL
004FB1B1  0F 84 55 01 00 00         JZ 0x004fb30c
004FB1B7  80 FB 05                  CMP BL,0x5
004FB1BA  0F 82 FF 00 00 00         JC 0x004fb2bf
004FB1C0  80 FB 0D                  CMP BL,0xd
004FB1C3  0F 84 F6 00 00 00         JZ 0x004fb2bf
004FB1C9  80 FB 0E                  CMP BL,0xe
004FB1CC  0F 84 ED 00 00 00         JZ 0x004fb2bf
004FB1D2  80 FB 05                  CMP BL,0x5
004FB1D5  75 0F                     JNZ 0x004fb1e6
004FB1D7  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004FB1DD  85 C9                     TEST ECX,ECX
004FB1DF  74 05                     JZ 0x004fb1e6
004FB1E1  8B 11                     MOV EDX,dword ptr [ECX]
004FB1E3  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fb1e6:
004FB1E6  80 FB 06                  CMP BL,0x6
004FB1E9  75 0F                     JNZ 0x004fb1fa
004FB1EB  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004FB1F1  85 C9                     TEST ECX,ECX
004FB1F3  74 05                     JZ 0x004fb1fa
004FB1F5  8B 01                     MOV EAX,dword ptr [ECX]
004FB1F7  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004fb1fa:
004FB1FA  80 FB 07                  CMP BL,0x7
004FB1FD  75 0F                     JNZ 0x004fb20e
004FB1FF  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FB205  85 C9                     TEST ECX,ECX
004FB207  74 05                     JZ 0x004fb20e
004FB209  8B 11                     MOV EDX,dword ptr [ECX]
004FB20B  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fb20e:
004FB20E  80 FB 08                  CMP BL,0x8
004FB211  75 0F                     JNZ 0x004fb222
004FB213  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004FB219  85 C9                     TEST ECX,ECX
004FB21B  74 05                     JZ 0x004fb222
004FB21D  8B 01                     MOV EAX,dword ptr [ECX]
004FB21F  FF 50 20                  CALL dword ptr [EAX + 0x20]
LAB_004fb222:
004FB222  80 FB 09                  CMP BL,0x9
004FB225  75 0F                     JNZ 0x004fb236
004FB227  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004FB22D  85 C9                     TEST ECX,ECX
004FB22F  74 05                     JZ 0x004fb236
004FB231  8B 11                     MOV EDX,dword ptr [ECX]
004FB233  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_004fb236:
004FB236  80 FB 0A                  CMP BL,0xa
004FB239  75 0F                     JNZ 0x004fb24a
004FB23B  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FB241  85 C9                     TEST ECX,ECX
004FB243  74 05                     JZ 0x004fb24a
004FB245  8B 01                     MOV EAX,dword ptr [ECX]
004FB247  FF 50 20                  CALL dword ptr [EAX + 0x20]
LAB_004fb24a:
004FB24A  80 FB 0B                  CMP BL,0xb
004FB24D  75 0F                     JNZ 0x004fb25e
004FB24F  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004FB255  85 C9                     TEST ECX,ECX
004FB257  74 05                     JZ 0x004fb25e
004FB259  8B 11                     MOV EDX,dword ptr [ECX]
004FB25B  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fb25e:
004FB25E  80 FB 0F                  CMP BL,0xf
004FB261  75 0F                     JNZ 0x004fb272
004FB263  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FB269  85 C9                     TEST ECX,ECX
004FB26B  74 05                     JZ 0x004fb272
004FB26D  8B 01                     MOV EAX,dword ptr [ECX]
004FB26F  FF 50 20                  CALL dword ptr [EAX + 0x20]
LAB_004fb272:
004FB272  80 FB 10                  CMP BL,0x10
004FB275  75 0F                     JNZ 0x004fb286
004FB277  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FB27D  85 C9                     TEST ECX,ECX
004FB27F  74 05                     JZ 0x004fb286
004FB281  8B 11                     MOV EDX,dword ptr [ECX]
004FB283  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_004fb286:
004FB286  80 FB 11                  CMP BL,0x11
004FB289  75 0F                     JNZ 0x004fb29a
004FB28B  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FB291  85 C9                     TEST ECX,ECX
004FB293  74 05                     JZ 0x004fb29a
004FB295  8B 01                     MOV EAX,dword ptr [ECX]
004FB297  FF 50 20                  CALL dword ptr [EAX + 0x20]
LAB_004fb29a:
004FB29A  80 FB 12                  CMP BL,0x12
004FB29D  75 65                     JNZ 0x004fb304
004FB29F  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
004FB2A5  85 C9                     TEST ECX,ECX
004FB2A7  74 5B                     JZ 0x004fb304
004FB2A9  6A 06                     PUSH 0x6
004FB2AB  E8 88 7A F0 FF            CALL 0x00402d38
004FB2B0  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
004FB2B6  6A 05                     PUSH 0x5
004FB2B8  E8 7B 7A F0 FF            CALL 0x00402d38
004FB2BD  EB 45                     JMP 0x004fb304
LAB_004fb2bf:
004FB2BF  83 FF 0E                  CMP EDI,0xe
004FB2C2  77 40                     JA 0x004fb304
004FB2C4  33 C9                     XOR ECX,ECX
004FB2C6  8A 8F AC D6 4F 00         MOV CL,byte ptr [EDI + 0x4fd6ac]
switchD_004fb2cc::switchD:
004FB2CC  FF 24 8D 94 D6 4F 00      JMP dword ptr [ECX*0x4 + 0x4fd694]
switchD_004fb2cc::caseD_0:
004FB2D3  8B CE                     MOV ECX,ESI
004FB2D5  E8 93 6D F0 FF            CALL 0x0040206d
004FB2DA  EB 28                     JMP 0x004fb304
switchD_004fb2cc::caseD_1:
004FB2DC  8B CE                     MOV ECX,ESI
004FB2DE  E8 C0 91 F0 FF            CALL 0x004044a3
004FB2E3  EB 1F                     JMP 0x004fb304
switchD_004fb2cc::caseD_3:
004FB2E5  8B CE                     MOV ECX,ESI
004FB2E7  E8 9D 65 F0 FF            CALL 0x00401889
004FB2EC  EB 16                     JMP 0x004fb304
switchD_004fb2cc::caseD_4:
004FB2EE  8B CE                     MOV ECX,ESI
004FB2F0  E8 D7 72 F0 FF            CALL 0x004025cc
004FB2F5  EB 0D                     JMP 0x004fb304
switchD_004fb2cc::caseD_d:
004FB2F7  8A D3                     MOV DL,BL
004FB2F9  8B CE                     MOV ECX,ESI
004FB2FB  80 EA 0D                  SUB DL,0xd
004FB2FE  52                        PUSH EDX
004FB2FF  E8 57 8E F0 FF            CALL 0x0040415b
switchD_004fb2cc::caseD_2:
004FB304  C6 84 37 4F 0B 00 00 00   MOV byte ptr [EDI + ESI*0x1 + 0xb4f],0x0
LAB_004fb30c:
004FB30C  FE C3                     INC BL
004FB30E  80 FB 14                  CMP BL,0x14
004FB311  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
004FB314  0F 82 85 FE FF FF         JC 0x004fb19f
004FB31A  33 C0                     XOR EAX,EAX
004FB31C  BB 02 00 00 00            MOV EBX,0x2
004FB321  66 8B 86 3F 02 00 00      MOV AX,word ptr [ESI + 0x23f]
004FB328  83 E8 03                  SUB EAX,0x3
004FB32B  0F 84 C1 00 00 00         JZ 0x004fb3f2
004FB331  48                        DEC EAX
004FB332  0F 85 97 02 00 00         JNZ 0x004fb5cf
004FB338  32 C0                     XOR AL,AL
004FB33A  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
LAB_004fb340:
004FB340  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004FB346  8B 96 28 01 00 00         MOV EDX,dword ptr [ESI + 0x128]
004FB34C  03 CA                     ADD ECX,EDX
004FB34E  3C 01                     CMP AL,0x1
004FB350  74 04                     JZ 0x004fb356
004FB352  3C 07                     CMP AL,0x7
004FB354  75 06                     JNZ 0x004fb35c
LAB_004fb356:
004FB356  03 8E C0 00 00 00         ADD ECX,dword ptr [ESI + 0xc0]
LAB_004fb35c:
004FB35C  8B 17                     MOV EDX,dword ptr [EDI]
004FB35E  3B D1                     CMP EDX,ECX
004FB360  7D 05                     JGE 0x004fb367
004FB362  83 C2 0F                  ADD EDX,0xf
004FB365  89 17                     MOV dword ptr [EDI],EDX
LAB_004fb367:
004FB367  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004FB36D  8B 96 28 01 00 00         MOV EDX,dword ptr [ESI + 0x128]
004FB373  03 CA                     ADD ECX,EDX
004FB375  3C 01                     CMP AL,0x1
004FB377  8B D1                     MOV EDX,ECX
004FB379  74 04                     JZ 0x004fb37f
004FB37B  3C 07                     CMP AL,0x7
004FB37D  75 06                     JNZ 0x004fb385
LAB_004fb37f:
004FB37F  03 96 C0 00 00 00         ADD EDX,dword ptr [ESI + 0xc0]
LAB_004fb385:
004FB385  39 17                     CMP dword ptr [EDI],EDX
004FB387  7C 17                     JL 0x004fb3a0
004FB389  3C 01                     CMP AL,0x1
004FB38B  74 04                     JZ 0x004fb391
004FB38D  3C 07                     CMP AL,0x7
004FB38F  75 06                     JNZ 0x004fb397
LAB_004fb391:
004FB391  03 8E C0 00 00 00         ADD ECX,dword ptr [ESI + 0xc0]
LAB_004fb397:
004FB397  89 0F                     MOV dword ptr [EDI],ECX
004FB399  66 89 9E 3F 02 00 00      MOV word ptr [ESI + 0x23f],BX
LAB_004fb3a0:
004FB3A0  FE C0                     INC AL
004FB3A2  83 C7 04                  ADD EDI,0x4
004FB3A5  3C 0B                     CMP AL,0xb
004FB3A7  72 97                     JC 0x004fb340
004FB3A9  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004FB3AF  E8 A7 88 F0 FF            CALL 0x00403c5b
004FB3B4  32 DB                     XOR BL,BL
004FB3B6  8D BE 48 01 00 00         LEA EDI,[ESI + 0x148]
004FB3BC  80 FB 0B                  CMP BL,0xb
004FB3BF  73 22                     JNC 0x004fb3e3
LAB_004fb3c1:
004FB3C1  8B 07                     MOV EAX,dword ptr [EDI]
004FB3C3  85 C0                     TEST EAX,EAX
004FB3C5  7C 1C                     JL 0x004fb3e3
004FB3C7  8B 8F 4C FF FF FF         MOV ECX,dword ptr [EDI + 0xffffff4c]
004FB3CD  8B 97 F4 FE FF FF         MOV EDX,dword ptr [EDI + 0xfffffef4]
004FB3D3  51                        PUSH ECX
004FB3D4  52                        PUSH EDX
004FB3D5  6A FF                     PUSH -0x1
004FB3D7  50                        PUSH EAX
004FB3D8  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB3DD  50                        PUSH EAX
004FB3DE  E8 5D 82 1B 00            CALL 0x006b3640
LAB_004fb3e3:
004FB3E3  FE C3                     INC BL
004FB3E5  83 C7 04                  ADD EDI,0x4
004FB3E8  80 FB 0B                  CMP BL,0xb
004FB3EB  72 D4                     JC 0x004fb3c1
004FB3ED  E9 DD 01 00 00            JMP 0x004fb5cf
LAB_004fb3f2:
004FB3F2  33 DB                     XOR EBX,EBX
004FB3F4  32 C0                     XOR AL,AL
004FB3F6  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
LAB_004fb3fc:
004FB3FC  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004FB402  8B 96 28 01 00 00         MOV EDX,dword ptr [ESI + 0x128]
004FB408  3C 01                     CMP AL,0x1
004FB40A  8D 8C 11 65 FF FF FF      LEA ECX,[ECX + EDX*0x1 + 0xffffff65]
004FB411  74 04                     JZ 0x004fb417
004FB413  3C 07                     CMP AL,0x7
004FB415  75 06                     JNZ 0x004fb41d
LAB_004fb417:
004FB417  03 8E C0 00 00 00         ADD ECX,dword ptr [ESI + 0xc0]
LAB_004fb41d:
004FB41D  8B 17                     MOV EDX,dword ptr [EDI]
004FB41F  3B D1                     CMP EDX,ECX
004FB421  7E 05                     JLE 0x004fb428
004FB423  83 C2 F1                  ADD EDX,-0xf
004FB426  89 17                     MOV dword ptr [EDI],EDX
LAB_004fb428:
004FB428  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004FB42E  8B 96 28 01 00 00         MOV EDX,dword ptr [ESI + 0x128]
004FB434  3C 01                     CMP AL,0x1
004FB436  8D 8C 11 65 FF FF FF      LEA ECX,[ECX + EDX*0x1 + 0xffffff65]
004FB43D  8B D1                     MOV EDX,ECX
004FB43F  74 04                     JZ 0x004fb445
004FB441  3C 07                     CMP AL,0x7
004FB443  75 06                     JNZ 0x004fb44b
LAB_004fb445:
004FB445  03 96 C0 00 00 00         ADD EDX,dword ptr [ESI + 0xc0]
LAB_004fb44b:
004FB44B  39 17                     CMP dword ptr [EDI],EDX
004FB44D  7F 15                     JG 0x004fb464
004FB44F  3C 01                     CMP AL,0x1
004FB451  74 04                     JZ 0x004fb457
004FB453  3C 07                     CMP AL,0x7
004FB455  75 06                     JNZ 0x004fb45d
LAB_004fb457:
004FB457  03 8E C0 00 00 00         ADD ECX,dword ptr [ESI + 0xc0]
LAB_004fb45d:
004FB45D  89 0F                     MOV dword ptr [EDI],ECX
004FB45F  BB 01 00 00 00            MOV EBX,0x1
LAB_004fb464:
004FB464  FE C0                     INC AL
004FB466  83 C7 04                  ADD EDI,0x4
004FB469  3C 0B                     CMP AL,0xb
004FB46B  72 8F                     JC 0x004fb3fc
004FB46D  85 DB                     TEST EBX,EBX
004FB46F  0F 84 16 01 00 00         JZ 0x004fb58b
004FB475  8B 86 28 01 00 00         MOV EAX,dword ptr [ESI + 0x128]
004FB47B  8B 8E 24 01 00 00         MOV ECX,dword ptr [ESI + 0x124]
004FB481  8B 96 20 01 00 00         MOV EDX,dword ptr [ESI + 0x120]
004FB487  2D 9B 00 00 00            SUB EAX,0x9b
004FB48C  50                        PUSH EAX
004FB48D  8B 86 1C 01 00 00         MOV EAX,dword ptr [ESI + 0x11c]
004FB493  51                        PUSH ECX
004FB494  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004FB49A  52                        PUSH EDX
004FB49B  50                        PUSH EAX
004FB49C  E8 CC 66 F0 FF            CALL 0x00401b6d
004FB4A1  66 C7 86 3F 02 00 00 05 00  MOV word ptr [ESI + 0x23f],0x5
004FB4AA  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004FB4AF  85 C0                     TEST EAX,EAX
004FB4B1  0F 84 C2 00 00 00         JZ 0x004fb579
004FB4B7  8D BE EC 02 00 00         LEA EDI,[ESI + 0x2ec]
004FB4BD  8D 9E EE 02 00 00         LEA EBX,[ESI + 0x2ee]
004FB4C3  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_004fb4ca:
004FB4CA  6A 00                     PUSH 0x0
004FB4CC  6A 00                     PUSH 0x0
004FB4CE  6A 01                     PUSH 0x1
004FB4D0  6A 00                     PUSH 0x0
004FB4D2  6A 06                     PUSH 0x6
004FB4D4  6A 00                     PUSH 0x0
004FB4D6  6A 00                     PUSH 0x0
004FB4D8  E8 2A 81 F0 FF            CALL 0x00403607
004FB4DD  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004FB4E3  83 C4 08                  ADD ESP,0x8
004FB4E6  50                        PUSH EAX
004FB4E7  6A 1F                     PUSH 0x1f
004FB4E9  51                        PUSH ECX
004FB4EA  E8 01 E6 20 00            CALL 0x00709af0
004FB4EF  89 43 F4                  MOV dword ptr [EBX + -0xc],EAX
004FB4F2  8A 10                     MOV DL,byte ptr [EAX]
004FB4F4  88 57 FE                  MOV byte ptr [EDI + -0x2],DL
004FB4F7  C6 07 03                  MOV byte ptr [EDI],0x3
004FB4FA  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004FB4FD  83 C4 20                  ADD ESP,0x20
004FB500  89 03                     MOV dword ptr [EBX],EAX
004FB502  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004FB505  47                        INC EDI
004FB506  83 C3 04                  ADD EBX,0x4
004FB509  48                        DEC EAX
004FB50A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004FB50D  75 BB                     JNZ 0x004fb4ca
004FB50F  8D BE 53 0D 00 00         LEA EDI,[ESI + 0xd53]
004FB515  8D 9E 47 0D 00 00         LEA EBX,[ESI + 0xd47]
004FB51B  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_004fb522:
004FB522  C7 45 F8 06 00 00 00      MOV dword ptr [EBP + -0x8],0x6
LAB_004fb529:
004FB529  6A 00                     PUSH 0x0
004FB52B  6A 00                     PUSH 0x0
004FB52D  6A 01                     PUSH 0x1
004FB52F  6A 00                     PUSH 0x0
004FB531  6A 06                     PUSH 0x6
004FB533  6A 00                     PUSH 0x0
004FB535  6A 00                     PUSH 0x0
004FB537  E8 CB 80 F0 FF            CALL 0x00403607
004FB53C  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004FB542  83 C4 08                  ADD ESP,0x8
004FB545  50                        PUSH EAX
004FB546  6A 1F                     PUSH 0x1f
004FB548  51                        PUSH ECX
004FB549  E8 A2 E5 20 00            CALL 0x00709af0
004FB54E  89 47 B8                  MOV dword ptr [EDI + -0x48],EAX
004FB551  8A 10                     MOV DL,byte ptr [EAX]
004FB553  88 53 F4                  MOV byte ptr [EBX + -0xc],DL
004FB556  C6 03 03                  MOV byte ptr [EBX],0x3
004FB559  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004FB55C  83 C4 20                  ADD ESP,0x20
004FB55F  89 07                     MOV dword ptr [EDI],EAX
004FB561  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004FB564  83 C7 04                  ADD EDI,0x4
004FB567  43                        INC EBX
004FB568  48                        DEC EAX
004FB569  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004FB56C  75 BB                     JNZ 0x004fb529
004FB56E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FB571  48                        DEC EAX
004FB572  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004FB575  75 AB                     JNZ 0x004fb522
004FB577  EB 12                     JMP 0x004fb58b
LAB_004fb579:
004FB579  6A 01                     PUSH 0x1
004FB57B  8B CE                     MOV ECX,ESI
004FB57D  66 C7 86 3F 02 00 00 01 00  MOV word ptr [ESI + 0x23f],0x1
004FB586  E8 47 79 F0 FF            CALL 0x00402ed2
LAB_004fb58b:
004FB58B  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004FB591  E8 C5 86 F0 FF            CALL 0x00403c5b
004FB596  32 DB                     XOR BL,BL
004FB598  8D BE 48 01 00 00         LEA EDI,[ESI + 0x148]
004FB59E  80 FB 0B                  CMP BL,0xb
004FB5A1  73 22                     JNC 0x004fb5c5
LAB_004fb5a3:
004FB5A3  8B 07                     MOV EAX,dword ptr [EDI]
004FB5A5  85 C0                     TEST EAX,EAX
004FB5A7  7C 1C                     JL 0x004fb5c5
004FB5A9  8B 8F 4C FF FF FF         MOV ECX,dword ptr [EDI + 0xffffff4c]
004FB5AF  8B 97 F4 FE FF FF         MOV EDX,dword ptr [EDI + 0xfffffef4]
004FB5B5  51                        PUSH ECX
004FB5B6  52                        PUSH EDX
004FB5B7  6A FF                     PUSH -0x1
004FB5B9  50                        PUSH EAX
004FB5BA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB5BF  50                        PUSH EAX
004FB5C0  E8 7B 80 1B 00            CALL 0x006b3640
LAB_004fb5c5:
004FB5C5  FE C3                     INC BL
004FB5C7  83 C7 04                  ADD EDI,0x4
004FB5CA  80 FB 0B                  CMP BL,0xb
004FB5CD  72 D4                     JC 0x004fb5a3
LAB_004fb5cf:
004FB5CF  A1 D3 C4 80 00            MOV EAX,[0x0080c4d3]
004FB5D4  83 E8 03                  SUB EAX,0x3
004FB5D7  74 70                     JZ 0x004fb649
004FB5D9  48                        DEC EAX
004FB5DA  0F 85 C4 00 00 00         JNZ 0x004fb6a4
004FB5E0  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004FB5E6  8B BE F8 00 00 00         MOV EDI,dword ptr [ESI + 0xf8]
004FB5EC  8B 86 F0 00 00 00         MOV EAX,dword ptr [ESI + 0xf0]
004FB5F2  2B CF                     SUB ECX,EDI
004FB5F4  3B C1                     CMP EAX,ECX
004FB5F6  7E 09                     JLE 0x004fb601
004FB5F8  83 C0 F6                  ADD EAX,-0xa
004FB5FB  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
LAB_004fb601:
004FB601  8B 86 20 01 00 00         MOV EAX,dword ptr [ESI + 0x120]
004FB607  8B 96 F8 00 00 00         MOV EDX,dword ptr [ESI + 0xf8]
004FB60D  8B 8E F0 00 00 00         MOV ECX,dword ptr [ESI + 0xf0]
004FB613  2B C2                     SUB EAX,EDX
004FB615  3B C8                     CMP ECX,EAX
004FB617  7F 10                     JG 0x004fb629
004FB619  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
004FB61F  C7 05 D3 C4 80 00 02 00 00 00  MOV dword ptr [0x0080c4d3],0x2
LAB_004fb629:
004FB629  8B 96 F0 00 00 00         MOV EDX,dword ptr [ESI + 0xf0]
004FB62F  8B 86 EC 00 00 00         MOV EAX,dword ptr [ESI + 0xec]
004FB635  8B 8E 74 01 00 00         MOV ECX,dword ptr [ESI + 0x174]
004FB63B  52                        PUSH EDX
004FB63C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FB642  50                        PUSH EAX
004FB643  6A FF                     PUSH -0x1
004FB645  51                        PUSH ECX
004FB646  52                        PUSH EDX
004FB647  EB 56                     JMP 0x004fb69f
LAB_004fb649:
004FB649  8B 86 F0 00 00 00         MOV EAX,dword ptr [ESI + 0xf0]
004FB64F  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004FB655  3B C1                     CMP EAX,ECX
004FB657  7D 09                     JGE 0x004fb662
004FB659  83 C0 0A                  ADD EAX,0xa
004FB65C  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
LAB_004fb662:
004FB662  8B 86 20 01 00 00         MOV EAX,dword ptr [ESI + 0x120]
004FB668  8B 8E F0 00 00 00         MOV ECX,dword ptr [ESI + 0xf0]
004FB66E  3B C8                     CMP ECX,EAX
004FB670  7C 10                     JL 0x004fb682
004FB672  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
004FB678  C7 05 D3 C4 80 00 01 00 00 00  MOV dword ptr [0x0080c4d3],0x1
LAB_004fb682:
004FB682  8B 86 F0 00 00 00         MOV EAX,dword ptr [ESI + 0xf0]
004FB688  8B 8E EC 00 00 00         MOV ECX,dword ptr [ESI + 0xec]
004FB68E  8B 96 74 01 00 00         MOV EDX,dword ptr [ESI + 0x174]
004FB694  50                        PUSH EAX
004FB695  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB69A  51                        PUSH ECX
004FB69B  6A FF                     PUSH -0x1
004FB69D  52                        PUSH EDX
004FB69E  50                        PUSH EAX
LAB_004fb69f:
004FB69F  E8 9C 7F 1B 00            CALL 0x006b3640
LAB_004fb6a4:
004FB6A4  33 C0                     XOR EAX,EAX
004FB6A6  66 A1 F7 C4 80 00         MOV AX,[0x0080c4f7]
004FB6AC  48                        DEC EAX
004FB6AD  83 F8 03                  CMP EAX,0x3
004FB6B0  0F 87 3D 02 00 00         JA 0x004fb8f3
switchD_004fb6b6::switchD:
004FB6B6  FF 24 85 BC D6 4F 00      JMP dword ptr [EAX*0x4 + 0x4fd6bc]
switchD_004fb6b6::caseD_3:
004FB6BD  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
004FB6C3  8B BE 18 01 00 00         MOV EDI,dword ptr [ESI + 0x118]
004FB6C9  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB6CF  2B CF                     SUB ECX,EDI
004FB6D1  3B C1                     CMP EAX,ECX
004FB6D3  7E 09                     JLE 0x004fb6de
004FB6D5  83 C0 F6                  ADD EAX,-0xa
004FB6D8  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
LAB_004fb6de:
004FB6DE  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
004FB6E4  8B 96 18 01 00 00         MOV EDX,dword ptr [ESI + 0x118]
004FB6EA  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
004FB6F0  2B C2                     SUB EAX,EDX
004FB6F2  3B C8                     CMP ECX,EAX
004FB6F4  7F 0F                     JG 0x004fb705
004FB6F6  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
004FB6FC  66 C7 05 F7 C4 80 00 01 00  MOV word ptr [0x0080c4f7],0x1
LAB_004fb705:
004FB705  8B 96 10 01 00 00         MOV EDX,dword ptr [ESI + 0x110]
004FB70B  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
004FB711  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
004FB717  52                        PUSH EDX
004FB718  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FB71E  50                        PUSH EAX
004FB71F  6A FF                     PUSH -0x1
004FB721  51                        PUSH ECX
004FB722  52                        PUSH EDX
004FB723  E8 18 7F 1B 00            CALL 0x006b3640
004FB728  66 83 3D F7 C4 80 00 02   CMP word ptr [0x0080c4f7],0x2
004FB730  75 13                     JNZ 0x004fb745
004FB732  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
004FB738  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FB73E  50                        PUSH EAX
004FB73F  51                        PUSH ECX
004FB740  E8 AB 83 1B 00            CALL 0x006b3af0
LAB_004fb745:
004FB745  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB74B  8B BE 08 01 00 00         MOV EDI,dword ptr [ESI + 0x108]
004FB751  8B 8E 00 01 00 00         MOV ECX,dword ptr [ESI + 0x100]
004FB757  2B C7                     SUB EAX,EDI
004FB759  3B C8                     CMP ECX,EAX
004FB75B  7E 09                     JLE 0x004fb766
004FB75D  83 C1 F6                  ADD ECX,-0xa
004FB760  89 8E 00 01 00 00         MOV dword ptr [ESI + 0x100],ECX
LAB_004fb766:
004FB766  39 86 00 01 00 00         CMP dword ptr [ESI + 0x100],EAX
004FB76C  7F 06                     JG 0x004fb774
004FB76E  89 86 00 01 00 00         MOV dword ptr [ESI + 0x100],EAX
LAB_004fb774:
004FB774  8B 96 00 01 00 00         MOV EDX,dword ptr [ESI + 0x100]
004FB77A  8B 86 FC 00 00 00         MOV EAX,dword ptr [ESI + 0xfc]
004FB780  8B 8E 78 01 00 00         MOV ECX,dword ptr [ESI + 0x178]
004FB786  52                        PUSH EDX
004FB787  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FB78D  50                        PUSH EAX
004FB78E  6A FF                     PUSH -0x1
004FB790  51                        PUSH ECX
004FB791  52                        PUSH EDX
004FB792  E9 57 01 00 00            JMP 0x004fb8ee
switchD_004fb6b6::caseD_4:
004FB797  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB79D  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
004FB7A3  3B C1                     CMP EAX,ECX
004FB7A5  7D 09                     JGE 0x004fb7b0
004FB7A7  83 C0 0A                  ADD EAX,0xa
004FB7AA  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
LAB_004fb7b0:
004FB7B0  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
004FB7B6  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
004FB7BC  3B C8                     CMP ECX,EAX
004FB7BE  7C 0F                     JL 0x004fb7cf
004FB7C0  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
004FB7C6  66 C7 05 F7 C4 80 00 02 00  MOV word ptr [0x0080c4f7],0x2
LAB_004fb7cf:
004FB7CF  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB7D5  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
004FB7DB  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
004FB7E1  50                        PUSH EAX
004FB7E2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB7E7  51                        PUSH ECX
004FB7E8  6A FF                     PUSH -0x1
004FB7EA  52                        PUSH EDX
004FB7EB  50                        PUSH EAX
004FB7EC  E8 4F 7E 1B 00            CALL 0x006b3640
004FB7F1  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB7F7  8B BE 08 01 00 00         MOV EDI,dword ptr [ESI + 0x108]
004FB7FD  8B 8E 00 01 00 00         MOV ECX,dword ptr [ESI + 0x100]
004FB803  2B C7                     SUB EAX,EDI
004FB805  3B C8                     CMP ECX,EAX
004FB807  7D 09                     JGE 0x004fb812
004FB809  83 C1 0A                  ADD ECX,0xa
004FB80C  89 8E 00 01 00 00         MOV dword ptr [ESI + 0x100],ECX
LAB_004fb812:
004FB812  39 86 00 01 00 00         CMP dword ptr [ESI + 0x100],EAX
004FB818  7C 06                     JL 0x004fb820
004FB81A  89 86 00 01 00 00         MOV dword ptr [ESI + 0x100],EAX
LAB_004fb820:
004FB820  8B 8E 00 01 00 00         MOV ECX,dword ptr [ESI + 0x100]
004FB826  51                        PUSH ECX
004FB827  E9 AB 00 00 00            JMP 0x004fb8d7
switchD_004fb6b6::caseD_1:
004FB82C  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
004FB832  8B 96 18 01 00 00         MOV EDX,dword ptr [ESI + 0x118]
004FB838  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
004FB83E  2B C2                     SUB EAX,EDX
004FB840  3B C8                     CMP ECX,EAX
004FB842  0F 84 AB 00 00 00         JZ 0x004fb8f3
004FB848  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
004FB84E  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
004FB854  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FB85A  50                        PUSH EAX
004FB85B  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
004FB861  52                        PUSH EDX
004FB862  6A FF                     PUSH -0x1
004FB864  50                        PUSH EAX
004FB865  51                        PUSH ECX
004FB866  E8 D5 7D 1B 00            CALL 0x006b3640
004FB86B  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB871  8B 96 08 01 00 00         MOV EDX,dword ptr [ESI + 0x108]
004FB877  8B 8E 00 01 00 00         MOV ECX,dword ptr [ESI + 0x100]
004FB87D  2B C2                     SUB EAX,EDX
004FB87F  3B C8                     CMP ECX,EAX
004FB881  74 70                     JZ 0x004fb8f3
004FB883  EB 4B                     JMP 0x004fb8d0
switchD_004fb6b6::caseD_2:
004FB885  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
004FB88B  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
004FB891  3B C8                     CMP ECX,EAX
004FB893  74 5E                     JZ 0x004fb8f3
004FB895  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
004FB89B  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
004FB8A1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FB8A7  50                        PUSH EAX
004FB8A8  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
004FB8AE  52                        PUSH EDX
004FB8AF  6A FF                     PUSH -0x1
004FB8B1  50                        PUSH EAX
004FB8B2  51                        PUSH ECX
004FB8B3  E8 88 7D 1B 00            CALL 0x006b3640
004FB8B8  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004FB8BE  8B 96 08 01 00 00         MOV EDX,dword ptr [ESI + 0x108]
004FB8C4  8B 8E 00 01 00 00         MOV ECX,dword ptr [ESI + 0x100]
004FB8CA  2B C2                     SUB EAX,EDX
004FB8CC  3B C8                     CMP ECX,EAX
004FB8CE  74 23                     JZ 0x004fb8f3
LAB_004fb8d0:
004FB8D0  89 86 00 01 00 00         MOV dword ptr [ESI + 0x100],EAX
004FB8D6  50                        PUSH EAX
LAB_004fb8d7:
004FB8D7  8B 96 FC 00 00 00         MOV EDX,dword ptr [ESI + 0xfc]
004FB8DD  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
004FB8E3  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FB8E9  52                        PUSH EDX
004FB8EA  6A FF                     PUSH -0x1
004FB8EC  50                        PUSH EAX
004FB8ED  51                        PUSH ECX
LAB_004fb8ee:
004FB8EE  E8 4D 7D 1B 00            CALL 0x006b3640
switchD_004fb6b6::default:
004FB8F3  8B 96 78 01 00 00         MOV EDX,dword ptr [ESI + 0x178]
004FB8F9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB8FE  52                        PUSH EDX
004FB8FF  50                        PUSH EAX
004FB900  E8 EB 7A 1B 00            CALL 0x006b33f0
004FB905  85 C0                     TEST EAX,EAX
004FB907  0F 84 FE 1C 00 00         JZ 0x004fd60b
004FB90D  8B 8E 47 02 00 00         MOV ECX,dword ptr [ESI + 0x247]
004FB913  8B 96 43 02 00 00         MOV EDX,dword ptr [ESI + 0x243]
004FB919  8B 86 A0 09 00 00         MOV EAX,dword ptr [ESI + 0x9a0]
004FB91F  03 CA                     ADD ECX,EDX
004FB921  3B C1                     CMP EAX,ECX
004FB923  0F 82 E2 1C 00 00         JC 0x004fd60b
004FB929  8B 96 78 01 00 00         MOV EDX,dword ptr [ESI + 0x178]
004FB92F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FB934  52                        PUSH EDX
004FB935  50                        PUSH EAX
004FB936  E8 B5 81 1B 00            CALL 0x006b3af0
004FB93B  E9 CB 1C 00 00            JMP 0x004fd60b
LAB_004fb940:
004FB940  66 8B 48 18               MOV CX,word ptr [EAX + 0x18]
004FB944  66 8B 50 1A               MOV DX,word ptr [EAX + 0x1a]
004FB948  66 83 BE 3F 02 00 00 01   CMP word ptr [ESI + 0x23f],0x1
004FB950  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004FB957  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
004FB95B  66 89 55 C4               MOV word ptr [EBP + -0x3c],DX
004FB95F  0F 85 E4 01 00 00         JNZ 0x004fbb49
004FB965  33 DB                     XOR EBX,EBX
004FB967  8D 86 04 02 00 00         LEA EAX,[ESI + 0x204]
004FB96D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004FB970  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004FB973  C7 45 C8 05 00 00 00      MOV dword ptr [EBP + -0x38],0x5
LAB_004fb97a:
004FB97A  33 FF                     XOR EDI,EDI
004FB97C  83 FB 04                  CMP EBX,0x4
004FB97F  0F 87 1E 01 00 00         JA 0x004fbaa3
switchD_004fb985::switchD:
004FB985  FF 24 9D CC D6 4F 00      JMP dword ptr [EBX*0x4 + 0x4fd6cc]
switchD_004fb985::caseD_0:
004FB98C  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FB992  85 C9                     TEST ECX,ECX
004FB994  0F 84 09 01 00 00         JZ 0x004fbaa3
004FB99A  B8 02 00 00 00            MOV EAX,0x2
004FB99F  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FB9A6  0F 85 F7 00 00 00         JNZ 0x004fbaa3
004FB9AC  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FB9B2  85 C9                     TEST ECX,ECX
004FB9B4  0F 84 E9 00 00 00         JZ 0x004fbaa3
004FB9BA  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FB9C1  0F 85 DC 00 00 00         JNZ 0x004fbaa3
004FB9C7  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FB9CD  85 C9                     TEST ECX,ECX
004FB9CF  0F 84 CE 00 00 00         JZ 0x004fbaa3
004FB9D5  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FB9DC  0F 85 C1 00 00 00         JNZ 0x004fbaa3
004FB9E2  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FB9E8  85 C9                     TEST ECX,ECX
004FB9EA  0F 84 B3 00 00 00         JZ 0x004fbaa3
004FB9F0  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FB9F7  0F 85 A6 00 00 00         JNZ 0x004fbaa3
004FB9FD  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FBA04  75 1B                     JNZ 0x004fba21
004FBA06  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FBA0C  85 C9                     TEST ECX,ECX
004FBA0E  0F 84 8F 00 00 00         JZ 0x004fbaa3
004FBA14  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FBA1B  0F 85 82 00 00 00         JNZ 0x004fbaa3
LAB_004fba21:
004FBA21  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004FBA24  8D B9 18 01 00 00         LEA EDI,[ECX + 0x118]
004FBA2A  EB 77                     JMP 0x004fbaa3
switchD_004fb985::caseD_3:
004FBA2C  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004FBA32  85 C9                     TEST ECX,ECX
004FBA34  74 6D                     JZ 0x004fbaa3
004FBA36  B8 02 00 00 00            MOV EAX,0x2
004FBA3B  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FBA42  75 5F                     JNZ 0x004fbaa3
004FBA44  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004FBA4A  85 C9                     TEST ECX,ECX
004FBA4C  74 55                     JZ 0x004fbaa3
004FBA4E  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FBA55  75 4C                     JNZ 0x004fbaa3
004FBA57  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004FBA5D  85 C9                     TEST ECX,ECX
004FBA5F  74 42                     JZ 0x004fbaa3
004FBA61  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FBA68  75 39                     JNZ 0x004fbaa3
004FBA6A  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004FBA70  80 FA 03                  CMP DL,0x3
004FBA73  74 18                     JZ 0x004fba8d
004FBA75  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004FBA7B  85 C9                     TEST ECX,ECX
004FBA7D  74 24                     JZ 0x004fbaa3
004FBA7F  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FBA86  75 1B                     JNZ 0x004fbaa3
004FBA88  80 FA 03                  CMP DL,0x3
004FBA8B  75 13                     JNZ 0x004fbaa0
LAB_004fba8d:
004FBA8D  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004FBA93  85 C9                     TEST ECX,ECX
004FBA95  74 0C                     JZ 0x004fbaa3
004FBA97  66 39 81 72 01 00 00      CMP word ptr [ECX + 0x172],AX
004FBA9E  75 03                     JNZ 0x004fbaa3
LAB_004fbaa0:
004FBAA0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
switchD_004fb985::caseD_2:
004FBAA3  85 FF                     TEST EDI,EDI
004FBAA5  0F 84 81 00 00 00         JZ 0x004fbb2c
004FBAAB  83 C7 04                  ADD EDI,0x4
004FBAAE  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
LAB_004fbab5:
004FBAB5  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
004FBAB8  85 C0                     TEST EAX,EAX
004FBABA  74 61                     JZ 0x004fbb1d
004FBABC  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004FBABF  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004FBAC2  8B 57 FC                  MOV EDX,dword ptr [EDI + -0x4]
004FBAC5  25 FF FF 00 00            AND EAX,0xffff
004FBACA  81 E1 FF FF 00 00         AND ECX,0xffff
004FBAD0  3B C2                     CMP EAX,EDX
004FBAD2  7C 1F                     JL 0x004fbaf3
004FBAD4  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
004FBAD7  03 DA                     ADD EBX,EDX
004FBAD9  3B C3                     CMP EAX,EBX
004FBADB  7D 16                     JGE 0x004fbaf3
004FBADD  8B 17                     MOV EDX,dword ptr [EDI]
004FBADF  3B CA                     CMP ECX,EDX
004FBAE1  7C 10                     JL 0x004fbaf3
004FBAE3  8B 5F 08                  MOV EBX,dword ptr [EDI + 0x8]
004FBAE6  03 DA                     ADD EBX,EDX
004FBAE8  3B CB                     CMP ECX,EBX
004FBAEA  7D 07                     JGE 0x004fbaf3
004FBAEC  BA 01 00 00 00            MOV EDX,0x1
004FBAF1  EB 02                     JMP 0x004fbaf5
LAB_004fbaf3:
004FBAF3  33 D2                     XOR EDX,EDX
LAB_004fbaf5:
004FBAF5  85 D2                     TEST EDX,EDX
004FBAF7  74 24                     JZ 0x004fbb1d
004FBAF9  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
004FBAFC  85 D2                     TEST EDX,EDX
004FBAFE  74 17                     JZ 0x004fbb17
004FBB00  2B 0F                     SUB ECX,dword ptr [EDI]
004FBB02  51                        PUSH ECX
004FBB03  8B 4F FC                  MOV ECX,dword ptr [EDI + -0x4]
004FBB06  2B C1                     SUB EAX,ECX
004FBB08  50                        PUSH EAX
004FBB09  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004FBB0C  50                        PUSH EAX
004FBB0D  52                        PUSH EDX
004FBB0E  E8 AD 9A 1B 00            CALL 0x006b55c0
004FBB13  85 C0                     TEST EAX,EAX
004FBB15  74 06                     JZ 0x004fbb1d
LAB_004fbb17:
004FBB17  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004FBB1A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004fbb1d:
004FBB1D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004FBB20  83 C7 1C                  ADD EDI,0x1c
004FBB23  48                        DEC EAX
004FBB24  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004FBB27  75 8C                     JNZ 0x004fbab5
004FBB29  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_004fbb2c:
004FBB2C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004FBB2F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004FBB32  43                        INC EBX
004FBB33  81 C1 18 01 00 00         ADD ECX,0x118
004FBB39  48                        DEC EAX
004FBB3A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004FBB3D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004FBB40  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004FBB43  0F 85 31 FE FF FF         JNZ 0x004fb97a
LAB_004fbb49:
004FBB49  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
004FBB4F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004FBB52  3B C1                     CMP EAX,ECX
004FBB54  74 65                     JZ 0x004fbbbb
004FBB56  33 DB                     XOR EBX,EBX
004FBB58  3B C3                     CMP EAX,EBX
004FBB5A  74 28                     JZ 0x004fbb84
004FBB5C  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
004FBB63  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
004FBB67  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
004FBB6D  8B 96 44 01 00 00         MOV EDX,dword ptr [ESI + 0x144]
004FBB73  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
004FBB76  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004FBB7C  8D 56 18                  LEA EDX,[ESI + 0x18]
004FBB7F  8B 01                     MOV EAX,dword ptr [ECX]
004FBB81  52                        PUSH EDX
004FBB82  FF 10                     CALL dword ptr [EAX]
LAB_004fbb84:
004FBB84  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FBB87  3B C3                     CMP EAX,EBX
004FBB89  89 86 44 01 00 00         MOV dword ptr [ESI + 0x144],EAX
004FBB8F  74 2C                     JZ 0x004fbbbd
004FBB91  C7 46 28 01 42 00 00      MOV dword ptr [ESI + 0x28],0x4201
004FBB98  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
004FBB9C  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
004FBBA2  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
004FBBA8  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004FBBAB  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004FBBB1  8D 46 18                  LEA EAX,[ESI + 0x18]
004FBBB4  8B 11                     MOV EDX,dword ptr [ECX]
004FBBB6  50                        PUSH EAX
004FBBB7  FF 12                     CALL dword ptr [EDX]
004FBBB9  EB 02                     JMP 0x004fbbbd
LAB_004fbbbb:
004FBBBB  33 DB                     XOR EBX,EBX
LAB_004fbbbd:
004FBBBD  66 83 BE 3F 02 00 00 01   CMP word ptr [ESI + 0x23f],0x1
004FBBC5  74 11                     JZ 0x004fbbd8
LAB_004fbbc7:
004FBBC7  89 9E 40 01 00 00         MOV dword ptr [ESI + 0x140],EBX
004FBBCD  89 9E 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EBX
004FBBD3  E9 33 1A 00 00            JMP 0x004fd60b
LAB_004fbbd8:
004FBBD8  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
004FBBDE  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
004FBBE1  8B 7E 78                  MOV EDI,dword ptr [ESI + 0x78]
004FBBE4  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
004FBBEA  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004FBBED  A1 84 87 80 00            MOV EAX,[0x00808784]
004FBBF2  3B C3                     CMP EAX,EBX
004FBBF4  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004FBBF7  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
004FBBFA  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004FBBFD  75 C8                     JNZ 0x004fbbc7
004FBBFF  39 1D 88 87 80 00         CMP dword ptr [0x00808788],EBX
004FBC05  75 14                     JNZ 0x004fbc1b
004FBC07  39 1D 8C 87 80 00         CMP dword ptr [0x0080878c],EBX
004FBC0D  75 0C                     JNZ 0x004fbc1b
004FBC0F  39 1D 90 87 80 00         CMP dword ptr [0x00808790],EBX
004FBC15  75 04                     JNZ 0x004fbc1b
004FBC17  33 C0                     XOR EAX,EAX
004FBC19  EB 05                     JMP 0x004fbc20
LAB_004fbc1b:
004FBC1B  B8 01 00 00 00            MOV EAX,0x1
LAB_004fbc20:
004FBC20  3B C3                     CMP EAX,EBX
004FBC22  75 A3                     JNZ 0x004fbbc7
004FBC24  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004FBC27  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004FBC2A  25 FF FF 00 00            AND EAX,0xffff
004FBC2F  81 E1 FF FF 00 00         AND ECX,0xffff
004FBC35  3B C2                     CMP EAX,EDX
004FBC37  7C 21                     JL 0x004fbc5a
004FBC39  03 FA                     ADD EDI,EDX
004FBC3B  3B C7                     CMP EAX,EDI
004FBC3D  7D 19                     JGE 0x004fbc58
004FBC3F  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004FBC42  3B CF                     CMP ECX,EDI
004FBC44  7C 12                     JL 0x004fbc58
004FBC46  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
004FBC49  03 DF                     ADD EBX,EDI
004FBC4B  3B CB                     CMP ECX,EBX
004FBC4D  7D 09                     JGE 0x004fbc58
004FBC4F  BF 01 00 00 00            MOV EDI,0x1
004FBC54  33 DB                     XOR EBX,EBX
004FBC56  EB 04                     JMP 0x004fbc5c
LAB_004fbc58:
004FBC58  33 DB                     XOR EBX,EBX
LAB_004fbc5a:
004FBC5A  33 FF                     XOR EDI,EDI
LAB_004fbc5c:
004FBC5C  3B FB                     CMP EDI,EBX
004FBC5E  0F 84 63 FF FF FF         JZ 0x004fbbc7
004FBC64  8D 7D CC                  LEA EDI,[EBP + -0x34]
004FBC67  2B C2                     SUB EAX,EDX
004FBC69  57                        PUSH EDI
004FBC6A  8D 7D D0                  LEA EDI,[EBP + -0x30]
004FBC6D  57                        PUSH EDI
004FBC6E  8B BE A4 00 00 00         MOV EDI,dword ptr [ESI + 0xa4]
004FBC74  2B CF                     SUB ECX,EDI
004FBC76  83 E8 05                  SUB EAX,0x5
004FBC79  83 E9 07                  SUB ECX,0x7
004FBC7C  51                        PUSH ECX
004FBC7D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004FBC83  50                        PUSH EAX
004FBC84  E8 37 AC 1E 00            CALL 0x006e68c0
004FBC89  8B F8                     MOV EDI,EAX
004FBC8B  8B 86 3C 01 00 00         MOV EAX,dword ptr [ESI + 0x13c]
004FBC91  3B C3                     CMP EAX,EBX
004FBC93  74 1F                     JZ 0x004fbcb4
004FBC95  3B FB                     CMP EDI,EBX
004FBC97  74 15                     JZ 0x004fbcae
004FBC99  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004FBC9C  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004FBC9F  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004FBCA5  52                        PUSH EDX
004FBCA6  50                        PUSH EAX
004FBCA7  E8 74 6A F0 FF            CALL 0x00402720
004FBCAC  EB 06                     JMP 0x004fbcb4
LAB_004fbcae:
004FBCAE  89 9E 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EBX
LAB_004fbcb4:
004FBCB4  39 9E 40 01 00 00         CMP dword ptr [ESI + 0x140],EBX
004FBCBA  0F 84 4B 19 00 00         JZ 0x004fd60b
004FBCC0  85 FF                     TEST EDI,EDI
004FBCC2  0F 85 43 19 00 00         JNZ 0x004fd60b
004FBCC8  89 BE 40 01 00 00         MOV dword ptr [ESI + 0x140],EDI
004FBCCE  E9 38 19 00 00            JMP 0x004fd60b
LAB_004fbcd3:
004FBCD3  83 EB 61                  SUB EBX,0x61
004FBCD6  74 71                     JZ 0x004fbd49
004FBCD8  81 EB A3 B0 00 00         SUB EBX,0xb0a3
004FBCDE  74 30                     JZ 0x004fbd10
004FBCE0  4B                        DEC EBX
004FBCE1  0F 85 24 19 00 00         JNZ 0x004fd60b
004FBCE7  68 E4 2B 40 00            PUSH 0x402be4
004FBCEC  6A 00                     PUSH 0x0
004FBCEE  68 E4 1C 7C 00            PUSH 0x7c1ce4
CPanelTy::GetMessage::cf_common_exit_004FBCF3:
004FBCF3  E8 84 9A F0 FF            CALL 0x0040577c
004FBCF8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FBCFB  83 C4 08                  ADD ESP,0x8
004FBCFE  50                        PUSH EAX
004FBCFF  6A 06                     PUSH 0x6
004FBD01  51                        PUSH ECX
004FBD02  6A 04                     PUSH 0x4
004FBD04  8B CE                     MOV ECX,ESI
004FBD06  E8 CE 65 F0 FF            CALL 0x004022d9
004FBD0B  E9 FB 18 00 00            JMP 0x004fd60b
LAB_004fbd10:
004FBD10  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004FBD13  A0 27 73 80 00            MOV AL,[0x00807327]
004FBD18  83 F9 03                  CMP ECX,0x3
004FBD1B  75 04                     JNZ 0x004fbd21
004FBD1D  0C 02                     OR AL,0x2
004FBD1F  EB 02                     JMP 0x004fbd23
LAB_004fbd21:
004FBD21  24 FD                     AND AL,0xfd
LAB_004fbd23:
004FBD23  33 D2                     XOR EDX,EDX
004FBD25  A2 27 73 80 00            MOV [0x00807327],AL
004FBD2A  8A D0                     MOV DL,AL
004FBD2C  A1 98 75 80 00            MOV EAX,[0x00807598]
004FBD31  68 AE 00 00 00            PUSH 0xae
004FBD36  89 90 18 04 00 00         MOV dword ptr [EAX + 0x418],EDX
004FBD3C  E8 EE A0 F0 FF            CALL 0x00405e2f
004FBD41  83 C4 04                  ADD ESP,0x4
004FBD44  E9 C2 18 00 00            JMP 0x004fd60b
LAB_004fbd49:
004FBD49  66 83 BE 3F 02 00 00 02   CMP word ptr [ESI + 0x23f],0x2
004FBD51  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004FBD58  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004FBD5F  0F 84 A6 18 00 00         JZ 0x004fd60b
004FBD65  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FBD68  33 FF                     XOR EDI,EDI
004FBD6A  66 8B 41 18               MOV AX,word ptr [ECX + 0x18]
004FBD6E  66 8B 49 1A               MOV CX,word ptr [ECX + 0x1a]
004FBD72  81 E1 FF FF 00 00         AND ECX,0xffff
004FBD78  25 FF FF 00 00            AND EAX,0xffff
004FBD7D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004FBD80  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004fbd83:
004FBD83  0F BF C7                  MOVSX EAX,DI
004FBD86  8B 4C 86 3C               MOV ECX,dword ptr [ESI + EAX*0x4 + 0x3c]
004FBD8A  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
004FBD91  8B 5C 86 68               MOV EBX,dword ptr [ESI + EAX*0x4 + 0x68]
004FBD95  8B 84 86 C0 00 00 00      MOV EAX,dword ptr [ESI + EAX*0x4 + 0xc0]
004FBD9C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004FBD9F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004FBDA2  3B C1                     CMP EAX,ECX
004FBDA4  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004FBDA7  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004FBDAA  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
004FBDAD  7C 1D                     JL 0x004fbdcc
004FBDAF  03 D9                     ADD EBX,ECX
004FBDB1  3B C3                     CMP EAX,EBX
004FBDB3  7D 17                     JGE 0x004fbdcc
004FBDB5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004FBDB8  3B C2                     CMP EAX,EDX
004FBDBA  7C 10                     JL 0x004fbdcc
004FBDBC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004FBDBF  03 CA                     ADD ECX,EDX
004FBDC1  3B C1                     CMP EAX,ECX
004FBDC3  7D 07                     JGE 0x004fbdcc
004FBDC5  B8 01 00 00 00            MOV EAX,0x1
004FBDCA  EB 02                     JMP 0x004fbdce
LAB_004fbdcc:
004FBDCC  33 C0                     XOR EAX,EAX
LAB_004fbdce:
004FBDCE  85 C0                     TEST EAX,EAX
004FBDD0  75 09                     JNZ 0x004fbddb
004FBDD2  47                        INC EDI
004FBDD3  66 83 FF 0B               CMP DI,0xb
004FBDD7  7C AA                     JL 0x004fbd83
004FBDD9  EB 03                     JMP 0x004fbdde
LAB_004fbddb:
004FBDDB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_004fbdde:
004FBDDE  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004FBDE2  8B 3D 84 16 80 00         MOV EDI,dword ptr [0x00801684]
004FBDE8  8B 1D 78 16 80 00         MOV EBX,dword ptr [0x00801678]
004FBDEE  83 FA 0A                  CMP EDX,0xa
004FBDF1  0F 87 13 01 00 00         JA 0x004fbf0a
004FBDF7  33 C0                     XOR EAX,EAX
004FBDF9  8A 82 EC D6 4F 00         MOV AL,byte ptr [EDX + 0x4fd6ec]
switchD_004fbdff::switchD:
004FBDFF  FF 24 85 E0 D6 4F 00      JMP dword ptr [EAX*0x4 + 0x4fd6e0]
switchD_004fbdff::caseD_0:
004FBE06  85 FF                     TEST EDI,EDI
004FBE08  B9 02 00 00 00            MOV ECX,0x2
004FBE0D  74 0D                     JZ 0x004fbe1c
004FBE0F  66 39 8F 72 01 00 00      CMP word ptr [EDI + 0x172],CX
004FBE16  74 04                     JZ 0x004fbe1c
004FBE18  33 C0                     XOR EAX,EAX
004FBE1A  EB 03                     JMP 0x004fbe1f
LAB_004fbe1c:
004FBE1C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_004fbe1f:
004FBE1F  85 DB                     TEST EBX,EBX
004FBE21  74 0B                     JZ 0x004fbe2e
004FBE23  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBE2A  74 02                     JZ 0x004fbe2e
004FBE2C  33 C0                     XOR EAX,EAX
LAB_004fbe2e:
004FBE2E  8B 1D EC 16 80 00         MOV EBX,dword ptr [0x008016ec]
004FBE34  85 DB                     TEST EBX,EBX
004FBE36  74 0B                     JZ 0x004fbe43
004FBE38  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBE3F  74 02                     JZ 0x004fbe43
004FBE41  33 C0                     XOR EAX,EAX
LAB_004fbe43:
004FBE43  8B 1D 48 2A 80 00         MOV EBX,dword ptr [0x00802a48]
004FBE49  85 DB                     TEST EBX,EBX
004FBE4B  74 0B                     JZ 0x004fbe58
004FBE4D  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBE54  74 02                     JZ 0x004fbe58
004FBE56  33 C0                     XOR EAX,EAX
LAB_004fbe58:
004FBE58  8B 1D 8C 16 80 00         MOV EBX,dword ptr [0x0080168c]
LAB_004fbe5e:
004FBE5E  85 DB                     TEST EBX,EBX
004FBE60  74 0B                     JZ 0x004fbe6d
004FBE62  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBE69  74 02                     JZ 0x004fbe6d
004FBE6B  33 C0                     XOR EAX,EAX
LAB_004fbe6d:
004FBE6D  8B 1D 78 16 80 00         MOV EBX,dword ptr [0x00801678]
LAB_004fbe73:
004FBE73  85 C0                     TEST EAX,EAX
004FBE75  0F 84 90 17 00 00         JZ 0x004fd60b
004FBE7B  83 FA 0A                  CMP EDX,0xa
004FBE7E  0F 87 87 17 00 00         JA 0x004fd60b
switchD_004fbe84::switchD:
004FBE84  FF 24 95 F8 D6 4F 00      JMP dword ptr [EDX*0x4 + 0x4fd6f8]
switchD_004fbe84::caseD_0:
004FBE8B  66 83 7D FC 00            CMP word ptr [EBP + -0x4],0x0
004FBE90  6A 01                     PUSH 0x1
004FBE92  0F 94 C1                  SETZ CL
004FBE95  51                        PUSH ECX
004FBE96  8B CE                     MOV ECX,ESI
004FBE98  E8 78 5F F0 FF            CALL 0x00401e15
004FBE9D  E9 69 17 00 00            JMP 0x004fd60b
switchD_004fbdff::caseD_6:
004FBEA2  A1 E8 16 80 00            MOV EAX,[0x008016e8]
004FBEA7  B9 02 00 00 00            MOV ECX,0x2
004FBEAC  85 C0                     TEST EAX,EAX
004FBEAE  74 0D                     JZ 0x004fbebd
004FBEB0  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FBEB7  74 04                     JZ 0x004fbebd
004FBEB9  33 C0                     XOR EAX,EAX
004FBEBB  EB 03                     JMP 0x004fbec0
LAB_004fbebd:
004FBEBD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_004fbec0:
004FBEC0  8B 1D 7C 16 80 00         MOV EBX,dword ptr [0x0080167c]
004FBEC6  85 DB                     TEST EBX,EBX
004FBEC8  74 0B                     JZ 0x004fbed5
004FBECA  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBED1  74 02                     JZ 0x004fbed5
004FBED3  33 C0                     XOR EAX,EAX
LAB_004fbed5:
004FBED5  8B 1D 98 16 80 00         MOV EBX,dword ptr [0x00801698]
004FBEDB  85 DB                     TEST EBX,EBX
004FBEDD  74 0B                     JZ 0x004fbeea
004FBEDF  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBEE6  74 02                     JZ 0x004fbeea
004FBEE8  33 C0                     XOR EAX,EAX
LAB_004fbeea:
004FBEEA  8B 1D 44 2A 80 00         MOV EBX,dword ptr [0x00802a44]
004FBEF0  85 DB                     TEST EBX,EBX
004FBEF2  74 0B                     JZ 0x004fbeff
004FBEF4  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBEFB  74 02                     JZ 0x004fbeff
004FBEFD  33 C0                     XOR EAX,EAX
LAB_004fbeff:
004FBEFF  8B 1D 80 16 80 00         MOV EBX,dword ptr [0x00801680]
004FBF05  E9 54 FF FF FF            JMP 0x004fbe5e
switchD_004fbdff::caseD_1:
004FBF0A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004FBF0D  E9 61 FF FF FF            JMP 0x004fbe73
switchD_004fbe84::caseD_2:
004FBF12  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FBF19  0F 84 EC 16 00 00         JZ 0x004fd60b
004FBF1F  66 83 7D FC 02            CMP word ptr [EBP + -0x4],0x2
004FBF24  8D 86 63 0B 00 00         LEA EAX,[ESI + 0xb63]
004FBF2A  74 06                     JZ 0x004fbf32
004FBF2C  8D 86 51 0C 00 00         LEA EAX,[ESI + 0xc51]
LAB_004fbf32:
004FBF32  8A 08                     MOV CL,byte ptr [EAX]
004FBF34  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004FBF37  84 C9                     TEST CL,CL
004FBF39  0F 84 CC 16 00 00         JZ 0x004fd60b
004FBF3F  B9 02 00 00 00            MOV ECX,0x2
004FBF44  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
004FBF48  75 78                     JNZ 0x004fbfc2
004FBF4A  85 FF                     TEST EDI,EDI
004FBF4C  74 0D                     JZ 0x004fbf5b
004FBF4E  66 39 8F 72 01 00 00      CMP word ptr [EDI + 0x172],CX
004FBF55  0F 85 B0 16 00 00         JNZ 0x004fd60b
LAB_004fbf5b:
004FBF5B  85 DB                     TEST EBX,EBX
004FBF5D  74 12                     JZ 0x004fbf71
004FBF5F  66 39 8B 72 01 00 00      CMP word ptr [EBX + 0x172],CX
004FBF66  0F 85 9F 16 00 00         JNZ 0x004fd60b
004FBF6C  B9 02 00 00 00            MOV ECX,0x2
LAB_004fbf71:
004FBF71  A1 EC 16 80 00            MOV EAX,[0x008016ec]
004FBF76  85 C0                     TEST EAX,EAX
004FBF78  74 12                     JZ 0x004fbf8c
004FBF7A  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FBF81  0F 85 84 16 00 00         JNZ 0x004fd60b
004FBF87  B9 02 00 00 00            MOV ECX,0x2
LAB_004fbf8c:
004FBF8C  A1 48 2A 80 00            MOV EAX,[0x00802a48]
004FBF91  85 C0                     TEST EAX,EAX
004FBF93  74 12                     JZ 0x004fbfa7
004FBF95  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FBF9C  0F 85 69 16 00 00         JNZ 0x004fd60b
004FBFA2  B9 02 00 00 00            MOV ECX,0x2
LAB_004fbfa7:
004FBFA7  A1 8C 16 80 00            MOV EAX,[0x0080168c]
004FBFAC  85 C0                     TEST EAX,EAX
004FBFAE  74 12                     JZ 0x004fbfc2
004FBFB0  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FBFB7  0F 85 4E 16 00 00         JNZ 0x004fd60b
004FBFBD  B9 02 00 00 00            MOV ECX,0x2
LAB_004fbfc2:
004FBFC2  66 83 7D FC 06            CMP word ptr [EBP + -0x4],0x6
004FBFC7  0F 85 82 00 00 00         JNZ 0x004fc04f
004FBFCD  A1 E8 16 80 00            MOV EAX,[0x008016e8]
004FBFD2  85 C0                     TEST EAX,EAX
004FBFD4  74 12                     JZ 0x004fbfe8
004FBFD6  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FBFDD  0F 85 28 16 00 00         JNZ 0x004fd60b
004FBFE3  B9 02 00 00 00            MOV ECX,0x2
LAB_004fbfe8:
004FBFE8  A1 7C 16 80 00            MOV EAX,[0x0080167c]
004FBFED  85 C0                     TEST EAX,EAX
004FBFEF  74 12                     JZ 0x004fc003
004FBFF1  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FBFF8  0F 85 0D 16 00 00         JNZ 0x004fd60b
004FBFFE  B9 02 00 00 00            MOV ECX,0x2
LAB_004fc003:
004FC003  A1 98 16 80 00            MOV EAX,[0x00801698]
004FC008  85 C0                     TEST EAX,EAX
004FC00A  74 12                     JZ 0x004fc01e
004FC00C  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FC013  0F 85 F2 15 00 00         JNZ 0x004fd60b
004FC019  B9 02 00 00 00            MOV ECX,0x2
LAB_004fc01e:
004FC01E  A1 44 2A 80 00            MOV EAX,[0x00802a44]
004FC023  85 C0                     TEST EAX,EAX
004FC025  74 12                     JZ 0x004fc039
004FC027  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FC02E  0F 85 D7 15 00 00         JNZ 0x004fd60b
004FC034  B9 02 00 00 00            MOV ECX,0x2
LAB_004fc039:
004FC039  A1 80 16 80 00            MOV EAX,[0x00801680]
004FC03E  85 C0                     TEST EAX,EAX
004FC040  74 0D                     JZ 0x004fc04f
004FC042  66 39 88 72 01 00 00      CMP word ptr [EAX + 0x172],CX
004FC049  0F 85 BC 15 00 00         JNZ 0x004fd60b
LAB_004fc04f:
004FC04F  8B 4C 96 3C               MOV ECX,dword ptr [ESI + EDX*0x4 + 0x3c]
004FC053  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004FC056  83 C1 07                  ADD ECX,0x7
004FC059  C7 45 E0 0E 00 00 00      MOV dword ptr [EBP + -0x20],0xe
004FC060  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004FC063  C7 45 E4 1B 00 00 00      MOV dword ptr [EBP + -0x1c],0x1b
004FC06A  33 DB                     XOR EBX,EBX
LAB_004fc06c:
004FC06C  0F BF C3                  MOVSX EAX,BX
004FC06F  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
004FC076  2B D0                     SUB EDX,EAX
004FC078  3B F9                     CMP EDI,ECX
004FC07A  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
004FC07D  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004FC081  8B 84 86 94 00 00 00      MOV EAX,dword ptr [ESI + EAX*0x4 + 0x94]
004FC088  8D 44 02 06               LEA EAX,[EDX + EAX*0x1 + 0x6]
004FC08C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004FC08F  7C 1C                     JL 0x004fc0ad
004FC091  8D 51 0E                  LEA EDX,[ECX + 0xe]
004FC094  3B FA                     CMP EDI,EDX
004FC096  7D 15                     JGE 0x004fc0ad
004FC098  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004FC09B  3B D0                     CMP EDX,EAX
004FC09D  7C 0E                     JL 0x004fc0ad
004FC09F  83 C0 1B                  ADD EAX,0x1b
004FC0A2  3B D0                     CMP EDX,EAX
004FC0A4  7D 07                     JGE 0x004fc0ad
004FC0A6  B8 01 00 00 00            MOV EAX,0x1
004FC0AB  EB 02                     JMP 0x004fc0af
LAB_004fc0ad:
004FC0AD  33 C0                     XOR EAX,EAX
LAB_004fc0af:
004FC0AF  85 C0                     TEST EAX,EAX
004FC0B1  75 0C                     JNZ 0x004fc0bf
004FC0B3  43                        INC EBX
004FC0B4  66 83 FB 05               CMP BX,0x5
004FC0B8  7C B2                     JL 0x004fc06c
004FC0BA  E9 4C 15 00 00            JMP 0x004fd60b
LAB_004fc0bf:
004FC0BF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004FC0C2  80 38 01                  CMP byte ptr [EAX],0x1
004FC0C5  75 42                     JNZ 0x004fc109
004FC0C7  0F BF CB                  MOVSX ECX,BX
004FC0CA  8A 54 01 2A               MOV DL,byte ptr [ECX + EAX*0x1 + 0x2a]
004FC0CE  84 D2                     TEST DL,DL
004FC0D0  0F 85 35 15 00 00         JNZ 0x004fd60b
004FC0D6  80 78 02 01               CMP byte ptr [EAX + 0x2],0x1
004FC0DA  0F 85 2B 15 00 00         JNZ 0x004fd60b
004FC0E0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004FC0E3  6A 01                     PUSH 0x1
004FC0E5  66 83 FF 02               CMP DI,0x2
004FC0E9  8B CE                     MOV ECX,ESI
004FC0EB  0F 94 C2                  SETZ DL
004FC0EE  52                        PUSH EDX
004FC0EF  E8 21 5D F0 FF            CALL 0x00401e15
004FC0F4  66 83 FF 02               CMP DI,0x2
004FC0F8  53                        PUSH EBX
004FC0F9  0F 95 C0                  SETNZ AL
004FC0FC  50                        PUSH EAX
004FC0FD  8B CE                     MOV ECX,ESI
004FC0FF  E8 A5 5A F0 FF            CALL 0x00401ba9
004FC104  E9 02 15 00 00            JMP 0x004fd60b
LAB_004fc109:
004FC109  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004FC10C  6A 01                     PUSH 0x1
004FC10E  66 83 FF 02               CMP DI,0x2
004FC112  0F 94 C1                  SETZ CL
004FC115  51                        PUSH ECX
004FC116  8B CE                     MOV ECX,ESI
004FC118  E8 F8 5C F0 FF            CALL 0x00401e15
004FC11D  66 83 FF 02               CMP DI,0x2
004FC121  53                        PUSH EBX
004FC122  0F 95 C2                  SETNZ DL
004FC125  52                        PUSH EDX
004FC126  8B CE                     MOV ECX,ESI
004FC128  E8 7C 5A F0 FF            CALL 0x00401ba9
004FC12D  E9 D9 14 00 00            JMP 0x004fd60b
switchD_004fbe84::caseD_3:
004FC132  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FC139  0F 85 CC 14 00 00         JNZ 0x004fd60b
004FC13F  B9 03 00 00 00            MOV ECX,0x3
004FC144  8D 86 63 0B 00 00         LEA EAX,[ESI + 0xb63]
004FC14A  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
004FC14E  74 06                     JZ 0x004fc156
004FC150  8D 86 51 0C 00 00         LEA EAX,[ESI + 0xc51]
LAB_004fc156:
004FC156  80 CA FF                  OR DL,0xff
004FC159  80 38 00                  CMP byte ptr [EAX],0x0
004FC15C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004FC15F  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
004FC162  0F 84 A3 14 00 00         JZ 0x004fd60b
004FC168  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
004FC16C  0F 85 B2 00 00 00         JNZ 0x004fc224
004FC172  85 FF                     TEST EDI,EDI
004FC174  74 0E                     JZ 0x004fc184
004FC176  66 83 BF 72 01 00 00 02   CMP word ptr [EDI + 0x172],0x2
004FC17E  0F 85 87 14 00 00         JNZ 0x004fd60b
LAB_004fc184:
004FC184  85 DB                     TEST EBX,EBX
004FC186  74 0E                     JZ 0x004fc196
004FC188  66 83 BB 72 01 00 00 02   CMP word ptr [EBX + 0x172],0x2
004FC190  0F 85 75 14 00 00         JNZ 0x004fd60b
LAB_004fc196:
004FC196  A1 EC 16 80 00            MOV EAX,[0x008016ec]
004FC19B  85 C0                     TEST EAX,EAX
004FC19D  74 0E                     JZ 0x004fc1ad
004FC19F  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC1A7  0F 85 5E 14 00 00         JNZ 0x004fd60b
LAB_004fc1ad:
004FC1AD  A1 48 2A 80 00            MOV EAX,[0x00802a48]
004FC1B2  85 C0                     TEST EAX,EAX
004FC1B4  74 0E                     JZ 0x004fc1c4
004FC1B6  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC1BE  0F 85 47 14 00 00         JNZ 0x004fd60b
LAB_004fc1c4:
004FC1C4  A1 8C 16 80 00            MOV EAX,[0x0080168c]
004FC1C9  85 C0                     TEST EAX,EAX
004FC1CB  74 0E                     JZ 0x004fc1db
004FC1CD  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC1D5  0F 85 30 14 00 00         JNZ 0x004fd60b
LAB_004fc1db:
004FC1DB  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
004FC1E1  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
004FC1E4  83 C0 40                  ADD EAX,0x40
004FC1E7  8D 7C 01 0B               LEA EDI,[ECX + EAX*0x1 + 0xb]
004FC1EB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004FC1EE  3B C8                     CMP ECX,EAX
004FC1F0  7D 32                     JGE 0x004fc224
004FC1F2  8D 58 CA                  LEA EBX,[EAX + -0x36]
004FC1F5  3B CB                     CMP ECX,EBX
004FC1F7  7E 2B                     JLE 0x004fc224
004FC1F9  2B 7D F0                  SUB EDI,dword ptr [EBP + -0x10]
004FC1FC  3B CF                     CMP ECX,EDI
004FC1FE  7E 24                     JLE 0x004fc224
004FC200  83 C7 21                  ADD EDI,0x21
004FC203  3B CF                     CMP ECX,EDI
004FC205  7D 1D                     JGE 0x004fc224
004FC207  2B C1                     SUB EAX,ECX
004FC209  8B C8                     MOV ECX,EAX
004FC20B  B8 E9 A2 8B 2E            MOV EAX,0x2e8ba2e9
004FC210  F7 E9                     IMUL ECX
004FC212  D1 FA                     SAR EDX,0x1
004FC214  8B C2                     MOV EAX,EDX
004FC216  C1 E8 1F                  SHR EAX,0x1f
004FC219  03 D0                     ADD EDX,EAX
004FC21B  8B CA                     MOV ECX,EDX
004FC21D  B2 04                     MOV DL,0x4
004FC21F  2A D1                     SUB DL,CL
004FC221  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
LAB_004fc224:
004FC224  66 83 7D FC 05            CMP word ptr [EBP + -0x4],0x5
004FC229  0F 85 BC 00 00 00         JNZ 0x004fc2eb
004FC22F  A1 E8 16 80 00            MOV EAX,[0x008016e8]
004FC234  85 C0                     TEST EAX,EAX
004FC236  74 0E                     JZ 0x004fc246
004FC238  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC240  0F 85 C5 13 00 00         JNZ 0x004fd60b
LAB_004fc246:
004FC246  A1 7C 16 80 00            MOV EAX,[0x0080167c]
004FC24B  85 C0                     TEST EAX,EAX
004FC24D  74 0E                     JZ 0x004fc25d
004FC24F  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC257  0F 85 AE 13 00 00         JNZ 0x004fd60b
LAB_004fc25d:
004FC25D  A1 98 16 80 00            MOV EAX,[0x00801698]
004FC262  85 C0                     TEST EAX,EAX
004FC264  74 0E                     JZ 0x004fc274
004FC266  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC26E  0F 85 97 13 00 00         JNZ 0x004fd60b
LAB_004fc274:
004FC274  A1 44 2A 80 00            MOV EAX,[0x00802a44]
004FC279  85 C0                     TEST EAX,EAX
004FC27B  74 0E                     JZ 0x004fc28b
004FC27D  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC285  0F 85 80 13 00 00         JNZ 0x004fd60b
LAB_004fc28b:
004FC28B  A1 80 16 80 00            MOV EAX,[0x00801680]
004FC290  85 C0                     TEST EAX,EAX
004FC292  74 0E                     JZ 0x004fc2a2
004FC294  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FC29C  0F 85 69 13 00 00         JNZ 0x004fd60b
LAB_004fc2a2:
004FC2A2  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
004FC2A8  8B 5E 50                  MOV EBX,dword ptr [ESI + 0x50]
004FC2AB  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004FC2AE  83 C0 0B                  ADD EAX,0xb
004FC2B1  8B C8                     MOV ECX,EAX
004FC2B3  2B CB                     SUB ECX,EBX
004FC2B5  81 E9 87 00 00 00         SUB ECX,0x87
004FC2BB  3B F8                     CMP EDI,EAX
004FC2BD  7E 2C                     JLE 0x004fc2eb
004FC2BF  8D 58 36                  LEA EBX,[EAX + 0x36]
004FC2C2  3B FB                     CMP EDI,EBX
004FC2C4  7D 25                     JGE 0x004fc2eb
004FC2C6  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004FC2C9  03 CB                     ADD ECX,EBX
004FC2CB  3B F9                     CMP EDI,ECX
004FC2CD  7D 1C                     JGE 0x004fc2eb
004FC2CF  83 C1 DF                  ADD ECX,-0x21
004FC2D2  3B F9                     CMP EDI,ECX
004FC2D4  7E 15                     JLE 0x004fc2eb
004FC2D6  2B F8                     SUB EDI,EAX
004FC2D8  B8 E9 A2 8B 2E            MOV EAX,0x2e8ba2e9
004FC2DD  F7 EF                     IMUL EDI
004FC2DF  D1 FA                     SAR EDX,0x1
004FC2E1  8B C2                     MOV EAX,EDX
004FC2E3  C1 E8 1F                  SHR EAX,0x1f
004FC2E6  03 D0                     ADD EDX,EAX
004FC2E8  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
LAB_004fc2eb:
004FC2EB  80 FA FF                  CMP DL,0xff
004FC2EE  0F 84 17 13 00 00         JZ 0x004fd60b
004FC2F4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004FC2F7  80 38 01                  CMP byte ptr [EAX],0x1
004FC2FA  75 4A                     JNZ 0x004fc346
004FC2FC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004FC2FF  8B CF                     MOV ECX,EDI
004FC301  81 E1 FF 00 00 00         AND ECX,0xff
004FC307  8A 54 01 2A               MOV DL,byte ptr [ECX + EAX*0x1 + 0x2a]
004FC30B  84 D2                     TEST DL,DL
004FC30D  0F 85 F8 12 00 00         JNZ 0x004fd60b
004FC313  80 78 02 01               CMP byte ptr [EAX + 0x2],0x1
004FC317  0F 85 EE 12 00 00         JNZ 0x004fd60b
004FC31D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004FC320  6A 01                     PUSH 0x1
004FC322  66 83 FB 03               CMP BX,0x3
004FC326  8B CE                     MOV ECX,ESI
004FC328  0F 94 C2                  SETZ DL
004FC32B  52                        PUSH EDX
004FC32C  E8 E4 5A F0 FF            CALL 0x00401e15
004FC331  66 83 FB 03               CMP BX,0x3
004FC335  57                        PUSH EDI
004FC336  0F 95 C0                  SETNZ AL
004FC339  50                        PUSH EAX
004FC33A  8B CE                     MOV ECX,ESI
004FC33C  E8 68 58 F0 FF            CALL 0x00401ba9
004FC341  E9 C5 12 00 00            JMP 0x004fd60b
LAB_004fc346:
004FC346  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004FC349  6A 01                     PUSH 0x1
004FC34B  66 83 FF 03               CMP DI,0x3
004FC34F  0F 94 C1                  SETZ CL
004FC352  51                        PUSH ECX
004FC353  8B CE                     MOV ECX,ESI
004FC355  E8 BB 5A F0 FF            CALL 0x00401e15
004FC35A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004FC35D  66 83 FF 03               CMP DI,0x3
004FC361  0F 95 C0                  SETNZ AL
004FC364  52                        PUSH EDX
004FC365  50                        PUSH EAX
004FC366  8B CE                     MOV ECX,ESI
004FC368  E8 3C 58 F0 FF            CALL 0x00401ba9
004FC36D  E9 99 12 00 00            JMP 0x004fd60b
switchD_004fbe84::caseD_a:
004FC372  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC377  85 C0                     TEST EAX,EAX
004FC379  0F 85 8C 12 00 00         JNZ 0x004fd60b
004FC37F  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC384  85 C0                     TEST EAX,EAX
004FC386  75 16                     JNZ 0x004fc39e
004FC388  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC38D  85 C0                     TEST EAX,EAX
004FC38F  75 0D                     JNZ 0x004fc39e
004FC391  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC396  85 C0                     TEST EAX,EAX
004FC398  75 04                     JNZ 0x004fc39e
004FC39A  33 C0                     XOR EAX,EAX
004FC39C  EB 05                     JMP 0x004fc3a3
LAB_004fc39e:
004FC39E  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc3a3:
004FC3A3  85 C0                     TEST EAX,EAX
004FC3A5  0F 85 60 12 00 00         JNZ 0x004fd60b
004FC3AB  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004FC3AE  C7 45 E0 4C 00 00 00      MOV dword ptr [EBP + -0x20],0x4c
004FC3B5  C7 45 E4 38 00 00 00      MOV dword ptr [EBP + -0x1c],0x38
004FC3BC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004FC3C3  33 FF                     XOR EDI,EDI
LAB_004fc3c5:
004FC3C5  8D 4D DC                  LEA ECX,[EBP + -0x24]
004FC3C8  8D 55 D8                  LEA EDX,[EBP + -0x28]
004FC3CB  51                        PUSH ECX
004FC3CC  52                        PUSH EDX
004FC3CD  57                        PUSH EDI
004FC3CE  6A 00                     PUSH 0x0
004FC3D0  8B CE                     MOV ECX,ESI
004FC3D2  E8 1C 95 F0 FF            CALL 0x004058f3
004FC3D7  85 C0                     TEST EAX,EAX
004FC3D9  74 43                     JZ 0x004fc41e
004FC3DB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004FC3DE  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
004FC3E1  8B 96 BC 00 00 00         MOV EDX,dword ptr [ESI + 0xbc]
004FC3E7  03 C1                     ADD EAX,ECX
004FC3E9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004FC3EC  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004FC3EF  03 CA                     ADD ECX,EDX
004FC3F1  3B D8                     CMP EBX,EAX
004FC3F3  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004FC3F6  7C 20                     JL 0x004fc418
004FC3F8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004FC3FB  03 D0                     ADD EDX,EAX
004FC3FD  3B DA                     CMP EBX,EDX
004FC3FF  7D 17                     JGE 0x004fc418
004FC401  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004FC404  3B C1                     CMP EAX,ECX
004FC406  7C 10                     JL 0x004fc418
004FC408  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004FC40B  03 D1                     ADD EDX,ECX
004FC40D  3B C2                     CMP EAX,EDX
004FC40F  7D 07                     JGE 0x004fc418
004FC411  B8 01 00 00 00            MOV EAX,0x1
004FC416  EB 02                     JMP 0x004fc41a
LAB_004fc418:
004FC418  33 C0                     XOR EAX,EAX
LAB_004fc41a:
004FC41A  85 C0                     TEST EAX,EAX
004FC41C  75 09                     JNZ 0x004fc427
LAB_004fc41e:
004FC41E  47                        INC EDI
004FC41F  66 83 FF 06               CMP DI,0x6
004FC423  7C A0                     JL 0x004fc3c5
004FC425  EB 03                     JMP 0x004fc42a
LAB_004fc427:
004FC427  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_004fc42a:
004FC42A  66 83 7D FC 00            CMP word ptr [EBP + -0x4],0x0
004FC42F  0F 8C D6 11 00 00         JL 0x004fd60b
004FC435  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004FC439  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004FC43F  40                        INC EAX
004FC440  6A 01                     PUSH 0x1
004FC442  50                        PUSH EAX
004FC443  6A 00                     PUSH 0x0
004FC445  E8 2B 54 F0 FF            CALL 0x00401875
004FC44A  E9 BC 11 00 00            JMP 0x004fd60b
switchD_004fbe84::caseD_9:
004FC44F  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC454  85 C0                     TEST EAX,EAX
004FC456  0F 85 AF 11 00 00         JNZ 0x004fd60b
004FC45C  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC461  85 C0                     TEST EAX,EAX
004FC463  75 16                     JNZ 0x004fc47b
004FC465  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC46A  85 C0                     TEST EAX,EAX
004FC46C  75 0D                     JNZ 0x004fc47b
004FC46E  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC473  85 C0                     TEST EAX,EAX
004FC475  75 04                     JNZ 0x004fc47b
004FC477  33 C0                     XOR EAX,EAX
004FC479  EB 05                     JMP 0x004fc480
LAB_004fc47b:
004FC47B  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc480:
004FC480  85 C0                     TEST EAX,EAX
004FC482  0F 85 83 11 00 00         JNZ 0x004fd60b
004FC488  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004FC48B  C7 45 E0 4C 00 00 00      MOV dword ptr [EBP + -0x20],0x4c
004FC492  C7 45 E4 38 00 00 00      MOV dword ptr [EBP + -0x1c],0x38
004FC499  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004FC4A0  33 FF                     XOR EDI,EDI
LAB_004fc4a2:
004FC4A2  8D 4D DC                  LEA ECX,[EBP + -0x24]
004FC4A5  8D 55 D8                  LEA EDX,[EBP + -0x28]
004FC4A8  51                        PUSH ECX
004FC4A9  52                        PUSH EDX
004FC4AA  57                        PUSH EDI
004FC4AB  6A 01                     PUSH 0x1
004FC4AD  8B CE                     MOV ECX,ESI
004FC4AF  E8 3F 94 F0 FF            CALL 0x004058f3
004FC4B4  85 C0                     TEST EAX,EAX
004FC4B6  74 43                     JZ 0x004fc4fb
004FC4B8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004FC4BB  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
004FC4BE  8B 96 B8 00 00 00         MOV EDX,dword ptr [ESI + 0xb8]
004FC4C4  03 C1                     ADD EAX,ECX
004FC4C6  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004FC4C9  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004FC4CC  03 CA                     ADD ECX,EDX
004FC4CE  3B D8                     CMP EBX,EAX
004FC4D0  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004FC4D3  7C 20                     JL 0x004fc4f5
004FC4D5  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004FC4D8  03 D0                     ADD EDX,EAX
004FC4DA  3B DA                     CMP EBX,EDX
004FC4DC  7D 17                     JGE 0x004fc4f5
004FC4DE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004FC4E1  3B C1                     CMP EAX,ECX
004FC4E3  7C 10                     JL 0x004fc4f5
004FC4E5  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004FC4E8  03 D1                     ADD EDX,ECX
004FC4EA  3B C2                     CMP EAX,EDX
004FC4EC  7D 07                     JGE 0x004fc4f5
004FC4EE  B8 01 00 00 00            MOV EAX,0x1
004FC4F3  EB 02                     JMP 0x004fc4f7
LAB_004fc4f5:
004FC4F5  33 C0                     XOR EAX,EAX
LAB_004fc4f7:
004FC4F7  85 C0                     TEST EAX,EAX
004FC4F9  75 09                     JNZ 0x004fc504
LAB_004fc4fb:
004FC4FB  47                        INC EDI
004FC4FC  66 83 FF 06               CMP DI,0x6
004FC500  7C A0                     JL 0x004fc4a2
004FC502  EB 03                     JMP 0x004fc507
LAB_004fc504:
004FC504  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_004fc507:
004FC507  66 83 7D FC 00            CMP word ptr [EBP + -0x4],0x0
004FC50C  0F 8C F9 10 00 00         JL 0x004fd60b
004FC512  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004FC516  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004FC51C  40                        INC EAX
004FC51D  6A 01                     PUSH 0x1
004FC51F  50                        PUSH EAX
004FC520  6A 01                     PUSH 0x1
004FC522  E8 4E 53 F0 FF            CALL 0x00401875
004FC527  E9 DF 10 00 00            JMP 0x004fd60b
LAB_004fc52c:
004FC52C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004FC52F  A0 27 73 80 00            MOV AL,[0x00807327]
004FC534  83 F9 03                  CMP ECX,0x3
004FC537  75 04                     JNZ 0x004fc53d
004FC539  0C 04                     OR AL,0x4
004FC53B  EB 02                     JMP 0x004fc53f
LAB_004fc53d:
004FC53D  24 FB                     AND AL,0xfb
LAB_004fc53f:
004FC53F  8B 15 98 75 80 00         MOV EDX,dword ptr [0x00807598]
004FC545  33 C9                     XOR ECX,ECX
004FC547  8A C8                     MOV CL,AL
004FC549  A2 27 73 80 00            MOV [0x00807327],AL
004FC54E  68 AE 00 00 00            PUSH 0xae
004FC553  89 8A 18 04 00 00         MOV dword ptr [EDX + 0x418],ECX
004FC559  E8 D1 98 F0 FF            CALL 0x00405e2f
004FC55E  83 C4 04                  ADD ESP,0x4
004FC561  E9 A5 10 00 00            JMP 0x004fd60b
LAB_004fc566:
004FC566  81 C3 F9 4E FF FF         ADD EBX,0xffff4ef9
004FC56C  83 FB 06                  CMP EBX,0x6
004FC56F  0F 87 96 10 00 00         JA 0x004fd60b
switchD_004fc575::switchD:
004FC575  FF 24 9D 24 D7 4F 00      JMP dword ptr [EBX*0x4 + 0x4fd724]
switchD_004fc575::caseD_b108:
004FC57C  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC581  85 C0                     TEST EAX,EAX
004FC583  0F 85 82 10 00 00         JNZ 0x004fd60b
004FC589  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC58E  85 C0                     TEST EAX,EAX
004FC590  75 16                     JNZ 0x004fc5a8
004FC592  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC597  85 C0                     TEST EAX,EAX
004FC599  75 0D                     JNZ 0x004fc5a8
004FC59B  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC5A0  85 C0                     TEST EAX,EAX
004FC5A2  75 04                     JNZ 0x004fc5a8
004FC5A4  33 C0                     XOR EAX,EAX
004FC5A6  EB 05                     JMP 0x004fc5ad
LAB_004fc5a8:
004FC5A8  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc5ad:
004FC5AD  85 C0                     TEST EAX,EAX
004FC5AF  0F 85 56 10 00 00         JNZ 0x004fd60b
004FC5B5  8D 56 18                  LEA EDX,[ESI + 0x18]
004FC5B8  B9 08 00 00 00            MOV ECX,0x8
004FC5BD  8B FA                     MOV EDI,EDX
004FC5BF  52                        PUSH EDX
004FC5C0  F3 AB                     STOSD.REP ES:EDI
004FC5C2  B9 20 76 80 00            MOV ECX,0x807620
004FC5C7  C7 46 28 06 A2 00 00      MOV dword ptr [ESI + 0x28],0xa206
004FC5CE  C7 46 20 01 01 00 00      MOV dword ptr [ESI + 0x20],0x101
004FC5D5  C7 46 24 03 00 00 00      MOV dword ptr [ESI + 0x24],0x3
004FC5DC  E8 6F 75 1E 00            CALL 0x006e3b50
004FC5E1  68 AE 00 00 00            PUSH 0xae
004FC5E6  E8 44 98 F0 FF            CALL 0x00405e2f
004FC5EB  83 C4 04                  ADD ESP,0x4
004FC5EE  E9 18 10 00 00            JMP 0x004fd60b
switchD_004fc575::caseD_b10a:
004FC5F3  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC5F8  85 C0                     TEST EAX,EAX
004FC5FA  0F 85 0B 10 00 00         JNZ 0x004fd60b
004FC600  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC605  85 C0                     TEST EAX,EAX
004FC607  75 16                     JNZ 0x004fc61f
004FC609  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC60E  85 C0                     TEST EAX,EAX
004FC610  75 0D                     JNZ 0x004fc61f
004FC612  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC617  85 C0                     TEST EAX,EAX
004FC619  75 04                     JNZ 0x004fc61f
004FC61B  33 C0                     XOR EAX,EAX
004FC61D  EB 05                     JMP 0x004fc624
LAB_004fc61f:
004FC61F  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc624:
004FC624  85 C0                     TEST EAX,EAX
004FC626  0F 85 DF 0F 00 00         JNZ 0x004fd60b
004FC62C  8D 56 18                  LEA EDX,[ESI + 0x18]
004FC62F  B9 08 00 00 00            MOV ECX,0x8
004FC634  8B FA                     MOV EDI,EDX
004FC636  52                        PUSH EDX
004FC637  F3 AB                     STOSD.REP ES:EDI
004FC639  B9 20 76 80 00            MOV ECX,0x807620
004FC63E  C7 46 28 07 A2 00 00      MOV dword ptr [ESI + 0x28],0xa207
004FC645  C7 46 20 01 01 00 00      MOV dword ptr [ESI + 0x20],0x101
004FC64C  C7 46 24 03 00 00 00      MOV dword ptr [ESI + 0x24],0x3
004FC653  E8 F8 74 1E 00            CALL 0x006e3b50
004FC658  68 AE 00 00 00            PUSH 0xae
004FC65D  E8 CD 97 F0 FF            CALL 0x00405e2f
004FC662  83 C4 04                  ADD ESP,0x4
004FC665  E9 A1 0F 00 00            JMP 0x004fd60b
switchD_004fc575::caseD_b10c:
004FC66A  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC66F  85 C0                     TEST EAX,EAX
004FC671  0F 85 94 0F 00 00         JNZ 0x004fd60b
004FC677  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC67C  85 C0                     TEST EAX,EAX
004FC67E  75 16                     JNZ 0x004fc696
004FC680  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC685  85 C0                     TEST EAX,EAX
004FC687  75 0D                     JNZ 0x004fc696
004FC689  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC68E  85 C0                     TEST EAX,EAX
004FC690  75 04                     JNZ 0x004fc696
004FC692  33 C0                     XOR EAX,EAX
004FC694  EB 05                     JMP 0x004fc69b
LAB_004fc696:
004FC696  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc69b:
004FC69B  85 C0                     TEST EAX,EAX
004FC69D  0F 85 68 0F 00 00         JNZ 0x004fd60b
004FC6A3  8D 56 18                  LEA EDX,[ESI + 0x18]
004FC6A6  B9 08 00 00 00            MOV ECX,0x8
004FC6AB  8B FA                     MOV EDI,EDX
004FC6AD  52                        PUSH EDX
004FC6AE  F3 AB                     STOSD.REP ES:EDI
004FC6B0  B9 20 76 80 00            MOV ECX,0x807620
004FC6B5  C7 46 28 08 A2 00 00      MOV dword ptr [ESI + 0x28],0xa208
004FC6BC  C7 46 20 01 01 00 00      MOV dword ptr [ESI + 0x20],0x101
004FC6C3  C7 46 24 03 00 00 00      MOV dword ptr [ESI + 0x24],0x3
004FC6CA  E8 81 74 1E 00            CALL 0x006e3b50
004FC6CF  68 AE 00 00 00            PUSH 0xae
004FC6D4  E8 56 97 F0 FF            CALL 0x00405e2f
004FC6D9  83 C4 04                  ADD ESP,0x4
004FC6DC  E9 2A 0F 00 00            JMP 0x004fd60b
switchD_004fc575::caseD_b107:
004FC6E1  68 E4 2B 40 00            PUSH 0x402be4
004FC6E6  6A 00                     PUSH 0x0
004FC6E8  68 C4 1C 7C 00            PUSH 0x7c1cc4
004FC6ED  E8 8A 90 F0 FF            CALL 0x0040577c
004FC6F2  83 C4 08                  ADD ESP,0x8
004FC6F5  8B CE                     MOV ECX,ESI
004FC6F7  50                        PUSH EAX
004FC6F8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FC6FB  6A 06                     PUSH 0x6
004FC6FD  50                        PUSH EAX
004FC6FE  6A 04                     PUSH 0x4
004FC700  E8 D4 5B F0 FF            CALL 0x004022d9
004FC705  E9 01 0F 00 00            JMP 0x004fd60b
switchD_004fc575::caseD_b109:
004FC70A  68 66 4A 40 00            PUSH 0x404a66
004FC70F  6A 00                     PUSH 0x0
004FC711  68 A4 1C 7C 00            PUSH 0x7c1ca4
004FC716  E9 D8 F5 FF FF            JMP 0x004fbcf3
switchD_004fc575::caseD_b10b:
004FC71B  68 66 4A 40 00            PUSH 0x404a66
004FC720  6A 00                     PUSH 0x0
004FC722  68 84 1C 7C 00            PUSH 0x7c1c84
004FC727  E8 50 90 F0 FF            CALL 0x0040577c
004FC72C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FC72F  83 C4 08                  ADD ESP,0x8
004FC732  8B CE                     MOV ECX,ESI
004FC734  50                        PUSH EAX
004FC735  6A 06                     PUSH 0x6
004FC737  52                        PUSH EDX
004FC738  6A 04                     PUSH 0x4
004FC73A  E8 9A 5B F0 FF            CALL 0x004022d9
004FC73F  E9 C7 0E 00 00            JMP 0x004fd60b
switchD_004fc575::caseD_b10d:
004FC744  68 66 4A 40 00            PUSH 0x404a66
004FC749  6A 00                     PUSH 0x0
004FC74B  68 64 1C 7C 00            PUSH 0x7c1c64
004FC750  E8 27 90 F0 FF            CALL 0x0040577c
004FC755  83 C4 08                  ADD ESP,0x8
004FC758  8B CE                     MOV ECX,ESI
004FC75A  50                        PUSH EAX
004FC75B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FC75E  6A 06                     PUSH 0x6
004FC760  50                        PUSH EAX
004FC761  6A 04                     PUSH 0x4
004FC763  E8 71 5B F0 FF            CALL 0x004022d9
004FC768  E9 9E 0E 00 00            JMP 0x004fd60b
LAB_004fc76d:
004FC76D  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC772  85 C0                     TEST EAX,EAX
004FC774  0F 85 91 0E 00 00         JNZ 0x004fd60b
004FC77A  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC77F  85 C0                     TEST EAX,EAX
004FC781  75 16                     JNZ 0x004fc799
004FC783  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC788  85 C0                     TEST EAX,EAX
004FC78A  75 0D                     JNZ 0x004fc799
004FC78C  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC791  85 C0                     TEST EAX,EAX
004FC793  75 04                     JNZ 0x004fc799
004FC795  33 C0                     XOR EAX,EAX
004FC797  EB 05                     JMP 0x004fc79e
LAB_004fc799:
004FC799  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc79e:
004FC79E  85 C0                     TEST EAX,EAX
004FC7A0  0F 85 65 0E 00 00         JNZ 0x004fd60b
004FC7A6  8D 56 18                  LEA EDX,[ESI + 0x18]
004FC7A9  B9 08 00 00 00            MOV ECX,0x8
004FC7AE  8B FA                     MOV EDI,EDX
004FC7B0  52                        PUSH EDX
004FC7B1  F3 AB                     STOSD.REP ES:EDI
004FC7B3  B9 20 76 80 00            MOV ECX,0x807620
004FC7B8  C7 46 28 09 A2 00 00      MOV dword ptr [ESI + 0x28],0xa209
004FC7BF  C7 46 20 01 01 00 00      MOV dword ptr [ESI + 0x20],0x101
004FC7C6  C7 46 24 03 00 00 00      MOV dword ptr [ESI + 0x24],0x3
004FC7CD  E8 7E 73 1E 00            CALL 0x006e3b50
004FC7D2  68 AE 00 00 00            PUSH 0xae
004FC7D7  E8 53 96 F0 FF            CALL 0x00405e2f
004FC7DC  83 C4 04                  ADD ESP,0x4
004FC7DF  E9 27 0E 00 00            JMP 0x004fd60b
LAB_004fc7e4:
004FC7E4  81 C3 F1 4E FF FF         ADD EBX,0xffff4ef1
004FC7EA  83 FB 55                  CMP EBX,0x55
004FC7ED  0F 87 18 0E 00 00         JA 0x004fd60b
004FC7F3  33 C9                     XOR ECX,ECX
004FC7F5  8A 8B 80 D7 4F 00         MOV CL,byte ptr [EBX + 0x4fd780]
switchD_004fc7fb::switchD:
004FC7FB  FF 24 8D 40 D7 4F 00      JMP dword ptr [ECX*0x4 + 0x4fd740]
switchD_004fc7fb::caseD_b117:
004FC802  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FC808  85 C9                     TEST ECX,ECX
004FC80A  0F 84 FB 0D 00 00         JZ 0x004fd60b
004FC810  8B 11                     MOV EDX,dword ptr [ECX]
004FC812  6A 01                     PUSH 0x1
004FC814  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
004FC817  E9 EF 0D 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b119:
004FC81C  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FC822  85 C9                     TEST ECX,ECX
004FC824  0F 84 E1 0D 00 00         JZ 0x004fd60b
004FC82A  8B 01                     MOV EAX,dword ptr [ECX]
004FC82C  6A 01                     PUSH 0x1
004FC82E  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
004FC831  E9 D5 0D 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b12d:
004FC836  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC83B  85 C0                     TEST EAX,EAX
004FC83D  0F 85 C8 0D 00 00         JNZ 0x004fd60b
004FC843  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC848  85 C0                     TEST EAX,EAX
004FC84A  75 16                     JNZ 0x004fc862
004FC84C  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC851  85 C0                     TEST EAX,EAX
004FC853  75 0D                     JNZ 0x004fc862
004FC855  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC85A  85 C0                     TEST EAX,EAX
004FC85C  75 04                     JNZ 0x004fc862
004FC85E  33 C0                     XOR EAX,EAX
004FC860  EB 05                     JMP 0x004fc867
LAB_004fc862:
004FC862  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc867:
004FC867  85 C0                     TEST EAX,EAX
004FC869  0F 85 9C 0D 00 00         JNZ 0x004fd60b
004FC86F  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FC875  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FC87B  84 C0                     TEST AL,AL
004FC87D  75 0B                     JNZ 0x004fc88a
004FC87F  6A 00                     PUSH 0x0
004FC881  6A 00                     PUSH 0x0
004FC883  8B CE                     MOV ECX,ESI
004FC885  E8 8B 55 F0 FF            CALL 0x00401e15
LAB_004fc88a:
004FC88A  B9 08 00 00 00            MOV ECX,0x8
004FC88F  33 C0                     XOR EAX,EAX
004FC891  8D 7D 9C                  LEA EDI,[EBP + -0x64]
004FC894  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FC89E  F3 AB                     STOSD.REP ES:EDI
004FC8A0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FC8A3  AA                        STOSB ES:EDI
004FC8A4  83 79 14 03               CMP dword ptr [ECX + 0x14],0x3
004FC8A8  75 1A                     JNZ 0x004fc8c4
004FC8AA  6A FF                     PUSH -0x1
004FC8AC  8D 55 9C                  LEA EDX,[EBP + -0x64]
004FC8AF  6A 00                     PUSH 0x0
004FC8B1  52                        PUSH EDX
004FC8B2  C6 45 9C 06               MOV byte ptr [EBP + -0x64],0x6
004FC8B6  C6 86 11 0C 00 00 01      MOV byte ptr [ESI + 0xc11],0x1
004FC8BD  6A 17                     PUSH 0x17
004FC8BF  E9 54 06 00 00            JMP 0x004fcf18
LAB_004fc8c4:
004FC8C4  6A FF                     PUSH -0x1
004FC8C6  8D 55 9C                  LEA EDX,[EBP + -0x64]
004FC8C9  6A 00                     PUSH 0x0
004FC8CB  52                        PUSH EDX
004FC8CC  C6 45 9C 07               MOV byte ptr [EBP + -0x64],0x7
004FC8D0  C6 86 11 0C 00 00 00      MOV byte ptr [ESI + 0xc11],0x0
004FC8D7  6A 17                     PUSH 0x17
004FC8D9  E9 3A 06 00 00            JMP 0x004fcf18
switchD_004fc7fb::caseD_b12f:
004FC8DE  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC8E3  85 C0                     TEST EAX,EAX
004FC8E5  0F 85 20 0D 00 00         JNZ 0x004fd60b
004FC8EB  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC8F0  85 C0                     TEST EAX,EAX
004FC8F2  75 16                     JNZ 0x004fc90a
004FC8F4  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC8F9  85 C0                     TEST EAX,EAX
004FC8FB  75 0D                     JNZ 0x004fc90a
004FC8FD  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC902  85 C0                     TEST EAX,EAX
004FC904  75 04                     JNZ 0x004fc90a
004FC906  33 C0                     XOR EAX,EAX
004FC908  EB 05                     JMP 0x004fc90f
LAB_004fc90a:
004FC90A  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc90f:
004FC90F  85 C0                     TEST EAX,EAX
004FC911  0F 85 F4 0C 00 00         JNZ 0x004fd60b
004FC917  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FC91D  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FC923  84 C0                     TEST AL,AL
004FC925  75 0B                     JNZ 0x004fc932
004FC927  6A 00                     PUSH 0x0
004FC929  6A 00                     PUSH 0x0
004FC92B  8B CE                     MOV ECX,ESI
004FC92D  E8 E3 54 F0 FF            CALL 0x00401e15
LAB_004fc932:
004FC932  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FC935  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FC93F  6A FF                     PUSH -0x1
004FC941  8D 55 F7                  LEA EDX,[EBP + -0x9]
004FC944  8A 48 10                  MOV CL,byte ptr [EAX + 0x10]
004FC947  6A 00                     PUSH 0x0
004FC949  80 E9 2F                  SUB CL,0x2f
004FC94C  52                        PUSH EDX
004FC94D  88 4D F7                  MOV byte ptr [EBP + -0x9],CL
004FC950  6A 09                     PUSH 0x9
004FC952  E9 C1 05 00 00            JMP 0x004fcf18
switchD_004fc7fb::caseD_b110:
004FC957  A1 84 87 80 00            MOV EAX,[0x00808784]
004FC95C  85 C0                     TEST EAX,EAX
004FC95E  0F 85 A7 0C 00 00         JNZ 0x004fd60b
004FC964  A1 88 87 80 00            MOV EAX,[0x00808788]
004FC969  85 C0                     TEST EAX,EAX
004FC96B  75 16                     JNZ 0x004fc983
004FC96D  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FC972  85 C0                     TEST EAX,EAX
004FC974  75 0D                     JNZ 0x004fc983
004FC976  A1 90 87 80 00            MOV EAX,[0x00808790]
004FC97B  85 C0                     TEST EAX,EAX
004FC97D  75 04                     JNZ 0x004fc983
004FC97F  33 C0                     XOR EAX,EAX
004FC981  EB 05                     JMP 0x004fc988
LAB_004fc983:
004FC983  B8 01 00 00 00            MOV EAX,0x1
LAB_004fc988:
004FC988  85 C0                     TEST EAX,EAX
004FC98A  0F 85 7B 0C 00 00         JNZ 0x004fd60b
004FC990  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FC993  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FC999  81 7F 10 10 B1 00 00      CMP dword ptr [EDI + 0x10],0xb110
004FC9A0  75 10                     JNZ 0x004fc9b2
004FC9A2  8A 86 64 0B 00 00         MOV AL,byte ptr [ESI + 0xb64]
004FC9A8  84 C0                     TEST AL,AL
004FC9AA  75 1B                     JNZ 0x004fc9c7
004FC9AC  6A 00                     PUSH 0x0
004FC9AE  6A 01                     PUSH 0x1
004FC9B0  EB 0E                     JMP 0x004fc9c0
LAB_004fc9b2:
004FC9B2  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FC9B8  84 C0                     TEST AL,AL
004FC9BA  75 0B                     JNZ 0x004fc9c7
004FC9BC  6A 00                     PUSH 0x0
004FC9BE  6A 00                     PUSH 0x0
LAB_004fc9c0:
004FC9C0  8B CE                     MOV ECX,ESI
004FC9C2  E8 4E 54 F0 FF            CALL 0x00401e15
LAB_004fc9c7:
004FC9C7  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FC9D1  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004FC9D4  83 F9 03                  CMP ECX,0x3
004FC9D7  6A FF                     PUSH -0x1
004FC9D9  8D 4D D6                  LEA ECX,[EBP + -0x2a]
004FC9DC  6A 00                     PUSH 0x0
004FC9DE  0F 94 C0                  SETZ AL
004FC9E1  51                        PUSH ECX
004FC9E2  88 45 D6                  MOV byte ptr [EBP + -0x2a],AL
004FC9E5  6A 29                     PUSH 0x29
004FC9E7  E9 2C 05 00 00            JMP 0x004fcf18
switchD_004fc7fb::caseD_b113:
004FC9EC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FC9EF  83 7A 14 03               CMP dword ptr [EDX + 0x14],0x3
004FC9F3  75 1E                     JNZ 0x004fca13
004FC9F5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004FC9FB  8D 86 27 02 00 00         LEA EAX,[ESI + 0x227]
004FCA01  50                        PUSH EAX
004FCA02  E8 F9 9A 1E 00            CALL 0x006e6500
004FCA07  A0 27 73 80 00            MOV AL,[0x00807327]
004FCA0C  0C 08                     OR AL,0x8
004FCA0E  E9 2C FB FF FF            JMP 0x004fc53f
LAB_004fca13:
004FCA13  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004FCA19  6A 00                     PUSH 0x0
004FCA1B  E8 E0 9A 1E 00            CALL 0x006e6500
004FCA20  A0 27 73 80 00            MOV AL,[0x00807327]
004FCA25  24 F7                     AND AL,0xf7
004FCA27  E9 13 FB FF FF            JMP 0x004fc53f
switchD_004fc7fb::caseD_b15f:
004FCA2C  A1 84 87 80 00            MOV EAX,[0x00808784]
004FCA31  85 C0                     TEST EAX,EAX
004FCA33  0F 85 D2 0B 00 00         JNZ 0x004fd60b
004FCA39  A1 88 87 80 00            MOV EAX,[0x00808788]
004FCA3E  85 C0                     TEST EAX,EAX
004FCA40  75 16                     JNZ 0x004fca58
004FCA42  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FCA47  85 C0                     TEST EAX,EAX
004FCA49  75 0D                     JNZ 0x004fca58
004FCA4B  A1 90 87 80 00            MOV EAX,[0x00808790]
004FCA50  85 C0                     TEST EAX,EAX
004FCA52  75 04                     JNZ 0x004fca58
004FCA54  33 C0                     XOR EAX,EAX
004FCA56  EB 05                     JMP 0x004fca5d
LAB_004fca58:
004FCA58  B8 01 00 00 00            MOV EAX,0x1
LAB_004fca5d:
004FCA5D  85 C0                     TEST EAX,EAX
004FCA5F  0F 85 A6 0B 00 00         JNZ 0x004fd60b
004FCA65  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FCA6B  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FCA71  84 C0                     TEST AL,AL
004FCA73  75 0B                     JNZ 0x004fca80
004FCA75  6A 00                     PUSH 0x0
004FCA77  6A 00                     PUSH 0x0
004FCA79  8B CE                     MOV ECX,ESI
004FCA7B  E8 95 53 F0 FF            CALL 0x00401e15
LAB_004fca80:
004FCA80  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCA83  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FCA8D  6A FF                     PUSH -0x1
004FCA8F  8D 55 EE                  LEA EDX,[EBP + -0x12]
004FCA92  8A 48 10                  MOV CL,byte ptr [EAX + 0x10]
004FCA95  6A 00                     PUSH 0x0
004FCA97  80 E9 5F                  SUB CL,0x5f
004FCA9A  52                        PUSH EDX
004FCA9B  C6 45 EE 01               MOV byte ptr [EBP + -0x12],0x1
004FCA9F  88 4D EF                  MOV byte ptr [EBP + -0x11],CL
004FCAA2  6A 27                     PUSH 0x27
004FCAA4  E9 6F 04 00 00            JMP 0x004fcf18
switchD_004fc7fb::caseD_b12e:
004FCAA9  68 49 12 40 00            PUSH 0x401249
004FCAAE  68 A5 3A 00 00            PUSH 0x3aa5
004FCAB3  6A 00                     PUSH 0x0
004FCAB5  6A 01                     PUSH 0x1
004FCAB7  6A 00                     PUSH 0x0
004FCAB9  68 C0 23 7C 00            PUSH 0x7c23c0
004FCABE  E8 B9 8C F0 FF            CALL 0x0040577c
004FCAC3  83 C4 08                  ADD ESP,0x8
004FCAC6  50                        PUSH EAX
004FCAC7  E8 34 61 1F 00            CALL 0x006f2c00
004FCACC  83 C4 0C                  ADD ESP,0xc
004FCACF  8B CE                     MOV ECX,ESI
004FCAD1  50                        PUSH EAX
004FCAD2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCAD5  6A 01                     PUSH 0x1
004FCAD7  50                        PUSH EAX
004FCAD8  6A 05                     PUSH 0x5
004FCADA  E8 33 8D F0 FF            CALL 0x00405812
004FCADF  E9 27 0B 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b12a:
004FCAE4  68 88 1E 40 00            PUSH 0x401e88
004FCAE9  68 4C 27 00 00            PUSH 0x274c
004FCAEE  6A 00                     PUSH 0x0
004FCAF0  68 B4 23 7C 00            PUSH 0x7c23b4
004FCAF5  E8 82 8C F0 FF            CALL 0x0040577c
004FCAFA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FCAFD  83 C4 08                  ADD ESP,0x8
004FCB00  50                        PUSH EAX
004FCB01  6A 01                     PUSH 0x1
004FCB03  51                        PUSH ECX
004FCB04  6A 03                     PUSH 0x3
004FCB06  8B CE                     MOV ECX,ESI
004FCB08  E8 95 93 F0 FF            CALL 0x00405ea2
004FCB0D  E9 F9 0A 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b13f:
004FCB12  68 88 1E 40 00            PUSH 0x401e88
004FCB17  68 4C 27 00 00            PUSH 0x274c
004FCB1C  6A 00                     PUSH 0x0
004FCB1E  68 B4 23 7C 00            PUSH 0x7c23b4
004FCB23  E8 54 8C F0 FF            CALL 0x0040577c
004FCB28  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FCB2B  83 C4 08                  ADD ESP,0x8
004FCB2E  8B CE                     MOV ECX,ESI
004FCB30  50                        PUSH EAX
004FCB31  6A 01                     PUSH 0x1
004FCB33  52                        PUSH EDX
004FCB34  6A 05                     PUSH 0x5
004FCB36  E8 67 93 F0 FF            CALL 0x00405ea2
004FCB3B  E9 CB 0A 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b118:
004FCB40  A0 4E 87 80 00            MOV AL,[0x0080874e]
004FCB45  3C 03                     CMP AL,0x3
004FCB47  B8 C7 25 40 00            MOV EAX,0x4025c7
004FCB4C  74 05                     JZ 0x004fcb53
004FCB4E  B8 88 1E 40 00            MOV EAX,0x401e88
LAB_004fcb53:
004FCB53  50                        PUSH EAX
004FCB54  6A 00                     PUSH 0x0
004FCB56  68 A4 23 7C 00            PUSH 0x7c23a4
004FCB5B  E8 1C 8C F0 FF            CALL 0x0040577c
004FCB60  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
004FCB66  83 C4 08                  ADD ESP,0x8
004FCB69  80 FB 03                  CMP BL,0x3
004FCB6C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FCB6F  50                        PUSH EAX
004FCB70  0F 95 C0                  SETNZ AL
004FCB73  48                        DEC EAX
004FCB74  83 E0 05                  AND EAX,0x5
004FCB77  40                        INC EAX
004FCB78  50                        PUSH EAX
004FCB79  51                        PUSH ECX
004FCB7A  6A 03                     PUSH 0x3
004FCB7C  8B CE                     MOV ECX,ESI
004FCB7E  E8 56 57 F0 FF            CALL 0x004022d9
004FCB83  E9 83 0A 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b11a:
004FCB88  68 C7 25 40 00            PUSH 0x4025c7
004FCB8D  6A 00                     PUSH 0x0
004FCB8F  68 94 23 7C 00            PUSH 0x7c2394
004FCB94  E8 E3 8B F0 FF            CALL 0x0040577c
004FCB99  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004FCB9F  83 C4 08                  ADD ESP,0x8
004FCBA2  80 FA 03                  CMP DL,0x3
004FCBA5  8B CE                     MOV ECX,ESI
004FCBA7  0F 95 C2                  SETNZ DL
004FCBAA  4A                        DEC EDX
004FCBAB  50                        PUSH EAX
004FCBAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCBAF  83 E2 05                  AND EDX,0x5
004FCBB2  42                        INC EDX
004FCBB3  52                        PUSH EDX
004FCBB4  50                        PUSH EAX
004FCBB5  6A 03                     PUSH 0x3
004FCBB7  E8 1D 57 F0 FF            CALL 0x004022d9
004FCBBC  E9 4A 0A 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b10f:
004FCBC1  68 66 4A 40 00            PUSH 0x404a66
004FCBC6  6A 00                     PUSH 0x0
004FCBC8  68 44 1C 7C 00            PUSH 0x7c1c44
004FCBCD  E9 21 F1 FF FF            JMP 0x004fbcf3
switchD_004fc7fb::caseD_b114:
004FCBD2  68 E4 2B 40 00            PUSH 0x402be4
004FCBD7  6A 00                     PUSH 0x0
004FCBD9  68 24 1C 7C 00            PUSH 0x7c1c24
004FCBDE  E8 99 8B F0 FF            CALL 0x0040577c
004FCBE3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FCBE6  83 C4 08                  ADD ESP,0x8
004FCBE9  8B CE                     MOV ECX,ESI
004FCBEB  50                        PUSH EAX
004FCBEC  6A 06                     PUSH 0x6
004FCBEE  52                        PUSH EDX
004FCBEF  6A 04                     PUSH 0x4
004FCBF1  E8 E3 56 F0 FF            CALL 0x004022d9
004FCBF6  E9 10 0A 00 00            JMP 0x004fd60b
switchD_004fc7fb::caseD_b112:
004FCBFB  68 52 4A 40 00            PUSH 0x404a52
004FCC00  6A 00                     PUSH 0x0
004FCC02  68 18 1C 7C 00            PUSH 0x7c1c18
004FCC07  E8 70 8B F0 FF            CALL 0x0040577c
004FCC0C  83 C4 08                  ADD ESP,0x8
004FCC0F  8B CE                     MOV ECX,ESI
004FCC11  50                        PUSH EAX
004FCC12  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCC15  6A 01                     PUSH 0x1
004FCC17  50                        PUSH EAX
004FCC18  6A 04                     PUSH 0x4
004FCC1A  E8 BA 56 F0 FF            CALL 0x004022d9
004FCC1F  E9 E7 09 00 00            JMP 0x004fd60b
LAB_004fcc24:
004FCC24  A1 84 87 80 00            MOV EAX,[0x00808784]
004FCC29  85 C0                     TEST EAX,EAX
004FCC2B  0F 85 DA 09 00 00         JNZ 0x004fd60b
004FCC31  A1 88 87 80 00            MOV EAX,[0x00808788]
004FCC36  85 C0                     TEST EAX,EAX
004FCC38  75 16                     JNZ 0x004fcc50
004FCC3A  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FCC3F  85 C0                     TEST EAX,EAX
004FCC41  75 0D                     JNZ 0x004fcc50
004FCC43  A1 90 87 80 00            MOV EAX,[0x00808790]
004FCC48  85 C0                     TEST EAX,EAX
004FCC4A  75 04                     JNZ 0x004fcc50
004FCC4C  33 C0                     XOR EAX,EAX
004FCC4E  EB 05                     JMP 0x004fcc55
LAB_004fcc50:
004FCC50  B8 01 00 00 00            MOV EAX,0x1
LAB_004fcc55:
004FCC55  85 C0                     TEST EAX,EAX
004FCC57  0F 85 AE 09 00 00         JNZ 0x004fd60b
004FCC5D  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FCC63  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FCC69  84 C0                     TEST AL,AL
004FCC6B  75 0B                     JNZ 0x004fcc78
004FCC6D  6A 00                     PUSH 0x0
004FCC6F  6A 00                     PUSH 0x0
004FCC71  8B CE                     MOV ECX,ESI
004FCC73  E8 9D 51 F0 FF            CALL 0x00401e15
LAB_004fcc78:
004FCC78  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FCC7B  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FCC85  6A FF                     PUSH -0x1
004FCC87  8D 45 F2                  LEA EAX,[EBP + -0xe]
004FCC8A  8A 51 10                  MOV DL,byte ptr [ECX + 0x10]
004FCC8D  6A 00                     PUSH 0x0
004FCC8F  80 EA 6F                  SUB DL,0x6f
004FCC92  50                        PUSH EAX
004FCC93  C6 45 F2 00               MOV byte ptr [EBP + -0xe],0x0
004FCC97  88 55 F3                  MOV byte ptr [EBP + -0xd],DL
004FCC9A  6A 27                     PUSH 0x27
004FCC9C  E9 77 02 00 00            JMP 0x004fcf18
LAB_004fcca1:
004FCCA1  8D 83 81 4E FF FF         LEA EAX,[EBX + 0xffff4e81]
004FCCA7  3D B4 00 00 00            CMP EAX,0xb4
004FCCAC  0F 87 59 09 00 00         JA 0x004fd60b
004FCCB2  33 C9                     XOR ECX,ECX
004FCCB4  8A 88 30 D8 4F 00         MOV CL,byte ptr [EAX + 0x4fd830]
switchD_004fccba::switchD:
004FCCBA  FF 24 8D D8 D7 4F 00      JMP dword ptr [ECX*0x4 + 0x4fd7d8]
switchD_004fccba::caseD_b1ff:
004FCCC1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FCCC4  83 C9 FF                  OR ECX,0xffffffff
004FCCC7  33 C0                     XOR EAX,EAX
004FCCC9  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
LAB_004fcccc:
004FCCCC  8B F8                     MOV EDI,EAX
004FCCCE  81 E7 FF FF 00 00         AND EDI,0xffff
004FCCD4  8A 9C 37 A2 0B 00 00      MOV BL,byte ptr [EDI + ESI*0x1 + 0xba2]
004FCCDB  84 DB                     TEST BL,BL
004FCCDD  74 01                     JZ 0x004fcce0
004FCCDF  41                        INC ECX
LAB_004fcce0:
004FCCE0  3B CA                     CMP ECX,EDX
004FCCE2  74 07                     JZ 0x004fcceb
004FCCE4  40                        INC EAX
004FCCE5  66 3D 06 00               CMP AX,0x6
004FCCE9  72 E1                     JC 0x004fcccc
LAB_004fcceb:
004FCCEB  66 3D 05 00               CMP AX,0x5
004FCCEF  76 0F                     JBE 0x004fcd00
004FCCF1  33 C0                     XOR EAX,EAX
004FCCF3  8B CE                     MOV ECX,ESI
004FCCF5  50                        PUSH EAX
004FCCF6  E8 95 44 F0 FF            CALL 0x00401190
004FCCFB  E9 0B 09 00 00            JMP 0x004fd60b
LAB_004fcd00:
004FCD00  25 FF FF 00 00            AND EAX,0xffff
004FCD05  8B CE                     MOV ECX,ESI
004FCD07  50                        PUSH EAX
004FCD08  E8 83 44 F0 FF            CALL 0x00401190
004FCD0D  E9 F9 08 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b203:
004FCD12  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FCD15  83 C9 FF                  OR ECX,0xffffffff
004FCD18  33 C0                     XOR EAX,EAX
004FCD1A  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
LAB_004fcd1d:
004FCD1D  8B F8                     MOV EDI,EAX
004FCD1F  81 E7 FF FF 00 00         AND EDI,0xffff
004FCD25  8A 9C 37 FE 0B 00 00      MOV BL,byte ptr [EDI + ESI*0x1 + 0xbfe]
004FCD2C  84 DB                     TEST BL,BL
004FCD2E  74 01                     JZ 0x004fcd31
004FCD30  41                        INC ECX
LAB_004fcd31:
004FCD31  3B CA                     CMP ECX,EDX
004FCD33  74 07                     JZ 0x004fcd3c
004FCD35  40                        INC EAX
004FCD36  66 3D 06 00               CMP AX,0x6
004FCD3A  72 E1                     JC 0x004fcd1d
LAB_004fcd3c:
004FCD3C  66 3D 05 00               CMP AX,0x5
004FCD40  76 0F                     JBE 0x004fcd51
004FCD42  33 C0                     XOR EAX,EAX
004FCD44  8B CE                     MOV ECX,ESI
004FCD46  50                        PUSH EAX
004FCD47  E8 BA 64 F0 FF            CALL 0x00403206
004FCD4C  E9 BA 08 00 00            JMP 0x004fd60b
LAB_004fcd51:
004FCD51  25 FF FF 00 00            AND EAX,0xffff
004FCD56  8B CE                     MOV ECX,ESI
004FCD58  50                        PUSH EAX
004FCD59  E8 A8 64 F0 FF            CALL 0x00403206
004FCD5E  E9 A8 08 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b220:
004FCD63  A1 84 87 80 00            MOV EAX,[0x00808784]
004FCD68  85 C0                     TEST EAX,EAX
004FCD6A  0F 85 9B 08 00 00         JNZ 0x004fd60b
004FCD70  A1 88 87 80 00            MOV EAX,[0x00808788]
004FCD75  85 C0                     TEST EAX,EAX
004FCD77  75 16                     JNZ 0x004fcd8f
004FCD79  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FCD7E  85 C0                     TEST EAX,EAX
004FCD80  75 0D                     JNZ 0x004fcd8f
004FCD82  A1 90 87 80 00            MOV EAX,[0x00808790]
004FCD87  85 C0                     TEST EAX,EAX
004FCD89  75 04                     JNZ 0x004fcd8f
004FCD8B  33 C0                     XOR EAX,EAX
004FCD8D  EB 05                     JMP 0x004fcd94
LAB_004fcd8f:
004FCD8F  B8 01 00 00 00            MOV EAX,0x1
LAB_004fcd94:
004FCD94  85 C0                     TEST EAX,EAX
004FCD96  0F 85 6F 08 00 00         JNZ 0x004fd60b
004FCD9C  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FCDA2  8A 86 64 0B 00 00         MOV AL,byte ptr [ESI + 0xb64]
004FCDA8  84 C0                     TEST AL,AL
004FCDAA  75 0B                     JNZ 0x004fcdb7
004FCDAC  6A 00                     PUSH 0x0
004FCDAE  6A 01                     PUSH 0x1
004FCDB0  8B CE                     MOV ECX,ESI
004FCDB2  E8 5E 50 F0 FF            CALL 0x00401e15
LAB_004fcdb7:
004FCDB7  B9 08 00 00 00            MOV ECX,0x8
004FCDBC  33 C0                     XOR EAX,EAX
004FCDBE  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
004FCDC4  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FCDCE  F3 AB                     STOSD.REP ES:EDI
004FCDD0  AA                        STOSB ES:EDI
004FCDD1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCDD4  6A FF                     PUSH -0x1
004FCDD6  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
004FCDDC  6A 00                     PUSH 0x0
004FCDDE  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
004FCDE1  52                        PUSH EDX
004FCDE2  81 E9 20 B2 00 00         SUB ECX,0xb220
004FCDE8  C6 85 78 FF FF FF 11      MOV byte ptr [EBP + 0xffffff78],0x11
004FCDEF  89 4D 95                  MOV dword ptr [EBP + -0x6b],ECX
004FCDF2  6A 17                     PUSH 0x17
004FCDF4  E9 1F 01 00 00            JMP 0x004fcf18
switchD_004fccba::caseD_b207:
004FCDF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCDFC  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004FCDFF  8A 11                     MOV DL,byte ptr [ECX]
004FCE01  8B CE                     MOV ECX,ESI
004FCE03  88 96 D4 09 00 00         MOV byte ptr [ESI + 0x9d4],DL
004FCE09  E8 7B 4A F0 FF            CALL 0x00401889
004FCE0E  E9 F8 07 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b18f:
004FCE13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCE16  8A 48 10                  MOV CL,byte ptr [EAX + 0x10]
004FCE19  80 C1 71                  ADD CL,0x71
004FCE1C  51                        PUSH ECX
004FCE1D  8B CE                     MOV ECX,ESI
004FCE1F  E8 59 6F F0 FF            CALL 0x00403d7d
004FCE24  8B D8                     MOV EBX,EAX
004FCE26  A1 84 87 80 00            MOV EAX,[0x00808784]
004FCE2B  85 C0                     TEST EAX,EAX
004FCE2D  0F 85 D8 07 00 00         JNZ 0x004fd60b
004FCE33  A1 88 87 80 00            MOV EAX,[0x00808788]
004FCE38  85 C0                     TEST EAX,EAX
004FCE3A  75 16                     JNZ 0x004fce52
004FCE3C  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FCE41  85 C0                     TEST EAX,EAX
004FCE43  75 0D                     JNZ 0x004fce52
004FCE45  A1 90 87 80 00            MOV EAX,[0x00808790]
004FCE4A  85 C0                     TEST EAX,EAX
004FCE4C  75 04                     JNZ 0x004fce52
004FCE4E  33 C0                     XOR EAX,EAX
004FCE50  EB 05                     JMP 0x004fce57
LAB_004fce52:
004FCE52  B8 01 00 00 00            MOV EAX,0x1
LAB_004fce57:
004FCE57  85 C0                     TEST EAX,EAX
004FCE59  0F 85 AC 07 00 00         JNZ 0x004fd60b
004FCE5F  85 DB                     TEST EBX,EBX
004FCE61  0F 8C A4 07 00 00         JL 0x004fd60b
004FCE67  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FCE6D  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FCE73  84 C0                     TEST AL,AL
004FCE75  75 0B                     JNZ 0x004fce82
004FCE77  6A 00                     PUSH 0x0
004FCE79  6A 00                     PUSH 0x0
004FCE7B  8B CE                     MOV ECX,ESI
004FCE7D  E8 93 4F F0 FF            CALL 0x00401e15
LAB_004fce82:
004FCE82  6A FF                     PUSH -0x1
004FCE84  8D 55 FE                  LEA EDX,[EBP + -0x2]
004FCE87  6A 00                     PUSH 0x0
004FCE89  52                        PUSH EDX
004FCE8A  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FCE94  C6 45 FE 02               MOV byte ptr [EBP + -0x2],0x2
004FCE98  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
004FCE9B  6A 27                     PUSH 0x27
004FCE9D  EB 79                     JMP 0x004fcf18
switchD_004fccba::caseD_b211:
004FCE9F  A1 84 87 80 00            MOV EAX,[0x00808784]
004FCEA4  85 C0                     TEST EAX,EAX
004FCEA6  0F 85 5F 07 00 00         JNZ 0x004fd60b
004FCEAC  A1 88 87 80 00            MOV EAX,[0x00808788]
004FCEB1  85 C0                     TEST EAX,EAX
004FCEB3  75 16                     JNZ 0x004fcecb
004FCEB5  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FCEBA  85 C0                     TEST EAX,EAX
004FCEBC  75 0D                     JNZ 0x004fcecb
004FCEBE  A1 90 87 80 00            MOV EAX,[0x00808790]
004FCEC3  85 C0                     TEST EAX,EAX
004FCEC5  75 04                     JNZ 0x004fcecb
004FCEC7  33 C0                     XOR EAX,EAX
004FCEC9  EB 05                     JMP 0x004fced0
LAB_004fcecb:
004FCECB  B8 01 00 00 00            MOV EAX,0x1
LAB_004fced0:
004FCED0  85 C0                     TEST EAX,EAX
004FCED2  0F 85 33 07 00 00         JNZ 0x004fd60b
004FCED8  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
004FCEDE  8A 86 52 0C 00 00         MOV AL,byte ptr [ESI + 0xc52]
004FCEE4  84 C0                     TEST AL,AL
004FCEE6  75 0B                     JNZ 0x004fcef3
004FCEE8  6A 00                     PUSH 0x0
004FCEEA  6A 00                     PUSH 0x0
004FCEEC  8B CE                     MOV ECX,ESI
004FCEEE  E8 22 4F F0 FF            CALL 0x00401e15
LAB_004fcef3:
004FCEF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FCEF6  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004FCF00  6A FF                     PUSH -0x1
004FCF02  8D 55 D7                  LEA EDX,[EBP + -0x29]
004FCF05  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
004FCF08  6A 00                     PUSH 0x0
004FCF0A  81 E9 11 B2 00 00         SUB ECX,0xb211
004FCF10  52                        PUSH EDX
004FCF11  D1 E9                     SHR ECX,0x1
004FCF13  88 4D D7                  MOV byte ptr [EBP + -0x29],CL
004FCF16  6A 2A                     PUSH 0x2a
CPanelTy::GetMessage::cf_common_exit_004FCF18:
004FCF18  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004FCF1E  E8 10 6D F0 FF            CALL 0x00403c33
004FCF23  68 AE 00 00 00            PUSH 0xae
004FCF28  E8 02 8F F0 FF            CALL 0x00405e2f
004FCF2D  83 C4 04                  ADD ESP,0x4
004FCF30  E9 D6 06 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b200:
004FCF35  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FCF38  83 CA FF                  OR EDX,0xffffffff
004FCF3B  33 C0                     XOR EAX,EAX
004FCF3D  33 C9                     XOR ECX,ECX
004FCF3F  66 8B 4F 16               MOV CX,word ptr [EDI + 0x16]
LAB_004fcf43:
004FCF43  8B D8                     MOV EBX,EAX
004FCF45  81 E3 FF FF 00 00         AND EBX,0xffff
004FCF4B  80 BC 33 A2 0B 00 00 00   CMP byte ptr [EBX + ESI*0x1 + 0xba2],0x0
004FCF53  74 01                     JZ 0x004fcf56
004FCF55  42                        INC EDX
LAB_004fcf56:
004FCF56  3B D1                     CMP EDX,ECX
004FCF58  74 07                     JZ 0x004fcf61
004FCF5A  40                        INC EAX
004FCF5B  66 3D 06 00               CMP AX,0x6
004FCF5F  72 E2                     JC 0x004fcf43
LAB_004fcf61:
004FCF61  66 3D 05 00               CMP AX,0x5
004FCF65  76 04                     JBE 0x004fcf6b
004FCF67  33 C0                     XOR EAX,EAX
004FCF69  EB 05                     JMP 0x004fcf70
LAB_004fcf6b:
004FCF6B  25 FF FF 00 00            AND EAX,0xffff
LAB_004fcf70:
004FCF70  8B 8E 99 0B 00 00         MOV ECX,dword ptr [ESI + 0xb99]
004FCF76  25 FF FF 00 00            AND EAX,0xffff
004FCF7B  68 0F 42 40 00            PUSH 0x40420f
004FCF80  6A 00                     PUSH 0x0
004FCF82  8A 94 30 A2 0B 00 00      MOV DL,byte ptr [EAX + ESI*0x1 + 0xba2]
004FCF89  51                        PUSH ECX
004FCF8A  52                        PUSH EDX
004FCF8B  E8 03 85 F0 FF            CALL 0x00405493
004FCF90  83 C4 08                  ADD ESP,0x8
004FCF93  50                        PUSH EAX
004FCF94  E8 E3 87 F0 FF            CALL 0x0040577c
004FCF99  83 C4 08                  ADD ESP,0x8
004FCF9C  8B CE                     MOV ECX,ESI
004FCF9E  50                        PUSH EAX
004FCF9F  6A 01                     PUSH 0x1
004FCFA1  57                        PUSH EDI
004FCFA2  6A 03                     PUSH 0x3
004FCFA4  E8 30 53 F0 FF            CALL 0x004022d9
004FCFA9  E9 5D 06 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b20e:
004FCFAE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FCFB1  83 CA FF                  OR EDX,0xffffffff
004FCFB4  33 C0                     XOR EAX,EAX
004FCFB6  33 C9                     XOR ECX,ECX
004FCFB8  66 8B 4F 16               MOV CX,word ptr [EDI + 0x16]
LAB_004fcfbc:
004FCFBC  8B D8                     MOV EBX,EAX
004FCFBE  81 E3 FF FF 00 00         AND EBX,0xffff
004FCFC4  80 BC 33 A2 0B 00 00 00   CMP byte ptr [EBX + ESI*0x1 + 0xba2],0x0
004FCFCC  74 01                     JZ 0x004fcfcf
004FCFCE  42                        INC EDX
LAB_004fcfcf:
004FCFCF  3B D1                     CMP EDX,ECX
004FCFD1  74 07                     JZ 0x004fcfda
004FCFD3  40                        INC EAX
004FCFD4  66 3D 06 00               CMP AX,0x6
004FCFD8  72 E2                     JC 0x004fcfbc
LAB_004fcfda:
004FCFDA  66 3D 05 00               CMP AX,0x5
004FCFDE  76 04                     JBE 0x004fcfe4
004FCFE0  33 C0                     XOR EAX,EAX
004FCFE2  EB 05                     JMP 0x004fcfe9
LAB_004fcfe4:
004FCFE4  25 FF FF 00 00            AND EAX,0xffff
LAB_004fcfe9:
004FCFE9  8B 8E 99 0B 00 00         MOV ECX,dword ptr [ESI + 0xb99]
004FCFEF  25 FF FF 00 00            AND EAX,0xffff
004FCFF4  68 0F 42 40 00            PUSH 0x40420f
004FCFF9  6A 00                     PUSH 0x0
004FCFFB  8A 94 30 A2 0B 00 00      MOV DL,byte ptr [EAX + ESI*0x1 + 0xba2]
004FD002  51                        PUSH ECX
004FD003  52                        PUSH EDX
004FD004  E8 8A 84 F0 FF            CALL 0x00405493
004FD009  83 C4 08                  ADD ESP,0x8
004FD00C  50                        PUSH EAX
004FD00D  E8 6A 87 F0 FF            CALL 0x0040577c
004FD012  83 C4 08                  ADD ESP,0x8
004FD015  8B CE                     MOV ECX,ESI
004FD017  50                        PUSH EAX
004FD018  6A 06                     PUSH 0x6
004FD01A  57                        PUSH EDI
004FD01B  6A 03                     PUSH 0x3
004FD01D  E8 B7 52 F0 FF            CALL 0x004022d9
004FD022  E9 E4 05 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b204:
004FD027  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FD02A  83 CA FF                  OR EDX,0xffffffff
004FD02D  33 C0                     XOR EAX,EAX
004FD02F  33 C9                     XOR ECX,ECX
004FD031  66 8B 4F 16               MOV CX,word ptr [EDI + 0x16]
LAB_004fd035:
004FD035  8B D8                     MOV EBX,EAX
004FD037  81 E3 FF FF 00 00         AND EBX,0xffff
004FD03D  80 BC 33 FE 0B 00 00 00   CMP byte ptr [EBX + ESI*0x1 + 0xbfe],0x0
004FD045  74 01                     JZ 0x004fd048
004FD047  42                        INC EDX
LAB_004fd048:
004FD048  3B D1                     CMP EDX,ECX
004FD04A  74 07                     JZ 0x004fd053
004FD04C  40                        INC EAX
004FD04D  66 3D 06 00               CMP AX,0x6
004FD051  72 E2                     JC 0x004fd035
LAB_004fd053:
004FD053  66 3D 05 00               CMP AX,0x5
004FD057  76 04                     JBE 0x004fd05d
004FD059  33 C0                     XOR EAX,EAX
004FD05B  EB 05                     JMP 0x004fd062
LAB_004fd05d:
004FD05D  25 FF FF 00 00            AND EAX,0xffff
LAB_004fd062:
004FD062  8B 8E F5 0B 00 00         MOV ECX,dword ptr [ESI + 0xbf5]
004FD068  25 FF FF 00 00            AND EAX,0xffff
004FD06D  68 0F 42 40 00            PUSH 0x40420f
004FD072  6A 00                     PUSH 0x0
004FD074  8A 94 30 FE 0B 00 00      MOV DL,byte ptr [EAX + ESI*0x1 + 0xbfe]
004FD07B  51                        PUSH ECX
004FD07C  52                        PUSH EDX
004FD07D  E8 11 84 F0 FF            CALL 0x00405493
004FD082  83 C4 08                  ADD ESP,0x8
004FD085  50                        PUSH EAX
004FD086  E8 F1 86 F0 FF            CALL 0x0040577c
004FD08B  83 C4 08                  ADD ESP,0x8
004FD08E  8B CE                     MOV ECX,ESI
004FD090  50                        PUSH EAX
004FD091  6A 01                     PUSH 0x1
004FD093  57                        PUSH EDI
004FD094  6A 05                     PUSH 0x5
004FD096  E8 3E 52 F0 FF            CALL 0x004022d9
004FD09B  E9 6B 05 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b210:
004FD0A0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FD0A3  83 CA FF                  OR EDX,0xffffffff
004FD0A6  33 C0                     XOR EAX,EAX
004FD0A8  33 C9                     XOR ECX,ECX
004FD0AA  66 8B 4F 16               MOV CX,word ptr [EDI + 0x16]
LAB_004fd0ae:
004FD0AE  8B D8                     MOV EBX,EAX
004FD0B0  81 E3 FF FF 00 00         AND EBX,0xffff
004FD0B6  80 BC 33 FE 0B 00 00 00   CMP byte ptr [EBX + ESI*0x1 + 0xbfe],0x0
004FD0BE  74 01                     JZ 0x004fd0c1
004FD0C0  42                        INC EDX
LAB_004fd0c1:
004FD0C1  3B D1                     CMP EDX,ECX
004FD0C3  74 07                     JZ 0x004fd0cc
004FD0C5  40                        INC EAX
004FD0C6  66 3D 06 00               CMP AX,0x6
004FD0CA  72 E2                     JC 0x004fd0ae
LAB_004fd0cc:
004FD0CC  66 3D 05 00               CMP AX,0x5
004FD0D0  76 04                     JBE 0x004fd0d6
004FD0D2  33 C0                     XOR EAX,EAX
004FD0D4  EB 05                     JMP 0x004fd0db
LAB_004fd0d6:
004FD0D6  25 FF FF 00 00            AND EAX,0xffff
LAB_004fd0db:
004FD0DB  8B 8E F5 0B 00 00         MOV ECX,dword ptr [ESI + 0xbf5]
004FD0E1  25 FF FF 00 00            AND EAX,0xffff
004FD0E6  68 0F 42 40 00            PUSH 0x40420f
004FD0EB  6A 00                     PUSH 0x0
004FD0ED  8A 94 30 FE 0B 00 00      MOV DL,byte ptr [EAX + ESI*0x1 + 0xbfe]
004FD0F4  51                        PUSH ECX
004FD0F5  52                        PUSH EDX
004FD0F6  E8 98 83 F0 FF            CALL 0x00405493
004FD0FB  83 C4 08                  ADD ESP,0x8
004FD0FE  50                        PUSH EAX
004FD0FF  E8 78 86 F0 FF            CALL 0x0040577c
004FD104  83 C4 08                  ADD ESP,0x8
004FD107  8B CE                     MOV ECX,ESI
004FD109  50                        PUSH EAX
004FD10A  6A 06                     PUSH 0x6
004FD10C  57                        PUSH EDI
004FD10D  6A 05                     PUSH 0x5
004FD10F  E8 C5 51 F0 FF            CALL 0x004022d9
004FD114  E9 F2 04 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b206:
004FD119  68 A4 1B 40 00            PUSH 0x401ba4
004FD11E  6A 00                     PUSH 0x0
004FD120  68 84 23 7C 00            PUSH 0x7c2384
004FD125  E8 52 86 F0 FF            CALL 0x0040577c
004FD12A  83 C4 08                  ADD ESP,0x8
004FD12D  50                        PUSH EAX
004FD12E  6A 00                     PUSH 0x0
004FD130  68 74 23 7C 00            PUSH 0x7c2374
004FD135  E8 42 86 F0 FF            CALL 0x0040577c
004FD13A  83 C4 08                  ADD ESP,0x8
004FD13D  8B CE                     MOV ECX,ESI
004FD13F  50                        PUSH EAX
004FD140  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FD143  6A 01                     PUSH 0x1
004FD145  50                        PUSH EAX
004FD146  6A 05                     PUSH 0x5
004FD148  E8 8F 76 F0 FF            CALL 0x004047dc
004FD14D  E9 B9 04 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b20b:
004FD152  68 A4 1B 40 00            PUSH 0x401ba4
004FD157  6A 00                     PUSH 0x0
004FD159  68 84 23 7C 00            PUSH 0x7c2384
004FD15E  E8 19 86 F0 FF            CALL 0x0040577c
004FD163  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FD166  83 C4 08                  ADD ESP,0x8
004FD169  50                        PUSH EAX
004FD16A  68 64 23 7C 00            PUSH 0x7c2364
004FD16F  6A 01                     PUSH 0x1
004FD171  51                        PUSH ECX
004FD172  6A 05                     PUSH 0x5
004FD174  8B CE                     MOV ECX,ESI
004FD176  E8 61 76 F0 FF            CALL 0x004047dc
004FD17B  E9 8B 04 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b230:
004FD180  80 BE CF 0B 00 00 03      CMP byte ptr [ESI + 0xbcf],0x3
004FD187  0F 94 C2                  SETZ DL
004FD18A  52                        PUSH EDX
004FD18B  6A 00                     PUSH 0x0
004FD18D  68 50 23 7C 00            PUSH 0x7c2350
004FD192  EB 3E                     JMP 0x004fd1d2
switchD_004fccba::caseD_b231:
004FD194  A0 4E 87 80 00            MOV AL,[0x0080874e]
004FD199  3C 03                     CMP AL,0x3
004FD19B  B8 3C 23 7C 00            MOV EAX,0x7c233c
004FD1A0  74 05                     JZ 0x004fd1a7
004FD1A2  B8 28 23 7C 00            MOV EAX,0x7c2328
LAB_004fd1a7:
004FD1A7  8A 96 D0 0B 00 00         MOV DL,byte ptr [ESI + 0xbd0]
004FD1AD  EB 19                     JMP 0x004fd1c8
switchD_004fccba::caseD_b232:
004FD1AF  A0 4E 87 80 00            MOV AL,[0x0080874e]
004FD1B4  3C 03                     CMP AL,0x3
004FD1B6  B8 28 23 7C 00            MOV EAX,0x7c2328
004FD1BB  74 05                     JZ 0x004fd1c2
004FD1BD  B8 14 23 7C 00            MOV EAX,0x7c2314
LAB_004fd1c2:
004FD1C2  8A 96 D1 0B 00 00         MOV DL,byte ptr [ESI + 0xbd1]
LAB_004fd1c8:
004FD1C8  80 FA 03                  CMP DL,0x3
004FD1CB  0F 94 C2                  SETZ DL
004FD1CE  52                        PUSH EDX
004FD1CF  6A 00                     PUSH 0x0
004FD1D1  50                        PUSH EAX
CPanelTy::GetMessage::cf_common_exit_004FD1D2:
004FD1D2  E8 A5 85 F0 FF            CALL 0x0040577c
004FD1D7  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
004FD1DD  83 C4 08                  ADD ESP,0x8
004FD1E0  80 FB 03                  CMP BL,0x3
004FD1E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FD1E6  50                        PUSH EAX
004FD1E7  0F 95 C0                  SETNZ AL
004FD1EA  48                        DEC EAX
004FD1EB  83 E0 05                  AND EAX,0x5
004FD1EE  40                        INC EAX
004FD1EF  50                        PUSH EAX
004FD1F0  51                        PUSH ECX
004FD1F1  6A 03                     PUSH 0x3
004FD1F3  8B CE                     MOV ECX,ESI
004FD1F5  E8 91 44 F0 FF            CALL 0x0040168b
004FD1FA  E9 0C 04 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b233:
004FD1FF  80 BE D2 0B 00 00 03      CMP byte ptr [ESI + 0xbd2],0x3
004FD206  0F 94 C2                  SETZ DL
004FD209  52                        PUSH EDX
004FD20A  6A 00                     PUSH 0x0
004FD20C  68 14 23 7C 00            PUSH 0x7c2314
004FD211  E8 66 85 F0 FF            CALL 0x0040577c
004FD216  83 C4 08                  ADD ESP,0x8
004FD219  8B CE                     MOV ECX,ESI
004FD21B  50                        PUSH EAX
004FD21C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FD21F  6A 06                     PUSH 0x6
004FD221  50                        PUSH EAX
004FD222  6A 03                     PUSH 0x3
004FD224  E8 62 44 F0 FF            CALL 0x0040168b
004FD229  E9 DD 03 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b17f:
004FD22E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FD231  8B 79 18                  MOV EDI,dword ptr [ECX + 0x18]
004FD234  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
004FD23A  85 C9                     TEST ECX,ECX
004FD23C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004FD23F  74 08                     JZ 0x004fd249
004FD241  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
004FD247  EB 06                     JMP 0x004fd24f
LAB_004fd249:
004FD249  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
LAB_004fd24f:
004FD24F  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004FD255  2B C1                     SUB EAX,ECX
004FD257  FE CA                     DEC DL
004FD259  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
004FD25C  F6 DA                     NEG DL
004FD25E  1B D2                     SBB EDX,EDX
004FD260  81 E2 89 00 00 00         AND EDX,0x89
004FD266  83 C2 3A                  ADD EDX,0x3a
004FD269  52                        PUSH EDX
004FD26A  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
004FD26D  51                        PUSH ECX
004FD26E  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
004FD274  52                        PUSH EDX
004FD275  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
004FD278  50                        PUSH EAX
004FD279  8B 07                     MOV EAX,dword ptr [EDI]
004FD27B  2B C2                     SUB EAX,EDX
004FD27D  50                        PUSH EAX
004FD27E  6A 00                     PUSH 0x0
004FD280  51                        PUSH ECX
004FD281  E8 EA 6E 1B 00            CALL 0x006b4170
004FD286  8A 86 FC 0B 00 00         MOV AL,byte ptr [ESI + 0xbfc]
004FD28C  84 C0                     TEST AL,AL
004FD28E  74 0B                     JZ 0x004fd29b
004FD290  33 C9                     XOR ECX,ECX
004FD292  8A 8C 33 92 5A FF FF      MOV CL,byte ptr [EBX + ESI*0x1 + 0xffff5a92]
004FD299  EB 19                     JMP 0x004fd2b4
LAB_004fd29b:
004FD29B  8A 84 33 92 5A FF FF      MOV AL,byte ptr [EBX + ESI*0x1 + 0xffff5a92]
004FD2A2  84 C0                     TEST AL,AL
004FD2A4  74 0C                     JZ 0x004fd2b2
004FD2A6  25 FF 00 00 00            AND EAX,0xff
004FD2AB  83 C0 06                  ADD EAX,0x6
004FD2AE  8B C8                     MOV ECX,EAX
004FD2B0  EB 02                     JMP 0x004fd2b4
LAB_004fd2b2:
004FD2B2  33 C9                     XOR ECX,ECX
LAB_004fd2b4:
004FD2B4  8B 96 38 01 00 00         MOV EDX,dword ptr [ESI + 0x138]
004FD2BA  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004FD2BD  85 D2                     TEST EDX,EDX
004FD2BF  74 08                     JZ 0x004fd2c9
004FD2C1  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
004FD2C7  EB 06                     JMP 0x004fd2cf
LAB_004fd2c9:
004FD2C9  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
LAB_004fd2cf:
004FD2CF  2B C2                     SUB EAX,EDX
004FD2D1  8B 96 17 0B 00 00         MOV EDX,dword ptr [ESI + 0xb17]
004FD2D7  51                        PUSH ECX
004FD2D8  52                        PUSH EDX
004FD2D9  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004FD2DC  E8 BF E0 20 00            CALL 0x0070b3a0
004FD2E1  8B 0F                     MOV ECX,dword ptr [EDI]
004FD2E3  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
004FD2E9  50                        PUSH EAX
004FD2EA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004FD2ED  6A 01                     PUSH 0x1
004FD2EF  50                        PUSH EAX
004FD2F0  2B 4E 50                  SUB ECX,dword ptr [ESI + 0x50]
004FD2F3  51                        PUSH ECX
004FD2F4  52                        PUSH EDX
004FD2F5  E8 2F 5F F0 FF            CALL 0x00403229
004FD2FA  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
004FD300  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004FD303  83 C4 1C                  ADD ESP,0x1c
004FD306  85 C9                     TEST ECX,ECX
004FD308  74 08                     JZ 0x004fd312
004FD30A  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
004FD310  EB 06                     JMP 0x004fd318
LAB_004fd312:
004FD312  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
LAB_004fd318:
004FD318  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
004FD31B  2B C1                     SUB EAX,ECX
004FD31D  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
004FD320  83 EA 17                  SUB EDX,0x17
004FD323  51                        PUSH ECX
004FD324  52                        PUSH EDX
004FD325  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
004FD328  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
004FD32E  50                        PUSH EAX
004FD32F  8B 07                     MOV EAX,dword ptr [EDI]
004FD331  2B C2                     SUB EAX,EDX
004FD333  83 C0 17                  ADD EAX,0x17
004FD336  50                        PUSH EAX
004FD337  6A 00                     PUSH 0x0
004FD339  51                        PUSH ECX
004FD33A  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FD340  E8 4B 37 21 00            CALL 0x00710a90
004FD345  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
004FD348  A1 18 76 80 00            MOV EAX,[0x00807618]
004FD34D  6A 02                     PUSH 0x2
004FD34F  6A FF                     PUSH -0x1
004FD351  83 EA 17                  SUB EDX,0x17
004FD354  6A 00                     PUSH 0x0
004FD356  52                        PUSH EDX
004FD357  68 10 23 7C 00            PUSH 0x7c2310
004FD35C  81 C3 9B 9D FF FF         ADD EBX,0xffff9d9b
004FD362  50                        PUSH EAX
004FD363  53                        PUSH EBX
004FD364  E8 D7 2D 1B 00            CALL 0x006b0140
004FD369  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FD36F  50                        PUSH EAX
004FD370  51                        PUSH ECX
004FD371  E8 F9 5E F0 FF            CALL 0x0040326f
004FD376  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FD37C  83 C4 10                  ADD ESP,0x10
004FD37F  50                        PUSH EAX
004FD380  E8 3B 46 21 00            CALL 0x007119c0
004FD385  8B 86 5C 01 00 00         MOV EAX,dword ptr [ESI + 0x15c]
004FD38B  85 C0                     TEST EAX,EAX
004FD38D  0F 8C 78 02 00 00         JL 0x004fd60b
004FD393  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
004FD399  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
004FD39C  52                        PUSH EDX
004FD39D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FD3A3  51                        PUSH ECX
004FD3A4  6A FF                     PUSH -0x1
004FD3A6  50                        PUSH EAX
004FD3A7  52                        PUSH EDX
004FD3A8  E9 59 02 00 00            JMP 0x004fd606
switchD_004fccba::caseD_b19f:
004FD3AD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FD3B0  81 C3 61 4E FF FF         ADD EBX,0xffff4e61
004FD3B6  53                        PUSH EBX
004FD3B7  8B CE                     MOV ECX,ESI
004FD3B9  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
004FD3BC  E8 98 7E F0 FF            CALL 0x00405259
004FD3C1  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
004FD3C7  8B D8                     MOV EBX,EAX
004FD3C9  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004FD3CC  85 C9                     TEST ECX,ECX
004FD3CE  74 08                     JZ 0x004fd3d8
004FD3D0  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
004FD3D6  EB 06                     JMP 0x004fd3de
LAB_004fd3d8:
004FD3D8  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
LAB_004fd3de:
004FD3DE  2B C1                     SUB EAX,ECX
004FD3E0  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
004FD3E6  80 E9 03                  SUB CL,0x3
004FD3E9  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
004FD3EC  F6 D9                     NEG CL
004FD3EE  1B C9                     SBB ECX,ECX
004FD3F0  83 E1 FD                  AND ECX,0xfffffffd
004FD3F3  83 C1 3D                  ADD ECX,0x3d
004FD3F6  51                        PUSH ECX
004FD3F7  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004FD3FA  52                        PUSH EDX
004FD3FB  8B 17                     MOV EDX,dword ptr [EDI]
004FD3FD  51                        PUSH ECX
004FD3FE  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
004FD401  2B D1                     SUB EDX,ECX
004FD403  50                        PUSH EAX
004FD404  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
004FD40A  52                        PUSH EDX
004FD40B  6A 00                     PUSH 0x0
004FD40D  50                        PUSH EAX
004FD40E  E8 5D 6D 1B 00            CALL 0x006b4170
004FD413  85 DB                     TEST EBX,EBX
004FD415  7C 5C                     JL 0x004fd473
004FD417  74 0E                     JZ 0x004fd427
004FD419  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FD41C  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
004FD41F  85 C0                     TEST EAX,EAX
004FD421  74 04                     JZ 0x004fd427
004FD423  33 C9                     XOR ECX,ECX
004FD425  EB 05                     JMP 0x004fd42c
LAB_004fd427:
004FD427  B9 01 00 00 00            MOV ECX,0x1
LAB_004fd42c:
004FD42C  8B 96 38 01 00 00         MOV EDX,dword ptr [ESI + 0x138]
004FD432  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004FD435  85 D2                     TEST EDX,EDX
004FD437  74 08                     JZ 0x004fd441
004FD439  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
004FD43F  EB 06                     JMP 0x004fd447
LAB_004fd441:
004FD441  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
LAB_004fd447:
004FD447  2B C2                     SUB EAX,EDX
004FD449  8B 96 D5 09 00 00         MOV EDX,dword ptr [ESI + 0x9d5]
004FD44F  51                        PUSH ECX
004FD450  52                        PUSH EDX
004FD451  8B D8                     MOV EBX,EAX
004FD453  E8 48 DF 20 00            CALL 0x0070b3a0
004FD458  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
004FD45E  50                        PUSH EAX
004FD45F  8B 07                     MOV EAX,dword ptr [EDI]
004FD461  6A 01                     PUSH 0x1
004FD463  53                        PUSH EBX
004FD464  8B 5E 50                  MOV EBX,dword ptr [ESI + 0x50]
004FD467  2B C3                     SUB EAX,EBX
004FD469  50                        PUSH EAX
004FD46A  51                        PUSH ECX
004FD46B  E8 B9 5D F0 FF            CALL 0x00403229
004FD470  83 C4 1C                  ADD ESP,0x1c
LAB_004fd473:
004FD473  8B 86 5C 01 00 00         MOV EAX,dword ptr [ESI + 0x15c]
004FD479  85 C0                     TEST EAX,EAX
004FD47B  0F 8C 8A 01 00 00         JL 0x004fd60b
004FD481  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
004FD487  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
004FD48A  52                        PUSH EDX
004FD48B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FD491  51                        PUSH ECX
004FD492  6A FF                     PUSH -0x1
004FD494  50                        PUSH EAX
004FD495  52                        PUSH EDX
004FD496  E9 6B 01 00 00            JMP 0x004fd606
switchD_004fccba::caseD_b212:
004FD49B  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
004FD4A1  83 C0 A1                  ADD EAX,-0x5f
004FD4A4  83 F8 0E                  CMP EAX,0xe
004FD4A7  0F 87 5E 01 00 00         JA 0x004fd60b
004FD4AD  33 C9                     XOR ECX,ECX
004FD4AF  8A 88 F4 D8 4F 00         MOV CL,byte ptr [EAX + 0x4fd8f4]
switchD_004fd4b5::switchD:
004FD4B5  FF 24 8D E8 D8 4F 00      JMP dword ptr [ECX*0x4 + 0x4fd8e8]
switchD_004fd4b5::caseD_64:
004FD4BC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FD4BF  68 88 1E 40 00            PUSH 0x401e88
004FD4C4  68 00 23 7C 00            PUSH 0x7c2300
004FD4C9  6A 01                     PUSH 0x1
004FD4CB  52                        PUSH EDX
004FD4CC  6A 05                     PUSH 0x5
004FD4CE  8B CE                     MOV ECX,ESI
004FD4D0  E8 04 4E F0 FF            CALL 0x004022d9
004FD4D5  E9 31 01 00 00            JMP 0x004fd60b
switchD_004fd4b5::caseD_5f:
004FD4DA  68 88 1E 40 00            PUSH 0x401e88
004FD4DF  6A 00                     PUSH 0x0
004FD4E1  68 F4 22 7C 00            PUSH 0x7c22f4
004FD4E6  EB 4B                     JMP 0x004fd533
switchD_004fccba::caseD_b214:
004FD4E8  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
004FD4EE  83 C0 A1                  ADD EAX,-0x5f
004FD4F1  83 F8 0E                  CMP EAX,0xe
004FD4F4  0F 87 11 01 00 00         JA 0x004fd60b
004FD4FA  33 C9                     XOR ECX,ECX
004FD4FC  8A 88 10 D9 4F 00         MOV CL,byte ptr [EAX + 0x4fd910]
switchD_004fd502::switchD:
004FD502  FF 24 8D 04 D9 4F 00      JMP dword ptr [ECX*0x4 + 0x4fd904]
switchD_004fd502::caseD_64:
004FD509  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FD50C  68 88 1E 40 00            PUSH 0x401e88
004FD511  68 E4 22 7C 00            PUSH 0x7c22e4
004FD516  6A 01                     PUSH 0x1
004FD518  52                        PUSH EDX
004FD519  6A 05                     PUSH 0x5
004FD51B  8B CE                     MOV ECX,ESI
004FD51D  E8 B7 4D F0 FF            CALL 0x004022d9
004FD522  E9 E4 00 00 00            JMP 0x004fd60b
switchD_004fd502::caseD_5f:
004FD527  68 88 1E 40 00            PUSH 0x401e88
004FD52C  6A 00                     PUSH 0x0
004FD52E  68 D8 22 7C 00            PUSH 0x7c22d8
LAB_004fd533:
004FD533  E8 44 82 F0 FF            CALL 0x0040577c
004FD538  83 C4 08                  ADD ESP,0x8
004FD53B  8B CE                     MOV ECX,ESI
004FD53D  50                        PUSH EAX
004FD53E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FD541  6A 01                     PUSH 0x1
004FD543  50                        PUSH EAX
004FD544  6A 05                     PUSH 0x5
004FD546  E8 8E 4D F0 FF            CALL 0x004022d9
004FD54B  E9 BB 00 00 00            JMP 0x004fd60b
switchD_004fccba::caseD_b21a:
004FD550  83 BE F5 0B 00 00 6D      CMP dword ptr [ESI + 0xbf5],0x6d
004FD557  0F 85 AE 00 00 00         JNZ 0x004fd60b
004FD55D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FD560  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
004FD564  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
004FD567  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
004FD56A  83 F8 03                  CMP EAX,0x3
004FD56D  77 29                     JA 0x004fd598
switchD_004fd56f::switchD:
004FD56F  FF 24 85 20 D9 4F 00      JMP dword ptr [EAX*0x4 + 0x4fd920]
switchD_004fd56f::caseD_0:
004FD576  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
004FD57A  EB 1C                     JMP 0x004fd598
switchD_004fd56f::caseD_2:
004FD57C  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
004FD580  EB 16                     JMP 0x004fd598
switchD_004fd56f::caseD_1:
004FD582  81 C3 E6 4D FF FF         ADD EBX,0xffff4de6
004FD588  D1 EB                     SHR EBX,0x1
004FD58A  80 BC 33 0F 0C 00 00 03   CMP byte ptr [EBX + ESI*0x1 + 0xc0f],0x3
004FD592  0F 95 C1                  SETNZ CL
004FD595  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
switchD_004fd56f::default:
004FD598  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
004FD59E  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004FD5A1  85 C9                     TEST ECX,ECX
004FD5A3  74 08                     JZ 0x004fd5ad
004FD5A5  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
004FD5AB  EB 06                     JMP 0x004fd5b3
LAB_004fd5ad:
004FD5AD  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
LAB_004fd5b3:
004FD5B3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004FD5B6  2B C1                     SUB EAX,ECX
004FD5B8  8B D8                     MOV EBX,EAX
004FD5BA  8B 86 D5 09 00 00         MOV EAX,dword ptr [ESI + 0x9d5]
004FD5C0  81 E2 FF 00 00 00         AND EDX,0xff
004FD5C6  52                        PUSH EDX
004FD5C7  50                        PUSH EAX
004FD5C8  E8 D3 DD 20 00            CALL 0x0070b3a0
004FD5CD  8B 0F                     MOV ECX,dword ptr [EDI]
004FD5CF  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
004FD5D5  50                        PUSH EAX
004FD5D6  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
004FD5D9  6A 01                     PUSH 0x1
004FD5DB  2B C8                     SUB ECX,EAX
004FD5DD  53                        PUSH EBX
004FD5DE  51                        PUSH ECX
004FD5DF  52                        PUSH EDX
004FD5E0  E8 44 5C F0 FF            CALL 0x00403229
004FD5E5  8B 86 5C 01 00 00         MOV EAX,dword ptr [ESI + 0x15c]
004FD5EB  83 C4 1C                  ADD ESP,0x1c
004FD5EE  85 C0                     TEST EAX,EAX
004FD5F0  7C 19                     JL 0x004fd60b
004FD5F2  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
004FD5F8  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
004FD5FB  51                        PUSH ECX
004FD5FC  52                        PUSH EDX
004FD5FD  6A FF                     PUSH -0x1
004FD5FF  50                        PUSH EAX
004FD600  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FD605  50                        PUSH EAX
CPanelTy::GetMessage::cf_common_exit_004FD606:
004FD606  E8 35 60 1B 00            CALL 0x006b3640
CPanelTy::GetMessage::cf_common_exit_004FD60B:
004FD60B  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
004FD611  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FD614  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FD61A  52                        PUSH EDX
004FD61B  8B CE                     MOV ECX,ESI
004FD61D  E8 AE 89 1E 00            CALL 0x006e5fd0
004FD622  5F                        POP EDI
004FD623  5E                        POP ESI
004FD624  5B                        POP EBX
004FD625  8B E5                     MOV ESP,EBP
004FD627  5D                        POP EBP
004FD628  C2 04 00                  RET 0x4
LAB_004fd62b:
004FD62B  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
004FD631  68 BC 22 7C 00            PUSH 0x7c22bc
004FD636  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FD63B  56                        PUSH ESI
004FD63C  6A 00                     PUSH 0x0
004FD63E  68 5F 07 00 00            PUSH 0x75f
004FD643  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FD648  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FD64D  E8 7E FE 1A 00            CALL 0x006ad4d0
004FD652  83 C4 18                  ADD ESP,0x18
004FD655  85 C0                     TEST EAX,EAX
004FD657  74 01                     JZ 0x004fd65a
004FD659  CC                        INT3
LAB_004fd65a:
004FD65A  68 5F 07 00 00            PUSH 0x75f
004FD65F  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FD664  6A 00                     PUSH 0x0
004FD666  56                        PUSH ESI
004FD667  E8 D4 87 1A 00            CALL 0x006a5e40
004FD66C  5F                        POP EDI
004FD66D  5E                        POP ESI
004FD66E  B8 FF FF 00 00            MOV EAX,0xffff
004FD673  5B                        POP EBX
004FD674  8B E5                     MOV ESP,EBP
004FD676  5D                        POP EBP
004FD677  C2 04 00                  RET 0x4
