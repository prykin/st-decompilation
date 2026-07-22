CampaignTy::sub_005925A0:
005925A0  55                        PUSH EBP
005925A1  8B EC                     MOV EBP,ESP
005925A3  51                        PUSH ECX
005925A4  56                        PUSH ESI
005925A5  8B F1                     MOV ESI,ECX
005925A7  57                        PUSH EDI
005925A8  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
005925AF  C7 86 F8 1F 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1ff8],0x1
005925B9  8D 7E 66                  LEA EDI,[ESI + 0x66]
LAB_005925bc:
005925BC  8B 07                     MOV EAX,dword ptr [EDI]
005925BE  85 C0                     TEST EAX,EAX
005925C0  74 24                     JZ 0x005925e6
005925C2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005925C5  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005925C8  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005925CF  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005925D6  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005925DD  8B 01                     MOV EAX,dword ptr [ECX]
005925DF  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005925E2  52                        PUSH EDX
005925E3  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005925e6:
005925E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005925E9  83 C7 04                  ADD EDI,0x4
005925EC  48                        DEC EAX
005925ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005925F0  75 CA                     JNZ 0x005925bc
005925F2  5F                        POP EDI
005925F3  5E                        POP ESI
005925F4  8B E5                     MOV ESP,EBP
005925F6  5D                        POP EBP
005925F7  C3                        RET
