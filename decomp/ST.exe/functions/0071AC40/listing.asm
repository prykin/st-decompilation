FUN_0071ac40:
0071AC40  55                        PUSH EBP
0071AC41  8B EC                     MOV EBP,ESP
0071AC43  83 EC 44                  SUB ESP,0x44
0071AC46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071AC4B  56                        PUSH ESI
0071AC4C  57                        PUSH EDI
0071AC4D  8D 55 C0                  LEA EDX,[EBP + -0x40]
0071AC50  8D 4D BC                  LEA ECX,[EBP + -0x44]
0071AC53  6A 00                     PUSH 0x0
0071AC55  52                        PUSH EDX
0071AC56  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0071AC59  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AC5F  E8 8C 2B 01 00            CALL 0x0072d7f0
0071AC64  8B F0                     MOV ESI,EAX
0071AC66  83 C4 08                  ADD ESP,0x8
0071AC69  85 F6                     TEST ESI,ESI
0071AC6B  75 46                     JNZ 0x0071acb3
0071AC6D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071AC70  85 FF                     TEST EDI,EDI
0071AC72  74 30                     JZ 0x0071aca4
0071AC74  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071AC77  85 F6                     TEST ESI,ESI
0071AC79  74 29                     JZ 0x0071aca4
0071AC7B  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_0071ac7e:
0071AC7E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0071AC81  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0071AC84  3B C1                     CMP EAX,ECX
0071AC86  7D 0D                     JGE 0x0071ac95
0071AC88  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0071AC8B  40                        INC EAX
0071AC8C  8B 4C 81 FC               MOV ECX,dword ptr [ECX + EAX*0x4 + -0x4]
0071AC90  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
0071AC93  EB 02                     JMP 0x0071ac97
LAB_0071ac95:
0071AC95  33 C9                     XOR ECX,ECX
LAB_0071ac97:
0071AC97  85 C9                     TEST ECX,ECX
0071AC99  74 09                     JZ 0x0071aca4
0071AC9B  51                        PUSH ECX
0071AC9C  57                        PUSH EDI
0071AC9D  E8 FE AD F9 FF            CALL 0x006b5aa0
0071ACA2  EB DA                     JMP 0x0071ac7e
LAB_0071aca4:
0071ACA4  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0071ACA7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071ACAD  5F                        POP EDI
0071ACAE  5E                        POP ESI
0071ACAF  8B E5                     MOV ESP,EBP
0071ACB1  5D                        POP EBP
0071ACB2  C3                        RET
LAB_0071acb3:
0071ACB3  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0071ACB6  68 BC 08 7F 00            PUSH 0x7f08bc
0071ACBB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071ACC0  56                        PUSH ESI
0071ACC1  6A 00                     PUSH 0x0
0071ACC3  6A 59                     PUSH 0x59
0071ACC5  68 98 08 7F 00            PUSH 0x7f0898
0071ACCA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071ACCF  E8 FC 27 F9 FF            CALL 0x006ad4d0
0071ACD4  83 C4 18                  ADD ESP,0x18
0071ACD7  85 C0                     TEST EAX,EAX
0071ACD9  74 01                     JZ 0x0071acdc
0071ACDB  CC                        INT3
LAB_0071acdc:
0071ACDC  6A 5B                     PUSH 0x5b
0071ACDE  68 98 08 7F 00            PUSH 0x7f0898
0071ACE3  6A 00                     PUSH 0x0
0071ACE5  56                        PUSH ESI
0071ACE6  E8 55 B1 F8 FF            CALL 0x006a5e40
0071ACEB  5F                        POP EDI
0071ACEC  5E                        POP ESI
0071ACED  8B E5                     MOV ESP,EBP
0071ACEF  5D                        POP EBP
0071ACF0  C3                        RET
