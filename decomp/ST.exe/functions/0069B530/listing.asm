FUN_0069b530:
0069B530  55                        PUSH EBP
0069B531  8B EC                     MOV EBP,ESP
0069B533  6A FF                     PUSH -0x1
0069B535  68 F8 D7 79 00            PUSH 0x79d7f8
0069B53A  68 64 D9 72 00            PUSH 0x72d964
0069B53F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0069B545  50                        PUSH EAX
0069B546  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0069B54D  81 EC 84 00 00 00         SUB ESP,0x84
0069B553  53                        PUSH EBX
0069B554  56                        PUSH ESI
0069B555  57                        PUSH EDI
0069B556  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069B559  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
0069B55F  33 F6                     XOR ESI,ESI
0069B561  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0069B564  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
0069B567  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0069B56A  2B 45 0C                  SUB EAX,dword ptr [EBP + 0xc]
0069B56D  40                        INC EAX
0069B56E  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0069B571  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0069B574  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
0069B577  47                        INC EDI
0069B578  89 BD 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDI
0069B57E  8B D7                     MOV EDX,EDI
0069B580  0F AF D0                  IMUL EDX,EAX
0069B583  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
0069B586  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0069B589  8B B1 47 58 00 00         MOV ESI,dword ptr [ECX + 0x5847]
0069B58F  8B C6                     MOV EAX,ESI
0069B591  0F AF C2                  IMUL EAX,EDX
0069B594  C1 E0 02                  SHL EAX,0x2
0069B597  83 C0 03                  ADD EAX,0x3
0069B59A  24 FC                     AND AL,0xfc
0069B59C  E8 9F 24 09 00            CALL 0x0072da40
0069B5A1  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069B5A4  8B DC                     MOV EBX,ESP
0069B5A6  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
0069B5A9  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069B5B0  33 C9                     XOR ECX,ECX
0069B5B2  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0069B5B5  3B F1                     CMP ESI,ECX
0069B5B7  0F 8E B8 00 00 00         JLE 0x0069b675
0069B5BD  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
LAB_0069b5c3:
0069B5C3  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0069B5C9  0F AF 88 2F 58 00 00      IMUL ECX,dword ptr [EAX + 0x582f]
0069B5D0  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0069B5D3  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0069B5D6  8B C6                     MOV EAX,ESI
0069B5D8  3B C7                     CMP EAX,EDI
0069B5DA  7D 77                     JGE 0x0069b653
0069B5DC  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0069B5DF  0F AF D0                  IMUL EDX,EAX
0069B5E2  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
0069B5E8  8D 04 93                  LEA EAX,[EBX + EDX*0x4]
0069B5EB  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
LAB_0069b5f1:
0069B5F1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069B5F4  8D 04 16                  LEA EAX,[ESI + EDX*0x1]
0069B5F7  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0069B5FD  0F AF 82 33 58 00 00      IMUL EAX,dword ptr [EDX + 0x5833]
0069B604  03 C1                     ADD EAX,ECX
0069B606  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0069B609  85 D2                     TEST EDX,EDX
0069B60B  7E 31                     JLE 0x0069b63e
0069B60D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069B610  03 C1                     ADD EAX,ECX
0069B612  D1 E0                     SHL EAX,0x1
0069B614  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
LAB_0069b61a:
0069B61A  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
0069B620  8B BF 4F 58 00 00         MOV EDI,dword ptr [EDI + 0x584f]
0069B626  0F BF 3C 38               MOVSX EDI,word ptr [EAX + EDI*0x1]
0069B62A  89 39                     MOV dword ptr [ECX],EDI
0069B62C  83 C0 02                  ADD EAX,0x2
0069B62F  83 C1 04                  ADD ECX,0x4
0069B632  4A                        DEC EDX
0069B633  75 E5                     JNZ 0x0069b61a
0069B635  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069B638  8B BD 7C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff7c]
LAB_0069b63e:
0069B63E  46                        INC ESI
0069B63F  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0069B642  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
0069B649  01 85 70 FF FF FF         ADD dword ptr [EBP + 0xffffff70],EAX
0069B64F  3B F7                     CMP ESI,EDI
0069B651  7C 9E                     JL 0x0069b5f1
LAB_0069b653:
0069B653  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0069B656  41                        INC ECX
0069B657  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0069B65A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0069B65D  01 85 74 FF FF FF         ADD dword ptr [EBP + 0xffffff74],EAX
0069B663  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0069B669  3B 8A 47 58 00 00         CMP ECX,dword ptr [EDX + 0x5847]
0069B66F  0F 8C 4E FF FF FF         JL 0x0069b5c3
LAB_0069b675:
0069B675  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0069B67B  3B 88 47 58 00 00         CMP ECX,dword ptr [EAX + 0x5847]
0069B681  0F 8D 31 01 00 00         JGE 0x0069b7b8
LAB_0069b687:
0069B687  8B F1                     MOV ESI,ECX
0069B689  0F AF 75 90               IMUL ESI,dword ptr [EBP + -0x70]
0069B68D  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0069B690  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069B693  8B F8                     MOV EDI,EAX
0069B695  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0069B698  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
0069B69B  0F 8F D1 00 00 00         JG 0x0069b772
0069B6A1  EB 03                     JMP 0x0069b6a6
LAB_0069b6a3:
0069B6A3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_0069b6a6:
0069B6A6  2B C7                     SUB EAX,EDI
0069B6A8  74 06                     JZ 0x0069b6b0
0069B6AA  03 75 80                  ADD ESI,dword ptr [EBP + -0x80]
0069B6AD  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0069b6b0:
0069B6B0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069B6B3  8B D0                     MOV EDX,EAX
0069B6B5  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0069B6B8  3B 45 14                  CMP EAX,dword ptr [EBP + 0x14]
0069B6BB  0F 8F A4 00 00 00         JG 0x0069b765
0069B6C1  33 C9                     XOR ECX,ECX
0069B6C3  8D 04 B3                  LEA EAX,[EBX + ESI*0x4]
0069B6C6  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
LAB_0069b6cc:
0069B6CC  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0069B6D2  8B 80 33 58 00 00         MOV EAX,dword ptr [EAX + 0x5833]
0069B6D8  3B D0                     CMP EDX,EAX
0069B6DA  7D 68                     JGE 0x0069b744
0069B6DC  42                        INC EDX
0069B6DD  3B D0                     CMP EDX,EAX
0069B6DF  7D 63                     JGE 0x0069b744
0069B6E1  3B F8                     CMP EDI,EAX
0069B6E3  7D 5F                     JGE 0x0069b744
0069B6E5  47                        INC EDI
0069B6E6  3B F8                     CMP EDI,EAX
0069B6E8  7D 5A                     JGE 0x0069b744
0069B6EA  8D 54 31 01               LEA EDX,[ECX + ESI*0x1 + 0x1]
0069B6EE  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0069B6F1  03 C6                     ADD EAX,ESI
0069B6F3  8D 34 01                  LEA ESI,[ECX + EAX*0x1]
0069B6F6  8D 7C 01 01               LEA EDI,[ECX + EAX*0x1 + 0x1]
0069B6FA  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0069B700  8B 00                     MOV EAX,dword ptr [EAX]
0069B702  83 F8 01                  CMP EAX,0x1
0069B705  75 3D                     JNZ 0x0069b744
0069B707  39 04 93                  CMP dword ptr [EBX + EDX*0x4],EAX
0069B70A  75 30                     JNZ 0x0069b73c
0069B70C  39 04 B3                  CMP dword ptr [EBX + ESI*0x4],EAX
0069B70F  75 2B                     JNZ 0x0069b73c
0069B711  39 04 BB                  CMP dword ptr [EBX + EDI*0x4],EAX
0069B714  75 26                     JNZ 0x0069b73c
0069B716  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0069B71C  C7 00 04 00 00 00         MOV dword ptr [EAX],0x4
0069B722  C7 04 93 04 00 00 00      MOV dword ptr [EBX + EDX*0x4],0x4
0069B729  C7 04 B3 04 00 00 00      MOV dword ptr [EBX + ESI*0x4],0x4
0069B730  C7 04 BB 04 00 00 00      MOV dword ptr [EBX + EDI*0x4],0x4
0069B737  FF 45 84                  INC dword ptr [EBP + -0x7c]
0069B73A  EB 08                     JMP 0x0069b744
LAB_0069b73c:
0069B73C  83 F8 01                  CMP EAX,0x1
0069B73F  75 03                     JNZ 0x0069b744
0069B741  FF 45 D8                  INC dword ptr [EBP + -0x28]
LAB_0069b744:
0069B744  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0069B747  42                        INC EDX
0069B748  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0069B74B  83 AD 6C FF FF FF 04      SUB dword ptr [EBP + 0xffffff6c],0x4
0069B752  49                        DEC ECX
0069B753  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
0069B756  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0069B759  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0069B75C  0F 8E 6A FF FF FF         JLE 0x0069b6cc
0069B762  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_0069b765:
0069B765  47                        INC EDI
0069B766  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0069B769  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
0069B76C  0F 8E 31 FF FF FF         JLE 0x0069b6a3
LAB_0069b772:
0069B772  85 C9                     TEST ECX,ECX
0069B774  75 12                     JNZ 0x0069b788
0069B776  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0069B779  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0069B77C  89 02                     MOV dword ptr [EDX],EAX
0069B77E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0069B781  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0069B784  89 02                     MOV dword ptr [EDX],EAX
0069B786  EB 1A                     JMP 0x0069b7a2
LAB_0069b788:
0069B788  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0069B78B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0069B78E  2B 54 88 FC               SUB EDX,dword ptr [EAX + ECX*0x4 + -0x4]
0069B792  89 14 88                  MOV dword ptr [EAX + ECX*0x4],EDX
0069B795  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0069B798  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0069B79B  2B 54 88 FC               SUB EDX,dword ptr [EAX + ECX*0x4 + -0x4]
0069B79F  89 14 88                  MOV dword ptr [EAX + ECX*0x4],EDX
LAB_0069b7a2:
0069B7A2  41                        INC ECX
0069B7A3  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0069B7A6  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0069B7AC  3B 88 47 58 00 00         CMP ECX,dword ptr [EAX + 0x5847]
0069B7B2  0F 8C CF FE FF FF         JL 0x0069b687
LAB_0069b7b8:
0069B7B8  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0069B7BB  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0069B7BE  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0069B7C1  EB 2C                     JMP 0x0069b7ef
LAB_0069b7ef:
0069B7EF  8D A5 60 FF FF FF         LEA ESP,[EBP + 0xffffff60]
0069B7F5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069B7F8  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0069B7FF  5F                        POP EDI
0069B800  5E                        POP ESI
0069B801  5B                        POP EBX
0069B802  8B E5                     MOV ESP,EBP
0069B804  5D                        POP EBP
0069B805  C2 1C 00                  RET 0x1c
