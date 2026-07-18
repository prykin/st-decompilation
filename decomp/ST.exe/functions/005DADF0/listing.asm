FUN_005dadf0:
005DADF0  55                        PUSH EBP
005DADF1  8B EC                     MOV EBP,ESP
005DADF3  83 EC 48                  SUB ESP,0x48
005DADF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DADFB  56                        PUSH ESI
005DADFC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DADFF  57                        PUSH EDI
005DAE00  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DAE03  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DAE06  6A 00                     PUSH 0x0
005DAE08  52                        PUSH EDX
005DAE09  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DAE0C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAE12  E8 D9 29 15 00            CALL 0x0072d7f0
005DAE17  8B F0                     MOV ESI,EAX
005DAE19  83 C4 08                  ADD ESP,0x8
005DAE1C  85 F6                     TEST ESI,ESI
005DAE1E  75 74                     JNZ 0x005dae94
005DAE20  A1 FA C4 80 00            MOV EAX,[0x0080c4fa]
005DAE25  85 C0                     TEST EAX,EAX
005DAE27  74 06                     JZ 0x005dae2f
005DAE29  50                        PUSH EAX
005DAE2A  E8 41 A7 0D 00            CALL 0x006b5570
LAB_005dae2f:
005DAE2F  6A 14                     PUSH 0x14
005DAE31  6A 64                     PUSH 0x64
005DAE33  6A 00                     PUSH 0x0
005DAE35  E8 B6 A6 0D 00            CALL 0x006b54f0
005DAE3A  A3 FA C4 80 00            MOV [0x0080c4fa],EAX
005DAE3F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DAE42  8B 80 7E 06 00 00         MOV EAX,dword ptr [EAX + 0x67e]
005DAE48  85 C0                     TEST EAX,EAX
005DAE4A  74 3A                     JZ 0x005dae86
005DAE4C  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005DAE4F  85 F6                     TEST ESI,ESI
005DAE51  75 18                     JNZ 0x005dae6b
005DAE53  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005DAE57  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005DAE5B  83 C6 1F                  ADD ESI,0x1f
005DAE5E  C1 EE 03                  SHR ESI,0x3
005DAE61  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005DAE67  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005dae6b:
005DAE6B  50                        PUSH EAX
005DAE6C  E8 2F A1 0D 00            CALL 0x006b4fa0
005DAE71  8B CE                     MOV ECX,ESI
005DAE73  8B F8                     MOV EDI,EAX
005DAE75  8B D1                     MOV EDX,ECX
005DAE77  83 C8 FF                  OR EAX,0xffffffff
005DAE7A  C1 E9 02                  SHR ECX,0x2
005DAE7D  F3 AB                     STOSD.REP ES:EDI
005DAE7F  8B CA                     MOV ECX,EDX
005DAE81  83 E1 03                  AND ECX,0x3
005DAE84  F3 AA                     STOSB.REP ES:EDI
LAB_005dae86:
005DAE86  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DAE89  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DAE8E  5F                        POP EDI
005DAE8F  5E                        POP ESI
005DAE90  8B E5                     MOV ESP,EBP
005DAE92  5D                        POP EBP
005DAE93  C3                        RET
LAB_005dae94:
005DAE94  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DAE97  68 5C D7 7C 00            PUSH 0x7cd75c
005DAE9C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DAEA1  56                        PUSH ESI
005DAEA2  6A 00                     PUSH 0x0
005DAEA4  68 DA 00 00 00            PUSH 0xda
005DAEA9  68 18 D7 7C 00            PUSH 0x7cd718
005DAEAE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAEB4  E8 17 26 0D 00            CALL 0x006ad4d0
005DAEB9  83 C4 18                  ADD ESP,0x18
005DAEBC  85 C0                     TEST EAX,EAX
005DAEBE  74 01                     JZ 0x005daec1
005DAEC0  CC                        INT3
LAB_005daec1:
005DAEC1  68 DB 00 00 00            PUSH 0xdb
005DAEC6  68 18 D7 7C 00            PUSH 0x7cd718
005DAECB  6A 00                     PUSH 0x0
005DAECD  56                        PUSH ESI
005DAECE  E8 6D AF 0C 00            CALL 0x006a5e40
005DAED3  5F                        POP EDI
005DAED4  5E                        POP ESI
005DAED5  8B E5                     MOV ESP,EBP
005DAED7  5D                        POP EBP
005DAED8  C3                        RET
