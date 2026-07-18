FUN_0067e6b0:
0067E6B0  55                        PUSH EBP
0067E6B1  8B EC                     MOV EBP,ESP
0067E6B3  83 EC 44                  SUB ESP,0x44
0067E6B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E6BB  53                        PUSH EBX
0067E6BC  56                        PUSH ESI
0067E6BD  57                        PUSH EDI
0067E6BE  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067E6C1  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067E6C4  6A 00                     PUSH 0x0
0067E6C6  52                        PUSH EDX
0067E6C7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067E6CA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E6D0  E8 1B F1 0A 00            CALL 0x0072d7f0
0067E6D5  8B F0                     MOV ESI,EAX
0067E6D7  83 C4 08                  ADD ESP,0x8
0067E6DA  85 F6                     TEST ESI,ESI
0067E6DC  75 6E                     JNZ 0x0067e74c
0067E6DE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067E6E1  85 C0                     TEST EAX,EAX
0067E6E3  75 17                     JNZ 0x0067e6fc
0067E6E5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E6EA  68 FA 01 00 00            PUSH 0x1fa
0067E6EF  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E6F4  50                        PUSH EAX
0067E6F5  6A CC                     PUSH -0x34
0067E6F7  E8 44 77 02 00            CALL 0x006a5e40
LAB_0067e6fc:
0067E6FC  8B 1D 28 D7 79 00         MOV EBX,dword ptr [0x0079d728]
0067E702  33 FF                     XOR EDI,EDI
LAB_0067e704:
0067E704  57                        PUSH EDI
0067E705  6A 03                     PUSH 0x3
0067E707  53                        PUSH EBX
0067E708  E8 F3 44 07 00            CALL 0x006f2c00
0067E70D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067E710  83 C4 0C                  ADD ESP,0xc
0067E713  8B F0                     MOV ESI,EAX
0067E715  56                        PUSH ESI
0067E716  6A 0C                     PUSH 0xc
0067E718  E8 A3 3A 07 00            CALL 0x006f21c0
0067E71D  85 C0                     TEST EAX,EAX
0067E71F  75 19                     JNZ 0x0067e73a
0067E721  47                        INC EDI
0067E722  81 FF F0 FF FF 7F         CMP EDI,0x7ffffff0
0067E728  7C DA                     JL 0x0067e704
0067E72A  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067E72D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E733  5F                        POP EDI
0067E734  5E                        POP ESI
0067E735  5B                        POP EBX
0067E736  8B E5                     MOV ESP,EBP
0067E738  5D                        POP EBP
0067E739  C3                        RET
LAB_0067e73a:
0067E73A  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067E73D  8B C6                     MOV EAX,ESI
0067E73F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E745  5F                        POP EDI
0067E746  5E                        POP ESI
0067E747  5B                        POP EBX
0067E748  8B E5                     MOV ESP,EBP
0067E74A  5D                        POP EBP
0067E74B  C3                        RET
LAB_0067e74c:
0067E74C  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067E74F  68 C8 30 7D 00            PUSH 0x7d30c8
0067E754  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E759  56                        PUSH ESI
0067E75A  6A 00                     PUSH 0x0
0067E75C  68 FD 01 00 00            PUSH 0x1fd
0067E761  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E766  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E76C  E8 5F ED 02 00            CALL 0x006ad4d0
0067E771  83 C4 18                  ADD ESP,0x18
0067E774  85 C0                     TEST EAX,EAX
0067E776  74 01                     JZ 0x0067e779
0067E778  CC                        INT3
LAB_0067e779:
0067E779  68 FE 01 00 00            PUSH 0x1fe
0067E77E  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E783  6A 00                     PUSH 0x0
0067E785  56                        PUSH ESI
0067E786  E8 B5 76 02 00            CALL 0x006a5e40
0067E78B  5F                        POP EDI
0067E78C  5E                        POP ESI
0067E78D  33 C0                     XOR EAX,EAX
0067E78F  5B                        POP EBX
0067E790  8B E5                     MOV ESP,EBP
0067E792  5D                        POP EBP
0067E793  C3                        RET
