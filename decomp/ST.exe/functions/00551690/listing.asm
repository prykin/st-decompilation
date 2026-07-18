TradePanelTy::ShiftControls:
00551690  55                        PUSH EBP
00551691  8B EC                     MOV EBP,ESP
00551693  83 EC 48                  SUB ESP,0x48
00551696  56                        PUSH ESI
00551697  8B F1                     MOV ESI,ECX
00551699  57                        PUSH EDI
0055169A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055169D  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
005516A0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005516A3  3B F8                     CMP EDI,EAX
005516A5  0F 84 F4 00 00 00         JZ 0x0055179f
005516AB  57                        PUSH EDI
005516AC  E8 85 36 EB FF            CALL 0x00404d36
005516B1  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
005516B7  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
005516BE  85 FF                     TEST EDI,EDI
005516C0  74 02                     JZ 0x005516c4
005516C2  F7 D8                     NEG EAX
LAB_005516c4:
005516C4  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
005516C8  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005516CD  8D 55 BC                  LEA EDX,[EBP + -0x44]
005516D0  8D 4D B8                  LEA ECX,[EBP + -0x48]
005516D3  6A 00                     PUSH 0x0
005516D5  52                        PUSH EDX
005516D6  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005516D9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005516DF  E8 0C C1 1D 00            CALL 0x0072d7f0
005516E4  8B F0                     MOV ESI,EAX
005516E6  83 C4 08                  ADD ESP,0x8
005516E9  85 F6                     TEST ESI,ESI
005516EB  75 73                     JNZ 0x00551760
005516ED  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005516F0  8B 86 C4 01 00 00         MOV EAX,dword ptr [ESI + 0x1c4]
005516F6  85 C0                     TEST EAX,EAX
005516F8  74 0E                     JZ 0x00551708
005516FA  8D 4E 18                  LEA ECX,[ESI + 0x18]
005516FD  51                        PUSH ECX
005516FE  50                        PUSH EAX
005516FF  6A 02                     PUSH 0x2
00551701  8B CE                     MOV ECX,ESI
00551703  E8 78 49 19 00            CALL 0x006e6080
LAB_00551708:
00551708  8B 86 C0 01 00 00         MOV EAX,dword ptr [ESI + 0x1c0]
0055170E  85 C0                     TEST EAX,EAX
00551710  74 0E                     JZ 0x00551720
00551712  8D 56 18                  LEA EDX,[ESI + 0x18]
00551715  8B CE                     MOV ECX,ESI
00551717  52                        PUSH EDX
00551718  50                        PUSH EAX
00551719  6A 02                     PUSH 0x2
0055171B  E8 60 49 19 00            CALL 0x006e6080
LAB_00551720:
00551720  8B 86 C8 01 00 00         MOV EAX,dword ptr [ESI + 0x1c8]
00551726  85 C0                     TEST EAX,EAX
00551728  74 0E                     JZ 0x00551738
0055172A  8D 4E 18                  LEA ECX,[ESI + 0x18]
0055172D  51                        PUSH ECX
0055172E  50                        PUSH EAX
0055172F  6A 02                     PUSH 0x2
00551731  8B CE                     MOV ECX,ESI
00551733  E8 48 49 19 00            CALL 0x006e6080
LAB_00551738:
00551738  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
0055173E  85 C0                     TEST EAX,EAX
00551740  74 0E                     JZ 0x00551750
00551742  8D 56 18                  LEA EDX,[ESI + 0x18]
00551745  8B CE                     MOV ECX,ESI
00551747  52                        PUSH EDX
00551748  50                        PUSH EAX
00551749  6A 02                     PUSH 0x2
0055174B  E8 30 49 19 00            CALL 0x006e6080
LAB_00551750:
00551750  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00551753  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00551758  5F                        POP EDI
00551759  5E                        POP ESI
0055175A  8B E5                     MOV ESP,EBP
0055175C  5D                        POP EBP
0055175D  C2 04 00                  RET 0x4
LAB_00551760:
00551760  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00551763  68 DC 86 7C 00            PUSH 0x7c86dc
00551768  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055176D  56                        PUSH ESI
0055176E  6A 00                     PUSH 0x0
00551770  68 91 00 00 00            PUSH 0x91
00551775  68 24 86 7C 00            PUSH 0x7c8624
0055177A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00551780  E8 4B BD 15 00            CALL 0x006ad4d0
00551785  83 C4 18                  ADD ESP,0x18
00551788  85 C0                     TEST EAX,EAX
0055178A  74 01                     JZ 0x0055178d
0055178C  CC                        INT3
LAB_0055178d:
0055178D  68 91 00 00 00            PUSH 0x91
00551792  68 24 86 7C 00            PUSH 0x7c8624
00551797  6A 00                     PUSH 0x0
00551799  56                        PUSH ESI
0055179A  E8 A1 46 15 00            CALL 0x006a5e40
LAB_0055179f:
0055179F  5F                        POP EDI
005517A0  5E                        POP ESI
005517A1  8B E5                     MOV ESP,EBP
005517A3  5D                        POP EBP
005517A4  C2 04 00                  RET 0x4
