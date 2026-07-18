FUN_00505960:
00505960  55                        PUSH EBP
00505961  8B EC                     MOV EBP,ESP
00505963  83 EC 6C                  SUB ESP,0x6c
00505966  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050596B  53                        PUSH EBX
0050596C  56                        PUSH ESI
0050596D  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00505970  57                        PUSH EDI
00505971  8D 55 98                  LEA EDX,[EBP + -0x68]
00505974  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00505977  6A 00                     PUSH 0x0
00505979  52                        PUSH EDX
0050597A  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0050597D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00505983  E8 68 7E 22 00            CALL 0x0072d7f0
00505988  8B F0                     MOV ESI,EAX
0050598A  83 C4 08                  ADD ESP,0x8
0050598D  85 F6                     TEST ESI,ESI
0050598F  0F 85 00 03 00 00         JNZ 0x00505c95
00505995  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00505998  68 3D 00 00 01            PUSH 0x100003d
0050599D  6A 37                     PUSH 0x37
0050599F  6A 6F                     PUSH 0x6f
005059A1  6A 50                     PUSH 0x50
005059A3  6A 49                     PUSH 0x49
005059A5  50                        PUSH EAX
005059A6  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
005059AC  50                        PUSH EAX
005059AD  E8 BE E7 1A 00            CALL 0x006b4170
005059B2  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005059B8  68 3F 00 00 01            PUSH 0x100003f
005059BD  6A 34                     PUSH 0x34
005059BF  6A 29                     PUSH 0x29
005059C1  6A 51                     PUSH 0x51
005059C3  6A 4A                     PUSH 0x4a
005059C5  6A 00                     PUSH 0x0
005059C7  51                        PUSH ECX
005059C8  E8 A3 E7 1A 00            CALL 0x006b4170
005059CD  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
005059D3  68 3A 00 00 01            PUSH 0x100003a
005059D8  6A 32                     PUSH 0x32
005059DA  6A 27                     PUSH 0x27
005059DC  6A 52                     PUSH 0x52
005059DE  6A 4B                     PUSH 0x4b
005059E0  6A 00                     PUSH 0x0
005059E2  52                        PUSH EDX
005059E3  E8 88 E7 1A 00            CALL 0x006b4170
005059E8  80 BE D4 09 00 00 01      CMP byte ptr [ESI + 0x9d4],0x1
005059EF  75 08                     JNZ 0x005059f9
005059F1  C6 45 E4 04               MOV byte ptr [EBP + -0x1c],0x4
005059F5  B0 03                     MOV AL,0x3
005059F7  EB 06                     JMP 0x005059ff
LAB_005059f9:
005059F9  C6 45 E4 00               MOV byte ptr [EBP + -0x1c],0x0
005059FD  B0 04                     MOV AL,0x4
LAB_005059ff:
005059FF  84 C0                     TEST AL,AL
00505A01  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00505A04  0F 86 7B 02 00 00         JBE 0x00505c85
00505A0A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00505A0D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00505A14  25 FF 00 00 00            AND EAX,0xff
00505A19  C7 45 E8 54 00 00 00      MOV dword ptr [EBP + -0x18],0x54
00505A20  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00505A23  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00505A26  8D 8C 46 11 0C 00 00      LEA ECX,[ESI + EAX*0x2 + 0xc11]
00505A2D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00505A30  25 FF 00 00 00            AND EAX,0xff
00505A35  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00505A38  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00505A3B  EB 03                     JMP 0x00505a40
LAB_00505a3d:
00505A3D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_00505a40:
00505A40  80 39 00                  CMP byte ptr [ECX],0x0
00505A43  74 18                     JZ 0x00505a5d
00505A45  33 C0                     XOR EAX,EAX
00505A47  33 FF                     XOR EDI,EDI
00505A49  66 8B 41 02               MOV AX,word ptr [ECX + 0x2]
00505A4D  66 8B 79 04               MOV DI,word ptr [ECX + 0x4]
00505A51  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00505A54  D1 E0                     SHL EAX,0x1
00505A56  99                        CDQ
00505A57  F7 FF                     IDIV EDI
00505A59  8B D8                     MOV EBX,EAX
00505A5B  EB 02                     JMP 0x00505a5f
LAB_00505a5d:
00505A5D  33 DB                     XOR EBX,EBX
LAB_00505a5f:
00505A5F  8B 8E B2 02 00 00         MOV ECX,dword ptr [ESI + 0x2b2]
00505A65  6A 05                     PUSH 0x5
00505A67  51                        PUSH ECX
00505A68  E8 33 59 20 00            CALL 0x0070b3a0
00505A6D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00505A70  50                        PUSH EAX
00505A71  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00505A77  6A 01                     PUSH 0x1
00505A79  52                        PUSH EDX
00505A7A  6A 74                     PUSH 0x74
00505A7C  50                        PUSH EAX
00505A7D  E8 A7 D7 EF FF            CALL 0x00403229
00505A82  83 C4 1C                  ADD ESP,0x1c
00505A85  C6 45 F4 00               MOV byte ptr [EBP + -0xc],0x0
00505A89  85 DB                     TEST EBX,EBX
00505A8B  76 46                     JBE 0x00505ad3
00505A8D  33 FF                     XOR EDI,EDI
LAB_00505a8f:
00505A8F  8B 8E B6 02 00 00         MOV ECX,dword ptr [ESI + 0x2b6]
00505A95  6A 01                     PUSH 0x1
00505A97  51                        PUSH ECX
00505A98  E8 03 59 20 00            CALL 0x0070b3a0
00505A9D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00505AA0  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00505AA6  50                        PUSH EAX
00505AA7  6A 01                     PUSH 0x1
00505AA9  8D 42 02                  LEA EAX,[EDX + 0x2]
00505AAC  50                        PUSH EAX
00505AAD  8D 04 BD 76 00 00 00      LEA EAX,[EDI*0x4 + 0x76]
00505AB4  50                        PUSH EAX
00505AB5  51                        PUSH ECX
00505AB6  E8 6E D7 EF FF            CALL 0x00403229
00505ABB  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00505ABE  83 C4 1C                  ADD ESP,0x1c
00505AC1  FE C2                     INC DL
00505AC3  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
00505AC6  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00505AC9  81 E7 FF 00 00 00         AND EDI,0xff
00505ACF  3B FB                     CMP EDI,EBX
00505AD1  72 BC                     JC 0x00505a8f
LAB_00505ad3:
00505AD3  80 7D F4 0A               CMP byte ptr [EBP + -0xc],0xa
00505AD7  73 44                     JNC 0x00505b1d
00505AD9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00505ADC  BF 0A 00 00 00            MOV EDI,0xa
00505AE1  25 FF 00 00 00            AND EAX,0xff
00505AE6  2B F8                     SUB EDI,EAX
00505AE8  8D 1C 85 76 00 00 00      LEA EBX,[EAX*0x4 + 0x76]
LAB_00505aef:
00505AEF  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
00505AF5  6A 00                     PUSH 0x0
00505AF7  52                        PUSH EDX
00505AF8  E8 A3 58 20 00            CALL 0x0070b3a0
00505AFD  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00505B03  50                        PUSH EAX
00505B04  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00505B07  6A 01                     PUSH 0x1
00505B09  83 C0 02                  ADD EAX,0x2
00505B0C  50                        PUSH EAX
00505B0D  53                        PUSH EBX
00505B0E  51                        PUSH ECX
00505B0F  E8 15 D7 EF FF            CALL 0x00403229
00505B14  83 C4 1C                  ADD ESP,0x1c
00505B17  83 C3 04                  ADD EBX,0x4
00505B1A  4F                        DEC EDI
00505B1B  75 D2                     JNZ 0x00505aef
LAB_00505b1d:
00505B1D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00505B20  33 D2                     XOR EDX,EDX
00505B22  8D BE E1 01 00 00         LEA EDI,[ESI + 0x1e1]
00505B28  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
00505B2C  52                        PUSH EDX
00505B2D  68 A4 1A 7C 00            PUSH 0x7c1aa4
00505B32  57                        PUSH EDI
00505B33  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00505B39  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00505B3C  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00505B42  83 C4 0C                  ADD ESP,0xc
00505B45  6A 0C                     PUSH 0xc
00505B47  6A 15                     PUSH 0x15
00505B49  53                        PUSH EBX
00505B4A  68 A2 00 00 00            PUSH 0xa2
00505B4F  6A 00                     PUSH 0x0
00505B51  51                        PUSH ECX
00505B52  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00505B58  E8 33 AF 20 00            CALL 0x00710a90
00505B5D  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00505B63  6A 05                     PUSH 0x5
00505B65  6A FF                     PUSH -0x1
00505B67  6A FD                     PUSH -0x3
00505B69  57                        PUSH EDI
00505B6A  E8 51 BE 20 00            CALL 0x007119c0
00505B6F  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
00505B72  84 C0                     TEST AL,AL
00505B74  74 4C                     JZ 0x00505bc2
00505B76  83 FB 75                  CMP EBX,0x75
00505B79  0F 8F 90 00 00 00         JG 0x00505c0f
00505B7F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00505B82  FF 24 95 DC 5C 50 00      JMP dword ptr [EDX*0x4 + 0x505cdc]
LAB_00505bc2:
00505BC2  83 FB 75                  CMP EBX,0x75
00505BC5  7F 48                     JG 0x00505c0f
00505BC7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00505BCA  FF 24 85 EC 5C 50 00      JMP dword ptr [EAX*0x4 + 0x505cec]
LAB_00505c0f:
00505C0F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00505C12  8A 01                     MOV AL,byte ptr [ECX]
00505C14  84 C0                     TEST AL,AL
00505C16  74 08                     JZ 0x00505c20
00505C18  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
00505C1E  EB 06                     JMP 0x00505c26
LAB_00505c20:
00505C20  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
LAB_00505c26:
00505C26  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00505C29  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
00505C2C  F6 D8                     NEG AL
00505C2E  1B C0                     SBB EAX,EAX
00505C30  83 E0 14                  AND EAX,0x14
00505C33  83 C0 0B                  ADD EAX,0xb
00505C36  03 C2                     ADD EAX,EDX
00505C38  03 C7                     ADD EAX,EDI
00505C3A  50                        PUSH EAX
00505C3B  51                        PUSH ECX
00505C3C  E8 5F 57 20 00            CALL 0x0070b3a0
00505C41  83 C4 08                  ADD ESP,0x8
00505C44  85 C0                     TEST EAX,EAX
00505C46  74 1A                     JZ 0x00505c62
00505C48  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00505C4B  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00505C51  50                        PUSH EAX
00505C52  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00505C55  6A 06                     PUSH 0x6
00505C57  52                        PUSH EDX
00505C58  50                        PUSH EAX
00505C59  51                        PUSH ECX
00505C5A  E8 CA D5 EF FF            CALL 0x00403229
00505C5F  83 C4 14                  ADD ESP,0x14
LAB_00505c62:
00505C62  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00505C65  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00505C68  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00505C6B  47                        INC EDI
00505C6C  83 C2 06                  ADD EDX,0x6
00505C6F  83 C3 0B                  ADD EBX,0xb
00505C72  48                        DEC EAX
00505C73  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00505C76  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00505C79  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00505C7C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00505C7F  0F 85 B8 FD FF FF         JNZ 0x00505a3d
LAB_00505c85:
00505C85  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00505C88  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00505C8E  5F                        POP EDI
00505C8F  5E                        POP ESI
00505C90  5B                        POP EBX
00505C91  8B E5                     MOV ESP,EBP
00505C93  5D                        POP EBP
00505C94  C3                        RET
LAB_00505c95:
00505C95  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00505C98  68 08 28 7C 00            PUSH 0x7c2808
00505C9D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00505CA2  56                        PUSH ESI
00505CA3  6A 00                     PUSH 0x0
00505CA5  68 84 01 00 00            PUSH 0x184
00505CAA  68 00 27 7C 00            PUSH 0x7c2700
00505CAF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00505CB4  E8 17 78 1A 00            CALL 0x006ad4d0
00505CB9  83 C4 18                  ADD ESP,0x18
00505CBC  85 C0                     TEST EAX,EAX
00505CBE  74 01                     JZ 0x00505cc1
00505CC0  CC                        INT3
LAB_00505cc1:
00505CC1  68 84 01 00 00            PUSH 0x184
00505CC6  68 00 27 7C 00            PUSH 0x7c2700
00505CCB  6A 00                     PUSH 0x0
00505CCD  56                        PUSH ESI
00505CCE  E8 6D 01 1A 00            CALL 0x006a5e40
00505CD3  5F                        POP EDI
00505CD4  5E                        POP ESI
00505CD5  5B                        POP EBX
00505CD6  8B E5                     MOV ESP,EBP
00505CD8  5D                        POP EBP
00505CD9  C3                        RET
