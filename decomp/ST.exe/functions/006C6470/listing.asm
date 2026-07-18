FUN_006c6470:
006C6470  55                        PUSH EBP
006C6471  8B EC                     MOV EBP,ESP
006C6473  6A FF                     PUSH -0x1
006C6475  68 D8 D9 79 00            PUSH 0x79d9d8
006C647A  68 64 D9 72 00            PUSH 0x72d964
006C647F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C6485  50                        PUSH EAX
006C6486  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C648D  83 EC 1C                  SUB ESP,0x1c
006C6490  53                        PUSH EBX
006C6491  56                        PUSH ESI
006C6492  57                        PUSH EDI
006C6493  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C6496  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C6499  85 C0                     TEST EAX,EAX
006C649B  0F 84 85 01 00 00         JZ 0x006c6626
006C64A1  03 C0                     ADD EAX,EAX
006C64A3  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C64A6  3B D8                     CMP EBX,EAX
006C64A8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C64AB  0F 8C 7B 01 00 00         JL 0x006c662c
006C64B1  3B F8                     CMP EDI,EAX
006C64B3  0F 8C 73 01 00 00         JL 0x006c662c
006C64B9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C64BC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C64BF  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
006C64C2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006C64C5  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006C64C8  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
006C64CB  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006C64CE  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006C64D1  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006C64D4  8D 96 84 04 00 00         LEA EDX,[ESI + 0x484]
006C64DA  52                        PUSH EDX
006C64DB  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006C64DE  50                        PUSH EAX
006C64DF  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006C64E2  51                        PUSH ECX
006C64E3  E8 C8 99 00 00            CALL 0x006cfeb0
006C64E8  83 C4 0C                  ADD ESP,0xc
006C64EB  85 C0                     TEST EAX,EAX
006C64ED  75 15                     JNZ 0x006c6504
LAB_006c64ef:
006C64EF  33 C0                     XOR EAX,EAX
006C64F1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C64F4  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C64FB  5F                        POP EDI
006C64FC  5E                        POP ESI
006C64FD  5B                        POP EBX
006C64FE  8B E5                     MOV ESP,EBP
006C6500  5D                        POP EBP
006C6501  C2 1C 00                  RET 0x1c
LAB_006c6504:
006C6504  39 5D DC                  CMP dword ptr [EBP + -0x24],EBX
006C6507  0F 85 08 01 00 00         JNZ 0x006c6615
006C650D  39 7D E0                  CMP dword ptr [EBP + -0x20],EDI
006C6510  0F 85 FF 00 00 00         JNZ 0x006c6615
006C6516  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006C6519  81 E2 00 11 00 00         AND EDX,0x1100
006C651F  81 FA 00 01 00 00         CMP EDX,0x100
006C6525  75 15                     JNZ 0x006c653c
006C6527  33 C0                     XOR EAX,EAX
006C6529  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C652C  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C6533  5F                        POP EDI
006C6534  5E                        POP ESI
006C6535  5B                        POP EBX
006C6536  8B E5                     MOV ESP,EBP
006C6538  5D                        POP EBP
006C6539  C2 1C 00                  RET 0x1c
LAB_006c653c:
006C653C  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C6543  74 0D                     JZ 0x006c6552
006C6545  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006C654B  50                        PUSH EAX
006C654C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c6552:
006C6552  56                        PUSH ESI
006C6553  E8 58 53 FF FF            CALL 0x006bb8b0
006C6558  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C655B  85 C0                     TEST EAX,EAX
006C655D  75 53                     JNZ 0x006c65b2
006C655F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C6562  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006C6568  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C656B  51                        PUSH ECX
006C656C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C656F  52                        PUSH EDX
006C6570  57                        PUSH EDI
006C6571  53                        PUSH EBX
006C6572  50                        PUSH EAX
006C6573  0F AF 45 D8               IMUL EAX,dword ptr [EBP + -0x28]
006C6577  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006C657D  03 45 D4                  ADD EAX,dword ptr [EBP + -0x2c]
006C6580  50                        PUSH EAX
006C6581  E8 AA 12 01 00            CALL 0x006d7830
006C6586  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C658D  EB 1A                     JMP 0x006c65a9
LAB_006c65a9:
006C65A9  56                        PUSH ESI
006C65AA  E8 D1 53 FF FF            CALL 0x006bb980
006C65AF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c65b2:
006C65B2  3D A0 00 76 88            CMP EAX,0x887600a0
006C65B7  74 07                     JZ 0x006c65c0
006C65B9  3D AE 01 76 88            CMP EAX,0x887601ae
006C65BE  75 0A                     JNZ 0x006c65ca
LAB_006c65c0:
006C65C0  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006C65C7  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c65ca:
006C65CA  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C65D1  74 10                     JZ 0x006c65e3
006C65D3  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C65D9  56                        PUSH ESI
006C65DA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C65E0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c65e3:
006C65E3  85 C0                     TEST EAX,EAX
006C65E5  0F 84 04 FF FF FF         JZ 0x006c64ef
006C65EB  6A 2D                     PUSH 0x2d
006C65ED  68 8C DF 7E 00            PUSH 0x7edf8c
006C65F2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C65F8  51                        PUSH ECX
006C65F9  50                        PUSH EAX
006C65FA  E8 41 F8 FD FF            CALL 0x006a5e40
006C65FF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006C6602  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C6605  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C660C  5F                        POP EDI
006C660D  5E                        POP ESI
006C660E  5B                        POP EBX
006C660F  8B E5                     MOV ESP,EBP
006C6611  5D                        POP EBP
006C6612  C2 1C 00                  RET 0x1c
LAB_006c6615:
006C6615  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C6618  52                        PUSH EDX
006C6619  57                        PUSH EDI
006C661A  53                        PUSH EBX
006C661B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C661E  50                        PUSH EAX
006C661F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C6622  51                        PUSH ECX
006C6623  56                        PUSH ESI
006C6624  EB 18                     JMP 0x006c663e
LAB_006c6626:
006C6626  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C6629  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_006c662c:
006C662C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C662F  52                        PUSH EDX
006C6630  57                        PUSH EDI
006C6631  53                        PUSH EBX
006C6632  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C6635  50                        PUSH EAX
006C6636  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C6639  51                        PUSH ECX
006C663A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C663D  52                        PUSH EDX
LAB_006c663e:
006C663E  E8 0D 02 00 00            CALL 0x006c6850
006C6643  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C6646  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C664D  5F                        POP EDI
006C664E  5E                        POP ESI
006C664F  5B                        POP EBX
006C6650  8B E5                     MOV ESP,EBP
006C6652  5D                        POP EBP
006C6653  C2 1C 00                  RET 0x1c
