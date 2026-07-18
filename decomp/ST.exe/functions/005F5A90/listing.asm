FUN_005f5a90:
005F5A90  55                        PUSH EBP
005F5A91  8B EC                     MOV EBP,ESP
005F5A93  83 EC 0C                  SUB ESP,0xc
005F5A96  53                        PUSH EBX
005F5A97  56                        PUSH ESI
005F5A98  57                        PUSH EDI
005F5A99  8B D9                     MOV EBX,ECX
005F5A9B  68 28 01 00 00            PUSH 0x128
005F5AA0  E8 CB 51 0B 00            CALL 0x006aac70
005F5AA5  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
005F5AA8  8D 73 4D                  LEA ESI,[EBX + 0x4d]
005F5AAB  89 8B 6D 01 00 00         MOV dword ptr [EBX + 0x16d],ECX
005F5AB1  B9 4A 00 00 00            MOV ECX,0x4a
005F5AB6  8B F8                     MOV EDI,EAX
005F5AB8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F5ABB  F3 A5                     MOVSD.REP ES:EDI,ESI
005F5ABD  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
005F5AC4  8B 9B 69 01 00 00         MOV EBX,dword ptr [EBX + 0x169]
005F5ACA  85 DB                     TEST EBX,EBX
005F5ACC  74 6D                     JZ 0x005f5b3b
005F5ACE  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F5AD1  52                        PUSH EDX
005F5AD2  53                        PUSH EBX
005F5AD3  E8 48 A5 0B 00            CALL 0x006b0020
005F5AD8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F5ADB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005F5ADE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F5AE1  05 2C 01 00 00            ADD EAX,0x12c
005F5AE6  50                        PUSH EAX
005F5AE7  51                        PUSH ECX
005F5AE8  E8 63 74 0B 00            CALL 0x006acf50
005F5AED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F5AF0  8B D8                     MOV EBX,EAX
005F5AF2  89 93 28 01 00 00         MOV dword ptr [EBX + 0x128],EDX
005F5AF8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F5AFB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005F5AFE  8B C1                     MOV EAX,ECX
005F5B00  8D BB 2C 01 00 00         LEA EDI,[EBX + 0x12c]
005F5B06  C1 E9 02                  SHR ECX,0x2
005F5B09  F3 A5                     MOVSD.REP ES:EDI,ESI
005F5B0B  8B C8                     MOV ECX,EAX
005F5B0D  83 E1 03                  AND ECX,0x3
005F5B10  F3 A4                     MOVSB.REP ES:EDI,ESI
005F5B12  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F5B15  85 C0                     TEST EAX,EAX
005F5B17  74 09                     JZ 0x005f5b22
005F5B19  8D 4D F8                  LEA ECX,[EBP + -0x8]
005F5B1C  51                        PUSH ECX
005F5B1D  E8 3E 55 0B 00            CALL 0x006ab060
LAB_005f5b22:
005F5B22  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F5B25  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F5B28  5F                        POP EDI
005F5B29  5E                        POP ESI
005F5B2A  8D 82 28 01 00 00         LEA EAX,[EDX + 0x128]
005F5B30  89 01                     MOV dword ptr [ECX],EAX
005F5B32  8B C3                     MOV EAX,EBX
005F5B34  5B                        POP EBX
005F5B35  8B E5                     MOV ESP,EBP
005F5B37  5D                        POP EBP
005F5B38  C2 04 00                  RET 0x4
LAB_005f5b3b:
005F5B3B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F5B3E  B9 28 01 00 00            MOV ECX,0x128
005F5B43  5F                        POP EDI
005F5B44  5E                        POP ESI
005F5B45  89 0A                     MOV dword ptr [EDX],ECX
005F5B47  5B                        POP EBX
005F5B48  8B E5                     MOV ESP,EBP
005F5B4A  5D                        POP EBP
005F5B4B  C2 04 00                  RET 0x4
