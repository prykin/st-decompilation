FUN_0061d710:
0061D710  55                        PUSH EBP
0061D711  8B EC                     MOV EBP,ESP
0061D713  83 EC 18                  SUB ESP,0x18
0061D716  53                        PUSH EBX
0061D717  8B D9                     MOV EBX,ECX
0061D719  56                        PUSH ESI
0061D71A  33 C9                     XOR ECX,ECX
0061D71C  8B 83 AC 00 00 00         MOV EAX,dword ptr [EBX + 0xac]
0061D722  57                        PUSH EDI
0061D723  89 83 A8 00 00 00         MOV dword ptr [EBX + 0xa8],EAX
0061D729  8B 83 93 00 00 00         MOV EAX,dword ptr [EBX + 0x93]
0061D72F  85 C0                     TEST EAX,EAX
0061D731  BF 90 00 00 00            MOV EDI,0x90
0061D736  C7 43 28 02 00 00 00      MOV dword ptr [EBX + 0x28],0x2
0061D73D  74 24                     JZ 0x0061d763
0061D73F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061D742  8D 3C 95 94 00 00 00      LEA EDI,[EDX*0x4 + 0x94]
0061D749  7E 16                     JLE 0x0061d761
0061D74B  8B 93 9B 00 00 00         MOV EDX,dword ptr [EBX + 0x9b]
0061D751  8B F0                     MOV ESI,EAX
LAB_0061d753:
0061D753  8B 02                     MOV EAX,dword ptr [EDX]
0061D755  83 C2 04                  ADD EDX,0x4
0061D758  4E                        DEC ESI
0061D759  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061D75C  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
0061D75F  75 F2                     JNZ 0x0061d753
LAB_0061d761:
0061D761  03 F9                     ADD EDI,ECX
LAB_0061d763:
0061D763  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
0061D769  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061D76C  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
0061D770  8D 44 0F 20               LEA EAX,[EDI + ECX*0x1 + 0x20]
0061D774  50                        PUSH EAX
0061D775  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061D778  E8 F3 D4 08 00            CALL 0x006aac70
0061D77D  85 DB                     TEST EBX,EBX
0061D77F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0061D782  74 05                     JZ 0x0061d789
0061D784  8D 73 1C                  LEA ESI,[EBX + 0x1c]
0061D787  EB 02                     JMP 0x0061d78b
LAB_0061d789:
0061D789  33 F6                     XOR ESI,ESI
LAB_0061d78b:
0061D78B  B9 24 00 00 00            MOV ECX,0x24
0061D790  8B F8                     MOV EDI,EAX
0061D792  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D794  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061D79A  8B B3 9B 00 00 00         MOV ESI,dword ptr [EBX + 0x9b]
0061D7A0  C1 E1 02                  SHL ECX,0x2
0061D7A3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061D7A6  05 90 00 00 00            ADD EAX,0x90
0061D7AB  8B D1                     MOV EDX,ECX
0061D7AD  8B F8                     MOV EDI,EAX
0061D7AF  C1 E9 02                  SHR ECX,0x2
0061D7B2  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D7B4  8B CA                     MOV ECX,EDX
0061D7B6  03 C2                     ADD EAX,EDX
0061D7B8  83 E1 03                  AND ECX,0x3
0061D7BB  33 D2                     XOR EDX,EDX
0061D7BD  F3 A4                     MOVSB.REP ES:EDI,ESI
0061D7BF  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061D7C5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061D7C8  85 C9                     TEST ECX,ECX
0061D7CA  7E 40                     JLE 0x0061d80c
LAB_0061d7cc:
0061D7CC  8B 8B 9B 00 00 00         MOV ECX,dword ptr [EBX + 0x9b]
0061D7D2  8B B3 9F 00 00 00         MOV ESI,dword ptr [EBX + 0x9f]
0061D7D8  8B F8                     MOV EDI,EAX
0061D7DA  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
0061D7DD  8B 34 96                  MOV ESI,dword ptr [ESI + EDX*0x4]
0061D7E0  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061D7E3  C1 E1 02                  SHL ECX,0x2
0061D7E6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061D7E9  8B D1                     MOV EDX,ECX
0061D7EB  C1 E9 02                  SHR ECX,0x2
0061D7EE  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D7F0  8B CA                     MOV ECX,EDX
0061D7F2  83 E1 03                  AND ECX,0x3
0061D7F5  F3 A4                     MOVSB.REP ES:EDI,ESI
0061D7F7  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061D7FD  8B FA                     MOV EDI,EDX
0061D7FF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061D802  03 C7                     ADD EAX,EDI
0061D804  42                        INC EDX
0061D805  3B D1                     CMP EDX,ECX
0061D807  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061D80A  7C C0                     JL 0x0061d7cc
LAB_0061d80c:
0061D80C  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061D812  83 C0 04                  ADD EAX,0x4
0061D815  C1 E1 04                  SHL ECX,0x4
0061D818  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061D81B  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
0061D81E  8B 73 57                  MOV ESI,dword ptr [EBX + 0x57]
0061D821  8B D1                     MOV EDX,ECX
0061D823  8B F8                     MOV EDI,EAX
0061D825  03 C2                     ADD EAX,EDX
0061D827  C1 E9 02                  SHR ECX,0x2
0061D82A  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D82C  8B CA                     MOV ECX,EDX
0061D82E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061D831  83 E1 03                  AND ECX,0x3
0061D834  8D 45 F4                  LEA EAX,[EBP + -0xc]
0061D837  F3 A4                     MOVSB.REP ES:EDI,ESI
0061D839  8B 8B A3 00 00 00         MOV ECX,dword ptr [EBX + 0xa3]
0061D83F  50                        PUSH EAX
0061D840  51                        PUSH ECX
0061D841  E8 DA 27 09 00            CALL 0x006b0020
0061D846  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0061D849  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061D84C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061D84F  83 C2 04                  ADD EDX,0x4
0061D852  89 10                     MOV dword ptr [EAX],EDX
0061D854  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061D857  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0061D85A  8D 78 04                  LEA EDI,[EAX + 0x4]
0061D85D  8B C1                     MOV EAX,ECX
0061D85F  C1 E9 02                  SHR ECX,0x2
0061D862  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D864  8B C8                     MOV ECX,EAX
0061D866  83 E1 03                  AND ECX,0x3
0061D869  F3 A4                     MOVSB.REP ES:EDI,ESI
0061D86B  8D 4D F0                  LEA ECX,[EBP + -0x10]
0061D86E  51                        PUSH ECX
0061D86F  E8 EC D7 08 00            CALL 0x006ab060
0061D874  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061D877  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061D87A  5F                        POP EDI
0061D87B  5E                        POP ESI
0061D87C  89 02                     MOV dword ptr [EDX],EAX
0061D87E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0061D881  5B                        POP EBX
0061D882  8B E5                     MOV ESP,EBP
0061D884  5D                        POP EBP
0061D885  C2 04 00                  RET 0x4
