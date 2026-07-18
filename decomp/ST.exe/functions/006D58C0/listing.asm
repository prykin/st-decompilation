FUN_006d58c0:
006D58C0  55                        PUSH EBP
006D58C1  8B EC                     MOV EBP,ESP
006D58C3  83 EC 54                  SUB ESP,0x54
006D58C6  33 C0                     XOR EAX,EAX
006D58C8  53                        PUSH EBX
006D58C9  56                        PUSH ESI
006D58CA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006D58CD  57                        PUSH EDI
006D58CE  8B F9                     MOV EDI,ECX
006D58D0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006D58D3  33 C9                     XOR ECX,ECX
006D58D5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006D58D8  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006D58DE  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006D58E1  33 D2                     XOR EDX,EDX
006D58E3  8B 98 88 02 00 00         MOV EBX,dword ptr [EAX + 0x288]
006D58E9  8B 87 E4 00 00 00         MOV EAX,dword ptr [EDI + 0xe4]
006D58EF  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006D58F2  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006D58F5  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006D58F8  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006D58FB  33 F6                     XOR ESI,ESI
006D58FD  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006D5900  50                        PUSH EAX
006D5901  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006D5904  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
006D5907  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006D590A  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
006D5911  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006D5914  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006D5917  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006D591A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006D591D  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006D5920  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006D5923  C7 45 F0 00 69 85 00      MOV dword ptr [EBP + -0x10],0x856900
006D592A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006D592D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D5930  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D5936  39 B3 90 00 00 00         CMP dword ptr [EBX + 0x90],ESI
006D593C  0F 84 69 03 00 00         JZ 0x006d5cab
006D5942  39 B3 94 00 00 00         CMP dword ptr [EBX + 0x94],ESI
006D5948  0F 84 5D 03 00 00         JZ 0x006d5cab
006D594E  8B 97 E0 00 00 00         MOV EDX,dword ptr [EDI + 0xe0]
006D5954  39 B2 0C 03 00 00         CMP dword ptr [EDX + 0x30c],ESI
006D595A  0F 84 4B 03 00 00         JZ 0x006d5cab
006D5960  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5963  3B C6                     CMP EAX,ESI
006D5965  7D 18                     JGE 0x006d597f
006D5967  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D596A  50                        PUSH EAX
006D596B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5971  5F                        POP EDI
006D5972  5E                        POP ESI
006D5973  B8 57 00 07 80            MOV EAX,0x80070057
006D5978  5B                        POP EBX
006D5979  8B E5                     MOV ESP,EBP
006D597B  5D                        POP EBP
006D597C  C2 08 00                  RET 0x8
LAB_006d597f:
006D597F  7E 18                     JLE 0x006d5999
006D5981  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D5984  51                        PUSH ECX
006D5985  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D598B  5F                        POP EDI
006D598C  5E                        POP ESI
006D598D  B8 03 01 04 00            MOV EAX,0x40103
006D5992  5B                        POP EBX
006D5993  8B E5                     MOV ESP,EBP
006D5995  5D                        POP EBP
006D5996  C2 08 00                  RET 0x8
LAB_006d5999:
006D5999  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D599C  B9 12 00 00 00            MOV ECX,0x12
006D59A1  8D 75 AC                  LEA ESI,[EBP + -0x54]
006D59A4  8B F8                     MOV EDI,EAX
006D59A6  F3 A5                     MOVSD.REP ES:EDI,ESI
006D59A8  8B 0D 48 13 7A 00         MOV ECX,dword ptr [0x007a1348]
006D59AE  8B D0                     MOV EDX,EAX
006D59B0  BF 00 69 85 00            MOV EDI,0x856900
006D59B5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D59B8  89 0A                     MOV dword ptr [EDX],ECX
006D59BA  8B 0D 4C 13 7A 00         MOV ECX,dword ptr [0x007a134c]
006D59C0  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006D59C3  8B 0D 50 13 7A 00         MOV ECX,dword ptr [0x007a1350]
006D59C9  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006D59CC  8B 0D 54 13 7A 00         MOV ECX,dword ptr [0x007a1354]
006D59D2  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006D59D5  8B 0D 58 13 7A 00         MOV ECX,dword ptr [0x007a1358]
006D59DB  8D 50 2C                  LEA EDX,[EAX + 0x2c]
006D59DE  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
006D59E1  8B 0D 5C 13 7A 00         MOV ECX,dword ptr [0x007a135c]
006D59E7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006D59EA  8B 0D 60 13 7A 00         MOV ECX,dword ptr [0x007a1360]
006D59F0  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006D59F3  8B 0D 64 13 7A 00         MOV ECX,dword ptr [0x007a1364]
006D59F9  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006D59FC  C7 40 40 58 00 00 00      MOV dword ptr [EAX + 0x40],0x58
006D5A03  B9 1A 01 00 00            MOV ECX,0x11a
006D5A08  33 C0                     XOR EAX,EAX
006D5A0A  F3 AB                     STOSD.REP ES:EDI
006D5A0C  A3 00 69 85 00            MOV [0x00856900],EAX
006D5A11  A3 04 69 85 00            MOV [0x00856904],EAX
006D5A16  8B 93 90 00 00 00         MOV EDX,dword ptr [EBX + 0x90]
006D5A1C  BF 01 00 00 00            MOV EDI,0x1
006D5A21  89 15 08 69 85 00         MOV dword ptr [0x00856908],EDX
006D5A27  8B 8B 94 00 00 00         MOV ECX,dword ptr [EBX + 0x94]
006D5A2D  89 0D 0C 69 85 00         MOV dword ptr [0x0085690c],ECX
006D5A33  A3 10 69 85 00            MOV [0x00856910],EAX
006D5A38  A3 14 69 85 00            MOV [0x00856914],EAX
006D5A3D  8B 93 90 00 00 00         MOV EDX,dword ptr [EBX + 0x90]
006D5A43  89 15 18 69 85 00         MOV dword ptr [0x00856918],EDX
006D5A49  8B 8B 94 00 00 00         MOV ECX,dword ptr [EBX + 0x94]
006D5A4F  89 0D 1C 69 85 00         MOV dword ptr [0x0085691c],ECX
006D5A55  C7 05 30 69 85 00 28 00 00 00  MOV dword ptr [0x00856930],0x28
006D5A5F  8B 93 90 00 00 00         MOV EDX,dword ptr [EBX + 0x90]
006D5A65  89 15 34 69 85 00         MOV dword ptr [0x00856934],EDX
006D5A6B  8B 8B 94 00 00 00         MOV ECX,dword ptr [EBX + 0x94]
006D5A71  F7 D9                     NEG ECX
006D5A73  89 0D 38 69 85 00         MOV dword ptr [0x00856938],ECX
006D5A79  66 89 3D 3C 69 85 00      MOV word ptr [0x0085693c],DI
006D5A80  66 8B 56 20               MOV DX,word ptr [ESI + 0x20]
006D5A84  A3 40 69 85 00            MOV [0x00856940],EAX
006D5A89  66 89 15 3E 69 85 00      MOV word ptr [0x0085693e],DX
006D5A90  A3 50 69 85 00            MOV [0x00856950],EAX
006D5A95  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006D5A98  83 E0 0F                  AND EAX,0xf
006D5A9B  3C 02                     CMP AL,0x2
006D5A9D  75 39                     JNZ 0x006d5ad8
006D5A9F  56                        PUSH ESI
006D5AA0  E8 0B 5E FE FF            CALL 0x006bb8b0
006D5AA5  85 C0                     TEST EAX,EAX
006D5AA7  75 2F                     JNZ 0x006d5ad8
006D5AA9  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006D5AAF  56                        PUSH ESI
006D5AB0  99                        CDQ
006D5AB1  F7 7E 28                  IDIV dword ptr [ESI + 0x28]
006D5AB4  A3 34 69 85 00            MOV [0x00856934],EAX
006D5AB9  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006D5ABC  F7 D9                     NEG ECX
006D5ABE  89 0D 38 69 85 00         MOV dword ptr [0x00856938],ECX
006D5AC4  E8 B7 5E FE FF            CALL 0x006bb980
006D5AC9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006D5ACC  8B 82 E0 00 00 00         MOV EAX,dword ptr [EDX + 0xe0]
006D5AD2  89 B8 10 03 00 00         MOV dword ptr [EAX + 0x310],EDI
LAB_006d5ad8:
006D5AD8  68 30 69 85 00            PUSH 0x856930
006D5ADD  E8 5F 3D 07 00            CALL 0x00749841
006D5AE2  A3 44 69 85 00            MOV [0x00856944],EAX
006D5AE7  66 A1 3E 69 85 00         MOV AX,[0x0085693e]
006D5AED  66 3D 10 00               CMP AX,0x10
006D5AF1  0F 85 D2 00 00 00         JNZ 0x006d5bc9
006D5AF7  8B 86 C4 04 00 00         MOV EAX,dword ptr [ESI + 0x4c4]
006D5AFD  3D 00 7C 00 00            CMP EAX,0x7c00
006D5B02  0F 84 83 00 00 00         JZ 0x006d5b8b
006D5B08  81 BE C8 04 00 00 00 3E 00 00  CMP dword ptr [ESI + 0x4c8],0x3e00
006D5B12  74 77                     JZ 0x006d5b8b
006D5B14  83 BE CC 04 00 00 1F      CMP dword ptr [ESI + 0x4cc],0x1f
006D5B1B  74 6E                     JZ 0x006d5b8b
006D5B1D  A3 58 69 85 00            MOV [0x00856958],EAX
006D5B22  8B 8E C8 04 00 00         MOV ECX,dword ptr [ESI + 0x4c8]
006D5B28  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D5B2B  89 0D 5C 69 85 00         MOV dword ptr [0x0085695c],ECX
006D5B31  8B 96 CC 04 00 00         MOV EDX,dword ptr [ESI + 0x4cc]
006D5B37  C7 05 40 69 85 00 03 00 00 00  MOV dword ptr [0x00856940],0x3
006D5B41  89 15 60 69 85 00         MOV dword ptr [0x00856960],EDX
006D5B47  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006D5B4A  83 C1 0C                  ADD ECX,0xc
006D5B4D  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
006D5B50  8B 0D 00 17 7A 00         MOV ECX,dword ptr [0x007a1700]
006D5B56  83 C0 10                  ADD EAX,0x10
006D5B59  89 08                     MOV dword ptr [EAX],ECX
006D5B5B  8B 15 04 17 7A 00         MOV EDX,dword ptr [0x007a1704]
006D5B61  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D5B64  8B 0D 08 17 7A 00         MOV ECX,dword ptr [0x007a1708]
006D5B6A  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006D5B6D  8B 15 0C 17 7A 00         MOV EDX,dword ptr [0x007a170c]
006D5B73  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D5B76  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5B79  50                        PUSH EAX
006D5B7A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5B80  5F                        POP EDI
006D5B81  5E                        POP ESI
006D5B82  33 C0                     XOR EAX,EAX
006D5B84  5B                        POP EBX
006D5B85  8B E5                     MOV ESP,EBP
006D5B87  5D                        POP EBP
006D5B88  C2 08 00                  RET 0x8
LAB_006d5b8b:
006D5B8B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D5B8E  8B 0D F0 16 7A 00         MOV ECX,dword ptr [0x007a16f0]
006D5B94  83 C0 10                  ADD EAX,0x10
006D5B97  89 08                     MOV dword ptr [EAX],ECX
006D5B99  8B 15 F4 16 7A 00         MOV EDX,dword ptr [0x007a16f4]
006D5B9F  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D5BA2  8B 0D F8 16 7A 00         MOV ECX,dword ptr [0x007a16f8]
006D5BA8  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006D5BAB  8B 15 FC 16 7A 00         MOV EDX,dword ptr [0x007a16fc]
006D5BB1  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D5BB4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5BB7  50                        PUSH EAX
006D5BB8  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5BBE  5F                        POP EDI
006D5BBF  5E                        POP ESI
006D5BC0  33 C0                     XOR EAX,EAX
006D5BC2  5B                        POP EBX
006D5BC3  8B E5                     MOV ESP,EBP
006D5BC5  5D                        POP EBP
006D5BC6  C2 08 00                  RET 0x8
LAB_006d5bc9:
006D5BC9  66 3D 08 00               CMP AX,0x8
006D5BCD  75 5D                     JNZ 0x006d5c2c
006D5BCF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D5BD2  8B 15 E0 16 7A 00         MOV EDX,dword ptr [0x007a16e0]
006D5BD8  8D B3 08 01 00 00         LEA ESI,[EBX + 0x108]
006D5BDE  BF 58 69 85 00            MOV EDI,0x856958
006D5BE3  8D 48 10                  LEA ECX,[EAX + 0x10]
006D5BE6  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
006D5BE9  8B 15 E4 16 7A 00         MOV EDX,dword ptr [0x007a16e4]
006D5BEF  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006D5BF2  8B 15 E8 16 7A 00         MOV EDX,dword ptr [0x007a16e8]
006D5BF8  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006D5BFB  8B 15 EC 16 7A 00         MOV EDX,dword ptr [0x007a16ec]
006D5C01  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
006D5C04  B9 00 01 00 00            MOV ECX,0x100
006D5C09  F3 A5                     MOVSD.REP ES:EDI,ESI
006D5C0B  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006D5C0E  81 C1 00 04 00 00         ADD ECX,0x400
006D5C14  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
006D5C17  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5C1A  50                        PUSH EAX
006D5C1B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5C21  5F                        POP EDI
006D5C22  5E                        POP ESI
006D5C23  33 C0                     XOR EAX,EAX
006D5C25  5B                        POP EBX
006D5C26  8B E5                     MOV ESP,EBP
006D5C28  5D                        POP EBP
006D5C29  C2 08 00                  RET 0x8
LAB_006d5c2c:
006D5C2C  66 3D 18 00               CMP AX,0x18
006D5C30  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D5C33  75 3B                     JNZ 0x006d5c70
006D5C35  8B 0D D0 16 7A 00         MOV ECX,dword ptr [0x007a16d0]
006D5C3B  83 C0 10                  ADD EAX,0x10
006D5C3E  89 08                     MOV dword ptr [EAX],ECX
006D5C40  8B 15 D4 16 7A 00         MOV EDX,dword ptr [0x007a16d4]
006D5C46  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D5C49  8B 0D D8 16 7A 00         MOV ECX,dword ptr [0x007a16d8]
006D5C4F  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006D5C52  8B 15 DC 16 7A 00         MOV EDX,dword ptr [0x007a16dc]
006D5C58  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D5C5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5C5E  50                        PUSH EAX
006D5C5F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5C65  5F                        POP EDI
006D5C66  5E                        POP ESI
006D5C67  33 C0                     XOR EAX,EAX
006D5C69  5B                        POP EBX
006D5C6A  8B E5                     MOV ESP,EBP
006D5C6C  5D                        POP EBP
006D5C6D  C2 08 00                  RET 0x8
LAB_006d5c70:
006D5C70  8B 0D C0 16 7A 00         MOV ECX,dword ptr [0x007a16c0]
006D5C76  83 C0 10                  ADD EAX,0x10
006D5C79  89 08                     MOV dword ptr [EAX],ECX
006D5C7B  8B 15 C4 16 7A 00         MOV EDX,dword ptr [0x007a16c4]
006D5C81  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D5C84  8B 0D C8 16 7A 00         MOV ECX,dword ptr [0x007a16c8]
006D5C8A  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006D5C8D  8B 15 CC 16 7A 00         MOV EDX,dword ptr [0x007a16cc]
006D5C93  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D5C96  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5C99  50                        PUSH EAX
006D5C9A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5CA0  5F                        POP EDI
006D5CA1  5E                        POP ESI
006D5CA2  33 C0                     XOR EAX,EAX
006D5CA4  5B                        POP EBX
006D5CA5  8B E5                     MOV ESP,EBP
006D5CA7  5D                        POP EBP
006D5CA8  C2 08 00                  RET 0x8
LAB_006d5cab:
006D5CAB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D5CAE  51                        PUSH ECX
006D5CAF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5CB5  5F                        POP EDI
006D5CB6  5E                        POP ESI
006D5CB7  B8 FF FF 00 80            MOV EAX,0x8000ffff
006D5CBC  5B                        POP EBX
006D5CBD  8B E5                     MOV ESP,EBP
006D5CBF  5D                        POP EBP
006D5CC0  C2 08 00                  RET 0x8
