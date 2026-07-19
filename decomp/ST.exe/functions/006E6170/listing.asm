SystemWithNamedObjClassTy::CreateObject:
006E6170  55                        PUSH EBP
006E6171  8B EC                     MOV EBP,ESP
006E6173  83 EC 20                  SUB ESP,0x20
006E6176  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E6179  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E617C  56                        PUSH ESI
006E617D  8B F1                     MOV ESI,ECX
006E617F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E6182  50                        PUSH EAX
006E6183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6186  51                        PUSH ECX
006E6187  52                        PUSH EDX
006E6188  50                        PUSH EAX
006E6189  8B CE                     MOV ECX,ESI
006E618B  E8 20 F3 FF FF            CALL 0x006e54b0
006E6190  8B D0                     MOV EDX,EAX
006E6192  85 D2                     TEST EDX,EDX
006E6194  74 59                     JZ 0x006e61ef
006E6196  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006E6199  57                        PUSH EDI
006E619A  89 4A 18                  MOV dword ptr [EDX + 0x18],ECX
006E619D  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
006E61A0  47                        INC EDI
006E61A1  B9 08 00 00 00            MOV ECX,0x8
006E61A6  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
006E61A9  33 C0                     XOR EAX,EAX
006E61AB  8D 7D E0                  LEA EDI,[EBP + -0x20]
006E61AE  F3 AB                     STOSD.REP ES:EDI
006E61B0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E61B3  8D 4D E0                  LEA ECX,[EBP + -0x20]
006E61B6  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
006E61BD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006E61C0  8B 02                     MOV EAX,dword ptr [EDX]
006E61C2  51                        PUSH ECX
006E61C3  8B CA                     MOV ECX,EDX
006E61C5  FF 10                     CALL dword ptr [EAX]
006E61C7  3D FF FF 00 00            CMP EAX,0xffff
006E61CC  5F                        POP EDI
006E61CD  75 17                     JNZ 0x006e61e6
006E61CF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006E61D5  68 03 05 00 00            PUSH 0x503
006E61DA  68 8C E7 7E 00            PUSH 0x7ee78c
006E61DF  52                        PUSH EDX
006E61E0  50                        PUSH EAX
006E61E1  E8 5A FC FB FF            CALL 0x006a5e40
LAB_006e61e6:
006E61E6  33 C0                     XOR EAX,EAX
006E61E8  5E                        POP ESI
006E61E9  8B E5                     MOV ESP,EBP
006E61EB  5D                        POP EBP
006E61EC  C2 14 00                  RET 0x14
LAB_006e61ef:
006E61EF  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E61F4  5E                        POP ESI
006E61F5  8B E5                     MOV ESP,EBP
006E61F7  5D                        POP EBP
006E61F8  C2 14 00                  RET 0x14
