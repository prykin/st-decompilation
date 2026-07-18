FUN_004efe20:
004EFE20  55                        PUSH EBP
004EFE21  8B EC                     MOV EBP,ESP
004EFE23  83 EC 10                  SUB ESP,0x10
004EFE26  53                        PUSH EBX
004EFE27  8B D9                     MOV EBX,ECX
004EFE29  8B 83 7A 02 00 00         MOV EAX,dword ptr [EBX + 0x27a]
004EFE2F  85 C0                     TEST EAX,EAX
004EFE31  0F 84 3B 01 00 00         JZ 0x004eff72
004EFE37  56                        PUSH ESI
004EFE38  57                        PUSH EDI
004EFE39  8D 83 BE 01 00 00         LEA EAX,[EBX + 0x1be]
004EFE3F  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
004EFE45  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004EFE4C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004EFE4F  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004EFE52  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
LAB_004efe59:
004EFE59  C7 43 28 21 00 00 00      MOV dword ptr [EBX + 0x28],0x21
004EFE60  8B 0F                     MOV ECX,dword ptr [EDI]
004EFE62  8D 73 18                  LEA ESI,[EBX + 0x18]
004EFE65  56                        PUSH ESI
004EFE66  51                        PUSH ECX
004EFE67  6A 02                     PUSH 0x2
004EFE69  8B CB                     MOV ECX,EBX
004EFE6B  E8 10 62 1F 00            CALL 0x006e6080
004EFE70  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EFE73  8B 83 99 01 00 00         MOV EAX,dword ptr [EBX + 0x199]
004EFE79  03 D0                     ADD EDX,EAX
004EFE7B  8B 83 7A 02 00 00         MOV EAX,dword ptr [EBX + 0x27a]
004EFE81  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
004EFE84  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
004EFE87  1B C0                     SBB EAX,EAX
004EFE89  F7 D8                     NEG EAX
004EFE8B  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004EFE8E  0F 85 90 00 00 00         JNZ 0x004eff24
004EFE94  85 C9                     TEST ECX,ECX
004EFE96  0F 85 90 00 00 00         JNZ 0x004eff2c
LAB_004efe9c:
004EFE9C  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
004EFEA3  8B 17                     MOV EDX,dword ptr [EDI]
004EFEA5  56                        PUSH ESI
004EFEA6  52                        PUSH EDX
LAB_004efea7:
004EFEA7  6A 02                     PUSH 0x2
004EFEA9  8B CB                     MOV ECX,EBX
004EFEAB  E8 D0 61 1F 00            CALL 0x006e6080
004EFEB0  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004EFEB3  85 C0                     TEST EAX,EAX
004EFEB5  0F 84 92 00 00 00         JZ 0x004eff4d
004EFEBB  8B 83 7A 02 00 00         MOV EAX,dword ptr [EBX + 0x27a]
004EFEC1  85 C0                     TEST EAX,EAX
004EFEC3  0F 84 84 00 00 00         JZ 0x004eff4d
004EFEC9  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
004EFECF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EFED2  03 CA                     ADD ECX,EDX
004EFED4  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004EFED7  3B CA                     CMP ECX,EDX
004EFED9  73 72                     JNC 0x004eff4d
004EFEDB  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
004EFEDE  0F AF F1                  IMUL ESI,ECX
004EFEE1  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
004EFEE4  85 F6                     TEST ESI,ESI
004EFEE6  74 65                     JZ 0x004eff4d
004EFEE8  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
004EFEEB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004EFEEE  84 D2                     TEST DL,DL
004EFEF0  0F 94 C0                  SETZ AL
004EFEF3  83 C0 03                  ADD EAX,0x3
004EFEF6  6A 00                     PUSH 0x0
004EFEF8  88 41 F7                  MOV byte ptr [ECX + -0x9],AL
004EFEFB  8B 16                     MOV EDX,dword ptr [ESI]
004EFEFD  6A 03                     PUSH 0x3
004EFEFF  52                        PUSH EDX
004EFF00  E8 7F 37 F1 FF            CALL 0x00403684
004EFF05  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004EFF08  83 C4 0C                  ADD ESP,0xc
004EFF0B  89 42 F8                  MOV dword ptr [EDX + -0x8],EAX
004EFF0E  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
004EFF11  84 C0                     TEST AL,AL
004EFF13  74 27                     JZ 0x004eff3c
004EFF15  83 C6 0A                  ADD ESI,0xa
004EFF18  8B 06                     MOV EAX,dword ptr [ESI]
004EFF1A  89 02                     MOV dword ptr [EDX],EAX
004EFF1C  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
004EFF1F  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
004EFF22  EB 29                     JMP 0x004eff4d
LAB_004eff24:
004EFF24  85 C9                     TEST ECX,ECX
004EFF26  0F 85 70 FF FF FF         JNZ 0x004efe9c
LAB_004eff2c:
004EFF2C  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
004EFF33  8B 0F                     MOV ECX,dword ptr [EDI]
004EFF35  56                        PUSH ESI
004EFF36  51                        PUSH ECX
004EFF37  E9 6B FF FF FF            JMP 0x004efea7
LAB_004eff3c:
004EFF3C  B9 07 00 00 00            MOV ECX,0x7
004EFF41  83 C6 12                  ADD ESI,0x12
004EFF44  8B FA                     MOV EDI,EDX
004EFF46  F3 A5                     MOVSD.REP ES:EDI,ESI
004EFF48  66 A5                     MOVSW ES:EDI,ESI
004EFF4A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_004eff4d:
004EFF4D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EFF50  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004EFF53  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004EFF56  46                        INC ESI
004EFF57  83 C7 04                  ADD EDI,0x4
004EFF5A  83 C1 27                  ADD ECX,0x27
004EFF5D  48                        DEC EAX
004EFF5E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004EFF61  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004EFF64  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004EFF67  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004EFF6A  0F 85 E9 FE FF FF         JNZ 0x004efe59
004EFF70  5F                        POP EDI
004EFF71  5E                        POP ESI
LAB_004eff72:
004EFF72  5B                        POP EBX
004EFF73  8B E5                     MOV ESP,EBP
004EFF75  5D                        POP EBP
004EFF76  C3                        RET
