FUN_0056d740:
0056D740  55                        PUSH EBP
0056D741  8B EC                     MOV EBP,ESP
0056D743  81 EC B8 04 00 00         SUB ESP,0x4b8
0056D749  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056D74C  53                        PUSH EBX
0056D74D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0056D750  56                        PUSH ESI
0056D751  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0056D757  57                        PUSH EDI
0056D758  85 C0                     TEST EAX,EAX
0056D75A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056D75D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0056D764  75 0C                     JNZ 0x0056d772
0056D766  81 F9 20 03 00 00         CMP ECX,0x320
0056D76C  0F 84 1C 03 00 00         JZ 0x0056da8e
LAB_0056d772:
0056D772  83 F8 01                  CMP EAX,0x1
0056D775  75 0C                     JNZ 0x0056d783
0056D777  81 F9 00 04 00 00         CMP ECX,0x400
0056D77D  0F 84 0B 03 00 00         JZ 0x0056da8e
LAB_0056d783:
0056D783  83 F8 02                  CMP EAX,0x2
0056D786  75 0C                     JNZ 0x0056d794
0056D788  81 F9 00 05 00 00         CMP ECX,0x500
0056D78E  0F 84 FA 02 00 00         JZ 0x0056da8e
LAB_0056d794:
0056D794  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056D799  8D 55 B0                  LEA EDX,[EBP + -0x50]
0056D79C  8D 4D AC                  LEA ECX,[EBP + -0x54]
0056D79F  6A 00                     PUSH 0x0
0056D7A1  52                        PUSH EDX
0056D7A2  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0056D7A5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D7AB  E8 40 00 1C 00            CALL 0x0072d7f0
0056D7B0  8B F0                     MOV ESI,EAX
0056D7B2  83 C4 08                  ADD ESP,0x8
0056D7B5  85 F6                     TEST ESI,ESI
0056D7B7  0F 85 93 02 00 00         JNZ 0x0056da50
0056D7BD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056D7C2  50                        PUSH EAX
0056D7C3  E8 18 3C 14 00            CALL 0x006b13e0
0056D7C8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056D7CB  85 F6                     TEST ESI,ESI
0056D7CD  0F 85 A2 01 00 00         JNZ 0x0056d975
0056D7D3  8B 1D F8 8D 85 00         MOV EBX,dword ptr [0x00858df8]
LAB_0056d7d9:
0056D7D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056D7DC  85 C0                     TEST EAX,EAX
0056D7DE  0F 8C 91 01 00 00         JL 0x0056d975
0056D7E4  83 E8 00                  SUB EAX,0x0
0056D7E7  74 32                     JZ 0x0056d81b
0056D7E9  48                        DEC EAX
0056D7EA  74 19                     JZ 0x0056d805
0056D7EC  48                        DEC EAX
0056D7ED  75 40                     JNZ 0x0056d82f
0056D7EF  C7 05 30 67 80 00 00 05 00 00  MOV dword ptr [0x00806730],0x500
0056D7F9  C7 05 34 67 80 00 00 04 00 00  MOV dword ptr [0x00806734],0x400
0056D803  EB 2A                     JMP 0x0056d82f
LAB_0056d805:
0056D805  C7 05 30 67 80 00 00 04 00 00  MOV dword ptr [0x00806730],0x400
0056D80F  C7 05 34 67 80 00 00 03 00 00  MOV dword ptr [0x00806734],0x300
0056D819  EB 14                     JMP 0x0056d82f
LAB_0056d81b:
0056D81B  C7 05 30 67 80 00 20 03 00 00  MOV dword ptr [0x00806730],0x320
0056D825  C7 05 34 67 80 00 58 02 00 00  MOV dword ptr [0x00806734],0x258
LAB_0056d82f:
0056D82F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0056D832  33 C9                     XOR ECX,ECX
0056D834  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0056D83B  8B 82 5A 11 00 00         MOV EAX,dword ptr [EDX + 0x115a]
0056D841  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0056D844  85 D2                     TEST EDX,EDX
0056D846  7E 34                     JLE 0x0056d87c
0056D848  83 C0 0C                  ADD EAX,0xc
LAB_0056d84b:
0056D84B  8B 3D 30 67 80 00         MOV EDI,dword ptr [0x00806730]
0056D851  39 78 FC                  CMP dword ptr [EAX + -0x4],EDI
0056D854  75 15                     JNZ 0x0056d86b
0056D856  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
0056D85C  39 38                     CMP dword ptr [EAX],EDI
0056D85E  75 0B                     JNZ 0x0056d86b
0056D860  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0056D863  3B 3D 38 67 80 00         CMP EDI,dword ptr [0x00806738]
0056D869  74 0A                     JZ 0x0056d875
LAB_0056d86b:
0056D86B  41                        INC ECX
0056D86C  83 C0 0C                  ADD EAX,0xc
0056D86F  3B CA                     CMP ECX,EDX
0056D871  7C D8                     JL 0x0056d84b
0056D873  EB 07                     JMP 0x0056d87c
LAB_0056d875:
0056D875  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_0056d87c:
0056D87C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056D87F  85 C0                     TEST EAX,EAX
0056D881  0F 84 DF 00 00 00         JZ 0x0056d966
0056D887  B9 00 01 00 00            MOV ECX,0x100
0056D88C  33 C0                     XOR EAX,EAX
0056D88E  8D BD 48 FB FF FF         LEA EDI,[EBP + 0xfffffb48]
0056D894  6A 00                     PUSH 0x0
0056D896  F3 AB                     STOSD.REP ES:EDI
0056D898  B9 08 00 00 00            MOV ECX,0x8
0056D89D  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0056D8A0  F3 AB                     STOSD.REP ES:EDI
0056D8A2  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
0056D8A8  8D 85 48 FF FF FF         LEA EAX,[EBP + 0xffffff48]
0056D8AE  51                        PUSH ECX
0056D8AF  89 9D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EBX
0056D8B5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056D8BA  E8 31 FF 1B 00            CALL 0x0072d7f0
0056D8BF  83 C4 08                  ADD ESP,0x8
0056D8C2  85 C0                     TEST EAX,EAX
0056D8C4  0F 85 82 00 00 00         JNZ 0x0056d94c
0056D8CA  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0056D8D0  68 00 01 00 00            PUSH 0x100
0056D8D5  50                        PUSH EAX
0056D8D6  A1 34 67 80 00            MOV EAX,[0x00806734]
0056D8DB  8D 95 48 FB FF FF         LEA EDX,[EBP + 0xfffffb48]
0056D8E1  52                        PUSH EDX
0056D8E2  8B 15 38 67 80 00         MOV EDX,dword ptr [0x00806738]
0056D8E8  50                        PUSH EAX
0056D8E9  51                        PUSH ECX
0056D8EA  52                        PUSH EDX
0056D8EB  50                        PUSH EAX
0056D8EC  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056D8F1  51                        PUSH ECX
0056D8F2  68 01 00 00 10            PUSH 0x10000001
0056D8F7  50                        PUSH EAX
0056D8F8  E8 43 C2 14 00            CALL 0x006b9b40
0056D8FD  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
0056D903  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0056D909  8B F0                     MOV ESI,EAX
0056D90B  A1 78 6D 85 00            MOV EAX,[0x00856d78]
0056D910  F7 DE                     NEG ESI
0056D912  6A 01                     PUSH 0x1
0056D914  51                        PUSH ECX
0056D915  1B F6                     SBB ESI,ESI
0056D917  52                        PUSH EDX
0056D918  6A 00                     PUSH 0x0
0056D91A  46                        INC ESI
0056D91B  6A 00                     PUSH 0x0
0056D91D  50                        PUSH EAX
0056D91E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0056D921  FF 15 3C BE 85 00         CALL dword ptr [0x0085be3c]
0056D927  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0056D92A  C7 45 9C 66 00 00 00      MOV dword ptr [EBP + -0x64],0x66
0056D931  51                        PUSH ECX
0056D932  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0056D935  6A 01                     PUSH 0x1
0056D937  6A 03                     PUSH 0x3
0056D939  E8 92 64 17 00            CALL 0x006e3dd0
0056D93E  8B 9D 48 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff48]
0056D944  89 1D F8 8D 85 00         MOV dword ptr [0x00858df8],EBX
0056D94A  EB 0F                     JMP 0x0056d95b
LAB_0056d94c:
0056D94C  8B 9D 48 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff48]
0056D952  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056D955  89 1D F8 8D 85 00         MOV dword ptr [0x00858df8],EBX
LAB_0056d95b:
0056D95B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056D95E  85 C0                     TEST EAX,EAX
0056D960  74 04                     JZ 0x0056d966
0056D962  85 F6                     TEST ESI,ESI
0056D964  75 0F                     JNZ 0x0056d975
LAB_0056d966:
0056D966  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056D969  48                        DEC EAX
0056D96A  85 F6                     TEST ESI,ESI
0056D96C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056D96F  0F 84 64 FE FF FF         JZ 0x0056d7d9
LAB_0056d975:
0056D975  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0056D978  85 F6                     TEST ESI,ESI
0056D97A  7D 18                     JGE 0x0056d994
0056D97C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0056D982  68 42 04 00 00            PUSH 0x442
0056D987  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D98C  52                        PUSH EDX
0056D98D  6A FF                     PUSH -0x1
0056D98F  E8 AC 84 13 00            CALL 0x006a5e40
LAB_0056d994:
0056D994  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056D999  50                        PUSH EAX
0056D99A  E8 D1 3A 14 00            CALL 0x006b1470
0056D99F  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0056D9A5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0056D9AB  51                        PUSH ECX
0056D9AC  52                        PUSH EDX
0056D9AD  E8 CE 3C 14 00            CALL 0x006b1680
0056D9B2  C1 E6 04                  SHL ESI,0x4
0056D9B5  8B 86 74 75 80 00         MOV EAX,dword ptr [ESI + 0x807574]
0056D9BB  8B 8E 70 75 80 00         MOV ECX,dword ptr [ESI + 0x807570]
0056D9C1  8B 96 6C 75 80 00         MOV EDX,dword ptr [ESI + 0x80756c]
0056D9C7  50                        PUSH EAX
0056D9C8  8B 86 68 75 80 00         MOV EAX,dword ptr [ESI + 0x807568]
0056D9CE  51                        PUSH ECX
0056D9CF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0056D9D5  52                        PUSH EDX
0056D9D6  50                        PUSH EAX
0056D9D7  6A FF                     PUSH -0x1
0056D9D9  6A 02                     PUSH 0x2
0056D9DB  51                        PUSH ECX
0056D9DC  E8 9F 3F 14 00            CALL 0x006b1980
0056D9E1  8B 96 6C 75 80 00         MOV EDX,dword ptr [ESI + 0x80756c]
0056D9E7  8B 86 68 75 80 00         MOV EAX,dword ptr [ESI + 0x807568]
0056D9ED  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0056D9F3  6A 00                     PUSH 0x0
0056D9F5  52                        PUSH EDX
0056D9F6  50                        PUSH EAX
0056D9F7  6A 02                     PUSH 0x2
0056D9F9  51                        PUSH ECX
0056D9FA  E8 C1 42 14 00            CALL 0x006b1cc0
0056D9FF  8B 96 74 75 80 00         MOV EDX,dword ptr [ESI + 0x807574]
0056DA05  8B 86 70 75 80 00         MOV EAX,dword ptr [ESI + 0x807570]
0056DA0B  8B 8E 6C 75 80 00         MOV ECX,dword ptr [ESI + 0x80756c]
0056DA11  52                        PUSH EDX
0056DA12  8B 96 68 75 80 00         MOV EDX,dword ptr [ESI + 0x807568]
0056DA18  50                        PUSH EAX
0056DA19  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056DA1E  51                        PUSH ECX
0056DA1F  52                        PUSH EDX
0056DA20  6A FF                     PUSH -0x1
0056DA22  6A 03                     PUSH 0x3
0056DA24  50                        PUSH EAX
0056DA25  E8 56 3F 14 00            CALL 0x006b1980
0056DA2A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0056DA30  6A 00                     PUSH 0x0
0056DA32  6A 00                     PUSH 0x0
0056DA34  6A 00                     PUSH 0x0
0056DA36  6A 03                     PUSH 0x3
0056DA38  51                        PUSH ECX
0056DA39  E8 82 42 14 00            CALL 0x006b1cc0
0056DA3E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0056DA41  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056DA47  5F                        POP EDI
0056DA48  5E                        POP ESI
0056DA49  5B                        POP EBX
0056DA4A  8B E5                     MOV ESP,EBP
0056DA4C  5D                        POP EBP
0056DA4D  C2 04 00                  RET 0x4
LAB_0056da50:
0056DA50  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0056DA53  68 90 A1 7C 00            PUSH 0x7ca190
0056DA58  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056DA5D  56                        PUSH ESI
0056DA5E  6A 00                     PUSH 0x0
0056DA60  68 4F 04 00 00            PUSH 0x44f
0056DA65  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056DA6A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056DA6F  E8 5C FA 13 00            CALL 0x006ad4d0
0056DA74  83 C4 18                  ADD ESP,0x18
0056DA77  85 C0                     TEST EAX,EAX
0056DA79  74 01                     JZ 0x0056da7c
0056DA7B  CC                        INT3
LAB_0056da7c:
0056DA7C  68 4F 04 00 00            PUSH 0x44f
0056DA81  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056DA86  6A 00                     PUSH 0x0
0056DA88  56                        PUSH ESI
0056DA89  E8 B2 83 13 00            CALL 0x006a5e40
LAB_0056da8e:
0056DA8E  5F                        POP EDI
0056DA8F  5E                        POP ESI
0056DA90  5B                        POP EBX
0056DA91  8B E5                     MOV ESP,EBP
0056DA93  5D                        POP EBP
0056DA94  C2 04 00                  RET 0x4
