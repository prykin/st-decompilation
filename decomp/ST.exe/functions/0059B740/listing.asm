FSGSTy::CloseButtons:
0059B740  55                        PUSH EBP
0059B741  8B EC                     MOV EBP,ESP
0059B743  83 EC 48                  SUB ESP,0x48
0059B746  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059B74B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059B74E  56                        PUSH ESI
0059B74F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059B752  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059B755  6A 00                     PUSH 0x0
0059B757  52                        PUSH EDX
0059B758  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059B75B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059B761  E8 8A 20 19 00            CALL 0x0072d7f0
0059B766  8B F0                     MOV ESI,EAX
0059B768  83 C4 08                  ADD ESP,0x8
0059B76B  85 F6                     TEST ESI,ESI
0059B76D  75 36                     JNZ 0x0059b7a5
0059B76F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059B772  8B CE                     MOV ECX,ESI
0059B774  E8 E0 7C E6 FF            CALL 0x00403459
0059B779  6A FF                     PUSH -0x1
0059B77B  6A 01                     PUSH 0x1
0059B77D  6A 0C                     PUSH 0xc
0059B77F  8B CE                     MOV ECX,ESI
0059B781  E8 6B 94 E6 FF            CALL 0x00404bf1
0059B786  8B CE                     MOV ECX,ESI
0059B788  E8 F0 8A E6 FF            CALL 0x0040427d
0059B78D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059B790  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
0059B794  C6 86 5F 1A 00 00 00      MOV byte ptr [ESI + 0x1a5f],0x0
0059B79B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059B7A0  5E                        POP ESI
0059B7A1  8B E5                     MOV ESP,EBP
0059B7A3  5D                        POP EBP
0059B7A4  C3                        RET
LAB_0059b7a5:
0059B7A5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059B7A8  68 B0 C2 7C 00            PUSH 0x7cc2b0
0059B7AD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059B7B2  56                        PUSH ESI
0059B7B3  6A 00                     PUSH 0x0
0059B7B5  68 A9 04 00 00            PUSH 0x4a9
0059B7BA  68 70 BF 7C 00            PUSH 0x7cbf70
0059B7BF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059B7C5  E8 06 1D 11 00            CALL 0x006ad4d0
0059B7CA  83 C4 18                  ADD ESP,0x18
0059B7CD  85 C0                     TEST EAX,EAX
0059B7CF  74 01                     JZ 0x0059b7d2
0059B7D1  CC                        INT3
LAB_0059b7d2:
0059B7D2  68 A9 04 00 00            PUSH 0x4a9
0059B7D7  68 70 BF 7C 00            PUSH 0x7cbf70
0059B7DC  6A 00                     PUSH 0x0
0059B7DE  56                        PUSH ESI
0059B7DF  E8 5C A6 10 00            CALL 0x006a5e40
0059B7E4  5E                        POP ESI
0059B7E5  8B E5                     MOV ESP,EBP
0059B7E7  5D                        POP EBP
0059B7E8  C3                        RET
