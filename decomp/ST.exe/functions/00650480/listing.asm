FUN_00650480:
00650480  55                        PUSH EBP
00650481  8B EC                     MOV EBP,ESP
00650483  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650486  53                        PUSH EBX
00650487  33 C9                     XOR ECX,ECX
00650489  BB 08 00 00 00            MOV EBX,0x8
LAB_0065048e:
0065048E  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00650495  0F 85 FF 00 00 00         JNZ 0x0065059a
0065049B  41                        INC ECX
0065049C  83 F9 02                  CMP ECX,0x2
0065049F  7C ED                     JL 0x0065048e
006504A1  66 8B 08                  MOV CX,word ptr [EAX]
006504A4  66 83 F9 03               CMP CX,0x3
006504A8  7D 15                     JGE 0x006504bf
006504AA  C7 40 10 00 00 00 00      MOV dword ptr [EAX + 0x10],0x0
LAB_006504b1:
006504B1  83 CA FF                  OR EDX,0xffffffff
006504B4  66 83 F9 04               CMP CX,0x4
006504B8  7D 12                     JGE 0x006504cc
006504BA  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006504BD  EB 1A                     JMP 0x006504d9
LAB_006504bf:
006504BF  38 98 D2 00 00 00         CMP byte ptr [EAX + 0xd2],BL
006504C5  74 EA                     JZ 0x006504b1
006504C7  33 C0                     XOR EAX,EAX
006504C9  5B                        POP EBX
006504CA  5D                        POP EBP
006504CB  C3                        RET
LAB_006504cc:
006504CC  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
006504D2  74 05                     JZ 0x006504d9
006504D4  33 C0                     XOR EAX,EAX
006504D6  5B                        POP EBX
006504D7  5D                        POP EBP
006504D8  C3                        RET
LAB_006504d9:
006504D9  66 83 F9 05               CMP CX,0x5
006504DD  7D 12                     JGE 0x006504f1
006504DF  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
LAB_006504e6:
006504E6  66 83 F9 06               CMP CX,0x6
006504EA  7D 13                     JGE 0x006504ff
006504EC  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
006504EF  EB 1B                     JMP 0x0065050c
LAB_006504f1:
006504F1  80 B8 D4 00 00 00 0A      CMP byte ptr [EAX + 0xd4],0xa
006504F8  74 EC                     JZ 0x006504e6
006504FA  33 C0                     XOR EAX,EAX
006504FC  5B                        POP EBX
006504FD  5D                        POP EBP
006504FE  C3                        RET
LAB_006504ff:
006504FF  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
00650505  74 05                     JZ 0x0065050c
00650507  33 C0                     XOR EAX,EAX
00650509  5B                        POP EBX
0065050A  5D                        POP EBP
0065050B  C3                        RET
LAB_0065050c:
0065050C  66 83 F9 07               CMP CX,0x7
00650510  7D 0D                     JGE 0x0065051f
00650512  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_00650515:
00650515  66 3B CB                  CMP CX,BX
00650518  7D 12                     JGE 0x0065052c
0065051A  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
0065051D  EB 1A                     JMP 0x00650539
LAB_0065051f:
0065051F  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
00650525  74 EE                     JZ 0x00650515
00650527  33 C0                     XOR EAX,EAX
00650529  5B                        POP EBX
0065052A  5D                        POP EBP
0065052B  C3                        RET
LAB_0065052c:
0065052C  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
00650532  74 05                     JZ 0x00650539
00650534  33 C0                     XOR EAX,EAX
00650536  5B                        POP EBX
00650537  5D                        POP EBP
00650538  C3                        RET
LAB_00650539:
00650539  66 83 F9 09               CMP CX,0x9
0065053D  7D 0E                     JGE 0x0065054d
0065053F  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
LAB_00650542:
00650542  66 83 F9 0A               CMP CX,0xa
00650546  7D 12                     JGE 0x0065055a
00650548  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
0065054B  EB 1A                     JMP 0x00650567
LAB_0065054d:
0065054D  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
00650553  74 ED                     JZ 0x00650542
00650555  33 C0                     XOR EAX,EAX
00650557  5B                        POP EBX
00650558  5D                        POP EBP
00650559  C3                        RET
LAB_0065055a:
0065055A  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
00650560  74 05                     JZ 0x00650567
00650562  33 C0                     XOR EAX,EAX
00650564  5B                        POP EBX
00650565  5D                        POP EBP
00650566  C3                        RET
LAB_00650567:
00650567  66 83 F9 0B               CMP CX,0xb
0065056B  7D 18                     JGE 0x00650585
0065056D  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
LAB_00650570:
00650570  66 83 F9 0C               CMP CX,0xc
00650574  7D 1C                     JGE 0x00650592
00650576  C7 40 34 01 00 00 00      MOV dword ptr [EAX + 0x34],0x1
0065057D  B8 01 00 00 00            MOV EAX,0x1
00650582  5B                        POP EBX
00650583  5D                        POP EBP
00650584  C3                        RET
LAB_00650585:
00650585  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
0065058B  74 E3                     JZ 0x00650570
0065058D  33 C0                     XOR EAX,EAX
0065058F  5B                        POP EBX
00650590  5D                        POP EBP
00650591  C3                        RET
LAB_00650592:
00650592  38 98 DB 00 00 00         CMP byte ptr [EAX + 0xdb],BL
00650598  74 05                     JZ 0x0065059f
LAB_0065059a:
0065059A  33 C0                     XOR EAX,EAX
0065059C  5B                        POP EBX
0065059D  5D                        POP EBP
0065059E  C3                        RET
LAB_0065059f:
0065059F  B8 01 00 00 00            MOV EAX,0x1
006505A4  5B                        POP EBX
006505A5  5D                        POP EBP
006505A6  C3                        RET
