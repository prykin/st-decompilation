FUN_004a7e30:
004A7E30  55                        PUSH EBP
004A7E31  8B EC                     MOV EBP,ESP
004A7E33  83 EC 10                  SUB ESP,0x10
004A7E36  53                        PUSH EBX
004A7E37  56                        PUSH ESI
004A7E38  8B F1                     MOV ESI,ECX
004A7E3A  33 C0                     XOR EAX,EAX
004A7E3C  57                        PUSH EDI
004A7E3D  8B 8E 3E 02 00 00         MOV ECX,dword ptr [ESI + 0x23e]
004A7E43  8B 96 3A 02 00 00         MOV EDX,dword ptr [ESI + 0x23a]
004A7E49  3B CA                     CMP ECX,EDX
004A7E4B  BA 01 00 00 00            MOV EDX,0x1
004A7E50  7D 3B                     JGE 0x004a7e8d
004A7E52  39 55 08                  CMP dword ptr [EBP + 0x8],EDX
004A7E55  0F 85 AF 01 00 00         JNZ 0x004a800a
004A7E5B  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7E61  33 FF                     XOR EDI,EDI
004A7E63  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
004A7E66  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
004A7E69  3B D8                     CMP EBX,EAX
004A7E6B  7E 20                     JLE 0x004a7e8d
004A7E6D  BA FF FF 00 00            MOV EDX,0xffff
LAB_004a7e72:
004A7E72  66 39 51 04               CMP word ptr [ECX + 0x4],DX
004A7E76  74 08                     JZ 0x004a7e80
004A7E78  39 01                     CMP dword ptr [ECX],EAX
004A7E7A  0F 84 81 00 00 00         JZ 0x004a7f01
LAB_004a7e80:
004A7E80  47                        INC EDI
004A7E81  83 C1 16                  ADD ECX,0x16
004A7E84  3B FB                     CMP EDI,EBX
004A7E86  7C EA                     JL 0x004a7e72
004A7E88  BA 01 00 00 00            MOV EDX,0x1
LAB_004a7e8d:
004A7E8D  39 96 36 02 00 00         CMP dword ptr [ESI + 0x236],EDX
004A7E93  0F 85 C2 00 00 00         JNZ 0x004a7f5b
004A7E99  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A7E9F  8B BE 32 02 00 00         MOV EDI,dword ptr [ESI + 0x232]
004A7EA5  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
004A7EA8  4B                        DEC EBX
004A7EA9  3B FB                     CMP EDI,EBX
004A7EAB  75 70                     JNZ 0x004a7f1d
004A7EAD  39 86 46 02 00 00         CMP dword ptr [ESI + 0x246],EAX
004A7EB3  75 5A                     JNZ 0x004a7f0f
004A7EB5  3B F8                     CMP EDI,EAX
004A7EB7  0F 8E 4D 01 00 00         JLE 0x004a800a
004A7EBD  89 86 36 02 00 00         MOV dword ptr [ESI + 0x236],EAX
004A7EC3  89 86 3E 02 00 00         MOV dword ptr [ESI + 0x23e],EAX
004A7EC9  8D 45 F0                  LEA EAX,[EBP + -0x10]
004A7ECC  8D 57 FF                  LEA EDX,[EDI + -0x1]
004A7ECF  50                        PUSH EAX
004A7ED0  89 96 32 02 00 00         MOV dword ptr [ESI + 0x232],EDX
004A7ED6  E8 95 4D 20 00            CALL 0x006acc70
004A7EDB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A7EE1  6A 08                     PUSH 0x8
004A7EE3  E8 C6 A6 F5 FF            CALL 0x004025ae
004A7EE8  8A D8                     MOV BL,AL
004A7EEA  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
004A7EED  81 E3 FF 00 00 00         AND EBX,0xff
004A7EF3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004A7EF6  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004A7EF9  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004A7EFC  E9 DE 00 00 00            JMP 0x004a7fdf
LAB_004a7f01:
004A7F01  5F                        POP EDI
004A7F02  5E                        POP ESI
004A7F03  B8 01 00 00 00            MOV EAX,0x1
004A7F08  5B                        POP EBX
004A7F09  8B E5                     MOV ESP,EBP
004A7F0B  5D                        POP EBP
004A7F0C  C2 04 00                  RET 0x4
LAB_004a7f0f:
004A7F0F  5F                        POP EDI
004A7F10  5E                        POP ESI
004A7F11  B8 02 00 00 00            MOV EAX,0x2
004A7F16  5B                        POP EBX
004A7F17  8B E5                     MOV ESP,EBP
004A7F19  5D                        POP EBP
004A7F1A  C2 04 00                  RET 0x4
LAB_004a7f1d:
004A7F1D  89 86 3E 02 00 00         MOV dword ptr [ESI + 0x23e],EAX
004A7F23  8D 45 F0                  LEA EAX,[EBP + -0x10]
004A7F26  8D 57 01                  LEA EDX,[EDI + 0x1]
004A7F29  50                        PUSH EAX
004A7F2A  89 96 32 02 00 00         MOV dword ptr [ESI + 0x232],EDX
004A7F30  E8 3B 4D 20 00            CALL 0x006acc70
004A7F35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A7F3B  6A 08                     PUSH 0x8
004A7F3D  E8 6C A6 F5 FF            CALL 0x004025ae
004A7F42  8A D8                     MOV BL,AL
004A7F44  8B 45 FA                  MOV EAX,dword ptr [EBP + -0x6]
004A7F47  81 E3 FF 00 00 00         AND EBX,0xff
004A7F4D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004A7F50  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004A7F53  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004A7F56  E9 84 00 00 00            JMP 0x004a7fdf
LAB_004a7f5b:
004A7F5B  8B 8E 32 02 00 00         MOV ECX,dword ptr [ESI + 0x232]
004A7F61  3B C8                     CMP ECX,EAX
004A7F63  75 3B                     JNZ 0x004a7fa0
004A7F65  8D 4D F0                  LEA ECX,[EBP + -0x10]
004A7F68  89 96 32 02 00 00         MOV dword ptr [ESI + 0x232],EDX
004A7F6E  51                        PUSH ECX
004A7F6F  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A7F75  89 96 36 02 00 00         MOV dword ptr [ESI + 0x236],EDX
004A7F7B  89 86 3E 02 00 00         MOV dword ptr [ESI + 0x23e],EAX
004A7F81  E8 EA 4C 20 00            CALL 0x006acc70
004A7F86  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A7F8C  6A 08                     PUSH 0x8
004A7F8E  E8 1B A6 F5 FF            CALL 0x004025ae
004A7F93  8A D8                     MOV BL,AL
004A7F95  8B 45 FA                  MOV EAX,dword ptr [EBP + -0x6]
004A7F98  81 E3 FF 00 00 00         AND EBX,0xff
004A7F9E  EB 36                     JMP 0x004a7fd6
LAB_004a7fa0:
004A7FA0  8D 51 FF                  LEA EDX,[ECX + -0x1]
004A7FA3  8D 4D F0                  LEA ECX,[EBP + -0x10]
004A7FA6  51                        PUSH ECX
004A7FA7  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A7FAD  89 96 32 02 00 00         MOV dword ptr [ESI + 0x232],EDX
004A7FB3  89 86 3E 02 00 00         MOV dword ptr [ESI + 0x23e],EAX
004A7FB9  E8 B2 4C 20 00            CALL 0x006acc70
004A7FBE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A7FC4  6A 08                     PUSH 0x8
004A7FC6  E8 E3 A5 F5 FF            CALL 0x004025ae
004A7FCB  8A D8                     MOV BL,AL
004A7FCD  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
004A7FD0  81 E3 FF 00 00 00         AND EBX,0xff
LAB_004a7fd6:
004A7FD6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004A7FD9  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004A7FDC  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
LAB_004a7fdf:
004A7FDF  99                        CDQ
004A7FE0  F7 FB                     IDIV EBX
004A7FE2  8B C8                     MOV ECX,EAX
004A7FE4  B8 56 55 55 55            MOV EAX,0x55555556
004A7FE9  F7 E9                     IMUL ECX
004A7FEB  8B C2                     MOV EAX,EDX
004A7FED  8B CE                     MOV ECX,ESI
004A7FEF  C1 E8 1F                  SHR EAX,0x1f
004A7FF2  03 D0                     ADD EDX,EAX
004A7FF4  89 96 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EDX
004A7FFA  E8 1B CB F5 FF            CALL 0x00404b1a
004A7FFF  5F                        POP EDI
004A8000  5E                        POP ESI
004A8001  33 C0                     XOR EAX,EAX
004A8003  5B                        POP EBX
004A8004  8B E5                     MOV ESP,EBP
004A8006  5D                        POP EBP
004A8007  C2 04 00                  RET 0x4
LAB_004a800a:
004A800A  5F                        POP EDI
004A800B  5E                        POP ESI
004A800C  8B C2                     MOV EAX,EDX
004A800E  5B                        POP EBX
004A800F  8B E5                     MOV ESP,EBP
004A8011  5D                        POP EBP
004A8012  C2 04 00                  RET 0x4
