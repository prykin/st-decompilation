FUN_0070b770:
0070B770  55                        PUSH EBP
0070B771  8B EC                     MOV EBP,ESP
0070B773  81 EC D0 00 00 00         SUB ESP,0xd0
0070B779  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0070B77C  33 C9                     XOR ECX,ECX
0070B77E  33 C0                     XOR EAX,EAX
0070B780  66 8B 4A 0E               MOV CX,word ptr [EDX + 0xe]
0070B784  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070B787  83 F9 08                  CMP ECX,0x8
0070B78A  0F 84 82 00 00 00         JZ 0x0070b812
0070B790  83 F9 10                  CMP ECX,0x10
0070B793  74 77                     JZ 0x0070b80c
0070B795  83 F9 18                  CMP ECX,0x18
0070B798  75 0F                     JNZ 0x0070b7a9
0070B79A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070B79D  83 F9 10                  CMP ECX,0x10
0070B7A0  74 0B                     JZ 0x0070b7ad
0070B7A2  83 F9 18                  CMP ECX,0x18
LAB_0070b7a5:
0070B7A5  75 02                     JNZ 0x0070b7a9
LAB_0070b7a7:
0070B7A7  8B C2                     MOV EAX,EDX
LAB_0070b7a9:
0070B7A9  8B E5                     MOV ESP,EBP
0070B7AB  5D                        POP EBP
0070B7AC  C3                        RET
LAB_0070b7ad:
0070B7AD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070B7B2  8D 55 BC                  LEA EDX,[EBP + -0x44]
0070B7B5  8D 4D B8                  LEA ECX,[EBP + -0x48]
0070B7B8  6A 00                     PUSH 0x0
0070B7BA  52                        PUSH EDX
0070B7BB  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0070B7BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B7C4  E8 27 20 02 00            CALL 0x0072d7f0
0070B7C9  83 C4 08                  ADD ESP,0x8
0070B7CC  85 C0                     TEST EAX,EAX
0070B7CE  75 2C                     JNZ 0x0070b7fc
0070B7D0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B7D3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0070B7D6  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0070B7D9  51                        PUSH ECX
0070B7DA  52                        PUSH EDX
0070B7DB  6A 00                     PUSH 0x0
0070B7DD  6A 00                     PUSH 0x0
0070B7DF  6A 00                     PUSH 0x0
0070B7E1  50                        PUSH EAX
0070B7E2  6A 00                     PUSH 0x0
0070B7E4  6A 00                     PUSH 0x0
0070B7E6  6A 00                     PUSH 0x0
0070B7E8  6A 00                     PUSH 0x0
0070B7EA  E8 A1 62 FC FF            CALL 0x006d1a90
0070B7EF  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0070B7F2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B7F8  8B E5                     MOV ESP,EBP
0070B7FA  5D                        POP EBP
0070B7FB  C3                        RET
LAB_0070b7fc:
0070B7FC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0070B7FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B802  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B808  8B E5                     MOV ESP,EBP
0070B80A  5D                        POP EBP
0070B80B  C3                        RET
LAB_0070b80c:
0070B80C  83 7D 0C 10               CMP dword ptr [EBP + 0xc],0x10
0070B810  EB 93                     JMP 0x0070b7a5
LAB_0070b812:
0070B812  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070B815  83 F9 08                  CMP ECX,0x8
0070B818  74 8D                     JZ 0x0070b7a7
0070B81A  83 F9 10                  CMP ECX,0x10
0070B81D  74 73                     JZ 0x0070b892
0070B81F  83 F9 18                  CMP ECX,0x18
0070B822  75 85                     JNZ 0x0070b7a9
0070B824  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070B829  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
0070B82F  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
0070B835  6A 00                     PUSH 0x0
0070B837  52                        PUSH EDX
0070B838  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0070B83E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B844  E8 A7 1F 02 00            CALL 0x0072d7f0
0070B849  83 C4 08                  ADD ESP,0x8
0070B84C  85 C0                     TEST EAX,EAX
0070B84E  75 2F                     JNZ 0x0070b87f
0070B850  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B853  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0070B856  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0070B859  51                        PUSH ECX
0070B85A  52                        PUSH EDX
0070B85B  6A 00                     PUSH 0x0
0070B85D  6A 00                     PUSH 0x0
0070B85F  6A 00                     PUSH 0x0
0070B861  50                        PUSH EAX
0070B862  6A 00                     PUSH 0x0
0070B864  6A 00                     PUSH 0x0
0070B866  6A 00                     PUSH 0x0
0070B868  6A 00                     PUSH 0x0
0070B86A  E8 E1 61 FC FF            CALL 0x006d1a50
0070B86F  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0070B875  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B87B  8B E5                     MOV ESP,EBP
0070B87D  5D                        POP EBP
0070B87E  C3                        RET
LAB_0070b87f:
0070B87F  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
0070B885  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B888  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B88E  8B E5                     MOV ESP,EBP
0070B890  5D                        POP EBP
0070B891  C3                        RET
LAB_0070b892:
0070B892  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070B897  8D 95 34 FF FF FF         LEA EDX,[EBP + 0xffffff34]
0070B89D  8D 8D 30 FF FF FF         LEA ECX,[EBP + 0xffffff30]
0070B8A3  6A 00                     PUSH 0x0
0070B8A5  52                        PUSH EDX
0070B8A6  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0070B8AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B8B2  E8 39 1F 02 00            CALL 0x0072d7f0
0070B8B7  83 C4 08                  ADD ESP,0x8
0070B8BA  85 C0                     TEST EAX,EAX
0070B8BC  75 2F                     JNZ 0x0070b8ed
0070B8BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B8C1  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0070B8C4  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0070B8C7  51                        PUSH ECX
0070B8C8  52                        PUSH EDX
0070B8C9  6A 00                     PUSH 0x0
0070B8CB  6A 00                     PUSH 0x0
0070B8CD  6A 00                     PUSH 0x0
0070B8CF  50                        PUSH EAX
0070B8D0  6A 00                     PUSH 0x0
0070B8D2  6A 00                     PUSH 0x0
0070B8D4  6A 00                     PUSH 0x0
0070B8D6  6A 00                     PUSH 0x0
0070B8D8  E8 33 61 FC FF            CALL 0x006d1a10
0070B8DD  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0070B8E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B8E9  8B E5                     MOV ESP,EBP
0070B8EB  5D                        POP EBP
0070B8EC  C3                        RET
LAB_0070b8ed:
0070B8ED  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
0070B8F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B8F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B8FC  8B E5                     MOV ESP,EBP
0070B8FE  5D                        POP EBP
0070B8FF  C3                        RET
