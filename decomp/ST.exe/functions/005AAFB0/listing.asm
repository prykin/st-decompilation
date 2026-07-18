FUN_005aafb0:
005AAFB0  55                        PUSH EBP
005AAFB1  8B EC                     MOV EBP,ESP
005AAFB3  83 EC 48                  SUB ESP,0x48
005AAFB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AAFBB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005AAFBE  56                        PUSH ESI
005AAFBF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005AAFC2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005AAFC5  6A 00                     PUSH 0x0
005AAFC7  52                        PUSH EDX
005AAFC8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005AAFCB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AAFD1  E8 1A 28 18 00            CALL 0x0072d7f0
005AAFD6  8B F0                     MOV ESI,EAX
005AAFD8  83 C4 08                  ADD ESP,0x8
005AAFDB  85 F6                     TEST ESI,ESI
005AAFDD  75 4B                     JNZ 0x005ab02a
005AAFDF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005AAFE2  8B 46 03                  MOV EAX,dword ptr [ESI + 0x3]
005AAFE5  85 C0                     TEST EAX,EAX
005AAFE7  7C 0C                     JL 0x005aaff5
005AAFE9  50                        PUSH EAX
005AAFEA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AAFEF  50                        PUSH EAX
005AAFF0  E8 BB 8B 10 00            CALL 0x006b3bb0
LAB_005aaff5:
005AAFF5  8B 4E 0B                  MOV ECX,dword ptr [ESI + 0xb]
005AAFF8  8D 46 0B                  LEA EAX,[ESI + 0xb]
005AAFFB  85 C9                     TEST ECX,ECX
005AAFFD  C7 46 03 FF FF FF FF      MOV dword ptr [ESI + 0x3],0xffffffff
005AB004  74 06                     JZ 0x005ab00c
005AB006  50                        PUSH EAX
005AB007  E8 54 00 10 00            CALL 0x006ab060
LAB_005ab00c:
005AB00C  8B 4E 07                  MOV ECX,dword ptr [ESI + 0x7]
005AB00F  8D 46 07                  LEA EAX,[ESI + 0x7]
005AB012  85 C9                     TEST ECX,ECX
005AB014  74 06                     JZ 0x005ab01c
005AB016  50                        PUSH EAX
005AB017  E8 44 00 10 00            CALL 0x006ab060
LAB_005ab01c:
005AB01C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005AB01F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AB025  5E                        POP ESI
005AB026  8B E5                     MOV ESP,EBP
005AB028  5D                        POP EBP
005AB029  C3                        RET
LAB_005ab02a:
005AB02A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005AB02D  68 E0 C6 7C 00            PUSH 0x7cc6e0
005AB032  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AB037  56                        PUSH ESI
005AB038  6A 00                     PUSH 0x0
005AB03A  68 AA 00 00 00            PUSH 0xaa
005AB03F  68 74 C6 7C 00            PUSH 0x7cc674
005AB044  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AB04A  E8 81 24 10 00            CALL 0x006ad4d0
005AB04F  83 C4 18                  ADD ESP,0x18
005AB052  85 C0                     TEST EAX,EAX
005AB054  74 01                     JZ 0x005ab057
005AB056  CC                        INT3
LAB_005ab057:
005AB057  68 AA 00 00 00            PUSH 0xaa
005AB05C  68 74 C6 7C 00            PUSH 0x7cc674
005AB061  6A 00                     PUSH 0x0
005AB063  56                        PUSH ESI
005AB064  E8 D7 AD 0F 00            CALL 0x006a5e40
005AB069  5E                        POP ESI
005AB06A  8B E5                     MOV ESP,EBP
005AB06C  5D                        POP EBP
005AB06D  C3                        RET
