FUN_004ef320:
004EF320  55                        PUSH EBP
004EF321  8B EC                     MOV EBP,ESP
004EF323  83 EC 5C                  SUB ESP,0x5c
004EF326  53                        PUSH EBX
004EF327  56                        PUSH ESI
004EF328  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
004EF32B  57                        PUSH EDI
004EF32C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004EF32F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004EF332  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004EF335  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004EF338  8B 10                     MOV EDX,dword ptr [EAX]
004EF33A  2B D6                     SUB EDX,ESI
004EF33C  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004EF33F  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
004EF342  85 D2                     TEST EDX,EDX
004EF344  75 10                     JNZ 0x004ef356
004EF346  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004EF349  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004EF34F  2B C2                     SUB EAX,EDX
004EF351  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004EF354  EB 0B                     JMP 0x004ef361
LAB_004ef356:
004EF356  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004EF359  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
004EF35C  2B D0                     SUB EDX,EAX
004EF35E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004ef361:
004EF361  8B 81 99 01 00 00         MOV EAX,dword ptr [ECX + 0x199]
004EF367  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
004EF36A  8D B4 10 51 3F FF FF      LEA ESI,[EAX + EDX*0x1 + 0xffff3f51]
004EF371  33 C0                     XOR EAX,EAX
004EF373  8A 81 78 02 00 00         MOV AL,byte ptr [ECX + 0x278]
004EF379  8B 94 81 7A 02 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x27a]
004EF380  85 D2                     TEST EDX,EDX
004EF382  74 10                     JZ 0x004ef394
004EF384  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
004EF387  73 0B                     JNC 0x004ef394
004EF389  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004EF38C  0F AF C6                  IMUL EAX,ESI
004EF38F  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
004EF392  EB 02                     JMP 0x004ef396
LAB_004ef394:
004EF394  33 C0                     XOR EAX,EAX
LAB_004ef396:
004EF396  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
004EF39B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004EF39E  74 31                     JZ 0x004ef3d1
004EF3A0  85 C0                     TEST EAX,EAX
004EF3A2  74 2D                     JZ 0x004ef3d1
004EF3A4  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
004EF3A7  84 D2                     TEST DL,DL
004EF3A9  74 08                     JZ 0x004ef3b3
004EF3AB  8B B1 88 01 00 00         MOV ESI,dword ptr [ECX + 0x188]
004EF3B1  EB 06                     JMP 0x004ef3b9
LAB_004ef3b3:
004EF3B3  8B B1 8C 01 00 00         MOV ESI,dword ptr [ECX + 0x18c]
LAB_004ef3b9:
004EF3B9  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
004EF3BC  8B 10                     MOV EDX,dword ptr [EAX]
004EF3BE  51                        PUSH ECX
004EF3BF  52                        PUSH EDX
004EF3C0  E8 30 63 F1 FF            CALL 0x004056f5
004EF3C5  50                        PUSH EAX
004EF3C6  56                        PUSH ESI
004EF3C7  E8 D4 BF 21 00            CALL 0x0070b3a0
004EF3CC  83 C4 10                  ADD ESP,0x10
004EF3CF  EB 06                     JMP 0x004ef3d7
LAB_004ef3d1:
004EF3D1  8B 81 8E 02 00 00         MOV EAX,dword ptr [ECX + 0x28e]
LAB_004ef3d7:
004EF3D7  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004EF3DD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004EF3E0  8D 45 A8                  LEA EAX,[EBP + -0x58]
004EF3E3  8D 55 A4                  LEA EDX,[EBP + -0x5c]
004EF3E6  6A 00                     PUSH 0x0
004EF3E8  50                        PUSH EAX
004EF3E9  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
004EF3EC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF3F2  E8 F9 E3 23 00            CALL 0x0072d7f0
004EF3F7  8B F0                     MOV ESI,EAX
004EF3F9  83 C4 08                  ADD ESP,0x8
004EF3FC  85 F6                     TEST ESI,ESI
004EF3FE  0F 85 11 01 00 00         JNZ 0x004ef515
004EF404  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004EF407  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004EF40A  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004EF40D  50                        PUSH EAX
004EF40E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004EF411  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004EF414  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004EF417  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
004EF41A  51                        PUSH ECX
004EF41B  52                        PUSH EDX
004EF41C  57                        PUSH EDI
004EF41D  53                        PUSH EBX
004EF41E  6A 00                     PUSH 0x0
004EF420  50                        PUSH EAX
004EF421  E8 4A 4D 1C 00            CALL 0x006b4170
004EF426  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004EF429  8D 57 01                  LEA EDX,[EDI + 0x1]
004EF42C  51                        PUSH ECX
004EF42D  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
004EF430  6A 01                     PUSH 0x1
004EF432  8D 43 01                  LEA EAX,[EBX + 0x1]
004EF435  52                        PUSH EDX
004EF436  50                        PUSH EAX
004EF437  51                        PUSH ECX
004EF438  E8 EC 3D F1 FF            CALL 0x00403229
004EF43D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004EF440  83 C4 14                  ADD ESP,0x14
004EF443  66 83 7A 14 03            CMP word ptr [EDX + 0x14],0x3
004EF448  74 04                     JZ 0x004ef44e
004EF44A  6A 04                     PUSH 0x4
004EF44C  EB 19                     JMP 0x004ef467
LAB_004ef44e:
004EF44E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EF451  85 C0                     TEST EAX,EAX
004EF453  0F 84 90 00 00 00         JZ 0x004ef4e9
004EF459  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
004EF45C  F6 DA                     NEG DL
004EF45E  1B D2                     SBB EDX,EDX
004EF460  83 E2 02                  AND EDX,0x2
004EF463  83 C2 03                  ADD EDX,0x3
004EF466  52                        PUSH EDX
LAB_004ef467:
004EF467  8B 86 90 01 00 00         MOV EAX,dword ptr [ESI + 0x190]
004EF46D  50                        PUSH EAX
004EF46E  E8 2D BF 21 00            CALL 0x0070b3a0
004EF473  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
004EF476  50                        PUSH EAX
004EF477  6A 06                     PUSH 0x6
004EF479  57                        PUSH EDI
004EF47A  53                        PUSH EBX
004EF47B  51                        PUSH ECX
004EF47C  E8 A8 3D F1 FF            CALL 0x00403229
004EF481  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EF484  83 C4 1C                  ADD ESP,0x1c
004EF487  85 C0                     TEST EAX,EAX
004EF489  74 5E                     JZ 0x004ef4e9
004EF48B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004EF48E  85 C9                     TEST ECX,ECX
004EF490  74 57                     JZ 0x004ef4e9
004EF492  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
004EF495  84 D2                     TEST DL,DL
004EF497  74 50                     JZ 0x004ef4e9
004EF499  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004EF49C  66 83 7A 14 00            CMP word ptr [EDX + 0x14],0x0
004EF4A1  74 46                     JZ 0x004ef4e9
004EF4A3  8D 46 6C                  LEA EAX,[ESI + 0x6c]
004EF4A6  51                        PUSH ECX
004EF4A7  68 90 18 7C 00            PUSH 0x7c1890
004EF4AC  50                        PUSH EAX
004EF4AD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004EF4B3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004EF4B6  83 C4 0C                  ADD ESP,0xc
004EF4B9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004EF4BC  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004EF4BF  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
004EF4C2  51                        PUSH ECX
004EF4C3  8B 8E 8A 02 00 00         MOV ECX,dword ptr [ESI + 0x28a]
004EF4C9  52                        PUSH EDX
004EF4CA  57                        PUSH EDI
004EF4CB  53                        PUSH EBX
004EF4CC  6A 00                     PUSH 0x0
004EF4CE  50                        PUSH EAX
004EF4CF  E8 BC 15 22 00            CALL 0x00710a90
004EF4D4  8B 8E 8A 02 00 00         MOV ECX,dword ptr [ESI + 0x28a]
004EF4DA  6A 00                     PUSH 0x0
004EF4DC  6A FF                     PUSH -0x1
004EF4DE  8D 46 6C                  LEA EAX,[ESI + 0x6c]
004EF4E1  6A FE                     PUSH -0x2
004EF4E3  50                        PUSH EAX
004EF4E4  E8 D7 24 22 00            CALL 0x007119c0
LAB_004ef4e9:
004EF4E9  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
004EF4EC  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
004EF4EF  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
004EF4F2  51                        PUSH ECX
004EF4F3  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004EF4F9  52                        PUSH EDX
004EF4FA  6A FF                     PUSH -0x1
004EF4FC  50                        PUSH EAX
004EF4FD  51                        PUSH ECX
004EF4FE  E8 3D 41 1C 00            CALL 0x006b3640
004EF503  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
004EF506  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF50C  5F                        POP EDI
004EF50D  5E                        POP ESI
004EF50E  5B                        POP EBX
004EF50F  8B E5                     MOV ESP,EBP
004EF511  5D                        POP EBP
004EF512  C2 04 00                  RET 0x4
LAB_004ef515:
004EF515  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
004EF518  68 6C 18 7C 00            PUSH 0x7c186c
004EF51D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EF522  56                        PUSH ESI
004EF523  6A 00                     PUSH 0x0
004EF525  68 9E 00 00 00            PUSH 0x9e
004EF52A  68 B4 17 7C 00            PUSH 0x7c17b4
004EF52F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EF534  E8 97 DF 1B 00            CALL 0x006ad4d0
004EF539  83 C4 18                  ADD ESP,0x18
004EF53C  85 C0                     TEST EAX,EAX
004EF53E  74 01                     JZ 0x004ef541
004EF540  CC                        INT3
LAB_004ef541:
004EF541  68 9E 00 00 00            PUSH 0x9e
004EF546  68 B4 17 7C 00            PUSH 0x7c17b4
004EF54B  6A 00                     PUSH 0x0
004EF54D  56                        PUSH ESI
004EF54E  E8 ED 68 1B 00            CALL 0x006a5e40
004EF553  5F                        POP EDI
004EF554  5E                        POP ESI
004EF555  5B                        POP EBX
004EF556  8B E5                     MOV ESP,EBP
004EF558  5D                        POP EBP
004EF559  C2 04 00                  RET 0x4
