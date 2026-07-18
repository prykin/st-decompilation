FUN_005df7c0:
005DF7C0  55                        PUSH EBP
005DF7C1  8B EC                     MOV EBP,ESP
005DF7C3  83 EC 48                  SUB ESP,0x48
005DF7C6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005DF7C9  53                        PUSH EBX
005DF7CA  56                        PUSH ESI
005DF7CB  57                        PUSH EDI
005DF7CC  85 D2                     TEST EDX,EDX
005DF7CE  0F 84 00 01 00 00         JZ 0x005df8d4
005DF7D4  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005DF7D7  33 C9                     XOR ECX,ECX
005DF7D9  85 F6                     TEST ESI,ESI
005DF7DB  76 24                     JBE 0x005df801
005DF7DD  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005DF7E0  3B CE                     CMP ECX,ESI
005DF7E2  73 0D                     JNC 0x005df7f1
LAB_005df7e4:
005DF7E4  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005DF7E7  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
005DF7EA  0F AF C1                  IMUL EAX,ECX
005DF7ED  03 C3                     ADD EAX,EBX
005DF7EF  EB 02                     JMP 0x005df7f3
LAB_005df7f1:
005DF7F1  33 C0                     XOR EAX,EAX
LAB_005df7f3:
005DF7F3  8B 18                     MOV EBX,dword ptr [EAX]
005DF7F5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DF7F8  3B DF                     CMP EBX,EDI
005DF7FA  74 05                     JZ 0x005df801
005DF7FC  41                        INC ECX
005DF7FD  3B CE                     CMP ECX,ESI
005DF7FF  72 E3                     JC 0x005df7e4
LAB_005df801:
005DF801  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DF806  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DF809  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DF80C  6A 00                     PUSH 0x0
005DF80E  52                        PUSH EDX
005DF80F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DF812  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DF818  E8 D3 DF 14 00            CALL 0x0072d7f0
005DF81D  8B F0                     MOV ESI,EAX
005DF81F  83 C4 08                  ADD ESP,0x8
005DF822  85 F6                     TEST ESI,ESI
005DF824  75 75                     JNZ 0x005df89b
005DF826  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DF829  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005DF82C  85 C9                     TEST ECX,ECX
005DF82E  74 3D                     JZ 0x005df86d
005DF830  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005DF833  68 FF 00 00 01            PUSH 0x10000ff
005DF838  68 00 00 00 01            PUSH 0x1000000
005DF83D  51                        PUSH ECX
005DF83E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DF841  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DF844  51                        PUSH ECX
005DF845  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005DF848  52                        PUSH EDX
005DF849  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DF84C  56                        PUSH ESI
005DF84D  56                        PUSH ESI
005DF84E  56                        PUSH ESI
005DF84F  50                        PUSH EAX
005DF850  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005DF853  50                        PUSH EAX
005DF854  51                        PUSH ECX
005DF855  52                        PUSH EDX
005DF856  E8 85 50 0D 00            CALL 0x006b48e0
005DF85B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DF85E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DF864  5F                        POP EDI
005DF865  5E                        POP ESI
005DF866  5B                        POP EBX
005DF867  8B E5                     MOV ESP,EBP
005DF869  5D                        POP EBP
005DF86A  C2 20 00                  RET 0x20
LAB_005df86d:
005DF86D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005DF870  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005DF873  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005DF876  68 FF 00 00 01            PUSH 0x10000ff
005DF87B  6A 00                     PUSH 0x0
005DF87D  50                        PUSH EAX
005DF87E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005DF881  51                        PUSH ECX
005DF882  52                        PUSH EDX
005DF883  50                        PUSH EAX
005DF884  E8 17 50 0D 00            CALL 0x006b48a0
005DF889  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DF88C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DF892  5F                        POP EDI
005DF893  5E                        POP ESI
005DF894  5B                        POP EBX
005DF895  8B E5                     MOV ESP,EBP
005DF897  5D                        POP EBP
005DF898  C2 20 00                  RET 0x20
LAB_005df89b:
005DF89B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DF89E  68 FC D9 7C 00            PUSH 0x7cd9fc
005DF8A3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DF8A8  56                        PUSH ESI
005DF8A9  6A 00                     PUSH 0x0
005DF8AB  6A 4D                     PUSH 0x4d
005DF8AD  68 94 D9 7C 00            PUSH 0x7cd994
005DF8B2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DF8B8  E8 13 DC 0C 00            CALL 0x006ad4d0
005DF8BD  83 C4 18                  ADD ESP,0x18
005DF8C0  85 C0                     TEST EAX,EAX
005DF8C2  74 01                     JZ 0x005df8c5
005DF8C4  CC                        INT3
LAB_005df8c5:
005DF8C5  6A 4D                     PUSH 0x4d
005DF8C7  68 94 D9 7C 00            PUSH 0x7cd994
005DF8CC  6A 00                     PUSH 0x0
005DF8CE  56                        PUSH ESI
005DF8CF  E8 6C 65 0C 00            CALL 0x006a5e40
LAB_005df8d4:
005DF8D4  5F                        POP EDI
005DF8D5  5E                        POP ESI
005DF8D6  5B                        POP EBX
005DF8D7  8B E5                     MOV ESP,EBP
005DF8D9  5D                        POP EBP
005DF8DA  C2 20 00                  RET 0x20
