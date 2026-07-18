FUN_00615860:
00615860  55                        PUSH EBP
00615861  8B EC                     MOV EBP,ESP
00615863  81 EC 90 00 00 00         SUB ESP,0x90
00615869  53                        PUSH EBX
0061586A  56                        PUSH ESI
0061586B  57                        PUSH EDI
0061586C  B8 7C E4 FF FF            MOV EAX,0xffffe47c
00615871  BF 4D DE FF FF            MOV EDI,0xffffde4d
00615876  BA 6A DA FF FF            MOV EDX,0xffffda6a
0061587B  66 89 45 84               MOV word ptr [EBP + -0x7c],AX
0061587F  66 89 7D 8A               MOV word ptr [EBP + -0x76],DI
00615883  66 89 55 90               MOV word ptr [EBP + -0x70],DX
00615887  66 89 55 9C               MOV word ptr [EBP + -0x64],DX
0061588B  66 89 7D A2               MOV word ptr [EBP + -0x5e],DI
0061588F  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
00615893  66 89 45 A8               MOV word ptr [EBP + -0x58],AX
00615897  66 89 7D AC               MOV word ptr [EBP + -0x54],DI
0061589B  66 89 55 B2               MOV word ptr [EBP + -0x4e],DX
0061589F  66 89 55 BE               MOV word ptr [EBP + -0x42],DX
006158A3  66 89 7D C4               MOV word ptr [EBP + -0x3c],DI
006158A7  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
006158AB  B9 64 03 00 00            MOV ECX,0x364
006158B0  BB 75 13 00 00            MOV EBX,0x1375
006158B5  BE 12 0A 00 00            MOV ESI,0xa12
006158BA  BF 84 1B 00 00            MOV EDI,0x1b84
006158BF  BA B3 21 00 00            MOV EDX,0x21b3
006158C4  B8 96 25 00 00            MOV EAX,0x2596
006158C9  66 C7 85 70 FF FF FF EA 26  MOV word ptr [EBP + 0xffffff70],0x26ea
006158D2  66 C7 85 72 FF FF FF 00 00  MOV word ptr [EBP + 0xffffff72],0x0
006158DB  66 89 8D 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],CX
006158E2  66 C7 85 76 FF FF FF 96 25  MOV word ptr [EBP + 0xffffff76],0x2596
006158EB  66 C7 85 78 FF FF FF EE F5  MOV word ptr [EBP + 0xffffff78],0xf5ee
006158F4  66 89 8D 7A FF FF FF      MOV word ptr [EBP + 0xffffff7a],CX
006158FB  66 C7 85 7C FF FF FF B3 21  MOV word ptr [EBP + 0xffffff7c],0x21b3
00615904  66 C7 85 7E FF FF FF 8B EC  MOV word ptr [EBP + 0xffffff7e],0xec8b
0061590D  66 89 4D 80               MOV word ptr [EBP + -0x80],CX
00615911  66 C7 45 82 84 1B         MOV word ptr [EBP + -0x7e],0x1b84
00615917  66 89 4D 86               MOV word ptr [EBP + -0x7a],CX
0061591B  66 89 5D 88               MOV word ptr [EBP + -0x78],BX
0061591F  66 89 4D 8C               MOV word ptr [EBP + -0x74],CX
00615923  66 89 75 8E               MOV word ptr [EBP + -0x72],SI
00615927  66 89 4D 92               MOV word ptr [EBP + -0x6e],CX
0061592B  66 C7 45 94 00 00         MOV word ptr [EBP + -0x6c],0x0
00615931  66 C7 45 96 16 D9         MOV word ptr [EBP + -0x6a],0xd916
00615937  66 89 4D 98               MOV word ptr [EBP + -0x68],CX
0061593B  66 C7 45 9A EE F5         MOV word ptr [EBP + -0x66],0xf5ee
00615941  66 89 4D 9E               MOV word ptr [EBP + -0x62],CX
00615945  66 C7 45 A0 8B EC         MOV word ptr [EBP + -0x60],0xec8b
0061594B  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
0061594F  66 89 4D AA               MOV word ptr [EBP + -0x56],CX
00615953  66 C7 45 AE 8B EC         MOV word ptr [EBP + -0x52],0xec8b
00615959  66 89 4D B0               MOV word ptr [EBP + -0x50],CX
0061595D  66 C7 45 B4 EE F5         MOV word ptr [EBP + -0x4c],0xf5ee
00615963  66 89 4D B6               MOV word ptr [EBP + -0x4a],CX
00615967  66 C7 45 B8 16 D9         MOV word ptr [EBP + -0x48],0xd916
0061596D  66 C7 45 BA 00 00         MOV word ptr [EBP + -0x46],0x0
00615973  66 89 4D BC               MOV word ptr [EBP + -0x44],CX
00615977  66 89 75 C0               MOV word ptr [EBP + -0x40],SI
0061597B  66 89 4D C2               MOV word ptr [EBP + -0x3e],CX
0061597F  66 89 5D C6               MOV word ptr [EBP + -0x3a],BX
00615983  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
00615987  66 89 7D CC               MOV word ptr [EBP + -0x34],DI
0061598B  66 89 4D CE               MOV word ptr [EBP + -0x32],CX
0061598F  66 C7 45 D0 8B EC         MOV word ptr [EBP + -0x30],0xec8b
00615995  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
00615999  66 89 4D D4               MOV word ptr [EBP + -0x2c],CX
0061599D  66 C7 45 D6 EE F5         MOV word ptr [EBP + -0x2a],0xf5ee
006159A3  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
006159A7  66 89 4D DA               MOV word ptr [EBP + -0x26],CX
006159AB  66 C7 45 DC 00 00         MOV word ptr [EBP + -0x24],0x0
006159B1  66 C7 45 DE EA 26         MOV word ptr [EBP + -0x22],0x26ea
006159B7  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
006159BB  66 89 75 E2               MOV word ptr [EBP + -0x1e],SI
006159BF  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
006159C3  66 89 4D E6               MOV word ptr [EBP + -0x1a],CX
006159C7  66 89 5D E8               MOV word ptr [EBP + -0x18],BX
006159CB  66 89 55 EA               MOV word ptr [EBP + -0x16],DX
006159CF  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
006159D3  66 89 7D EE               MOV word ptr [EBP + -0x12],DI
006159D7  66 89 7D F0               MOV word ptr [EBP + -0x10],DI
006159DB  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
006159DF  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
006159E3  66 89 5D F6               MOV word ptr [EBP + -0xa],BX
006159E7  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
006159EB  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
006159EF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006159F2  66 89 75 FC               MOV word ptr [EBP + -0x4],SI
006159F6  5F                        POP EDI
006159F7  5E                        POP ESI
006159F8  66 89 4D FE               MOV word ptr [EBP + -0x2],CX
006159FC  85 C0                     TEST EAX,EAX
006159FE  5B                        POP EBX
006159FF  7C 3C                     JL 0x00615a3d
00615A01  83 F8 18                  CMP EAX,0x18
00615A04  7D 37                     JGE 0x00615a3d
00615A06  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00615A09  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00615A0C  D1 E0                     SHL EAX,0x1
00615A0E  0F BF 8C 05 70 FF FF FF   MOVSX ECX,word ptr [EBP + EAX*0x1 + 0xffffff70]
00615A16  89 0A                     MOV dword ptr [EDX],ECX
00615A18  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00615A1B  0F BF 8C 05 72 FF FF FF   MOVSX ECX,word ptr [EBP + EAX*0x1 + 0xffffff72]
00615A23  0F BF 84 05 74 FF FF FF   MOVSX EAX,word ptr [EBP + EAX*0x1 + 0xffffff74]
00615A2B  89 0A                     MOV dword ptr [EDX],ECX
00615A2D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615A30  89 01                     MOV dword ptr [ECX],EAX
00615A32  B8 01 00 00 00            MOV EAX,0x1
00615A37  8B E5                     MOV ESP,EBP
00615A39  5D                        POP EBP
00615A3A  C2 10 00                  RET 0x10
LAB_00615a3d:
00615A3D  33 C0                     XOR EAX,EAX
00615A3F  8B E5                     MOV ESP,EBP
00615A41  5D                        POP EBP
00615A42  C2 10 00                  RET 0x10
