MMObjTy::PaintButDib:
005B5A30  55                        PUSH EBP
005B5A31  8B EC                     MOV EBP,ESP
005B5A33  81 EC 90 00 00 00         SUB ESP,0x90
005B5A39  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005B5A3C  53                        PUSH EBX
005B5A3D  56                        PUSH ESI
005B5A3E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005B5A41  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
005B5A44  57                        PUSH EDI
005B5A45  8B C3                     MOV EAX,EBX
005B5A47  99                        CDQ
005B5A48  2B C2                     SUB EAX,EDX
005B5A4A  D1 F8                     SAR EAX,0x1
005B5A4C  3B F0                     CMP ESI,EAX
005B5A4E  7C 02                     JL 0x005b5a52
005B5A50  8B F0                     MOV ESI,EAX
LAB_005b5a52:
005B5A52  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005B5A55  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005B5A58  99                        CDQ
005B5A59  2B C2                     SUB EAX,EDX
005B5A5B  D1 F8                     SAR EAX,0x1
005B5A5D  3B F0                     CMP ESI,EAX
005B5A5F  7C 02                     JL 0x005b5a63
005B5A61  8B F0                     MOV ESI,EAX
LAB_005b5a63:
005B5A63  8B 01                     MOV EAX,dword ptr [ECX]
005B5A65  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
005B5A68  8B F8                     MOV EDI,EAX
005B5A6A  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
005B5A6D  2B FE                     SUB EDI,ESI
005B5A6F  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005B5A72  8D 14 30                  LEA EDX,[EAX + ESI*0x1]
005B5A75  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005B5A78  8D 7C 1F FF               LEA EDI,[EDI + EBX*0x1 + -0x1]
005B5A7C  8D 5C 18 FF               LEA EBX,[EAX + EBX*0x1 + -0x1]
005B5A80  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005B5A83  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
005B5A86  8D 1C 31                  LEA EBX,[ECX + ESI*0x1]
005B5A89  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005B5A8C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005B5A8F  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
005B5A92  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005B5A95  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B5A98  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
005B5A9B  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005B5A9E  03 CB                     ADD ECX,EBX
005B5AA0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005B5AA3  8B D9                     MOV EBX,ECX
005B5AA5  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
005B5AA8  2B DE                     SUB EBX,ESI
005B5AAA  49                        DEC ECX
005B5AAB  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005B5AAE  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005B5AB1  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005B5AB4  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005B5ABA  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
005B5AC0  8D 73 FF                  LEA ESI,[EBX + -0x1]
005B5AC3  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
005B5AC9  6A 00                     PUSH 0x0
005B5ACB  50                        PUSH EAX
005B5ACC  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
005B5ACF  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
005B5AD2  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
005B5AD5  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005B5AD8  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
005B5ADE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B5AE4  E8 07 7D 17 00            CALL 0x0072d7f0
005B5AE9  8B F0                     MOV ESI,EAX
005B5AEB  83 C4 08                  ADD ESP,0x8
005B5AEE  85 F6                     TEST ESI,ESI
005B5AF0  75 40                     JNZ 0x005b5b32
005B5AF2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005B5AF5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B5AF8  85 C0                     TEST EAX,EAX
005B5AFA  7C 0F                     JL 0x005b5b0b
005B5AFC  50                        PUSH EAX
005B5AFD  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005B5B00  6A 08                     PUSH 0x8
005B5B02  51                        PUSH ECX
005B5B03  6A 00                     PUSH 0x0
005B5B05  56                        PUSH ESI
005B5B06  E8 95 23 11 00            CALL 0x006c7ea0
LAB_005b5b0b:
005B5B0B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005B5B0E  8D 45 B4                  LEA EAX,[EBP + -0x4c]
005B5B11  52                        PUSH EDX
005B5B12  6A 08                     PUSH 0x8
005B5B14  50                        PUSH EAX
005B5B15  6A 00                     PUSH 0x0
005B5B17  56                        PUSH ESI
005B5B18  E8 F3 23 11 00            CALL 0x006c7f10
005B5B1D  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
005B5B23  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B5B29  5F                        POP EDI
005B5B2A  5E                        POP ESI
005B5B2B  5B                        POP EBX
005B5B2C  8B E5                     MOV ESP,EBP
005B5B2E  5D                        POP EBP
005B5B2F  C2 14 00                  RET 0x14
LAB_005b5b32:
005B5B32  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
005B5B38  68 B0 CA 7C 00            PUSH 0x7ccab0
005B5B3D  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B5B42  56                        PUSH ESI
005B5B43  6A 00                     PUSH 0x0
005B5B45  68 A0 00 00 00            PUSH 0xa0
005B5B4A  68 38 CA 7C 00            PUSH 0x7cca38
005B5B4F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B5B55  E8 76 79 0F 00            CALL 0x006ad4d0
005B5B5A  83 C4 18                  ADD ESP,0x18
005B5B5D  85 C0                     TEST EAX,EAX
005B5B5F  74 01                     JZ 0x005b5b62
005B5B61  CC                        INT3
LAB_005b5b62:
005B5B62  68 A0 00 00 00            PUSH 0xa0
005B5B67  68 38 CA 7C 00            PUSH 0x7cca38
005B5B6C  6A 00                     PUSH 0x0
005B5B6E  56                        PUSH ESI
005B5B6F  E8 CC 02 0F 00            CALL 0x006a5e40
005B5B74  5F                        POP EDI
005B5B75  5E                        POP ESI
005B5B76  5B                        POP EBX
005B5B77  8B E5                     MOV ESP,EBP
005B5B79  5D                        POP EBP
005B5B7A  C2 14 00                  RET 0x14
