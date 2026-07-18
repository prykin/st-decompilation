STColl3C::CreateAddSpr:
005F94C0  55                        PUSH EBP
005F94C1  8B EC                     MOV EBP,ESP
005F94C3  83 EC 4C                  SUB ESP,0x4c
005F94C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005F94CB  56                        PUSH ESI
005F94CC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F94CF  57                        PUSH EDI
005F94D0  8D 55 B8                  LEA EDX,[EBP + -0x48]
005F94D3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005F94D6  6A 00                     PUSH 0x0
005F94D8  52                        PUSH EDX
005F94D9  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005F94E0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005F94E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F94E9  E8 02 43 13 00            CALL 0x0072d7f0
005F94EE  8B F0                     MOV ESI,EAX
005F94F0  83 C4 08                  ADD ESP,0x8
005F94F3  85 F6                     TEST ESI,ESI
005F94F5  75 3D                     JNZ 0x005f9534
005F94F7  6A 6C                     PUSH 0x6c
005F94F9  E8 72 17 0B 00            CALL 0x006aac70
005F94FE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F9501  8B F8                     MOV EDI,EAX
005F9503  B9 1B 00 00 00            MOV ECX,0x1b
005F9508  33 C0                     XOR EAX,EAX
005F950A  89 BA E6 02 00 00         MOV dword ptr [EDX + 0x2e6],EDI
005F9510  F3 AB                     STOSD.REP ES:EDI
005F9512  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005F9518  C7 40 04 FF FF FF FF      MOV dword ptr [EAX + 0x4],0xffffffff
005F951F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F9522  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005F9525  83 C0 02                  ADD EAX,0x2
005F9528  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F952E  5F                        POP EDI
005F952F  5E                        POP ESI
005F9530  8B E5                     MOV ESP,EBP
005F9532  5D                        POP EBP
005F9533  C3                        RET
LAB_005f9534:
005F9534  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005F9537  68 C4 E8 7C 00            PUSH 0x7ce8c4
005F953C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005F9541  56                        PUSH ESI
005F9542  6A 00                     PUSH 0x0
005F9544  68 D8 05 00 00            PUSH 0x5d8
005F9549  68 68 E8 7C 00            PUSH 0x7ce868
005F954E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F9554  E8 77 3F 0B 00            CALL 0x006ad4d0
005F9559  83 C4 18                  ADD ESP,0x18
005F955C  85 C0                     TEST EAX,EAX
005F955E  74 01                     JZ 0x005f9561
005F9560  CC                        INT3
LAB_005f9561:
005F9561  68 DA 05 00 00            PUSH 0x5da
005F9566  68 68 E8 7C 00            PUSH 0x7ce868
005F956B  6A 00                     PUSH 0x0
005F956D  56                        PUSH ESI
005F956E  E8 CD C8 0A 00            CALL 0x006a5e40
005F9573  5F                        POP EDI
005F9574  B8 FF FF 00 00            MOV EAX,0xffff
005F9579  5E                        POP ESI
005F957A  8B E5                     MOV ESP,EBP
005F957C  5D                        POP EBP
005F957D  C3                        RET
