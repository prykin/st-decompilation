FUN_006c83b0:
006C83B0  55                        PUSH EBP
006C83B1  8B EC                     MOV EBP,ESP
006C83B3  81 EC 94 00 00 00         SUB ESP,0x94
006C83B9  53                        PUSH EBX
006C83BA  56                        PUSH ESI
006C83BB  57                        PUSH EDI
006C83BC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C83BF  33 F6                     XOR ESI,ESI
006C83C1  8B 07                     MOV EAX,dword ptr [EDI]
006C83C3  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006C83C6  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006C83C9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C83CC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006C83CF  81 E1 00 11 00 00         AND ECX,0x1100
006C83D5  81 F9 00 01 00 00         CMP ECX,0x100
006C83DB  0F 84 8A 02 00 00         JZ 0x006c866b
006C83E1  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006C83E8  74 0C                     JZ 0x006c83f6
006C83EA  05 F0 04 00 00            ADD EAX,0x4f0
006C83EF  50                        PUSH EAX
006C83F0  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c83f6:
006C83F6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C83F9  8D 55 D0                  LEA EDX,[EBP + -0x30]
006C83FC  52                        PUSH EDX
006C83FD  50                        PUSH EAX
006C83FE  57                        PUSH EDI
006C83FF  E8 1C 99 FE FF            CALL 0x006b1d20
006C8404  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006C840A  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
006C8410  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
006C8416  56                        PUSH ESI
006C8417  50                        PUSH EAX
006C8418  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
006C841E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C8424  E8 C7 53 06 00            CALL 0x0072d7f0
006C8429  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C842C  83 C4 08                  ADD ESP,0x8
006C842F  3B C6                     CMP EAX,ESI
006C8431  0F 85 CF 01 00 00         JNZ 0x006c8606
006C8437  56                        PUSH ESI
006C8438  57                        PUSH EDI
006C8439  E8 02 53 FF FF            CALL 0x006bd740
006C843E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C8441  8D 4D D8                  LEA ECX,[EBP + -0x28]
006C8444  51                        PUSH ECX
006C8445  56                        PUSH ESI
006C8446  52                        PUSH EDX
006C8447  57                        PUSH EDI
006C8448  E8 03 96 FE FF            CALL 0x006b1a50
006C844D  C7 87 D8 01 00 00 01 00 00 00  MOV dword ptr [EDI + 0x1d8],0x1
006C8457  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006C845A  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006C8460  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C8463  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006c8466:
006C8466  8B C3                     MOV EAX,EBX
006C8468  4B                        DEC EBX
006C8469  85 C0                     TEST EAX,EAX
006C846B  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006C846E  7E 0D                     JLE 0x006c847d
006C8470  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C8473  8B 18                     MOV EBX,dword ptr [EAX]
006C8475  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006C8478  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006C847B  EB 16                     JMP 0x006c8493
LAB_006c847d:
006C847D  85 F6                     TEST ESI,ESI
006C847F  75 0B                     JNZ 0x006c848c
006C8481  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C8484  85 C0                     TEST EAX,EAX
006C8486  0F 84 67 01 00 00         JZ 0x006c85f3
LAB_006c848c:
006C848C  33 DB                     XOR EBX,EBX
006C848E  33 C0                     XOR EAX,EAX
006C8490  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006c8493:
006C8493  85 DB                     TEST EBX,EBX
006C8495  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C8498  7D 10                     JGE 0x006c84aa
006C849A  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006C849D  F7 DB                     NEG EBX
006C849F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006C84A2  8D 0C 1F                  LEA ECX,[EDI + EBX*0x1]
006C84A5  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006C84A8  EB 0A                     JMP 0x006c84b4
LAB_006c84aa:
006C84AA  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006C84AD  8B CF                     MOV ECX,EDI
006C84AF  03 FB                     ADD EDI,EBX
006C84B1  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_006c84b4:
006C84B4  85 C0                     TEST EAX,EAX
006C84B6  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
006C84B9  7D 10                     JGE 0x006c84cb
006C84BB  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
006C84BE  F7 D8                     NEG EAX
006C84C0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C84C3  8D 14 06                  LEA EDX,[ESI + EAX*0x1]
006C84C6  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006C84C9  EB 09                     JMP 0x006c84d4
LAB_006c84cb:
006C84CB  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006C84CE  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006C84D1  8D 34 02                  LEA ESI,[EDX + EAX*0x1]
LAB_006c84d4:
006C84D4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006C84D7  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
006C84DA  2B C3                     SUB EAX,EBX
006C84DC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006C84DF  03 C8                     ADD ECX,EAX
006C84E1  03 C7                     ADD EAX,EDI
006C84E3  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006C84E6  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C84E9  2B CB                     SUB ECX,EBX
006C84EB  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C84EE  03 D1                     ADD EDX,ECX
006C84F0  03 CE                     ADD ECX,ESI
006C84F2  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006C84F5  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006C84F8  33 FF                     XOR EDI,EDI
LAB_006c84fa:
006C84FA  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006C84FD  6A 00                     PUSH 0x0
006C84FF  8D 55 C0                  LEA EDX,[EBP + -0x40]
006C8502  68 00 00 00 01            PUSH 0x1000000
006C8507  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
006C850A  52                        PUSH EDX
006C850B  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
006C850E  8B 08                     MOV ECX,dword ptr [EAX]
006C8510  52                        PUSH EDX
006C8511  8D 55 B0                  LEA EDX,[EBP + -0x50]
006C8514  52                        PUSH EDX
006C8515  50                        PUSH EAX
006C8516  FF 51 14                  CALL dword ptr [ECX + 0x14]
006C8519  8B F0                     MOV ESI,EAX
006C851B  85 F6                     TEST ESI,ESI
006C851D  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006C8520  74 32                     JZ 0x006c8554
006C8522  81 FE C2 01 76 88         CMP ESI,0x887601c2
006C8528  75 08                     JNZ 0x006c8532
006C852A  53                        PUSH EBX
006C852B  E8 10 67 00 00            CALL 0x006cec40
006C8530  EB 1C                     JMP 0x006c854e
LAB_006c8532:
006C8532  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C8538  74 08                     JZ 0x006c8542
006C853A  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C8540  75 12                     JNZ 0x006c8554
LAB_006c8542:
006C8542  85 FF                     TEST EDI,EDI
006C8544  75 0E                     JNZ 0x006c8554
006C8546  6A 02                     PUSH 0x2
006C8548  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006c854e:
006C854E  47                        INC EDI
006C854F  83 FF 02                  CMP EDI,0x2
006C8552  7C A6                     JL 0x006c84fa
LAB_006c8554:
006C8554  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C855A  74 08                     JZ 0x006c8564
006C855C  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C8562  75 05                     JNZ 0x006c8569
LAB_006c8564:
006C8564  33 F6                     XOR ESI,ESI
006C8566  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_006c8569:
006C8569  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C856C  85 C0                     TEST EAX,EAX
006C856E  75 03                     JNZ 0x006c8573
006C8570  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006c8573:
006C8573  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006C8576  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C8579  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006C857C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C857F  2B C2                     SUB EAX,EDX
006C8581  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C8584  6A 00                     PUSH 0x0
006C8586  50                        PUSH EAX
006C8587  2B 4D F8                  SUB ECX,dword ptr [EBP + -0x8]
006C858A  51                        PUSH ECX
006C858B  52                        PUSH EDX
006C858C  57                        PUSH EDI
006C858D  E8 2E 97 FE FF            CALL 0x006b1cc0
006C8592  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006C8595  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C8598  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006C859B  50                        PUSH EAX
006C859C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006C859F  51                        PUSH ECX
006C85A0  52                        PUSH EDX
006C85A1  50                        PUSH EAX
006C85A2  57                        PUSH EDI
006C85A3  E8 D8 D9 FE FF            CALL 0x006b5f80
006C85A8  6A 00                     PUSH 0x0
006C85AA  57                        PUSH EDI
006C85AB  E8 90 51 FF FF            CALL 0x006bd740
006C85B0  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C85B3  85 DB                     TEST EBX,EBX
006C85B5  7C 3C                     JL 0x006c85f3
006C85B7  85 F6                     TEST ESI,ESI
006C85B9  74 05                     JZ 0x006c85c0
006C85BB  33 DB                     XOR EBX,EBX
006C85BD  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
LAB_006c85c0:
006C85C0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C85C3  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006C85C6  03 71 08                  ADD ESI,dword ptr [ECX + 0x8]
006C85C9  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006C85CC  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006C85D2  8B CE                     MOV ECX,ESI
006C85D4  2B C8                     SUB ECX,EAX
006C85D6  83 F9 02                  CMP ECX,0x2
006C85D9  7E 07                     JLE 0x006c85e2
006C85DB  51                        PUSH ECX
006C85DC  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006c85e2:
006C85E2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C85E5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006C85E8  83 C0 0C                  ADD EAX,0xc
006C85EB  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C85EE  E9 73 FE FF FF            JMP 0x006c8466
LAB_006c85f3:
006C85F3  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
006C85F9  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006C85FC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C8602  33 F6                     XOR ESI,ESI
006C8604  EB 11                     JMP 0x006c8617
LAB_006c8606:
006C8606  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006C860C  8B D8                     MOV EBX,EAX
006C860E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C8614  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006c8617:
006C8617  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006C861A  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006C861D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C8620  56                        PUSH ESI
006C8621  52                        PUSH EDX
006C8622  50                        PUSH EAX
006C8623  51                        PUSH ECX
006C8624  57                        PUSH EDI
006C8625  89 B7 D8 01 00 00         MOV dword ptr [EDI + 0x1d8],ESI
006C862B  E8 90 96 FE FF            CALL 0x006b1cc0
006C8630  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006C8633  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006C863A  74 0C                     JZ 0x006c8648
006C863C  05 F0 04 00 00            ADD EAX,0x4f0
006C8641  50                        PUSH EAX
006C8642  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c8648:
006C8648  3B DE                     CMP EBX,ESI
006C864A  74 1F                     JZ 0x006c866b
006C864C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C8652  6A 6C                     PUSH 0x6c
006C8654  68 7C E0 7E 00            PUSH 0x7ee07c
006C8659  52                        PUSH EDX
006C865A  53                        PUSH EBX
006C865B  E8 E0 D7 FD FF            CALL 0x006a5e40
006C8660  8B C3                     MOV EAX,EBX
006C8662  5F                        POP EDI
006C8663  5E                        POP ESI
006C8664  5B                        POP EBX
006C8665  8B E5                     MOV ESP,EBP
006C8667  5D                        POP EBP
006C8668  C2 10 00                  RET 0x10
LAB_006c866b:
006C866B  5F                        POP EDI
006C866C  5E                        POP ESI
006C866D  33 C0                     XOR EAX,EAX
006C866F  5B                        POP EBX
006C8670  8B E5                     MOV ESP,EBP
006C8672  5D                        POP EBP
006C8673  C2 10 00                  RET 0x10
