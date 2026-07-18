FUN_006b7740:
006B7740  55                        PUSH EBP
006B7741  8B EC                     MOV EBP,ESP
006B7743  56                        PUSH ESI
006B7744  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B7747  85 F6                     TEST ESI,ESI
006B7749  74 2A                     JZ 0x006b7775
006B774B  56                        PUSH ESI
006B774C  E8 7F FF FF FF            CALL 0x006b76d0
006B7751  F6 46 04 04               TEST byte ptr [ESI + 0x4],0x4
006B7755  74 06                     JZ 0x006b775d
006B7757  FF 15 E0 C0 85 00         CALL dword ptr [0x0085c0e0]
LAB_006b775d:
006B775D  8B 06                     MOV EAX,dword ptr [ESI]
006B775F  85 C0                     TEST EAX,EAX
006B7761  74 0C                     JZ 0x006b776f
006B7763  8B 08                     MOV ECX,dword ptr [EAX]
006B7765  50                        PUSH EAX
006B7766  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B7769  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_006b776f:
006B776F  56                        PUSH ESI
006B7770  E8 1B E7 FE FF            CALL 0x006a5e90
LAB_006b7775:
006B7775  5E                        POP ESI
006B7776  5D                        POP EBP
006B7777  C2 04 00                  RET 0x4
