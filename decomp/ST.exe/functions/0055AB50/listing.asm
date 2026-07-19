VisibleClassTy::VisHoleExec:
0055AB50  55                        PUSH EBP
0055AB51  8B EC                     MOV EBP,ESP
0055AB53  83 EC 4C                  SUB ESP,0x4c
0055AB56  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055AB5C  53                        PUSH EBX
0055AB5D  56                        PUSH ESI
0055AB5E  57                        PUSH EDI
0055AB5F  85 C0                     TEST EAX,EAX
0055AB61  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0055AB64  0F 84 2C 01 00 00         JZ 0x0055ac96
0055AB6A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055AB6F  8D 55 B8                  LEA EDX,[EBP + -0x48]
0055AB72  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0055AB75  6A 00                     PUSH 0x0
0055AB77  52                        PUSH EDX
0055AB78  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0055AB7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055AB81  E8 6A 2C 1D 00            CALL 0x0072d7f0
0055AB86  8B F0                     MOV ESI,EAX
0055AB88  83 C4 08                  ADD ESP,0x8
0055AB8B  85 F6                     TEST ESI,ESI
0055AB8D  0F 85 C4 00 00 00         JNZ 0x0055ac57
0055AB93  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0055AB96  8B 87 F4 00 00 00         MOV EAX,dword ptr [EDI + 0xf4]
0055AB9C  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0055AB9F  4B                        DEC EBX
0055ABA0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0055ABA3  0F 88 8D 00 00 00         JS 0x0055ac36
LAB_0055aba9:
0055ABA9  8B 87 F4 00 00 00         MOV EAX,dword ptr [EDI + 0xf4]
0055ABAF  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0055ABB2  73 0D                     JNC 0x0055abc1
0055ABB4  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0055ABB7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0055ABBA  0F AF F3                  IMUL ESI,EBX
0055ABBD  03 F1                     ADD ESI,ECX
0055ABBF  EB 02                     JMP 0x0055abc3
LAB_0055abc1:
0055ABC1  33 F6                     XOR ESI,ESI
LAB_0055abc3:
0055ABC3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0055ABC6  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0055ABC9  8B 87 08 01 00 00         MOV EAX,dword ptr [EDI + 0x108]
0055ABCF  8D 1C 0A                  LEA EBX,[EDX + ECX*0x1]
0055ABD2  3B C3                     CMP EAX,EBX
0055ABD4  72 53                     JC 0x0055ac29
0055ABD6  2B C2                     SUB EAX,EDX
0055ABD8  33 D2                     XOR EDX,EDX
0055ABDA  2B C1                     SUB EAX,ECX
0055ABDC  B9 07 00 00 00            MOV ECX,0x7
0055ABE1  F7 F1                     DIV ECX
0055ABE3  85 D2                     TEST EDX,EDX
0055ABE5  75 42                     JNZ 0x0055ac29
0055ABE7  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0055ABEA  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0055ABED  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0055ABF0  6A FF                     PUSH -0x1
0055ABF2  6A FA                     PUSH -0x6
0055ABF4  52                        PUSH EDX
0055ABF5  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0055ABF8  50                        PUSH EAX
0055ABF9  8B 06                     MOV EAX,dword ptr [ESI]
0055ABFB  51                        PUSH ECX
0055ABFC  52                        PUSH EDX
0055ABFD  50                        PUSH EAX
0055ABFE  8B CF                     MOV ECX,EDI
0055AC00  E8 ED 6C EA FF            CALL 0x004018f2
0055AC05  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0055AC08  48                        DEC EAX
0055AC09  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0055AC0C  78 37                     JS 0x0055ac45
0055AC0E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0055AC11  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0055AC14  6A FF                     PUSH -0x1
0055AC16  6A FA                     PUSH -0x6
0055AC18  50                        PUSH EAX
0055AC19  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0055AC1C  51                        PUSH ECX
0055AC1D  8B 0E                     MOV ECX,dword ptr [ESI]
0055AC1F  52                        PUSH EDX
0055AC20  50                        PUSH EAX
0055AC21  51                        PUSH ECX
0055AC22  8B CF                     MOV ECX,EDI
0055AC24  E8 63 8C EA FF            CALL 0x0040388c
LAB_0055ac29:
0055AC29  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0055ac2c:
0055AC2C  4B                        DEC EBX
0055AC2D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0055AC30  0F 89 73 FF FF FF         JNS 0x0055aba9
LAB_0055ac36:
0055AC36  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0055AC39  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055AC3E  5F                        POP EDI
0055AC3F  5E                        POP ESI
0055AC40  5B                        POP EBX
0055AC41  8B E5                     MOV ESP,EBP
0055AC43  5D                        POP EBP
0055AC44  C3                        RET
LAB_0055ac45:
0055AC45  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0055AC48  8B 97 F4 00 00 00         MOV EDX,dword ptr [EDI + 0xf4]
0055AC4E  53                        PUSH EBX
0055AC4F  52                        PUSH EDX
0055AC50  E8 1B 60 15 00            CALL 0x006b0c70
0055AC55  EB D5                     JMP 0x0055ac2c
LAB_0055ac57:
0055AC57  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0055AC5A  68 90 94 7C 00            PUSH 0x7c9490
0055AC5F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055AC64  56                        PUSH ESI
0055AC65  6A 00                     PUSH 0x0
0055AC67  68 0A 04 00 00            PUSH 0x40a
0055AC6C  68 CC 92 7C 00            PUSH 0x7c92cc
0055AC71  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055AC77  E8 54 28 15 00            CALL 0x006ad4d0
0055AC7C  83 C4 18                  ADD ESP,0x18
0055AC7F  85 C0                     TEST EAX,EAX
0055AC81  74 01                     JZ 0x0055ac84
0055AC83  CC                        INT3
LAB_0055ac84:
0055AC84  68 0B 04 00 00            PUSH 0x40b
0055AC89  68 CC 92 7C 00            PUSH 0x7c92cc
0055AC8E  6A 00                     PUSH 0x0
0055AC90  56                        PUSH ESI
0055AC91  E8 AA B1 14 00            CALL 0x006a5e40
LAB_0055ac96:
0055AC96  5F                        POP EDI
0055AC97  5E                        POP ESI
0055AC98  5B                        POP EBX
0055AC99  8B E5                     MOV ESP,EBP
0055AC9B  5D                        POP EBP
0055AC9C  C3                        RET
