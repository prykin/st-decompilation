STFieldC::sub_0060D660:
0060D660  55                        PUSH EBP
0060D661  8B EC                     MOV EBP,ESP
0060D663  83 EC 14                  SUB ESP,0x14
0060D666  53                        PUSH EBX
0060D667  8B D9                     MOV EBX,ECX
0060D669  56                        PUSH ESI
0060D66A  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
0060D670  8B F0                     MOV ESI,EAX
0060D672  C1 E6 04                  SHL ESI,0x4
0060D675  03 F0                     ADD ESI,EAX
0060D677  C1 E6 02                  SHL ESI,0x2
0060D67A  56                        PUSH ESI
0060D67B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0060D67E  E8 ED D5 09 00            CALL 0x006aac70
0060D683  85 C0                     TEST EAX,EAX
0060D685  89 83 44 02 00 00         MOV dword ptr [EBX + 0x244],EAX
0060D68B  0F 84 07 01 00 00         JZ 0x0060d798
0060D691  57                        PUSH EDI
0060D692  E8 7C 5D DF FF            CALL 0x00403413
0060D697  8B BB 44 02 00 00         MOV EDI,dword ptr [EBX + 0x244]
0060D69D  8B CE                     MOV ECX,ESI
0060D69F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060D6A2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060D6A5  8B D1                     MOV EDX,ECX
0060D6A7  8B F0                     MOV ESI,EAX
0060D6A9  C1 E9 02                  SHR ECX,0x2
0060D6AC  F3 A5                     MOVSD.REP ES:EDI,ESI
0060D6AE  8B CA                     MOV ECX,EDX
0060D6B0  83 E1 03                  AND ECX,0x3
0060D6B3  F3 A4                     MOVSB.REP ES:EDI,ESI
0060D6B5  8B CA                     MOV ECX,EDX
0060D6B7  33 FF                     XOR EDI,EDI
0060D6B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0060D6BC  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0060D6BF  8D 34 01                  LEA ESI,[ECX + EAX*0x1]
0060D6C2  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
0060D6C8  3B C7                     CMP EAX,EDI
0060D6CA  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0060D6CD  0F 8E B3 00 00 00         JLE 0x0060d786
0060D6D3  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0060d6d6:
0060D6D6  8B 93 44 02 00 00         MOV EDX,dword ptr [EBX + 0x244]
0060D6DC  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0060D6DF  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
0060D6E2  8D 50 40                  LEA EDX,[EAX + 0x40]
0060D6E5  85 C9                     TEST ECX,ECX
0060D6E7  75 05                     JNZ 0x0060d6ee
0060D6E9  39 48 08                  CMP dword ptr [EAX + 0x8],ECX
0060D6EC  74 7D                     JZ 0x0060d76b
LAB_0060d6ee:
0060D6EE  83 3E 00                  CMP dword ptr [ESI],0x0
0060D6F1  74 78                     JZ 0x0060d76b
0060D6F3  83 C6 04                  ADD ESI,0x4
0060D6F6  85 C9                     TEST ECX,ECX
0060D6F8  74 1C                     JZ 0x0060d716
0060D6FA  56                        PUSH ESI
0060D6FB  52                        PUSH EDX
0060D6FC  E8 9C 64 DF FF            CALL 0x00403b9d
0060D701  83 C4 08                  ADD ESP,0x8
0060D704  85 C0                     TEST EAX,EAX
0060D706  74 0B                     JZ 0x0060d713
0060D708  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060D70B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0060D70E  03 C8                     ADD ECX,EAX
0060D710  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0060d713:
0060D713  03 75 F8                  ADD ESI,dword ptr [EBP + -0x8]
LAB_0060d716:
0060D716  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D71C  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
0060D71F  8B 4C 0F 08               MOV ECX,dword ptr [EDI + ECX*0x1 + 0x8]
0060D723  85 C9                     TEST ECX,ECX
0060D725  74 3A                     JZ 0x0060d761
0060D727  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0060D72A  C1 E2 02                  SHL EDX,0x2
0060D72D  52                        PUSH EDX
0060D72E  E8 3D D5 09 00            CALL 0x006aac70
0060D733  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D739  89 44 0F 08               MOV dword ptr [EDI + ECX*0x1 + 0x8],EAX
0060D73D  8B 93 44 02 00 00         MOV EDX,dword ptr [EBX + 0x244]
0060D743  8B 4C 17 04               MOV ECX,dword ptr [EDI + EDX*0x1 + 0x4]
0060D747  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0060D74A  C1 E1 02                  SHL ECX,0x2
0060D74D  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0060D750  8B C1                     MOV EAX,ECX
0060D752  C1 E9 02                  SHR ECX,0x2
0060D755  F3 A5                     MOVSD.REP ES:EDI,ESI
0060D757  8B C8                     MOV ECX,EAX
0060D759  83 E1 03                  AND ECX,0x3
0060D75C  F3 A4                     MOVSB.REP ES:EDI,ESI
0060D75E  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_0060d761:
0060D761  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060D764  03 00                     ADD EAX,dword ptr [EAX]
0060D766  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0060D769  8B F0                     MOV ESI,EAX
LAB_0060d76b:
0060D76B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060D76E  8B 8B 3C 02 00 00         MOV ECX,dword ptr [EBX + 0x23c]
0060D774  40                        INC EAX
0060D775  83 C7 44                  ADD EDI,0x44
0060D778  3B C1                     CMP EAX,ECX
0060D77A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060D77D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0060D780  0F 8C 50 FF FF FF         JL 0x0060d6d6
LAB_0060d786:
0060D786  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0060D789  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0060D78C  5F                        POP EDI
0060D78D  5E                        POP ESI
0060D78E  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0060D791  5B                        POP EBX
0060D792  8B E5                     MOV ESP,EBP
0060D794  5D                        POP EBP
0060D795  C2 04 00                  RET 0x4
LAB_0060d798:
0060D798  5E                        POP ESI
0060D799  33 C0                     XOR EAX,EAX
0060D79B  5B                        POP EBX
0060D79C  8B E5                     MOV ESP,EBP
0060D79E  5D                        POP EBP
0060D79F  C2 04 00                  RET 0x4
