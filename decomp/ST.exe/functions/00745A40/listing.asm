FUN_00745a40:
00745A40  55                        PUSH EBP
00745A41  8B EC                     MOV EBP,ESP
00745A43  83 EC 48                  SUB ESP,0x48
00745A46  66 C7 45 D4 00 00         MOV word ptr [EBP + -0x2c],0x0
00745A4C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00745A53  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00745A5A  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00745A61  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00745A68  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745A6B  66 8B 48 0A               MOV CX,word ptr [EAX + 0xa]
00745A6F  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
00745A73  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00745A76  66 8B 42 0A               MOV AX,word ptr [EDX + 0xa]
00745A7A  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
00745A7E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00745A81  81 E1 FF FF 00 00         AND ECX,0xffff
00745A87  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00745A8A  81 E2 FF FF 00 00         AND EDX,0xffff
00745A90  33 CA                     XOR ECX,EDX
00745A92  81 E1 00 80 00 00         AND ECX,0x8000
00745A98  66 89 4D D4               MOV word ptr [EBP + -0x2c],CX
00745A9C  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
00745AA0  66 25 FF 7F               AND AX,0x7fff
00745AA4  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
00745AA8  66 8B 4D E0               MOV CX,word ptr [EBP + -0x20]
00745AAC  66 81 E1 FF 7F            AND CX,0x7fff
00745AB1  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
00745AB5  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00745AB8  81 E2 FF FF 00 00         AND EDX,0xffff
00745ABE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00745AC1  25 FF FF 00 00            AND EAX,0xffff
00745AC6  03 D0                     ADD EDX,EAX
00745AC8  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
00745ACC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00745ACF  81 E1 FF FF 00 00         AND ECX,0xffff
00745AD5  81 F9 FF 7F 00 00         CMP ECX,0x7fff
00745ADB  7D 20                     JGE 0x00745afd
00745ADD  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00745AE0  81 E2 FF FF 00 00         AND EDX,0xffff
00745AE6  81 FA FF 7F 00 00         CMP EDX,0x7fff
00745AEC  7D 0F                     JGE 0x00745afd
00745AEE  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00745AF1  25 FF FF 00 00            AND EAX,0xffff
00745AF6  3D FD BF 00 00            CMP EAX,0xbffd
00745AFB  7E 37                     JLE 0x00745b34
LAB_00745afd:
00745AFD  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00745B00  81 E1 FF FF 00 00         AND ECX,0xffff
00745B06  F7 D9                     NEG ECX
00745B08  1B C9                     SBB ECX,ECX
00745B0A  81 E1 00 00 00 80         AND ECX,0x80000000
00745B10  81 C1 00 80 FF 7F         ADD ECX,0x7fff8000
00745B16  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745B19  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00745B1C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745B1F  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
00745B26  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745B29  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00745B2F  E9 45 03 00 00            JMP 0x00745e79
LAB_00745b34:
00745B34  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00745B37  81 E2 FF FF 00 00         AND EDX,0xffff
00745B3D  81 FA BF 3F 00 00         CMP EDX,0x3fbf
00745B43  7F 22                     JG 0x00745b67
00745B45  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745B48  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
00745B4F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745B52  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
00745B59  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745B5C  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00745B62  E9 12 03 00 00            JMP 0x00745e79
LAB_00745b67:
00745B67  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00745B6A  25 FF FF 00 00            AND EAX,0xffff
00745B6F  85 C0                     TEST EAX,EAX
00745B71  75 3A                     JNZ 0x00745bad
00745B73  66 8B 4D D0               MOV CX,word ptr [EBP + -0x30]
00745B77  66 83 C1 01               ADD CX,0x1
00745B7B  66 89 4D D0               MOV word ptr [EBP + -0x30],CX
00745B7F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745B82  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00745B85  25 FF FF FF 7F            AND EAX,0x7fffffff
00745B8A  85 C0                     TEST EAX,EAX
00745B8C  75 1F                     JNZ 0x00745bad
00745B8E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745B91  83 79 04 00               CMP dword ptr [ECX + 0x4],0x0
00745B95  75 16                     JNZ 0x00745bad
00745B97  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745B9A  83 3A 00                  CMP dword ptr [EDX],0x0
00745B9D  75 0E                     JNZ 0x00745bad
00745B9F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745BA2  66 C7 40 0A 00 00         MOV word ptr [EAX + 0xa],0x0
00745BA8  E9 CC 02 00 00            JMP 0x00745e79
LAB_00745bad:
00745BAD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00745BB0  81 E1 FF FF 00 00         AND ECX,0xffff
00745BB6  85 C9                     TEST ECX,ECX
00745BB8  75 4F                     JNZ 0x00745c09
00745BBA  66 8B 55 D0               MOV DX,word ptr [EBP + -0x30]
00745BBE  66 83 C2 01               ADD DX,0x1
00745BC2  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
00745BC6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00745BC9  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00745BCC  81 E1 FF FF FF 7F         AND ECX,0x7fffffff
00745BD2  85 C9                     TEST ECX,ECX
00745BD4  75 33                     JNZ 0x00745c09
00745BD6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00745BD9  83 7A 04 00               CMP dword ptr [EDX + 0x4],0x0
00745BDD  75 2A                     JNZ 0x00745c09
00745BDF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00745BE2  83 38 00                  CMP dword ptr [EAX],0x0
00745BE5  75 22                     JNZ 0x00745c09
00745BE7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745BEA  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
00745BF1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745BF4  C7 42 04 00 00 00 00      MOV dword ptr [EDX + 0x4],0x0
00745BFB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745BFE  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00745C04  E9 70 02 00 00            JMP 0x00745e79
LAB_00745c09:
00745C09  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00745C10  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00745C17  EB 09                     JMP 0x00745c22
LAB_00745c19:
00745C19  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00745C1C  83 C1 01                  ADD ECX,0x1
00745C1F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_00745c22:
00745C22  83 7D E4 05               CMP dword ptr [EBP + -0x1c],0x5
00745C26  0F 8D B5 00 00 00         JGE 0x00745ce1
00745C2C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00745C2F  D1 E2                     SHL EDX,0x1
00745C31  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00745C34  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
00745C3B  B8 05 00 00 00            MOV EAX,0x5
00745C40  2B 45 E4                  SUB EAX,dword ptr [EBP + -0x1c]
00745C43  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00745C46  EB 09                     JMP 0x00745c51
LAB_00745c48:
00745C48  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00745C4B  83 E9 01                  SUB ECX,0x1
00745C4E  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_00745c51:
00745C51  83 7D CC 00               CMP dword ptr [EBP + -0x34],0x0
00745C55  7E 7C                     JLE 0x00745cd3
00745C57  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745C5A  03 55 DC                  ADD EDX,dword ptr [EBP + -0x24]
00745C5D  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00745C60  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00745C63  03 45 F8                  ADD EAX,dword ptr [EBP + -0x8]
00745C66  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00745C69  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00745C6C  8D 54 0D EC               LEA EDX,[EBP + ECX*0x1 + -0x14]
00745C70  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00745C73  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00745C76  33 C9                     XOR ECX,ECX
00745C78  66 8B 08                  MOV CX,word ptr [EAX]
00745C7B  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00745C7E  33 C0                     XOR EAX,EAX
00745C80  66 8B 02                  MOV AX,word ptr [EDX]
00745C83  0F AF C8                  IMUL ECX,EAX
00745C86  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00745C89  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00745C8C  51                        PUSH ECX
00745C8D  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00745C90  52                        PUSH EDX
00745C91  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00745C94  8B 08                     MOV ECX,dword ptr [EAX]
00745C96  51                        PUSH ECX
00745C97  E8 34 EC FF FF            CALL 0x007448d0
00745C9C  83 C4 0C                  ADD ESP,0xc
00745C9F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00745CA2  83 7D B8 00               CMP dword ptr [EBP + -0x48],0x0
00745CA6  74 14                     JZ 0x00745cbc
00745CA8  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00745CAB  66 8B 44 15 F0            MOV AX,word ptr [EBP + EDX*0x1 + -0x10]
00745CB0  66 05 01 00               ADD AX,0x1
00745CB4  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00745CB7  66 89 44 0D F0            MOV word ptr [EBP + ECX*0x1 + -0x10],AX
LAB_00745cbc:
00745CBC  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00745CBF  83 C2 02                  ADD EDX,0x2
00745CC2  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00745CC5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00745CC8  83 E8 02                  SUB EAX,0x2
00745CCB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00745CCE  E9 75 FF FF FF            JMP 0x00745c48
LAB_00745cd3:
00745CD3  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00745CD6  83 C1 02                  ADD ECX,0x2
00745CD9  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00745CDC  E9 38 FF FF FF            JMP 0x00745c19
LAB_00745ce1:
00745CE1  66 8B 55 D0               MOV DX,word ptr [EBP + -0x30]
00745CE5  66 81 EA FE 3F            SUB DX,0x3ffe
00745CEA  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
LAB_00745cee:
00745CEE  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
00745CF2  85 C0                     TEST EAX,EAX
00745CF4  7E 27                     JLE 0x00745d1d
00745CF6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00745CF9  81 E1 00 00 00 80         AND ECX,0x80000000
00745CFF  85 C9                     TEST ECX,ECX
00745D01  75 1A                     JNZ 0x00745d1d
00745D03  8D 55 EC                  LEA EDX,[EBP + -0x14]
00745D06  52                        PUSH EDX
00745D07  E8 B4 EC FF FF            CALL 0x007449c0
00745D0C  83 C4 04                  ADD ESP,0x4
00745D0F  66 8B 45 D0               MOV AX,word ptr [EBP + -0x30]
00745D13  66 2D 01 00               SUB AX,0x1
00745D17  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00745D1B  EB D1                     JMP 0x00745cee
LAB_00745d1d:
00745D1D  0F BF 4D D0               MOVSX ECX,word ptr [EBP + -0x30]
00745D21  85 C9                     TEST ECX,ECX
00745D23  7F 58                     JG 0x00745d7d
00745D25  66 8B 55 D0               MOV DX,word ptr [EBP + -0x30]
00745D29  66 83 EA 01               SUB DX,0x1
00745D2D  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
LAB_00745d31:
00745D31  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
00745D35  85 C0                     TEST EAX,EAX
00745D37  7D 33                     JGE 0x00745d6c
00745D39  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00745D3C  81 E1 FF FF 00 00         AND ECX,0xffff
00745D42  83 E1 01                  AND ECX,0x1
00745D45  85 C9                     TEST ECX,ECX
00745D47  74 09                     JZ 0x00745d52
00745D49  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00745D4C  83 C2 01                  ADD EDX,0x1
00745D4F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00745d52:
00745D52  8D 45 EC                  LEA EAX,[EBP + -0x14]
00745D55  50                        PUSH EAX
00745D56  E8 C5 EC FF FF            CALL 0x00744a20
00745D5B  83 C4 04                  ADD ESP,0x4
00745D5E  66 8B 4D D0               MOV CX,word ptr [EBP + -0x30]
00745D62  66 83 C1 01               ADD CX,0x1
00745D66  66 89 4D D0               MOV word ptr [EBP + -0x30],CX
00745D6A  EB C5                     JMP 0x00745d31
LAB_00745d6c:
00745D6C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00745D70  74 0B                     JZ 0x00745d7d
00745D72  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
00745D76  80 CA 01                  OR DL,0x1
00745D79  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
LAB_00745d7d:
00745D7D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00745D80  25 FF FF 00 00            AND EAX,0xffff
00745D85  3D 00 80 00 00            CMP EAX,0x8000
00745D8A  7F 11                     JG 0x00745d9d
00745D8C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00745D8F  81 E1 FF FF 01 00         AND ECX,0x1ffff
00745D95  81 F9 00 80 01 00         CMP ECX,0x18000
00745D9B  75 61                     JNZ 0x00745dfe
LAB_00745d9d:
00745D9D  83 7D EE FF               CMP dword ptr [EBP + -0x12],-0x1
00745DA1  75 52                     JNZ 0x00745df5
00745DA3  C7 45 EE 00 00 00 00      MOV dword ptr [EBP + -0x12],0x0
00745DAA  83 7D F2 FF               CMP dword ptr [EBP + -0xe],-0x1
00745DAE  75 3A                     JNZ 0x00745dea
00745DB0  C7 45 F2 00 00 00 00      MOV dword ptr [EBP + -0xe],0x0
00745DB7  8B 55 F6                  MOV EDX,dword ptr [EBP + -0xa]
00745DBA  81 E2 FF FF 00 00         AND EDX,0xffff
00745DC0  81 FA FF FF 00 00         CMP EDX,0xffff
00745DC6  75 14                     JNZ 0x00745ddc
00745DC8  66 C7 45 F6 00 80         MOV word ptr [EBP + -0xa],0x8000
00745DCE  66 8B 45 D0               MOV AX,word ptr [EBP + -0x30]
00745DD2  66 05 01 00               ADD AX,0x1
00745DD6  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00745DDA  EB 0C                     JMP 0x00745de8
LAB_00745ddc:
00745DDC  66 8B 4D F6               MOV CX,word ptr [EBP + -0xa]
00745DE0  66 83 C1 01               ADD CX,0x1
00745DE4  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
LAB_00745de8:
00745DE8  EB 09                     JMP 0x00745df3
LAB_00745dea:
00745DEA  8B 55 F2                  MOV EDX,dword ptr [EBP + -0xe]
00745DED  83 C2 01                  ADD EDX,0x1
00745DF0  89 55 F2                  MOV dword ptr [EBP + -0xe],EDX
LAB_00745df3:
00745DF3  EB 09                     JMP 0x00745dfe
LAB_00745df5:
00745DF5  8B 45 EE                  MOV EAX,dword ptr [EBP + -0x12]
00745DF8  83 C0 01                  ADD EAX,0x1
00745DFB  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
LAB_00745dfe:
00745DFE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00745E01  81 E1 FF FF 00 00         AND ECX,0xffff
00745E07  81 F9 FF 7F 00 00         CMP ECX,0x7fff
00745E0D  7C 34                     JL 0x00745e43
00745E0F  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00745E12  81 E2 FF FF 00 00         AND EDX,0xffff
00745E18  F7 DA                     NEG EDX
00745E1A  1B D2                     SBB EDX,EDX
00745E1C  81 E2 00 00 00 80         AND EDX,0x80000000
00745E22  81 C2 00 80 FF 7F         ADD EDX,0x7fff8000
00745E28  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745E2B  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00745E2E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745E31  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
00745E38  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745E3B  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00745E41  EB 36                     JMP 0x00745e79
LAB_00745e43:
00745E43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745E46  66 8B 4D EE               MOV CX,word ptr [EBP + -0x12]
00745E4A  66 89 08                  MOV word ptr [EAX],CX
00745E4D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745E50  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00745E53  89 42 02                  MOV dword ptr [EDX + 0x2],EAX
00745E56  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745E59  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745E5C  89 51 06                  MOV dword ptr [ECX + 0x6],EDX
00745E5F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00745E62  25 FF FF 00 00            AND EAX,0xffff
00745E67  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00745E6A  81 E1 FF FF 00 00         AND ECX,0xffff
00745E70  0B C1                     OR EAX,ECX
00745E72  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745E75  66 89 42 0A               MOV word ptr [EDX + 0xa],AX
LAB_00745e79:
00745E79  8B E5                     MOV ESP,EBP
00745E7B  5D                        POP EBP
00745E7C  C3                        RET
