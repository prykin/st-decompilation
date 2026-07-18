FUN_004efb60:
004EFB60  55                        PUSH EBP
004EFB61  8B EC                     MOV EBP,ESP
004EFB63  83 EC 48                  SUB ESP,0x48
004EFB66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EFB6B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004EFB6E  56                        PUSH ESI
004EFB6F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004EFB72  8D 4D B8                  LEA ECX,[EBP + -0x48]
004EFB75  6A 00                     PUSH 0x0
004EFB77  52                        PUSH EDX
004EFB78  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004EFB7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EFB81  E8 6A DC 23 00            CALL 0x0072d7f0
004EFB86  8B F0                     MOV ESI,EAX
004EFB88  83 C4 08                  ADD ESP,0x8
004EFB8B  85 F6                     TEST ESI,ESI
004EFB8D  0F 85 D6 00 00 00         JNZ 0x004efc69
004EFB93  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EFB96  6A 0A                     PUSH 0xa
004EFB98  6A 30                     PUSH 0x30
004EFB9A  6A 28                     PUSH 0x28
004EFB9C  50                        PUSH EAX
004EFB9D  89 35 80 16 80 00         MOV dword ptr [0x00801680],ESI
004EFBA3  E8 E8 E6 1B 00            CALL 0x006ae290
004EFBA8  89 86 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EAX
004EFBAE  A1 30 67 80 00            MOV EAX,[0x00806730]
004EFBB3  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004EFBB6  05 E0 FC FF FF            ADD EAX,0xfffffce0
004EFBBB  99                        CDQ
004EFBBC  2B C2                     SUB EAX,EDX
004EFBBE  6A 01                     PUSH 0x1
004EFBC0  D1 F8                     SAR EAX,0x1
004EFBC2  03 C8                     ADD ECX,EAX
004EFBC4  6A 00                     PUSH 0x0
004EFBC6  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
004EFBC9  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004EFBCF  68 18 19 7C 00            PUSH 0x7c1918
004EFBD4  6A 01                     PUSH 0x1
004EFBD6  E8 05 21 20 00            CALL 0x006f1ce0
004EFBDB  6A 00                     PUSH 0x0
004EFBDD  6A 00                     PUSH 0x0
004EFBDF  6A 01                     PUSH 0x1
004EFBE1  6A 00                     PUSH 0x0
004EFBE3  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
004EFBE9  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004EFBEF  6A FF                     PUSH -0x1
004EFBF1  68 10 19 7C 00            PUSH 0x7c1910
004EFBF6  6A 0B                     PUSH 0xb
004EFBF8  51                        PUSH ECX
004EFBF9  E8 F2 9E 21 00            CALL 0x00709af0
004EFBFE  6A 00                     PUSH 0x0
004EFC00  6A 00                     PUSH 0x0
004EFC02  6A 01                     PUSH 0x1
004EFC04  6A 00                     PUSH 0x0
004EFC06  89 86 88 01 00 00         MOV dword ptr [ESI + 0x188],EAX
004EFC0C  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004EFC12  6A FF                     PUSH -0x1
004EFC14  68 08 19 7C 00            PUSH 0x7c1908
004EFC19  6A 0B                     PUSH 0xb
004EFC1B  52                        PUSH EDX
004EFC1C  E8 CF 9E 21 00            CALL 0x00709af0
004EFC21  83 C4 40                  ADD ESP,0x40
004EFC24  8B CE                     MOV ECX,ESI
004EFC26  89 86 8C 01 00 00         MOV dword ptr [ESI + 0x18c],EAX
004EFC2C  68 00 19 7C 00            PUSH 0x7c1900
004EFC31  6A 31                     PUSH 0x31
004EFC33  6A 14                     PUSH 0x14
004EFC35  6A 25                     PUSH 0x25
004EFC37  6A 63                     PUSH 0x63
004EFC39  68 C0 00 00 00            PUSH 0xc0
004EFC3E  6A 64                     PUSH 0x64
004EFC40  6A 63                     PUSH 0x63
004EFC42  68 81 00 00 00            PUSH 0x81
004EFC47  6A 0C                     PUSH 0xc
004EFC49  68 C1 00 00 00            PUSH 0xc1
004EFC4E  6A 02                     PUSH 0x2
004EFC50  6A 3F                     PUSH 0x3f
004EFC52  68 26 27 00 00            PUSH 0x2726
004EFC57  E8 E5 45 F1 FF            CALL 0x00404241
004EFC5C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004EFC5F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EFC64  5E                        POP ESI
004EFC65  8B E5                     MOV ESP,EBP
004EFC67  5D                        POP EBP
004EFC68  C3                        RET
LAB_004efc69:
004EFC69  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004EFC6C  68 D8 18 7C 00            PUSH 0x7c18d8
004EFC71  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EFC76  56                        PUSH ESI
004EFC77  6A 00                     PUSH 0x0
004EFC79  6A 1D                     PUSH 0x1d
004EFC7B  68 B4 18 7C 00            PUSH 0x7c18b4
004EFC80  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EFC86  E8 45 D8 1B 00            CALL 0x006ad4d0
004EFC8B  83 C4 18                  ADD ESP,0x18
004EFC8E  85 C0                     TEST EAX,EAX
004EFC90  74 01                     JZ 0x004efc93
004EFC92  CC                        INT3
LAB_004efc93:
004EFC93  6A 1D                     PUSH 0x1d
004EFC95  68 B4 18 7C 00            PUSH 0x7c18b4
004EFC9A  6A 00                     PUSH 0x0
004EFC9C  56                        PUSH ESI
004EFC9D  E8 9E 61 1B 00            CALL 0x006a5e40
004EFCA2  5E                        POP ESI
004EFCA3  8B E5                     MOV ESP,EBP
004EFCA5  5D                        POP EBP
004EFCA6  C3                        RET
