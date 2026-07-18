FUN_0074bfbf:
0074BFBF  55                        PUSH EBP
0074BFC0  8B EC                     MOV EBP,ESP
0074BFC2  83 EC 4C                  SUB ESP,0x4c
0074BFC5  53                        PUSH EBX
0074BFC6  56                        PUSH ESI
0074BFC7  8B B1 8C 00 00 00         MOV ESI,dword ptr [ECX + 0x8c]
0074BFCD  33 D2                     XOR EDX,EDX
0074BFCF  81 C6 A8 00 00 00         ADD ESI,0xa8
0074BFD5  39 51 54                  CMP dword ptr [ECX + 0x54],EDX
0074BFD8  57                        PUSH EDI
0074BFD9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0074BFDC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0074BFDF  0F 95 C2                  SETNZ DL
0074BFE2  A8 01                     TEST AL,0x1
0074BFE4  75 03                     JNZ 0x0074bfe9
0074BFE6  83 CA 02                  OR EDX,0x2
LAB_0074bfe9:
0074BFE9  52                        PUSH EDX
0074BFEA  8B D0                     MOV EDX,EAX
0074BFEC  81 E2 00 01 00 00         AND EDX,0x100
0074BFF2  8B 89 90 00 00 00         MOV ECX,dword ptr [ECX + 0x90]
0074BFF8  F7 DA                     NEG EDX
0074BFFA  8D 7E 18                  LEA EDI,[ESI + 0x18]
0074BFFD  8B 89 98 00 00 00         MOV ECX,dword ptr [ECX + 0x98]
0074C003  1B D2                     SBB EDX,EDX
0074C005  24 10                     AND AL,0x10
0074C007  23 D7                     AND EDX,EDI
0074C009  8D 5E 10                  LEA EBX,[ESI + 0x10]
0074C00C  F6 D8                     NEG AL
0074C00E  1B C0                     SBB EAX,EAX
0074C010  52                        PUSH EDX
0074C011  23 C3                     AND EAX,EBX
0074C013  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0074C016  8B 09                     MOV ECX,dword ptr [ECX]
0074C018  50                        PUSH EAX
0074C019  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074C01C  50                        PUSH EAX
0074C01D  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074C020  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
0074C023  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074C026  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074C029  85 C0                     TEST EAX,EAX
0074C02B  89 0A                     MOV dword ptr [EDX],ECX
0074C02D  0F 8C DB 00 00 00         JL 0x0074c10e
0074C033  8B 01                     MOV EAX,dword ptr [ECX]
0074C035  8D 55 F8                  LEA EDX,[EBP + -0x8]
0074C038  52                        PUSH EDX
0074C039  68 70 1B 7A 00            PUSH 0x7a1b70
0074C03E  51                        PUSH ECX
0074C03F  FF 10                     CALL dword ptr [EAX]
0074C041  85 C0                     TEST EAX,EAX
0074C043  7C 67                     JL 0x0074c0ac
0074C045  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074C048  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0074C04B  52                        PUSH EDX
0074C04C  6A 10                     PUSH 0x10
0074C04E  8B 08                     MOV ECX,dword ptr [EAX]
0074C050  50                        PUSH EAX
0074C051  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
0074C054  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0074C057  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0074C05A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0074C05D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0074C060  33 C8                     XOR ECX,EAX
0074C062  6A 20                     PUSH 0x20
0074C064  83 E1 08                  AND ECX,0x8
0074C067  33 C8                     XOR ECX,EAX
0074C069  8B 03                     MOV EAX,dword ptr [EBX]
0074C06B  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0074C06E  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
0074C071  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0074C074  8B 07                     MOV EAX,dword ptr [EDI]
0074C076  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0074C079  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0074C07C  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0074C07F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0074C082  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074C085  59                        POP ECX
0074C086  8D 7D B4                  LEA EDI,[EBP + -0x4c]
0074C089  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0074C08C  8B 10                     MOV EDX,dword ptr [EAX]
0074C08E  57                        PUSH EDI
0074C08F  51                        PUSH ECX
0074C090  50                        PUSH EAX
0074C091  FF 52 50                  CALL dword ptr [EDX + 0x50]
0074C094  F6 46 08 04               TEST byte ptr [ESI + 0x8],0x4
0074C098  74 07                     JZ 0x0074c0a1
0074C09A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074C09D  83 60 54 00               AND dword ptr [EAX + 0x54],0x0
LAB_0074c0a1:
0074C0A1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074C0A4  50                        PUSH EAX
0074C0A5  8B 08                     MOV ECX,dword ptr [EAX]
0074C0A7  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074C0AA  EB 60                     JMP 0x0074c10c
LAB_0074c0ac:
0074C0AC  F6 46 08 10               TEST byte ptr [ESI + 0x8],0x10
0074C0B0  74 0B                     JZ 0x0074c0bd
0074C0B2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074C0B5  57                        PUSH EDI
0074C0B6  53                        PUSH EBX
0074C0B7  50                        PUSH EAX
0074C0B8  8B 08                     MOV ECX,dword ptr [EAX]
0074C0BA  FF 51 18                  CALL dword ptr [ECX + 0x18]
LAB_0074c0bd:
0074C0BD  F6 46 08 01               TEST byte ptr [ESI + 0x8],0x1
0074C0C1  74 0B                     JZ 0x0074c0ce
0074C0C3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074C0C6  6A 01                     PUSH 0x1
0074C0C8  50                        PUSH EAX
0074C0C9  8B 08                     MOV ECX,dword ptr [EAX]
0074C0CB  FF 51 20                  CALL dword ptr [ECX + 0x20]
LAB_0074c0ce:
0074C0CE  F6 46 08 04               TEST byte ptr [ESI + 0x8],0x4
0074C0D2  74 12                     JZ 0x0074c0e6
0074C0D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074C0D7  6A 01                     PUSH 0x1
0074C0D9  50                        PUSH EAX
0074C0DA  8B 08                     MOV ECX,dword ptr [EAX]
0074C0DC  FF 51 40                  CALL dword ptr [ECX + 0x40]
0074C0DF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074C0E2  83 60 54 00               AND dword ptr [EAX + 0x54],0x0
LAB_0074c0e6:
0074C0E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074C0E9  8D 55 EC                  LEA EDX,[EBP + -0x14]
0074C0EC  52                        PUSH EDX
0074C0ED  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0074C0F0  8B 08                     MOV ECX,dword ptr [EAX]
0074C0F2  52                        PUSH EDX
0074C0F3  50                        PUSH EAX
0074C0F4  FF 51 44                  CALL dword ptr [ECX + 0x44]
0074C0F7  85 C0                     TEST EAX,EAX
0074C0F9  75 11                     JNZ 0x0074c10c
0074C0FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074C0FE  8D 55 EC                  LEA EDX,[EBP + -0x14]
0074C101  52                        PUSH EDX
0074C102  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0074C105  8B 08                     MOV ECX,dword ptr [EAX]
0074C107  52                        PUSH EDX
0074C108  50                        PUSH EAX
0074C109  FF 51 48                  CALL dword ptr [ECX + 0x48]
LAB_0074c10c:
0074C10C  33 C0                     XOR EAX,EAX
LAB_0074c10e:
0074C10E  5F                        POP EDI
0074C10F  5E                        POP ESI
0074C110  5B                        POP EBX
0074C111  C9                        LEAVE
0074C112  C2 08 00                  RET 0x8
