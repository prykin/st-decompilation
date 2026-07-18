FUN_00650600:
00650600  55                        PUSH EBP
00650601  8B EC                     MOV EBP,ESP
00650603  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650606  53                        PUSH EBX
00650607  33 C9                     XOR ECX,ECX
00650609  BB 08 00 00 00            MOV EBX,0x8
LAB_0065060e:
0065060E  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00650615  0F 85 E5 00 00 00         JNZ 0x00650700
0065061B  41                        INC ECX
0065061C  83 F9 03                  CMP ECX,0x3
0065061F  7C ED                     JL 0x0065060e
00650621  66 8B 08                  MOV CX,word ptr [EAX]
00650624  66 83 F9 04               CMP CX,0x4
00650628  7D 15                     JGE 0x0065063f
0065062A  C7 40 14 00 00 00 00      MOV dword ptr [EAX + 0x14],0x0
LAB_00650631:
00650631  83 CA FF                  OR EDX,0xffffffff
00650634  66 83 F9 05               CMP CX,0x5
00650638  7D 12                     JGE 0x0065064c
0065063A  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0065063D  EB 1A                     JMP 0x00650659
LAB_0065063f:
0065063F  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
00650645  74 EA                     JZ 0x00650631
00650647  33 C0                     XOR EAX,EAX
00650649  5B                        POP EBX
0065064A  5D                        POP EBP
0065064B  C3                        RET
LAB_0065064c:
0065064C  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
00650652  74 05                     JZ 0x00650659
00650654  33 C0                     XOR EAX,EAX
00650656  5B                        POP EBX
00650657  5D                        POP EBP
00650658  C3                        RET
LAB_00650659:
00650659  66 83 F9 06               CMP CX,0x6
0065065D  7D 12                     JGE 0x00650671
0065065F  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
LAB_00650666:
00650666  66 83 F9 07               CMP CX,0x7
0065066A  7D 13                     JGE 0x0065067f
0065066C  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0065066F  EB 1B                     JMP 0x0065068c
LAB_00650671:
00650671  80 B8 D5 00 00 00 0A      CMP byte ptr [EAX + 0xd5],0xa
00650678  74 EC                     JZ 0x00650666
0065067A  33 C0                     XOR EAX,EAX
0065067C  5B                        POP EBX
0065067D  5D                        POP EBP
0065067E  C3                        RET
LAB_0065067f:
0065067F  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
00650685  74 05                     JZ 0x0065068c
00650687  33 C0                     XOR EAX,EAX
00650689  5B                        POP EBX
0065068A  5D                        POP EBP
0065068B  C3                        RET
LAB_0065068c:
0065068C  66 3B CB                  CMP CX,BX
0065068F  7D 0E                     JGE 0x0065069f
00650691  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
LAB_00650694:
00650694  66 83 F9 09               CMP CX,0x9
00650698  7D 12                     JGE 0x006506ac
0065069A  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
0065069D  EB 1A                     JMP 0x006506b9
LAB_0065069f:
0065069F  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
006506A5  74 ED                     JZ 0x00650694
006506A7  33 C0                     XOR EAX,EAX
006506A9  5B                        POP EBX
006506AA  5D                        POP EBP
006506AB  C3                        RET
LAB_006506ac:
006506AC  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
006506B2  74 05                     JZ 0x006506b9
006506B4  33 C0                     XOR EAX,EAX
006506B6  5B                        POP EBX
006506B7  5D                        POP EBP
006506B8  C3                        RET
LAB_006506b9:
006506B9  66 83 F9 0A               CMP CX,0xa
006506BD  7D 0E                     JGE 0x006506cd
006506BF  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
LAB_006506c2:
006506C2  66 83 F9 0B               CMP CX,0xb
006506C6  7D 12                     JGE 0x006506da
006506C8  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
006506CB  EB 1A                     JMP 0x006506e7
LAB_006506cd:
006506CD  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
006506D3  74 ED                     JZ 0x006506c2
006506D5  33 C0                     XOR EAX,EAX
006506D7  5B                        POP EBX
006506D8  5D                        POP EBP
006506D9  C3                        RET
LAB_006506da:
006506DA  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
006506E0  74 05                     JZ 0x006506e7
006506E2  33 C0                     XOR EAX,EAX
006506E4  5B                        POP EBX
006506E5  5D                        POP EBP
006506E6  C3                        RET
LAB_006506e7:
006506E7  66 83 F9 0C               CMP CX,0xc
006506EB  7D 0B                     JGE 0x006506f8
006506ED  89 50 34                  MOV dword ptr [EAX + 0x34],EDX
LAB_006506f0:
006506F0  B8 01 00 00 00            MOV EAX,0x1
006506F5  5B                        POP EBX
006506F6  5D                        POP EBP
006506F7  C3                        RET
LAB_006506f8:
006506F8  38 98 DB 00 00 00         CMP byte ptr [EAX + 0xdb],BL
006506FE  74 F0                     JZ 0x006506f0
LAB_00650700:
00650700  33 C0                     XOR EAX,EAX
00650702  5B                        POP EBX
00650703  5D                        POP EBP
00650704  C3                        RET
