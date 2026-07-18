FUN_0065d760:
0065D760  55                        PUSH EBP
0065D761  8B EC                     MOV EBP,ESP
0065D763  83 EC 48                  SUB ESP,0x48
0065D766  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065D76B  53                        PUSH EBX
0065D76C  56                        PUSH ESI
0065D76D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065D770  57                        PUSH EDI
0065D771  8D 55 BC                  LEA EDX,[EBP + -0x44]
0065D774  8D 4D B8                  LEA ECX,[EBP + -0x48]
0065D777  6A 00                     PUSH 0x0
0065D779  52                        PUSH EDX
0065D77A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0065D77D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065D783  E8 68 00 0D 00            CALL 0x0072d7f0
0065D788  8B F0                     MOV ESI,EAX
0065D78A  83 C4 08                  ADD ESP,0x8
0065D78D  85 F6                     TEST ESI,ESI
0065D78F  0F 85 F0 00 00 00         JNZ 0x0065d885
0065D795  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065D798  85 F6                     TEST ESI,ESI
0065D79A  0F 84 D3 00 00 00         JZ 0x0065d873
0065D7A0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0065D7A3  66 81 7B 7D FE FF         CMP word ptr [EBX + 0x7d],0xfffe
0065D7A9  0F 84 C4 00 00 00         JZ 0x0065d873
0065D7AF  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0065D7B4  85 C0                     TEST EAX,EAX
0065D7B6  0F 84 B7 00 00 00         JZ 0x0065d873
0065D7BC  8B 06                     MOV EAX,dword ptr [ESI]
0065D7BE  8B CE                     MOV ECX,ESI
0065D7C0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0065D7C3  83 F8 32                  CMP EAX,0x32
0065D7C6  7C 0C                     JL 0x0065d7d4
0065D7C8  83 F8 74                  CMP EAX,0x74
0065D7CB  7D 07                     JGE 0x0065d7d4
0065D7CD  B8 01 00 00 00            MOV EAX,0x1
0065D7D2  EB 02                     JMP 0x0065d7d6
LAB_0065d7d4:
0065D7D4  33 C0                     XOR EAX,EAX
LAB_0065d7d6:
0065D7D6  85 C0                     TEST EAX,EAX
0065D7D8  74 07                     JZ 0x0065d7e1
0065D7DA  66 83 7B 7B 01            CMP word ptr [EBX + 0x7b],0x1
0065D7DF  75 0C                     JNZ 0x0065d7ed
LAB_0065d7e1:
0065D7E1  8B 16                     MOV EDX,dword ptr [ESI]
0065D7E3  8B CE                     MOV ECX,ESI
0065D7E5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065D7E8  83 F8 78                  CMP EAX,0x78
0065D7EB  75 17                     JNZ 0x0065d804
LAB_0065d7ed:
0065D7ED  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0065D7F2  68 9B 00 00 00            PUSH 0x9b
0065D7F7  68 80 2B 7D 00            PUSH 0x7d2b80
0065D7FC  50                        PUSH EAX
0065D7FD  6A 9C                     PUSH -0x64
0065D7FF  E8 3C 86 04 00            CALL 0x006a5e40
LAB_0065d804:
0065D804  6A 01                     PUSH 0x1
0065D806  6A 02                     PUSH 0x2
0065D808  6A 01                     PUSH 0x1
0065D80A  6A 00                     PUSH 0x0
0065D80C  E8 7F 0A 05 00            CALL 0x006ae290
0065D811  8D 4E 32                  LEA ECX,[ESI + 0x32]
0065D814  8B F8                     MOV EDI,EAX
0065D816  51                        PUSH ECX
0065D817  57                        PUSH EDI
0065D818  E8 A3 09 05 00            CALL 0x006ae1c0
0065D81D  8B 16                     MOV EDX,dword ptr [ESI]
0065D81F  8B CE                     MOV ECX,ESI
0065D821  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065D824  83 F8 01                  CMP EAX,0x1
0065D827  7C 0C                     JL 0x0065d835
0065D829  83 F8 29                  CMP EAX,0x29
0065D82C  7D 07                     JGE 0x0065d835
0065D82E  B8 01 00 00 00            MOV EAX,0x1
0065D833  EB 02                     JMP 0x0065d837
LAB_0065d835:
0065D835  33 C0                     XOR EAX,EAX
LAB_0065d837:
0065D837  85 C0                     TEST EAX,EAX
0065D839  74 1B                     JZ 0x0065d856
0065D83B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065D83E  85 C0                     TEST EAX,EAX
0065D840  74 08                     JZ 0x0065d84a
0065D842  33 C0                     XOR EAX,EAX
0065D844  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0065D848  EB 05                     JMP 0x0065d84f
LAB_0065d84a:
0065D84A  B8 FE FF 00 00            MOV EAX,0xfffe
LAB_0065d84f:
0065D84F  66 89 86 1C 08 00 00      MOV word ptr [ESI + 0x81c],AX
LAB_0065d856:
0065D856  66 8B 43 7D               MOV AX,word ptr [EBX + 0x7d]
0065D85A  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0065D85D  6A 00                     PUSH 0x0
0065D85F  57                        PUSH EDI
0065D860  50                        PUSH EAX
0065D861  51                        PUSH ECX
0065D862  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065D868  E8 22 3F DA FF            CALL 0x0040178f
0065D86D  57                        PUSH EDI
0065D86E  E8 9D 08 05 00            CALL 0x006ae110
LAB_0065d873:
0065D873  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0065D876  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065D87C  5F                        POP EDI
0065D87D  5E                        POP ESI
0065D87E  5B                        POP EBX
0065D87F  8B E5                     MOV ESP,EBP
0065D881  5D                        POP EBP
0065D882  C2 08 00                  RET 0x8
LAB_0065d885:
0065D885  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0065D888  83 FE 9C                  CMP ESI,-0x64
0065D88B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065D890  74 36                     JZ 0x0065d8c8
0065D892  68 E0 2B 7D 00            PUSH 0x7d2be0
0065D897  68 CC 4C 7A 00            PUSH 0x7a4ccc
0065D89C  56                        PUSH ESI
0065D89D  6A 00                     PUSH 0x0
0065D89F  68 A5 00 00 00            PUSH 0xa5
0065D8A4  68 80 2B 7D 00            PUSH 0x7d2b80
0065D8A9  E8 22 FC 04 00            CALL 0x006ad4d0
0065D8AE  83 C4 18                  ADD ESP,0x18
0065D8B1  85 C0                     TEST EAX,EAX
0065D8B3  74 01                     JZ 0x0065d8b6
0065D8B5  CC                        INT3
LAB_0065d8b6:
0065D8B6  68 A6 00 00 00            PUSH 0xa6
0065D8BB  68 80 2B 7D 00            PUSH 0x7d2b80
0065D8C0  6A 00                     PUSH 0x0
0065D8C2  56                        PUSH ESI
0065D8C3  E8 78 85 04 00            CALL 0x006a5e40
LAB_0065d8c8:
0065D8C8  5F                        POP EDI
0065D8C9  5E                        POP ESI
0065D8CA  5B                        POP EBX
0065D8CB  8B E5                     MOV ESP,EBP
0065D8CD  5D                        POP EBP
0065D8CE  C2 08 00                  RET 0x8
