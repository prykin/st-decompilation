FUN_0055ee70:
0055EE70  55                        PUSH EBP
0055EE71  8B EC                     MOV EBP,ESP
0055EE73  6A FF                     PUSH -0x1
0055EE75  68 B0 AF 79 00            PUSH 0x79afb0
0055EE7A  68 64 D9 72 00            PUSH 0x72d964
0055EE7F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0055EE85  50                        PUSH EAX
0055EE86  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0055EE8D  83 EC 30                  SUB ESP,0x30
0055EE90  53                        PUSH EBX
0055EE91  56                        PUSH ESI
0055EE92  57                        PUSH EDI
0055EE93  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055EE96  33 FF                     XOR EDI,EDI
0055EE98  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0055EE9B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055EE9E  8D 04 9D 00 00 00 00      LEA EAX,[EBX*0x4 + 0x0]
0055EEA5  83 C0 03                  ADD EAX,0x3
0055EEA8  24 FC                     AND AL,0xfc
0055EEAA  E8 91 EB 1C 00            CALL 0x0072da40
0055EEAF  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055EEB2  8B F4                     MOV ESI,ESP
0055EEB4  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
0055EEB7  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0055EEBE  33 D2                     XOR EDX,EDX
0055EEC0  8B C3                     MOV EAX,EBX
0055EEC2  8D 0C 1B                  LEA ECX,[EBX + EBX*0x1]
0055EEC5  8B D9                     MOV EBX,ECX
0055EEC7  B9 03 00 00 00            MOV ECX,0x3
0055EECC  2B CB                     SUB ECX,EBX
LAB_0055eece:
0055EECE  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055EED1  88 06                     MOV byte ptr [ESI],AL
0055EED3  8A DA                     MOV BL,DL
0055EED5  F6 DB                     NEG BL
0055EED7  88 5E 01                  MOV byte ptr [ESI + 0x1],BL
0055EEDA  47                        INC EDI
0055EEDB  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0055EEDE  83 C6 02                  ADD ESI,0x2
0055EEE1  85 C9                     TEST ECX,ECX
0055EEE3  7D 06                     JGE 0x0055eeeb
0055EEE5  8D 4C 91 06               LEA ECX,[ECX + EDX*0x4 + 0x6]
0055EEE9  EB 09                     JMP 0x0055eef4
LAB_0055eeeb:
0055EEEB  8B DA                     MOV EBX,EDX
0055EEED  2B D8                     SUB EBX,EAX
0055EEEF  8D 4C 99 0A               LEA ECX,[ECX + EBX*0x4 + 0xa]
0055EEF3  48                        DEC EAX
LAB_0055eef4:
0055EEF4  42                        INC EDX
0055EEF5  3B D0                     CMP EDX,EAX
0055EEF7  7C D5                     JL 0x0055eece
0055EEF9  8B F7                     MOV ESI,EDI
0055EEFB  75 17                     JNZ 0x0055ef14
0055EEFD  3B 45 C0                  CMP EAX,dword ptr [EBP + -0x40]
0055EF00  74 12                     JZ 0x0055ef14
0055EF02  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0055EF05  88 04 79                  MOV byte ptr [ECX + EDI*0x2],AL
0055EF08  F6 DA                     NEG DL
0055EF0A  88 54 79 01               MOV byte ptr [ECX + EDI*0x2 + 0x1],DL
0055EF0E  47                        INC EDI
0055EF0F  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0055EF12  EB 03                     JMP 0x0055ef17
LAB_0055ef14:
0055EF14  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
LAB_0055ef17:
0055EF17  8D 56 FF                  LEA EDX,[ESI + -0x1]
0055EF1A  85 D2                     TEST EDX,EDX
0055EF1C  7E 24                     JLE 0x0055ef42
0055EF1E  8D 04 79                  LEA EAX,[ECX + EDI*0x2]
0055EF21  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0055EF24  8B F2                     MOV ESI,EDX
0055EF26  03 FA                     ADD EDI,EDX
0055EF28  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
LAB_0055ef2b:
0055EF2B  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
0055EF2E  F6 DA                     NEG DL
0055EF30  88 10                     MOV byte ptr [EAX],DL
0055EF32  8A 11                     MOV DL,byte ptr [ECX]
0055EF34  F6 DA                     NEG DL
0055EF36  88 50 01                  MOV byte ptr [EAX + 0x1],DL
0055EF39  83 C0 02                  ADD EAX,0x2
0055EF3C  83 E9 02                  SUB ECX,0x2
0055EF3F  4E                        DEC ESI
0055EF40  75 E9                     JNZ 0x0055ef2b
LAB_0055ef42:
0055EF42  33 C0                     XOR EAX,EAX
0055EF44  33 C9                     XOR ECX,ECX
0055EF46  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0055EF49  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055EF4C  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0055EF4F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_0055ef52:
0055EF52  85 C9                     TEST ECX,ECX
0055EF54  7F 10                     JG 0x0055ef66
0055EF56  8A 1E                     MOV BL,byte ptr [ESI]
0055EF58  88 1F                     MOV byte ptr [EDI],BL
0055EF5A  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0055EF5D  88 5F 01                  MOV byte ptr [EDI + 0x1],BL
0055EF60  03 CA                     ADD ECX,EDX
0055EF62  40                        INC EAX
0055EF63  83 C7 02                  ADD EDI,0x2
LAB_0055ef66:
0055EF66  49                        DEC ECX
0055EF67  FF 45 D0                  INC dword ptr [EBP + -0x30]
0055EF6A  83 C6 02                  ADD ESI,0x2
0055EF6D  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0055EF70  39 5D D0                  CMP dword ptr [EBP + -0x30],EBX
0055EF73  7C DD                     JL 0x0055ef52
0055EF75  33 D2                     XOR EDX,EDX
0055EF77  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055EF7A  8D 3C 46                  LEA EDI,[ESI + EAX*0x2]
0055EF7D  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
LAB_0055ef80:
0055EF80  85 C9                     TEST ECX,ECX
0055EF82  7F 13                     JG 0x0055ef97
0055EF84  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0055EF87  88 1F                     MOV byte ptr [EDI],BL
0055EF89  8A 1E                     MOV BL,byte ptr [ESI]
0055EF8B  F6 DB                     NEG BL
0055EF8D  88 5F 01                  MOV byte ptr [EDI + 0x1],BL
0055EF90  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
0055EF93  40                        INC EAX
0055EF94  83 C7 02                  ADD EDI,0x2
LAB_0055ef97:
0055EF97  49                        DEC ECX
0055EF98  42                        INC EDX
0055EF99  83 C6 02                  ADD ESI,0x2
0055EF9C  3B 55 DC                  CMP EDX,dword ptr [EBP + -0x24]
0055EF9F  7C DF                     JL 0x0055ef80
0055EFA1  33 D2                     XOR EDX,EDX
0055EFA3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055EFA6  8D 3C 46                  LEA EDI,[ESI + EAX*0x2]
0055EFA9  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
LAB_0055efac:
0055EFAC  85 C9                     TEST ECX,ECX
0055EFAE  7F 15                     JG 0x0055efc5
0055EFB0  8A 1E                     MOV BL,byte ptr [ESI]
0055EFB2  F6 DB                     NEG BL
0055EFB4  88 1F                     MOV byte ptr [EDI],BL
0055EFB6  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0055EFB9  F6 DB                     NEG BL
0055EFBB  88 5F 01                  MOV byte ptr [EDI + 0x1],BL
0055EFBE  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
0055EFC1  40                        INC EAX
0055EFC2  83 C7 02                  ADD EDI,0x2
LAB_0055efc5:
0055EFC5  49                        DEC ECX
0055EFC6  42                        INC EDX
0055EFC7  83 C6 02                  ADD ESI,0x2
0055EFCA  3B 55 DC                  CMP EDX,dword ptr [EBP + -0x24]
0055EFCD  7C DD                     JL 0x0055efac
0055EFCF  33 D2                     XOR EDX,EDX
0055EFD1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055EFD4  8D 3C 46                  LEA EDI,[ESI + EAX*0x2]
0055EFD7  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
LAB_0055efda:
0055EFDA  85 C9                     TEST ECX,ECX
0055EFDC  7F 13                     JG 0x0055eff1
0055EFDE  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0055EFE1  F6 DB                     NEG BL
0055EFE3  88 1F                     MOV byte ptr [EDI],BL
0055EFE5  8A 1E                     MOV BL,byte ptr [ESI]
0055EFE7  88 5F 01                  MOV byte ptr [EDI + 0x1],BL
0055EFEA  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
0055EFED  40                        INC EAX
0055EFEE  83 C7 02                  ADD EDI,0x2
LAB_0055eff1:
0055EFF1  49                        DEC ECX
0055EFF2  42                        INC EDX
0055EFF3  83 C6 02                  ADD ESI,0x2
0055EFF6  3B 55 DC                  CMP EDX,dword ptr [EBP + -0x24]
0055EFF9  7C DF                     JL 0x0055efda
0055EFFB  EB 27                     JMP 0x0055f024
LAB_0055f024:
0055F024  8D 65 B4                  LEA ESP,[EBP + -0x4c]
0055F027  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0055F02A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0055F031  5F                        POP EDI
0055F032  5E                        POP ESI
0055F033  5B                        POP EBX
0055F034  8B E5                     MOV ESP,EBP
0055F036  5D                        POP EBP
0055F037  C2 0C 00                  RET 0xc
