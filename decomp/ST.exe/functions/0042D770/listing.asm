FUN_0042d770:
0042D770  55                        PUSH EBP
0042D771  8B EC                     MOV EBP,ESP
0042D773  83 EC 24                  SUB ESP,0x24
0042D776  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042D77A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0042D77D  53                        PUSH EBX
0042D77E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042D781  56                        PUSH ESI
0042D782  57                        PUSH EDI
0042D783  BE FF FF 00 00            MOV ESI,0xffff
0042D788  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042D78B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0042D78E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042D791  C1 E1 04                  SHL ECX,0x4
0042D794  03 C8                     ADD ECX,EAX
0042D796  B8 01 00 00 00            MOV EAX,0x1
0042D79B  50                        PUSH EAX
0042D79C  6A 02                     PUSH 0x2
0042D79E  8B 1C 4D 8D 4F 7F 00      MOV EBX,dword ptr [ECX*0x2 + 0x7f4f8d]
0042D7A5  6A 00                     PUSH 0x0
0042D7A7  6A 00                     PUSH 0x0
0042D7A9  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0042D7AC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0042D7AF  E8 DC 0A 28 00            CALL 0x006ae290
0042D7B4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042D7B7  89 02                     MOV dword ptr [EDX],EAX
0042D7B9  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
0042D7BC  85 FF                     TEST EDI,EDI
0042D7BE  0F 86 38 01 00 00         JBE 0x0042d8fc
0042D7C4  6A 01                     PUSH 0x1
0042D7C6  6A 02                     PUSH 0x2
0042D7C8  6A 00                     PUSH 0x0
0042D7CA  6A 00                     PUSH 0x0
0042D7CC  E8 BF 0A 28 00            CALL 0x006ae290
0042D7D1  8B F0                     MOV ESI,EAX
0042D7D3  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0042D7DA  85 FF                     TEST EDI,EDI
0042D7DC  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0042D7DF  0F 8E 04 01 00 00         JLE 0x0042d8e9
LAB_0042d7e5:
0042D7E5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0042D7E8  8D 45 F8                  LEA EAX,[EBP + -0x8]
0042D7EB  50                        PUSH EAX
0042D7EC  8B CB                     MOV ECX,EBX
0042D7EE  E8 7D F4 27 00            CALL 0x006acc70
0042D7F3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042D7F6  66 3D FF FF               CMP AX,0xffff
0042D7FA  74 4C                     JZ 0x0042d848
0042D7FC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042D7FF  6A 01                     PUSH 0x1
0042D801  50                        PUSH EAX
0042D802  51                        PUSH ECX
0042D803  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042D806  E8 AF 50 FD FF            CALL 0x004028ba
0042D80B  8B F0                     MOV ESI,EAX
0042D80D  8B CE                     MOV ECX,ESI
0042D80F  E8 57 4A FD FF            CALL 0x0040226b
0042D814  85 C0                     TEST EAX,EAX
0042D816  75 2D                     JNZ 0x0042d845
0042D818  66 8B 76 30               MOV SI,word ptr [ESI + 0x30]
0042D81C  66 81 FE FF FF            CMP SI,0xffff
0042D821  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0042D824  74 1F                     JZ 0x0042d845
0042D826  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0042D829  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042D82C  8D 55 DC                  LEA EDX,[EBP + -0x24]
0042D82F  52                        PUSH EDX
0042D830  50                        PUSH EAX
0042D831  E8 8A 09 28 00            CALL 0x006ae1c0
0042D836  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042D839  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042D83C  51                        PUSH ECX
0042D83D  8B 02                     MOV EAX,dword ptr [EDX]
0042D83F  50                        PUSH EAX
0042D840  E8 7B 09 28 00            CALL 0x006ae1c0
LAB_0042d845:
0042D845  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0042d848:
0042D848  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042D84B  40                        INC EAX
0042D84C  3B C7                     CMP EAX,EDI
0042D84E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0042D851  7C 92                     JL 0x0042d7e5
0042D853  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0042D856  85 C0                     TEST EAX,EAX
0042D858  0F 85 8B 00 00 00         JNZ 0x0042d8e9
0042D85E  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
0042D861  83 FB 01                  CMP EBX,0x1
0042D864  76 3B                     JBE 0x0042d8a1
0042D866  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042D869  33 D2                     XOR EDX,EDX
0042D86B  51                        PUSH ECX
0042D86C  8B CE                     MOV ECX,ESI
0042D86E  E8 FD F3 27 00            CALL 0x006acc70
0042D873  BF 01 00 00 00            MOV EDI,0x1
0042D878  3B DF                     CMP EBX,EDI
0042D87A  7E 25                     JLE 0x0042d8a1
LAB_0042d87c:
0042D87C  8D 55 FE                  LEA EDX,[EBP + -0x2]
0042D87F  8B CE                     MOV ECX,ESI
0042D881  52                        PUSH EDX
0042D882  8B D7                     MOV EDX,EDI
0042D884  E8 E7 F3 27 00            CALL 0x006acc70
0042D889  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0042D88D  66 3B 45 FC               CMP AX,word ptr [EBP + -0x4]
0042D891  75 07                     JNZ 0x0042d89a
0042D893  47                        INC EDI
0042D894  3B FB                     CMP EDI,EBX
0042D896  7C E4                     JL 0x0042d87c
0042D898  EB 07                     JMP 0x0042d8a1
LAB_0042d89a:
0042D89A  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_0042d8a1:
0042D8A1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0042D8A4  C7 45 EC FF 7F 00 00      MOV dword ptr [EBP + -0x14],0x7fff
0042D8AB  83 F8 01                  CMP EAX,0x1
0042D8AE  75 39                     JNZ 0x0042d8e9
0042D8B0  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042D8B3  33 D2                     XOR EDX,EDX
0042D8B5  51                        PUSH ECX
0042D8B6  8B CE                     MOV ECX,ESI
0042D8B8  E8 B3 F3 27 00            CALL 0x006acc70
0042D8BD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042D8C0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042D8C3  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042D8C6  52                        PUSH EDX
0042D8C7  50                        PUSH EAX
0042D8C8  E8 2C 84 FD FF            CALL 0x00405cf9
0042D8CD  8B C8                     MOV ECX,EAX
0042D8CF  E8 61 3E FD FF            CALL 0x00401735
0042D8D4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0042D8D7  25 FF FF 00 00            AND EAX,0xffff
0042D8DC  8B 11                     MOV EDX,dword ptr [ECX]
0042D8DE  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0042D8E1  75 06                     JNZ 0x0042d8e9
0042D8E3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042D8E6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0042d8e9:
0042D8E9  56                        PUSH ESI
0042D8EA  E8 21 08 28 00            CALL 0x006ae110
0042D8EF  66 8B 45 EC               MOV AX,word ptr [EBP + -0x14]
0042D8F3  5F                        POP EDI
0042D8F4  5E                        POP ESI
0042D8F5  5B                        POP EBX
0042D8F6  8B E5                     MOV ESP,EBP
0042D8F8  5D                        POP EBP
0042D8F9  C2 08 00                  RET 0x8
LAB_0042d8fc:
0042D8FC  66 8B C6                  MOV AX,SI
0042D8FF  5F                        POP EDI
0042D900  5E                        POP ESI
0042D901  5B                        POP EBX
0042D902  8B E5                     MOV ESP,EBP
0042D904  5D                        POP EBP
0042D905  C2 08 00                  RET 0x8
