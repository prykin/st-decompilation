OptPanelTy::PrepMissObj:
00532A80  55                        PUSH EBP
00532A81  8B EC                     MOV EBP,ESP
00532A83  83 EC 48                  SUB ESP,0x48
00532A86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00532A8B  56                        PUSH ESI
00532A8C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00532A8F  57                        PUSH EDI
00532A90  8D 55 BC                  LEA EDX,[EBP + -0x44]
00532A93  8D 4D B8                  LEA ECX,[EBP + -0x48]
00532A96  6A 00                     PUSH 0x0
00532A98  52                        PUSH EDX
00532A99  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00532A9C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00532AA2  E8 49 AD 1F 00            CALL 0x0072d7f0
00532AA7  8B F0                     MOV ESI,EAX
00532AA9  83 C4 08                  ADD ESP,0x8
00532AAC  85 F6                     TEST ESI,ESI
00532AAE  0F 85 5F 01 00 00         JNZ 0x00532c13
00532AB4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00532AB7  8B 86 F9 02 00 00         MOV EAX,dword ptr [ESI + 0x2f9]
00532ABD  85 C0                     TEST EAX,EAX
00532ABF  74 06                     JZ 0x00532ac7
00532AC1  50                        PUSH EAX
00532AC2  E8 A9 2A 18 00            CALL 0x006b5570
LAB_00532ac7:
00532AC7  6A 0A                     PUSH 0xa
00532AC9  6A 0A                     PUSH 0xa
00532ACB  6A 00                     PUSH 0x0
00532ACD  E8 1E 2A 18 00            CALL 0x006b54f0
00532AD2  89 86 F9 02 00 00         MOV dword ptr [ESI + 0x2f9],EAX
00532AD8  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
00532ADE  33 FF                     XOR EDI,EDI
00532AE0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00532AE3  85 C0                     TEST EAX,EAX
00532AE5  7E 31                     JLE 0x00532b18
00532AE7  3B F8                     CMP EDI,EAX
00532AE9  7D 08                     JGE 0x00532af3
LAB_00532aeb:
00532AEB  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
00532AEE  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
00532AF1  EB 02                     JMP 0x00532af5
LAB_00532af3:
00532AF3  33 C0                     XOR EAX,EAX
LAB_00532af5:
00532AF5  8B 8E F9 02 00 00         MOV ECX,dword ptr [ESI + 0x2f9]
00532AFB  68 B4 72 7C 00            PUSH 0x7c72b4
00532B00  50                        PUSH EAX
00532B01  51                        PUSH ECX
00532B02  E8 99 EA EC FF            CALL 0x004015a0
00532B07  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
00532B0D  83 C4 0C                  ADD ESP,0xc
00532B10  47                        INC EDI
00532B11  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00532B14  3B F8                     CMP EDI,EAX
00532B16  7C D3                     JL 0x00532aeb
LAB_00532b18:
00532B18  8B 96 F9 02 00 00         MOV EDX,dword ptr [ESI + 0x2f9]
00532B1E  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
00532B24  6A 01                     PUSH 0x1
00532B26  6A 00                     PUSH 0x0
00532B28  6A FF                     PUSH -0x1
00532B2A  6A 00                     PUSH 0x0
00532B2C  68 C8 00 00 00            PUSH 0xc8
00532B31  68 EC 21 7C 00            PUSH 0x7c21ec
00532B36  68 D8 21 7C 00            PUSH 0x7c21d8
00532B3B  52                        PUSH EDX
00532B3C  E8 9F FB 1D 00            CALL 0x007126e0
00532B41  8B F8                     MOV EDI,EAX
00532B43  8B 86 F9 02 00 00         MOV EAX,dword ptr [ESI + 0x2f9]
00532B49  85 C0                     TEST EAX,EAX
00532B4B  74 06                     JZ 0x00532b53
00532B4D  50                        PUSH EAX
00532B4E  E8 1D 2A 18 00            CALL 0x006b5570
LAB_00532b53:
00532B53  85 FF                     TEST EDI,EDI
00532B55  89 BE F9 02 00 00         MOV dword ptr [ESI + 0x2f9],EDI
00532B5B  75 10                     JNZ 0x00532b6d
00532B5D  6A 0A                     PUSH 0xa
00532B5F  6A 0A                     PUSH 0xa
00532B61  57                        PUSH EDI
00532B62  E8 89 29 18 00            CALL 0x006b54f0
00532B67  89 86 F9 02 00 00         MOV dword ptr [ESI + 0x2f9],EAX
LAB_00532b6d:
00532B6D  8B 86 F9 02 00 00         MOV EAX,dword ptr [ESI + 0x2f9]
00532B73  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00532B76  85 C9                     TEST ECX,ECX
00532B78  74 0D                     JZ 0x00532b87
00532B7A  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
00532B80  50                        PUSH EAX
00532B81  50                        PUSH EAX
00532B82  E8 49 FE 1D 00            CALL 0x007129d0
LAB_00532b87:
00532B87  80 BE A4 01 00 00 0C      CMP byte ptr [ESI + 0x1a4],0xc
00532B8E  75 74                     JNZ 0x00532c04
00532B90  8B 86 B5 01 00 00         MOV EAX,dword ptr [ESI + 0x1b5]
00532B96  85 C0                     TEST EAX,EAX
00532B98  74 6A                     JZ 0x00532c04
00532B9A  8B 8E F9 02 00 00         MOV ECX,dword ptr [ESI + 0x2f9]
00532BA0  8D 7E 18                  LEA EDI,[ESI + 0x18]
00532BA3  C7 46 28 28 00 00 00      MOV dword ptr [ESI + 0x28],0x28
00532BAA  66 C7 46 2C 01 00         MOV word ptr [ESI + 0x2c],0x1
00532BB0  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
00532BB4  57                        PUSH EDI
00532BB5  50                        PUSH EAX
00532BB6  6A 02                     PUSH 0x2
00532BB8  8B CE                     MOV ECX,ESI
00532BBA  66 89 56 2E               MOV word ptr [ESI + 0x2e],DX
00532BBE  E8 BD 34 1B 00            CALL 0x006e6080
00532BC3  33 C0                     XOR EAX,EAX
00532BC5  57                        PUSH EDI
00532BC6  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
00532BCA  66 89 46 2C               MOV word ptr [ESI + 0x2c],AX
00532BCE  8B 86 B5 01 00 00         MOV EAX,dword ptr [ESI + 0x1b5]
00532BD4  8B CE                     MOV ECX,ESI
00532BD6  50                        PUSH EAX
00532BD7  6A 02                     PUSH 0x2
00532BD9  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
00532BE0  E8 9B 34 1B 00            CALL 0x006e6080
00532BE5  8B 8E B5 01 00 00         MOV ECX,dword ptr [ESI + 0x1b5]
00532BEB  57                        PUSH EDI
00532BEC  51                        PUSH ECX
00532BED  6A 02                     PUSH 0x2
00532BEF  8B CE                     MOV ECX,ESI
00532BF1  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00532BF8  C7 46 2C 01 00 00 00      MOV dword ptr [ESI + 0x2c],0x1
00532BFF  E8 7C 34 1B 00            CALL 0x006e6080
LAB_00532c04:
00532C04  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00532C07  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00532C0D  5F                        POP EDI
00532C0E  5E                        POP ESI
00532C0F  8B E5                     MOV ESP,EBP
00532C11  5D                        POP EBP
00532C12  C3                        RET
LAB_00532c13:
00532C13  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00532C16  68 98 72 7C 00            PUSH 0x7c7298
00532C1B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00532C20  56                        PUSH ESI
00532C21  6A 00                     PUSH 0x0
00532C23  68 D1 03 00 00            PUSH 0x3d1
00532C28  68 A0 70 7C 00            PUSH 0x7c70a0
00532C2D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00532C32  E8 99 A8 17 00            CALL 0x006ad4d0
00532C37  83 C4 18                  ADD ESP,0x18
00532C3A  85 C0                     TEST EAX,EAX
00532C3C  74 01                     JZ 0x00532c3f
00532C3E  CC                        INT3
LAB_00532c3f:
00532C3F  68 D1 03 00 00            PUSH 0x3d1
00532C44  68 A0 70 7C 00            PUSH 0x7c70a0
00532C49  6A 00                     PUSH 0x0
00532C4B  56                        PUSH ESI
00532C4C  E8 EF 31 17 00            CALL 0x006a5e40
00532C51  5F                        POP EDI
00532C52  5E                        POP ESI
00532C53  8B E5                     MOV ESP,EBP
00532C55  5D                        POP EBP
00532C56  C3                        RET
