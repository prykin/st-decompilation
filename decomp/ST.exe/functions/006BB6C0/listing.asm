FUN_006bb6c0:
006BB6C0  55                        PUSH EBP
006BB6C1  8B EC                     MOV EBP,ESP
006BB6C3  81 EC 84 00 00 00         SUB ESP,0x84
006BB6C9  56                        PUSH ESI
006BB6CA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BB6CD  57                        PUSH EDI
006BB6CE  B9 1F 00 00 00            MOV ECX,0x1f
006BB6D3  33 C0                     XOR EAX,EAX
006BB6D5  8D BD 7C FF FF FF         LEA EDI,[EBP + 0xffffff7c]
006BB6DB  F3 AB                     STOSD.REP ES:EDI
006BB6DD  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006BB6E0  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006BB6E6  F7 C7 A4 10 02 00         TEST EDI,0x210a4
006BB6EC  C7 85 7C FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x7c
006BB6F6  C7 45 80 07 00 00 00      MOV dword ptr [EBP + -0x80],0x7
006BB6FD  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006BB700  75 07                     JNZ 0x006bb709
006BB702  8B C7                     MOV EAX,EDI
006BB704  0C 40                     OR AL,0x40
006BB706  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006bb709:
006BB709  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BB70C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006BB70F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BB712  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
006BB715  8B 40 30                  MOV EAX,dword ptr [EAX + 0x30]
006BB718  6A 00                     PUSH 0x0
006BB71A  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
006BB720  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
006BB723  8B 08                     MOV ECX,dword ptr [EAX]
006BB725  56                        PUSH ESI
006BB726  52                        PUSH EDX
006BB727  50                        PUSH EAX
006BB728  FF 51 18                  CALL dword ptr [ECX + 0x18]
006BB72B  85 C0                     TEST EAX,EAX
006BB72D  75 40                     JNZ 0x006bb76f
006BB72F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006BB732  83 F9 FF                  CMP ECX,-0x1
006BB735  74 38                     JZ 0x006bb76f
006BB737  8D 55 F8                  LEA EDX,[EBP + -0x8]
006BB73A  8B 06                     MOV EAX,dword ptr [ESI]
006BB73C  52                        PUSH EDX
006BB73D  8B D7                     MOV EDX,EDI
006BB73F  80 E2 80                  AND DL,0x80
006BB742  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006BB745  F6 DA                     NEG DL
006BB747  1B D2                     SBB EDX,EDX
006BB749  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006BB74C  8B 08                     MOV ECX,dword ptr [EAX]
006BB74E  83 E2 08                  AND EDX,0x8
006BB751  83 C2 08                  ADD EDX,0x8
006BB754  52                        PUSH EDX
006BB755  50                        PUSH EAX
006BB756  FF 51 74                  CALL dword ptr [ECX + 0x74]
006BB759  8B F8                     MOV EDI,EAX
006BB75B  85 FF                     TEST EDI,EDI
006BB75D  74 0E                     JZ 0x006bb76d
006BB75F  8B 06                     MOV EAX,dword ptr [ESI]
006BB761  50                        PUSH EAX
006BB762  8B 08                     MOV ECX,dword ptr [EAX]
006BB764  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BB767  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_006bb76d:
006BB76D  8B C7                     MOV EAX,EDI
LAB_006bb76f:
006BB76F  5F                        POP EDI
006BB770  5E                        POP ESI
006BB771  8B E5                     MOV ESP,EBP
006BB773  5D                        POP EBP
006BB774  C2 18 00                  RET 0x18
