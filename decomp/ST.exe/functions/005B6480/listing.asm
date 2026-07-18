MMObjTy::CloseButtons:
005B6480  55                        PUSH EBP
005B6481  8B EC                     MOV EBP,ESP
005B6483  83 EC 48                  SUB ESP,0x48
005B6486  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B648B  53                        PUSH EBX
005B648C  56                        PUSH ESI
005B648D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B6490  57                        PUSH EDI
005B6491  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B6494  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B6497  6A 00                     PUSH 0x0
005B6499  52                        PUSH EDX
005B649A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B649D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B64A3  E8 48 73 17 00            CALL 0x0072d7f0
005B64A8  8B F0                     MOV ESI,EAX
005B64AA  83 C4 08                  ADD ESP,0x8
005B64AD  85 F6                     TEST ESI,ESI
005B64AF  75 35                     JNZ 0x005b64e6
005B64B1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005B64B4  BF 0D 00 00 00            MOV EDI,0xd
005B64B9  8D 73 66                  LEA ESI,[EBX + 0x66]
LAB_005b64bc:
005B64BC  8B 06                     MOV EAX,dword ptr [ESI]
005B64BE  85 C0                     TEST EAX,EAX
005B64C0  74 09                     JZ 0x005b64cb
005B64C2  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005B64C5  50                        PUSH EAX
005B64C6  E8 E5 F1 12 00            CALL 0x006e56b0
LAB_005b64cb:
005B64CB  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
005B64D1  83 C6 04                  ADD ESI,0x4
005B64D4  4F                        DEC EDI
005B64D5  75 E5                     JNZ 0x005b64bc
005B64D7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B64DA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B64DF  5F                        POP EDI
005B64E0  5E                        POP ESI
005B64E1  5B                        POP EBX
005B64E2  8B E5                     MOV ESP,EBP
005B64E4  5D                        POP EBP
005B64E5  C3                        RET
LAB_005b64e6:
005B64E6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B64E9  68 E4 CA 7C 00            PUSH 0x7ccae4
005B64EE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B64F3  56                        PUSH ESI
005B64F4  6A 00                     PUSH 0x0
005B64F6  68 04 01 00 00            PUSH 0x104
005B64FB  68 38 CA 7C 00            PUSH 0x7cca38
005B6500  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6506  E8 C5 6F 0F 00            CALL 0x006ad4d0
005B650B  83 C4 18                  ADD ESP,0x18
005B650E  85 C0                     TEST EAX,EAX
005B6510  74 01                     JZ 0x005b6513
005B6512  CC                        INT3
LAB_005b6513:
005B6513  68 04 01 00 00            PUSH 0x104
005B6518  68 38 CA 7C 00            PUSH 0x7cca38
005B651D  6A 00                     PUSH 0x0
005B651F  56                        PUSH ESI
005B6520  E8 1B F9 0E 00            CALL 0x006a5e40
005B6525  5F                        POP EDI
005B6526  5E                        POP ESI
005B6527  5B                        POP EBX
005B6528  8B E5                     MOV ESP,EBP
005B652A  5D                        POP EBP
005B652B  C3                        RET
