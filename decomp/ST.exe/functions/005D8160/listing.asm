SIDTy::PaintSID:
005D8160  55                        PUSH EBP
005D8161  8B EC                     MOV EBP,ESP
005D8163  83 EC 44                  SUB ESP,0x44
005D8166  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D816B  56                        PUSH ESI
005D816C  8D 4D C0                  LEA ECX,[EBP + -0x40]
005D816F  6A 00                     PUSH 0x0
005D8171  51                        PUSH ECX
005D8172  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005D8175  E8 76 56 15 00            CALL 0x0072d7f0
005D817A  8B F0                     MOV ESI,EAX
005D817C  83 C4 08                  ADD ESP,0x8
005D817F  85 F6                     TEST ESI,ESI
005D8181  75 0E                     JNZ 0x005d8191
005D8183  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005D8186  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D818C  5E                        POP ESI
005D818D  8B E5                     MOV ESP,EBP
005D818F  5D                        POP EBP
005D8190  C3                        RET
LAB_005d8191:
005D8191  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005D8194  68 3C D6 7C 00            PUSH 0x7cd63c
005D8199  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D819E  56                        PUSH ESI
005D819F  6A 00                     PUSH 0x0
005D81A1  6A 6B                     PUSH 0x6b
005D81A3  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D81A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D81AD  E8 1E 53 0D 00            CALL 0x006ad4d0
005D81B2  83 C4 18                  ADD ESP,0x18
005D81B5  85 C0                     TEST EAX,EAX
005D81B7  74 01                     JZ 0x005d81ba
005D81B9  CC                        INT3
LAB_005d81ba:
005D81BA  6A 6B                     PUSH 0x6b
005D81BC  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D81C1  6A 00                     PUSH 0x0
005D81C3  56                        PUSH ESI
005D81C4  E8 77 DC 0C 00            CALL 0x006a5e40
005D81C9  5E                        POP ESI
005D81CA  8B E5                     MOV ESP,EBP
005D81CC  5D                        POP EBP
005D81CD  C3                        RET
