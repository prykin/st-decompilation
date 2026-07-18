FUN_0071a5e0:
0071A5E0  55                        PUSH EBP
0071A5E1  8B EC                     MOV EBP,ESP
0071A5E3  83 EC 54                  SUB ESP,0x54
0071A5E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071A5EB  53                        PUSH EBX
0071A5EC  56                        PUSH ESI
0071A5ED  33 DB                     XOR EBX,EBX
0071A5EF  57                        PUSH EDI
0071A5F0  8D 55 B0                  LEA EDX,[EBP + -0x50]
0071A5F3  8D 4D AC                  LEA ECX,[EBP + -0x54]
0071A5F6  53                        PUSH EBX
0071A5F7  52                        PUSH EDX
0071A5F8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0071A5FB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0071A5FE  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0071A601  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071A607  E8 E4 31 01 00            CALL 0x0072d7f0
0071A60C  8B F8                     MOV EDI,EAX
0071A60E  83 C4 08                  ADD ESP,0x8
0071A611  3B FB                     CMP EDI,EBX
0071A613  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0071A616  0F 85 BB 01 00 00         JNZ 0x0071a7d7
0071A61C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071A61F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071A622  3B FB                     CMP EDI,EBX
0071A624  74 04                     JZ 0x0071a62a
0071A626  3B F3                     CMP ESI,EBX
0071A628  75 17                     JNZ 0x0071a641
LAB_0071a62a:
0071A62A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071A62F  68 48 01 00 00            PUSH 0x148
0071A634  68 00 08 7F 00            PUSH 0x7f0800
0071A639  50                        PUSH EAX
0071A63A  6A CC                     PUSH -0x34
0071A63C  E8 FF B7 F8 FF            CALL 0x006a5e40
LAB_0071a641:
0071A641  6A 10                     PUSH 0x10
0071A643  E8 C8 05 F9 FF            CALL 0x006aac10
0071A648  6A 01                     PUSH 0x1
0071A64A  56                        PUSH ESI
0071A64B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071A64E  57                        PUSH EDI
0071A64F  89 38                     MOV dword ptr [EAX],EDI
0071A651  E8 BA 03 00 00            CALL 0x0071aa10
0071A656  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A659  83 C4 0C                  ADD ESP,0xc
0071A65C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0071A65F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A662  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0071A665  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0071A668  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0071A66B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071A66E  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0071A671  C1 E0 02                  SHL EAX,0x2
0071A674  50                        PUSH EAX
0071A675  E8 96 05 F9 FF            CALL 0x006aac10
0071A67A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A67D  33 F6                     XOR ESI,ESI
0071A67F  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0071A682  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071A685  39 5A 08                  CMP dword ptr [EDX + 0x8],EBX
0071A688  0F 8E 38 01 00 00         JLE 0x0071a7c6
LAB_0071a68e:
0071A68E  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0071A691  3B 71 08                  CMP ESI,dword ptr [ECX + 0x8]
0071A694  7D 08                     JGE 0x0071a69e
0071A696  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0071A699  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
0071A69C  EB 02                     JMP 0x0071a6a0
LAB_0071a69e:
0071A69E  33 C0                     XOR EAX,EAX
LAB_0071a6a0:
0071A6A0  85 C0                     TEST EAX,EAX
0071A6A2  0F 84 12 01 00 00         JZ 0x0071a7ba
0071A6A8  BF 80 08 7F 00            MOV EDI,0x7f0880
0071A6AD  8B C8                     MOV ECX,EAX
LAB_0071a6af:
0071A6AF  8A 19                     MOV BL,byte ptr [ECX]
0071A6B1  8A D3                     MOV DL,BL
0071A6B3  3A 1F                     CMP BL,byte ptr [EDI]
0071A6B5  75 1C                     JNZ 0x0071a6d3
0071A6B7  84 D2                     TEST DL,DL
0071A6B9  74 14                     JZ 0x0071a6cf
0071A6BB  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
0071A6BE  8A D3                     MOV DL,BL
0071A6C0  3A 5F 01                  CMP BL,byte ptr [EDI + 0x1]
0071A6C3  75 0E                     JNZ 0x0071a6d3
0071A6C5  83 C1 02                  ADD ECX,0x2
0071A6C8  83 C7 02                  ADD EDI,0x2
0071A6CB  84 D2                     TEST DL,DL
0071A6CD  75 E0                     JNZ 0x0071a6af
LAB_0071a6cf:
0071A6CF  33 C9                     XOR ECX,ECX
0071A6D1  EB 05                     JMP 0x0071a6d8
LAB_0071a6d3:
0071A6D3  1B C9                     SBB ECX,ECX
0071A6D5  83 D9 FF                  SBB ECX,-0x1
LAB_0071a6d8:
0071A6D8  85 C9                     TEST ECX,ECX
0071A6DA  0F 84 D7 00 00 00         JZ 0x0071a7b7
0071A6E0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071A6E3  6A 01                     PUSH 0x1
0071A6E5  50                        PUSH EAX
0071A6E6  51                        PUSH ECX
0071A6E7  E8 24 03 00 00            CALL 0x0071aa10
0071A6EC  8B F8                     MOV EDI,EAX
0071A6EE  83 C4 0C                  ADD ESP,0xc
0071A6F1  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0071A6F4  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0071A6F7  8D 54 80 09               LEA EDX,[EAX + EAX*0x4 + 0x9]
0071A6FB  52                        PUSH EDX
0071A6FC  E8 0F 05 F9 FF            CALL 0x006aac10
0071A701  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A704  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0071A707  89 04 B2                  MOV dword ptr [EDX + ESI*0x4],EAX
0071A70A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A70D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0071A710  8B 14 B1                  MOV EDX,dword ptr [ECX + ESI*0x4]
0071A713  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0071A719  C7 47 04 00 00 00 00      MOV dword ptr [EDI + 0x4],0x0
0071A720  EB 03                     JMP 0x0071a725
LAB_0071a722:
0071A722  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0071a725:
0071A725  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0071A728  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0071A72B  3B C1                     CMP EAX,ECX
0071A72D  7D 0D                     JGE 0x0071a73c
0071A72F  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0071A732  40                        INC EAX
0071A733  8B 5C 81 FC               MOV EBX,dword ptr [ECX + EAX*0x4 + -0x4]
0071A737  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0071A73A  EB 02                     JMP 0x0071a73e
LAB_0071a73c:
0071A73C  33 DB                     XOR EBX,EBX
LAB_0071a73e:
0071A73E  85 DB                     TEST EBX,EBX
0071A740  74 68                     JZ 0x0071a7aa
0071A742  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071A745  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0071A748  6A 00                     PUSH 0x0
0071A74A  51                        PUSH ECX
0071A74B  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0071A74E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071A751  53                        PUSH EBX
0071A752  52                        PUSH EDX
0071A753  8B 3C B0                  MOV EDI,dword ptr [EAX + ESI*0x4]
0071A756  E8 A5 F5 FF FF            CALL 0x00719d00
0071A75B  8B 0F                     MOV ECX,dword ptr [EDI]
0071A75D  83 C4 10                  ADD ESP,0x10
0071A760  41                        INC ECX
0071A761  8D 14 8F                  LEA EDX,[EDI + ECX*0x4]
0071A764  89 04 11                  MOV dword ptr [ECX + EDX*0x1],EAX
0071A767  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071A76A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0071A76D  8B 0C B0                  MOV ECX,dword ptr [EAX + ESI*0x4]
0071A770  8B 01                     MOV EAX,dword ptr [ECX]
0071A772  40                        INC EAX
0071A773  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
0071A776  83 3C 08 00               CMP dword ptr [EAX + ECX*0x1],0x0
0071A77A  74 A6                     JZ 0x0071a722
0071A77C  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
0071A77F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071A782  6A 00                     PUSH 0x0
0071A784  53                        PUSH EBX
0071A785  8B 3C B2                  MOV EDI,dword ptr [EDX + ESI*0x4]
0071A788  50                        PUSH EAX
0071A789  E8 62 F6 FF FF            CALL 0x00719df0
0071A78E  8B 0F                     MOV ECX,dword ptr [EDI]
0071A790  83 C4 0C                  ADD ESP,0xc
0071A793  8D 14 8F                  LEA EDX,[EDI + ECX*0x4]
0071A796  88 44 11 04               MOV byte ptr [ECX + EDX*0x1 + 0x4],AL
0071A79A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A79D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0071A7A0  8B 04 B1                  MOV EAX,dword ptr [ECX + ESI*0x4]
0071A7A3  FF 00                     INC dword ptr [EAX]
0071A7A5  E9 78 FF FF FF            JMP 0x0071a722
LAB_0071a7aa:
0071A7AA  57                        PUSH EDI
0071A7AB  E8 C0 AD F9 FF            CALL 0x006b5570
0071A7B0  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0071a7b7:
0071A7B7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0071a7ba:
0071A7BA  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0071A7BD  46                        INC ESI
0071A7BE  3B F0                     CMP ESI,EAX
0071A7C0  0F 8C C8 FE FF FF         JL 0x0071a68e
LAB_0071a7c6:
0071A7C6  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0071A7C9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071A7CE  8B C2                     MOV EAX,EDX
0071A7D0  5F                        POP EDI
0071A7D1  5E                        POP ESI
0071A7D2  5B                        POP EBX
0071A7D3  8B E5                     MOV ESP,EBP
0071A7D5  5D                        POP EBP
0071A7D6  C3                        RET
LAB_0071a7d7:
0071A7D7  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0071A7DA  68 70 08 7F 00            PUSH 0x7f0870
0071A7DF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071A7E4  57                        PUSH EDI
0071A7E5  53                        PUSH EBX
0071A7E6  68 6F 01 00 00            PUSH 0x16f
0071A7EB  68 00 08 7F 00            PUSH 0x7f0800
0071A7F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071A7F6  E8 D5 2C F9 FF            CALL 0x006ad4d0
0071A7FB  83 C4 18                  ADD ESP,0x18
0071A7FE  85 C0                     TEST EAX,EAX
0071A800  74 01                     JZ 0x0071a803
0071A802  CC                        INT3
LAB_0071a803:
0071A803  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A806  3B CB                     CMP ECX,EBX
0071A808  0F 84 92 00 00 00         JZ 0x0071a8a0
0071A80E  39 59 0C                  CMP dword ptr [ECX + 0xc],EBX
0071A811  74 77                     JZ 0x0071a88a
0071A813  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0071A816  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0071A819  3B C3                     CMP EAX,EBX
0071A81B  7E 5F                     JLE 0x0071a87c
0071A81D  33 F6                     XOR ESI,ESI
LAB_0071a81f:
0071A81F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0071A822  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
0071A825  85 D2                     TEST EDX,EDX
0071A827  74 42                     JZ 0x0071a86b
0071A829  33 DB                     XOR EBX,EBX
0071A82B  39 1A                     CMP dword ptr [EDX],EBX
0071A82D  7E 2E                     JLE 0x0071a85d
0071A82F  BF 05 00 00 00            MOV EDI,0x5
LAB_0071a834:
0071A834  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
0071A837  83 3C 3A 00               CMP dword ptr [EDX + EDI*0x1],0x0
0071A83B  74 0F                     JZ 0x0071a84c
0071A83D  8B 09                     MOV ECX,dword ptr [ECX]
0071A83F  8B C2                     MOV EAX,EDX
0071A841  03 C7                     ADD EAX,EDI
0071A843  50                        PUSH EAX
0071A844  E8 97 78 FD FF            CALL 0x006f20e0
0071A849  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0071a84c:
0071A84C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0071A84F  43                        INC EBX
0071A850  83 C7 05                  ADD EDI,0x5
0071A853  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
0071A856  3B 1A                     CMP EBX,dword ptr [EDX]
0071A858  7C DA                     JL 0x0071a834
0071A85A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_0071a85d:
0071A85D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0071A860  03 C6                     ADD EAX,ESI
0071A862  50                        PUSH EAX
0071A863  E8 F8 07 F9 FF            CALL 0x006ab060
0071A868  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0071a86b:
0071A86B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0071A86E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0071A871  40                        INC EAX
0071A872  83 C6 04                  ADD ESI,0x4
0071A875  3B C2                     CMP EAX,EDX
0071A877  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0071A87A  7C A3                     JL 0x0071a81f
LAB_0071a87c:
0071A87C  83 C1 0C                  ADD ECX,0xc
0071A87F  51                        PUSH ECX
0071A880  E8 DB 07 F9 FF            CALL 0x006ab060
0071A885  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A888  33 DB                     XOR EBX,EBX
LAB_0071a88a:
0071A88A  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0071A88D  3B CB                     CMP ECX,EBX
0071A88F  74 06                     JZ 0x0071a897
0071A891  51                        PUSH ECX
0071A892  E8 D9 AC F9 FF            CALL 0x006b5570
LAB_0071a897:
0071A897  8D 4D FC                  LEA ECX,[EBP + -0x4]
0071A89A  51                        PUSH ECX
0071A89B  E8 C0 07 F9 FF            CALL 0x006ab060
LAB_0071a8a0:
0071A8A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071A8A3  3B C3                     CMP EAX,EBX
0071A8A5  74 06                     JZ 0x0071a8ad
0071A8A7  50                        PUSH EAX
0071A8A8  E8 C3 AC F9 FF            CALL 0x006b5570
LAB_0071a8ad:
0071A8AD  68 87 01 00 00            PUSH 0x187
0071A8B2  68 00 08 7F 00            PUSH 0x7f0800
0071A8B7  53                        PUSH EBX
0071A8B8  57                        PUSH EDI
0071A8B9  E8 82 B5 F8 FF            CALL 0x006a5e40
0071A8BE  5F                        POP EDI
0071A8BF  5E                        POP ESI
0071A8C0  33 C0                     XOR EAX,EAX
0071A8C2  5B                        POP EBX
0071A8C3  8B E5                     MOV ESP,EBP
0071A8C5  5D                        POP EBP
0071A8C6  C3                        RET
