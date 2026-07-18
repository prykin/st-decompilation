MTaskTy::OutGlassTxtProc:
005DF640  55                        PUSH EBP
005DF641  8B EC                     MOV EBP,ESP
005DF643  83 EC 48                  SUB ESP,0x48
005DF646  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005DF649  53                        PUSH EBX
005DF64A  56                        PUSH ESI
005DF64B  57                        PUSH EDI
005DF64C  85 D2                     TEST EDX,EDX
005DF64E  0F 84 06 01 00 00         JZ 0x005df75a
005DF654  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005DF657  33 C9                     XOR ECX,ECX
005DF659  85 F6                     TEST ESI,ESI
005DF65B  76 24                     JBE 0x005df681
005DF65D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005DF660  3B CE                     CMP ECX,ESI
005DF662  73 0D                     JNC 0x005df671
LAB_005df664:
005DF664  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005DF667  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
005DF66A  0F AF C1                  IMUL EAX,ECX
005DF66D  03 C3                     ADD EAX,EBX
005DF66F  EB 02                     JMP 0x005df673
LAB_005df671:
005DF671  33 C0                     XOR EAX,EAX
LAB_005df673:
005DF673  8B 18                     MOV EBX,dword ptr [EAX]
005DF675  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DF678  3B DF                     CMP EBX,EDI
005DF67A  74 05                     JZ 0x005df681
005DF67C  41                        INC ECX
005DF67D  3B CE                     CMP ECX,ESI
005DF67F  72 E3                     JC 0x005df664
LAB_005df681:
005DF681  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DF686  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DF689  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DF68C  6A 00                     PUSH 0x0
005DF68E  52                        PUSH EDX
005DF68F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DF692  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DF698  E8 53 E1 14 00            CALL 0x0072d7f0
005DF69D  8B F0                     MOV ESI,EAX
005DF69F  83 C4 08                  ADD ESP,0x8
005DF6A2  85 F6                     TEST ESI,ESI
005DF6A4  75 7B                     JNZ 0x005df721
005DF6A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DF6A9  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005DF6AC  85 C9                     TEST ECX,ECX
005DF6AE  74 40                     JZ 0x005df6f0
005DF6B0  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
005DF6B3  68 FF 00 00 01            PUSH 0x10000ff
005DF6B8  68 00 00 00 01            PUSH 0x1000000
005DF6BD  51                        PUSH ECX
005DF6BE  8B 44 90 04               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x4]
005DF6C2  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DF6C5  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DF6C8  51                        PUSH ECX
005DF6C9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005DF6CC  52                        PUSH EDX
005DF6CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DF6D0  56                        PUSH ESI
005DF6D1  56                        PUSH ESI
005DF6D2  56                        PUSH ESI
005DF6D3  50                        PUSH EAX
005DF6D4  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005DF6D7  50                        PUSH EAX
005DF6D8  51                        PUSH ECX
005DF6D9  52                        PUSH EDX
005DF6DA  E8 01 52 0D 00            CALL 0x006b48e0
005DF6DF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DF6E2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DF6E7  5F                        POP EDI
005DF6E8  5E                        POP ESI
005DF6E9  5B                        POP EBX
005DF6EA  8B E5                     MOV ESP,EBP
005DF6EC  5D                        POP EBP
005DF6ED  C2 20 00                  RET 0x20
LAB_005df6f0:
005DF6F0  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
005DF6F3  68 FF 00 00 01            PUSH 0x10000ff
005DF6F8  6A 00                     PUSH 0x0
005DF6FA  8B 54 88 04               MOV EDX,dword ptr [EAX + ECX*0x4 + 0x4]
005DF6FE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005DF701  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005DF704  52                        PUSH EDX
005DF705  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DF708  50                        PUSH EAX
005DF709  51                        PUSH ECX
005DF70A  52                        PUSH EDX
005DF70B  E8 90 51 0D 00            CALL 0x006b48a0
005DF710  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DF713  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DF718  5F                        POP EDI
005DF719  5E                        POP ESI
005DF71A  5B                        POP EBX
005DF71B  8B E5                     MOV ESP,EBP
005DF71D  5D                        POP EBP
005DF71E  C2 20 00                  RET 0x20
LAB_005df721:
005DF721  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DF724  68 DC D9 7C 00            PUSH 0x7cd9dc
005DF729  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DF72E  56                        PUSH ESI
005DF72F  6A 00                     PUSH 0x0
005DF731  6A 3A                     PUSH 0x3a
005DF733  68 94 D9 7C 00            PUSH 0x7cd994
005DF738  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DF73E  E8 8D DD 0C 00            CALL 0x006ad4d0
005DF743  83 C4 18                  ADD ESP,0x18
005DF746  85 C0                     TEST EAX,EAX
005DF748  74 01                     JZ 0x005df74b
005DF74A  CC                        INT3
LAB_005df74b:
005DF74B  6A 3A                     PUSH 0x3a
005DF74D  68 94 D9 7C 00            PUSH 0x7cd994
005DF752  6A 00                     PUSH 0x0
005DF754  56                        PUSH ESI
005DF755  E8 E6 66 0C 00            CALL 0x006a5e40
LAB_005df75a:
005DF75A  5F                        POP EDI
005DF75B  5E                        POP ESI
005DF75C  5B                        POP EBX
005DF75D  8B E5                     MOV ESP,EBP
005DF75F  5D                        POP EBP
005DF760  C2 20 00                  RET 0x20
