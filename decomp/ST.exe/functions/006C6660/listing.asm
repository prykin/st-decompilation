FUN_006c6660:
006C6660  55                        PUSH EBP
006C6661  8B EC                     MOV EBP,ESP
006C6663  6A FF                     PUSH -0x1
006C6665  68 E8 D9 79 00            PUSH 0x79d9e8
006C666A  68 64 D9 72 00            PUSH 0x72d964
006C666F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C6675  50                        PUSH EAX
006C6676  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C667D  83 EC 1C                  SUB ESP,0x1c
006C6680  53                        PUSH EBX
006C6681  56                        PUSH ESI
006C6682  57                        PUSH EDI
006C6683  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C6686  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C6689  85 C0                     TEST EAX,EAX
006C668B  0F 84 85 01 00 00         JZ 0x006c6816
006C6691  03 C0                     ADD EAX,EAX
006C6693  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C6696  3B D8                     CMP EBX,EAX
006C6698  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C669B  0F 8C 7B 01 00 00         JL 0x006c681c
006C66A1  3B F8                     CMP EDI,EAX
006C66A3  0F 8C 73 01 00 00         JL 0x006c681c
006C66A9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C66AC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C66AF  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
006C66B2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006C66B5  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006C66B8  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
006C66BB  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006C66BE  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006C66C1  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006C66C4  8D 96 84 04 00 00         LEA EDX,[ESI + 0x484]
006C66CA  52                        PUSH EDX
006C66CB  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006C66CE  50                        PUSH EAX
006C66CF  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006C66D2  51                        PUSH ECX
006C66D3  E8 D8 97 00 00            CALL 0x006cfeb0
006C66D8  83 C4 0C                  ADD ESP,0xc
006C66DB  85 C0                     TEST EAX,EAX
006C66DD  75 15                     JNZ 0x006c66f4
LAB_006c66df:
006C66DF  33 C0                     XOR EAX,EAX
006C66E1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C66E4  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C66EB  5F                        POP EDI
006C66EC  5E                        POP ESI
006C66ED  5B                        POP EBX
006C66EE  8B E5                     MOV ESP,EBP
006C66F0  5D                        POP EBP
006C66F1  C2 1C 00                  RET 0x1c
LAB_006c66f4:
006C66F4  39 5D DC                  CMP dword ptr [EBP + -0x24],EBX
006C66F7  0F 85 08 01 00 00         JNZ 0x006c6805
006C66FD  39 7D E0                  CMP dword ptr [EBP + -0x20],EDI
006C6700  0F 85 FF 00 00 00         JNZ 0x006c6805
006C6706  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006C6709  81 E2 00 11 00 00         AND EDX,0x1100
006C670F  81 FA 00 01 00 00         CMP EDX,0x100
006C6715  75 15                     JNZ 0x006c672c
006C6717  33 C0                     XOR EAX,EAX
006C6719  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C671C  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C6723  5F                        POP EDI
006C6724  5E                        POP ESI
006C6725  5B                        POP EBX
006C6726  8B E5                     MOV ESP,EBP
006C6728  5D                        POP EBP
006C6729  C2 1C 00                  RET 0x1c
LAB_006c672c:
006C672C  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C6733  74 0D                     JZ 0x006c6742
006C6735  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006C673B  50                        PUSH EAX
006C673C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c6742:
006C6742  56                        PUSH ESI
006C6743  E8 68 51 FF FF            CALL 0x006bb8b0
006C6748  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C674B  85 C0                     TEST EAX,EAX
006C674D  75 53                     JNZ 0x006c67a2
006C674F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C6752  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006C6758  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C675B  51                        PUSH ECX
006C675C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C675F  52                        PUSH EDX
006C6760  57                        PUSH EDI
006C6761  53                        PUSH EBX
006C6762  50                        PUSH EAX
006C6763  0F AF 45 D8               IMUL EAX,dword ptr [EBP + -0x28]
006C6767  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006C676D  03 45 D4                  ADD EAX,dword ptr [EBP + -0x2c]
006C6770  50                        PUSH EAX
006C6771  E8 BA 12 01 00            CALL 0x006d7a30
006C6776  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C677D  EB 1A                     JMP 0x006c6799
LAB_006c6799:
006C6799  56                        PUSH ESI
006C679A  E8 E1 51 FF FF            CALL 0x006bb980
006C679F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c67a2:
006C67A2  3D A0 00 76 88            CMP EAX,0x887600a0
006C67A7  74 07                     JZ 0x006c67b0
006C67A9  3D AE 01 76 88            CMP EAX,0x887601ae
006C67AE  75 0A                     JNZ 0x006c67ba
LAB_006c67b0:
006C67B0  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006C67B7  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c67ba:
006C67BA  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C67C1  74 10                     JZ 0x006c67d3
006C67C3  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C67C9  56                        PUSH ESI
006C67CA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C67D0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c67d3:
006C67D3  85 C0                     TEST EAX,EAX
006C67D5  0F 84 04 FF FF FF         JZ 0x006c66df
006C67DB  6A 58                     PUSH 0x58
006C67DD  68 8C DF 7E 00            PUSH 0x7edf8c
006C67E2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C67E8  51                        PUSH ECX
006C67E9  50                        PUSH EAX
006C67EA  E8 51 F6 FD FF            CALL 0x006a5e40
006C67EF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006C67F2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C67F5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C67FC  5F                        POP EDI
006C67FD  5E                        POP ESI
006C67FE  5B                        POP EBX
006C67FF  8B E5                     MOV ESP,EBP
006C6801  5D                        POP EBP
006C6802  C2 1C 00                  RET 0x1c
LAB_006c6805:
006C6805  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C6808  52                        PUSH EDX
006C6809  57                        PUSH EDI
006C680A  53                        PUSH EBX
006C680B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C680E  50                        PUSH EAX
006C680F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C6812  51                        PUSH ECX
006C6813  56                        PUSH ESI
006C6814  EB 18                     JMP 0x006c682e
LAB_006c6816:
006C6816  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C6819  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_006c681c:
006C681C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C681F  52                        PUSH EDX
006C6820  57                        PUSH EDI
006C6821  53                        PUSH EBX
006C6822  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C6825  50                        PUSH EAX
006C6826  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C6829  51                        PUSH ECX
006C682A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C682D  52                        PUSH EDX
LAB_006c682e:
006C682E  E8 AD 41 FF FF            CALL 0x006ba9e0
006C6833  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C6836  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C683D  5F                        POP EDI
006C683E  5E                        POP ESI
006C683F  5B                        POP EBX
006C6840  8B E5                     MOV ESP,EBP
006C6842  5D                        POP EBP
006C6843  C2 1C 00                  RET 0x1c
