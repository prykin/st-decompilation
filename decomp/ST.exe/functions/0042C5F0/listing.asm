FUN_0042c5f0:
0042C5F0  55                        PUSH EBP
0042C5F1  8B EC                     MOV EBP,ESP
0042C5F3  83 EC 10                  SUB ESP,0x10
0042C5F6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C5F9  53                        PUSH EBX
0042C5FA  56                        PUSH ESI
0042C5FB  3D A4 01 00 00            CMP EAX,0x1a4
0042C600  57                        PUSH EDI
0042C601  8B F1                     MOV ESI,ECX
0042C603  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0042C60A  0F 8F 4E 03 00 00         JG 0x0042c95e
0042C610  0F 84 96 02 00 00         JZ 0x0042c8ac
0042C616  83 F8 14                  CMP EAX,0x14
0042C619  0F 84 76 01 00 00         JZ 0x0042c795
0042C61F  83 F8 5A                  CMP EAX,0x5a
0042C622  0F 84 BD 00 00 00         JZ 0x0042c6e5
0042C628  3D 72 01 00 00            CMP EAX,0x172
0042C62D  0F 85 DA 05 00 00         JNZ 0x0042cc0d
0042C633  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C637  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042C63A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042C63D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042C640  C1 E1 04                  SHL ECX,0x4
0042C643  03 C8                     ADD ECX,EAX
0042C645  33 DB                     XOR EBX,EBX
0042C647  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042C64E  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042c651:
0042C651  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042C654  8B C3                     MOV EAX,EBX
0042C656  C1 E0 04                  SHL EAX,0x4
0042C659  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042C65C  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042C65F  3D 72 01 00 00            CMP EAX,0x172
0042C664  75 69                     JNZ 0x0042c6cf
0042C666  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042C669  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0042C66C  0F BE D0                  MOVSX EDX,AL
0042C66F  3B CA                     CMP ECX,EDX
0042C671  75 5C                     JNZ 0x0042c6cf
0042C673  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0042C677  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
0042C67B  75 52                     JNZ 0x0042c6cf
0042C67D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042C680  6A 02                     PUSH 0x2
0042C682  52                        PUSH EDX
0042C683  50                        PUSH EAX
0042C684  8B CE                     MOV ECX,ESI
0042C686  E8 2F 62 FD FF            CALL 0x004028ba
0042C68B  8B 10                     MOV EDX,dword ptr [EAX]
0042C68D  6A 00                     PUSH 0x0
0042C68F  8B C8                     MOV ECX,EAX
0042C691  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C697  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0042C69D  C7 47 04 FF 00 00 00      MOV dword ptr [EDI + 0x4],0xff
0042C6A4  85 DB                     TEST EBX,EBX
0042C6A6  66 C7 47 08 00 00         MOV word ptr [EDI + 0x8],0x0
0042C6AC  6A 00                     PUSH 0x0
0042C6AE  75 0F                     JNZ 0x0042c6bf
0042C6B0  6A 04                     PUSH 0x4
0042C6B2  8B CE                     MOV ECX,ESI
0042C6B4  E8 9C 85 FD FF            CALL 0x00404c55
0042C6B9  6A 00                     PUSH 0x0
0042C6BB  6A 05                     PUSH 0x5
0042C6BD  EB 02                     JMP 0x0042c6c1
LAB_0042c6bf:
0042C6BF  6A 0F                     PUSH 0xf
LAB_0042c6c1:
0042C6C1  8B CE                     MOV ECX,ESI
0042C6C3  E8 8D 85 FD FF            CALL 0x00404c55
0042C6C8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042c6cf:
0042C6CF  43                        INC EBX
0042C6D0  83 FB 05                  CMP EBX,0x5
0042C6D3  0F 8C 78 FF FF FF         JL 0x0042c651
0042C6D9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042C6DC  5F                        POP EDI
0042C6DD  5E                        POP ESI
0042C6DE  5B                        POP EBX
0042C6DF  8B E5                     MOV ESP,EBP
0042C6E1  5D                        POP EBP
0042C6E2  C2 10 00                  RET 0x10
LAB_0042c6e5:
0042C6E5  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C6E9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042C6EC  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042C6EF  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042C6F2  C1 E1 04                  SHL ECX,0x4
0042C6F5  03 C8                     ADD ECX,EAX
0042C6F7  33 DB                     XOR EBX,EBX
0042C6F9  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042C700  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042c703:
0042C703  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042C706  8B C3                     MOV EAX,EBX
0042C708  C1 E0 04                  SHL EAX,0x4
0042C70B  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042C70E  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042C711  83 F8 5A                  CMP EAX,0x5a
0042C714  75 69                     JNZ 0x0042c77f
0042C716  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042C719  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0042C71C  0F BE D0                  MOVSX EDX,AL
0042C71F  3B CA                     CMP ECX,EDX
0042C721  75 5C                     JNZ 0x0042c77f
0042C723  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0042C727  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
0042C72B  75 52                     JNZ 0x0042c77f
0042C72D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042C730  6A 04                     PUSH 0x4
0042C732  52                        PUSH EDX
0042C733  50                        PUSH EAX
0042C734  8B CE                     MOV ECX,ESI
0042C736  E8 7F 61 FD FF            CALL 0x004028ba
0042C73B  8B 10                     MOV EDX,dword ptr [EAX]
0042C73D  6A 00                     PUSH 0x0
0042C73F  8B C8                     MOV ECX,EAX
0042C741  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C747  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0042C74D  C7 47 04 FF 00 00 00      MOV dword ptr [EDI + 0x4],0xff
0042C754  85 DB                     TEST EBX,EBX
0042C756  66 C7 47 08 00 00         MOV word ptr [EDI + 0x8],0x0
0042C75C  6A 00                     PUSH 0x0
0042C75E  75 0F                     JNZ 0x0042c76f
0042C760  6A 04                     PUSH 0x4
0042C762  8B CE                     MOV ECX,ESI
0042C764  E8 EC 84 FD FF            CALL 0x00404c55
0042C769  6A 00                     PUSH 0x0
0042C76B  6A 05                     PUSH 0x5
0042C76D  EB 02                     JMP 0x0042c771
LAB_0042c76f:
0042C76F  6A 0F                     PUSH 0xf
LAB_0042c771:
0042C771  8B CE                     MOV ECX,ESI
0042C773  E8 DD 84 FD FF            CALL 0x00404c55
0042C778  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042c77f:
0042C77F  43                        INC EBX
0042C780  83 FB 05                  CMP EBX,0x5
0042C783  0F 8C 7A FF FF FF         JL 0x0042c703
0042C789  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042C78C  5F                        POP EDI
0042C78D  5E                        POP ESI
0042C78E  5B                        POP EBX
0042C78F  8B E5                     MOV ESP,EBP
0042C791  5D                        POP EBP
0042C792  C2 10 00                  RET 0x10
LAB_0042c795:
0042C795  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C799  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
0042C7A0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042C7A3  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042C7A6  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042C7A9  C1 E1 04                  SHL ECX,0x4
0042C7AC  03 C8                     ADD ECX,EAX
0042C7AE  8D 14 4D 83 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4f83]
0042C7B5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042c7b8:
0042C7B8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C7BB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042C7BE  C1 E0 04                  SHL EAX,0x4
0042C7C1  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042C7C4  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042C7C7  83 F8 3C                  CMP EAX,0x3c
0042C7CA  0F 85 C0 00 00 00         JNZ 0x0042c890
0042C7D0  0F BE 55 10               MOVSX EDX,byte ptr [EBP + 0x10]
0042C7D4  39 57 04                  CMP dword ptr [EDI + 0x4],EDX
0042C7D7  0F 85 B3 00 00 00         JNZ 0x0042c890
0042C7DD  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
0042C7E0  33 DB                     XOR EBX,EBX
0042C7E2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042C7E5  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042C7E8  85 C0                     TEST EAX,EAX
0042C7EA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0042C7ED  0F 8E 9D 00 00 00         JLE 0x0042c890
LAB_0042c7f3:
0042C7F3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042C7F6  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042C7F9  50                        PUSH EAX
0042C7FA  8B D3                     MOV EDX,EBX
0042C7FC  E8 6F 04 28 00            CALL 0x006acc70
0042C801  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0042C805  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
0042C809  74 0A                     JZ 0x0042c815
0042C80B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042C80E  43                        INC EBX
0042C80F  3B D8                     CMP EBX,EAX
0042C811  7C E0                     JL 0x0042c7f3
0042C813  EB 7B                     JMP 0x0042c890
LAB_0042c815:
0042C815  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042C818  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042C81B  6A 01                     PUSH 0x1
0042C81D  52                        PUSH EDX
0042C81E  50                        PUSH EAX
0042C81F  8B CE                     MOV ECX,ESI
0042C821  E8 94 60 FD FF            CALL 0x004028ba
0042C826  8B 10                     MOV EDX,dword ptr [EAX]
0042C828  6A 00                     PUSH 0x0
0042C82A  8B C8                     MOV ECX,EAX
0042C82C  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C832  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042C835  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042C838  50                        PUSH EAX
0042C839  53                        PUSH EBX
0042C83A  51                        PUSH ECX
0042C83B  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0042C842  E8 F9 18 28 00            CALL 0x006ae140
0042C847  66 FF 4F 0E               DEC word ptr [EDI + 0xe]
0042C84B  66 83 7F 0E 00            CMP word ptr [EDI + 0xe],0x0
0042C850  77 16                     JA 0x0042c868
0042C852  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
0042C855  52                        PUSH EDX
0042C856  E8 B5 18 28 00            CALL 0x006ae110
0042C85B  C7 47 0A 00 00 00 00      MOV dword ptr [EDI + 0xa],0x0
0042C862  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0042c868:
0042C868  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C86B  6A 00                     PUSH 0x0
0042C86D  85 C0                     TEST EAX,EAX
0042C86F  75 0F                     JNZ 0x0042c880
0042C871  6A 01                     PUSH 0x1
0042C873  8B CE                     MOV ECX,ESI
0042C875  E8 DB 83 FD FF            CALL 0x00404c55
0042C87A  6A 00                     PUSH 0x0
0042C87C  6A 02                     PUSH 0x2
0042C87E  EB 02                     JMP 0x0042c882
LAB_0042c880:
0042C880  6A 0E                     PUSH 0xe
LAB_0042c882:
0042C882  8B CE                     MOV ECX,ESI
0042C884  E8 CC 83 FD FF            CALL 0x00404c55
0042C889  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042c890:
0042C890  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C893  40                        INC EAX
0042C894  83 F8 05                  CMP EAX,0x5
0042C897  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0042C89A  0F 8C 18 FF FF FF         JL 0x0042c7b8
0042C8A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042C8A3  5F                        POP EDI
0042C8A4  5E                        POP ESI
0042C8A5  5B                        POP EBX
0042C8A6  8B E5                     MOV ESP,EBP
0042C8A8  5D                        POP EBP
0042C8A9  C2 10 00                  RET 0x10
LAB_0042c8ac:
0042C8AC  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C8B0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042C8B3  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042C8B6  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042C8B9  C1 E1 04                  SHL ECX,0x4
0042C8BC  03 C8                     ADD ECX,EAX
0042C8BE  33 DB                     XOR EBX,EBX
0042C8C0  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042C8C7  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042c8ca:
0042C8CA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042C8CD  8B C3                     MOV EAX,EBX
0042C8CF  C1 E0 04                  SHL EAX,0x4
0042C8D2  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042C8D5  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042C8D8  3D A4 01 00 00            CMP EAX,0x1a4
0042C8DD  75 69                     JNZ 0x0042c948
0042C8DF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042C8E2  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0042C8E5  0F BE D0                  MOVSX EDX,AL
0042C8E8  3B CA                     CMP ECX,EDX
0042C8EA  75 5C                     JNZ 0x0042c948
0042C8EC  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0042C8F0  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
0042C8F4  75 52                     JNZ 0x0042c948
0042C8F6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042C8F9  6A 05                     PUSH 0x5
0042C8FB  52                        PUSH EDX
0042C8FC  50                        PUSH EAX
0042C8FD  8B CE                     MOV ECX,ESI
0042C8FF  E8 B6 5F FD FF            CALL 0x004028ba
0042C904  8B 10                     MOV EDX,dword ptr [EAX]
0042C906  6A 00                     PUSH 0x0
0042C908  8B C8                     MOV ECX,EAX
0042C90A  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C910  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0042C916  C7 47 04 FF 00 00 00      MOV dword ptr [EDI + 0x4],0xff
0042C91D  85 DB                     TEST EBX,EBX
0042C91F  66 C7 47 08 00 00         MOV word ptr [EDI + 0x8],0x0
0042C925  6A 00                     PUSH 0x0
0042C927  75 0F                     JNZ 0x0042c938
0042C929  6A 04                     PUSH 0x4
0042C92B  8B CE                     MOV ECX,ESI
0042C92D  E8 23 83 FD FF            CALL 0x00404c55
0042C932  6A 00                     PUSH 0x0
0042C934  6A 05                     PUSH 0x5
0042C936  EB 02                     JMP 0x0042c93a
LAB_0042c938:
0042C938  6A 0F                     PUSH 0xf
LAB_0042c93a:
0042C93A  8B CE                     MOV ECX,ESI
0042C93C  E8 14 83 FD FF            CALL 0x00404c55
0042C941  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042c948:
0042C948  43                        INC EBX
0042C949  83 FB 05                  CMP EBX,0x5
0042C94C  0F 8C 78 FF FF FF         JL 0x0042c8ca
0042C952  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042C955  5F                        POP EDI
0042C956  5E                        POP ESI
0042C957  5B                        POP EBX
0042C958  8B E5                     MOV ESP,EBP
0042C95A  5D                        POP EBP
0042C95B  C2 10 00                  RET 0x10
LAB_0042c95e:
0042C95E  3D B8 01 00 00            CMP EAX,0x1b8
0042C963  0F 8F 75 01 00 00         JG 0x0042cade
0042C969  0F 84 BD 00 00 00         JZ 0x0042ca2c
0042C96F  3D AE 01 00 00            CMP EAX,0x1ae
0042C974  0F 85 93 02 00 00         JNZ 0x0042cc0d
0042C97A  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C97E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042C981  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042C984  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042C987  C1 E1 04                  SHL ECX,0x4
0042C98A  03 C8                     ADD ECX,EAX
0042C98C  33 DB                     XOR EBX,EBX
0042C98E  8D 14 4D 83 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4f83]
0042C995  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042c998:
0042C998  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042C99B  8B C3                     MOV EAX,EBX
0042C99D  C1 E0 04                  SHL EAX,0x4
0042C9A0  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042C9A3  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042C9A6  3D AE 01 00 00            CMP EAX,0x1ae
0042C9AB  75 69                     JNZ 0x0042ca16
0042C9AD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042C9B0  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0042C9B3  0F BE D0                  MOVSX EDX,AL
0042C9B6  3B CA                     CMP ECX,EDX
0042C9B8  75 5C                     JNZ 0x0042ca16
0042C9BA  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0042C9BE  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
0042C9C2  75 52                     JNZ 0x0042ca16
0042C9C4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042C9C7  6A 03                     PUSH 0x3
0042C9C9  52                        PUSH EDX
0042C9CA  50                        PUSH EAX
0042C9CB  8B CE                     MOV ECX,ESI
0042C9CD  E8 E8 5E FD FF            CALL 0x004028ba
0042C9D2  8B 10                     MOV EDX,dword ptr [EAX]
0042C9D4  6A 00                     PUSH 0x0
0042C9D6  8B C8                     MOV ECX,EAX
0042C9D8  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C9DE  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0042C9E4  C7 47 04 FF 00 00 00      MOV dword ptr [EDI + 0x4],0xff
0042C9EB  85 DB                     TEST EBX,EBX
0042C9ED  66 C7 47 08 00 00         MOV word ptr [EDI + 0x8],0x0
0042C9F3  6A 00                     PUSH 0x0
0042C9F5  75 0F                     JNZ 0x0042ca06
0042C9F7  6A 01                     PUSH 0x1
0042C9F9  8B CE                     MOV ECX,ESI
0042C9FB  E8 55 82 FD FF            CALL 0x00404c55
0042CA00  6A 00                     PUSH 0x0
0042CA02  6A 02                     PUSH 0x2
0042CA04  EB 02                     JMP 0x0042ca08
LAB_0042ca06:
0042CA06  6A 0E                     PUSH 0xe
LAB_0042ca08:
0042CA08  8B CE                     MOV ECX,ESI
0042CA0A  E8 46 82 FD FF            CALL 0x00404c55
0042CA0F  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042ca16:
0042CA16  43                        INC EBX
0042CA17  83 FB 05                  CMP EBX,0x5
0042CA1A  0F 8C 78 FF FF FF         JL 0x0042c998
0042CA20  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042CA23  5F                        POP EDI
0042CA24  5E                        POP ESI
0042CA25  5B                        POP EBX
0042CA26  8B E5                     MOV ESP,EBP
0042CA28  5D                        POP EBP
0042CA29  C2 10 00                  RET 0x10
LAB_0042ca2c:
0042CA2C  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042CA30  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042CA33  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042CA36  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042CA39  C1 E1 04                  SHL ECX,0x4
0042CA3C  03 C8                     ADD ECX,EAX
0042CA3E  33 DB                     XOR EBX,EBX
0042CA40  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042CA47  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042ca4a:
0042CA4A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042CA4D  8B C3                     MOV EAX,EBX
0042CA4F  C1 E0 04                  SHL EAX,0x4
0042CA52  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042CA55  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042CA58  3D B8 01 00 00            CMP EAX,0x1b8
0042CA5D  75 69                     JNZ 0x0042cac8
0042CA5F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042CA62  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0042CA65  0F BE D0                  MOVSX EDX,AL
0042CA68  3B CA                     CMP ECX,EDX
0042CA6A  75 5C                     JNZ 0x0042cac8
0042CA6C  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0042CA70  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
0042CA74  75 52                     JNZ 0x0042cac8
0042CA76  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042CA79  6A 06                     PUSH 0x6
0042CA7B  52                        PUSH EDX
0042CA7C  50                        PUSH EAX
0042CA7D  8B CE                     MOV ECX,ESI
0042CA7F  E8 36 5E FD FF            CALL 0x004028ba
0042CA84  8B 10                     MOV EDX,dword ptr [EAX]
0042CA86  6A 00                     PUSH 0x0
0042CA88  8B C8                     MOV ECX,EAX
0042CA8A  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042CA90  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0042CA96  C7 47 04 FF 00 00 00      MOV dword ptr [EDI + 0x4],0xff
0042CA9D  85 DB                     TEST EBX,EBX
0042CA9F  66 C7 47 08 00 00         MOV word ptr [EDI + 0x8],0x0
0042CAA5  6A 00                     PUSH 0x0
0042CAA7  75 0F                     JNZ 0x0042cab8
0042CAA9  6A 04                     PUSH 0x4
0042CAAB  8B CE                     MOV ECX,ESI
0042CAAD  E8 A3 81 FD FF            CALL 0x00404c55
0042CAB2  6A 00                     PUSH 0x0
0042CAB4  6A 05                     PUSH 0x5
0042CAB6  EB 02                     JMP 0x0042caba
LAB_0042cab8:
0042CAB8  6A 0F                     PUSH 0xf
LAB_0042caba:
0042CABA  8B CE                     MOV ECX,ESI
0042CABC  E8 94 81 FD FF            CALL 0x00404c55
0042CAC1  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042cac8:
0042CAC8  43                        INC EBX
0042CAC9  83 FB 05                  CMP EBX,0x5
0042CACC  0F 8C 78 FF FF FF         JL 0x0042ca4a
0042CAD2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042CAD5  5F                        POP EDI
0042CAD6  5E                        POP ESI
0042CAD7  5B                        POP EBX
0042CAD8  8B E5                     MOV ESP,EBP
0042CADA  5D                        POP EBP
0042CADB  C2 10 00                  RET 0x10
LAB_0042cade:
0042CADE  3D E8 03 00 00            CMP EAX,0x3e8
0042CAE3  0F 8C 24 01 00 00         JL 0x0042cc0d
0042CAE9  3D E9 03 00 00            CMP EAX,0x3e9
0042CAEE  0F 8F 19 01 00 00         JG 0x0042cc0d
0042CAF4  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042CAF8  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
0042CAFF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042CB02  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042CB05  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042CB08  C1 E1 04                  SHL ECX,0x4
0042CB0B  03 C8                     ADD ECX,EAX
0042CB0D  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042CB14  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0042cb17:
0042CB17  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042CB1A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042CB1D  C1 E0 04                  SHL EAX,0x4
0042CB20  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0042CB23  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
0042CB26  3D 9A 01 00 00            CMP EAX,0x19a
0042CB2B  0F 85 C0 00 00 00         JNZ 0x0042cbf1
0042CB31  0F BE 55 10               MOVSX EDX,byte ptr [EBP + 0x10]
0042CB35  39 57 04                  CMP dword ptr [EDI + 0x4],EDX
0042CB38  0F 85 B3 00 00 00         JNZ 0x0042cbf1
0042CB3E  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
0042CB41  33 DB                     XOR EBX,EBX
0042CB43  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042CB46  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042CB49  85 C0                     TEST EAX,EAX
0042CB4B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0042CB4E  0F 8E 9D 00 00 00         JLE 0x0042cbf1
LAB_0042cb54:
0042CB54  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042CB57  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042CB5A  50                        PUSH EAX
0042CB5B  8B D3                     MOV EDX,EBX
0042CB5D  E8 0E 01 28 00            CALL 0x006acc70
0042CB62  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0042CB66  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
0042CB6A  74 0A                     JZ 0x0042cb76
0042CB6C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042CB6F  43                        INC EBX
0042CB70  3B D8                     CMP EBX,EAX
0042CB72  7C E0                     JL 0x0042cb54
0042CB74  EB 7B                     JMP 0x0042cbf1
LAB_0042cb76:
0042CB76  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042CB79  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042CB7C  6A 01                     PUSH 0x1
0042CB7E  52                        PUSH EDX
0042CB7F  50                        PUSH EAX
0042CB80  8B CE                     MOV ECX,ESI
0042CB82  E8 33 5D FD FF            CALL 0x004028ba
0042CB87  8B 10                     MOV EDX,dword ptr [EAX]
0042CB89  6A 00                     PUSH 0x0
0042CB8B  8B C8                     MOV ECX,EAX
0042CB8D  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042CB93  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042CB96  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042CB99  50                        PUSH EAX
0042CB9A  53                        PUSH EBX
0042CB9B  51                        PUSH ECX
0042CB9C  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0042CBA3  E8 98 15 28 00            CALL 0x006ae140
0042CBA8  66 FF 4F 0E               DEC word ptr [EDI + 0xe]
0042CBAC  66 83 7F 0E 00            CMP word ptr [EDI + 0xe],0x0
0042CBB1  77 16                     JA 0x0042cbc9
0042CBB3  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
0042CBB6  52                        PUSH EDX
0042CBB7  E8 54 15 28 00            CALL 0x006ae110
0042CBBC  C7 47 0A 00 00 00 00      MOV dword ptr [EDI + 0xa],0x0
0042CBC3  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0042cbc9:
0042CBC9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042CBCC  6A 00                     PUSH 0x0
0042CBCE  85 C0                     TEST EAX,EAX
0042CBD0  75 0F                     JNZ 0x0042cbe1
0042CBD2  6A 04                     PUSH 0x4
0042CBD4  8B CE                     MOV ECX,ESI
0042CBD6  E8 7A 80 FD FF            CALL 0x00404c55
0042CBDB  6A 00                     PUSH 0x0
0042CBDD  6A 05                     PUSH 0x5
0042CBDF  EB 02                     JMP 0x0042cbe3
LAB_0042cbe1:
0042CBE1  6A 0F                     PUSH 0xf
LAB_0042cbe3:
0042CBE3  8B CE                     MOV ECX,ESI
0042CBE5  E8 6B 80 FD FF            CALL 0x00404c55
0042CBEA  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0042cbf1:
0042CBF1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042CBF4  40                        INC EAX
0042CBF5  83 F8 05                  CMP EAX,0x5
0042CBF8  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0042CBFB  0F 8C 16 FF FF FF         JL 0x0042cb17
0042CC01  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042CC04  5F                        POP EDI
0042CC05  5E                        POP ESI
0042CC06  5B                        POP EBX
0042CC07  8B E5                     MOV ESP,EBP
0042CC09  5D                        POP EBP
0042CC0A  C2 10 00                  RET 0x10
LAB_0042cc0d:
0042CC0D  68 D0 62 7A 00            PUSH 0x7a62d0
0042CC12  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042CC17  6A 00                     PUSH 0x0
0042CC19  6A 00                     PUSH 0x0
0042CC1B  68 52 03 00 00            PUSH 0x352
0042CC20  68 04 60 7A 00            PUSH 0x7a6004
0042CC25  E8 A6 08 28 00            CALL 0x006ad4d0
0042CC2A  83 C4 18                  ADD ESP,0x18
0042CC2D  85 C0                     TEST EAX,EAX
0042CC2F  74 01                     JZ 0x0042cc32
0042CC31  CC                        INT3
LAB_0042cc32:
0042CC32  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042CC35  5F                        POP EDI
0042CC36  5E                        POP ESI
0042CC37  5B                        POP EBX
0042CC38  8B E5                     MOV ESP,EBP
0042CC3A  5D                        POP EBP
0042CC3B  C2 10 00                  RET 0x10
