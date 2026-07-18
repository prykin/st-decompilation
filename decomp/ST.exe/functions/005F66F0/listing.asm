FUN_005f66f0:
005F66F0  55                        PUSH EBP
005F66F1  8B EC                     MOV EBP,ESP
005F66F3  83 EC 1C                  SUB ESP,0x1c
005F66F6  53                        PUSH EBX
005F66F7  56                        PUSH ESI
005F66F8  57                        PUSH EDI
005F66F9  8B F1                     MOV ESI,ECX
005F66FB  68 C2 00 00 00            PUSH 0xc2
005F6700  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005F6703  E8 68 45 0B 00            CALL 0x006aac70
005F6708  85 F6                     TEST ESI,ESI
005F670A  8B D8                     MOV EBX,EAX
005F670C  74 08                     JZ 0x005f6716
005F670E  81 C6 31 02 00 00         ADD ESI,0x231
005F6714  EB 02                     JMP 0x005f6718
LAB_005f6716:
005F6716  33 F6                     XOR ESI,ESI
LAB_005f6718:
005F6718  B9 30 00 00 00            MOV ECX,0x30
005F671D  8B FB                     MOV EDI,EBX
005F671F  F3 A5                     MOVSD.REP ES:EDI,ESI
005F6721  66 A5                     MOVSW ES:EDI,ESI
005F6723  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F6726  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F6729  50                        PUSH EAX
005F672A  C7 43 0C 02 00 00 00      MOV dword ptr [EBX + 0xc],0x2
005F6731  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005F6737  E8 98 B1 E0 FF            CALL 0x004018d4
005F673C  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F673F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005F6742  51                        PUSH ECX
005F6743  8B CE                     MOV ECX,ESI
005F6745  E8 50 AA E0 FF            CALL 0x0040119a
005F674A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F674D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005F6750  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F6753  8D 84 10 CA 00 00 00      LEA EAX,[EAX + EDX*0x1 + 0xca]
005F675A  50                        PUSH EAX
005F675B  53                        PUSH EBX
005F675C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005F675F  E8 EC 67 0B 00            CALL 0x006acf50
005F6764  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F6767  8D 98 C2 00 00 00         LEA EBX,[EAX + 0xc2]
005F676D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F6770  8D 45 EC                  LEA EAX,[EBP + -0x14]
005F6773  89 0B                     MOV dword ptr [EBX],ECX
005F6775  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F6778  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005F677B  83 C3 04                  ADD EBX,0x4
005F677E  8B D1                     MOV EDX,ECX
005F6780  8B FB                     MOV EDI,EBX
005F6782  C1 E9 02                  SHR ECX,0x2
005F6785  F3 A5                     MOVSD.REP ES:EDI,ESI
005F6787  8B CA                     MOV ECX,EDX
005F6789  50                        PUSH EAX
005F678A  83 E1 03                  AND ECX,0x3
005F678D  F3 A4                     MOVSB.REP ES:EDI,ESI
005F678F  E8 CC 48 0B 00            CALL 0x006ab060
005F6794  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F6797  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F679A  03 D9                     ADD EBX,ECX
005F679C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F679F  50                        PUSH EAX
005F67A0  89 0B                     MOV dword ptr [EBX],ECX
005F67A2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F67A5  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005F67A8  8B D1                     MOV EDX,ECX
005F67AA  8D 7B 04                  LEA EDI,[EBX + 0x4]
005F67AD  C1 E9 02                  SHR ECX,0x2
005F67B0  F3 A5                     MOVSD.REP ES:EDI,ESI
005F67B2  8B CA                     MOV ECX,EDX
005F67B4  83 E1 03                  AND ECX,0x3
005F67B7  F3 A4                     MOVSB.REP ES:EDI,ESI
005F67B9  E8 A2 48 0B 00            CALL 0x006ab060
005F67BE  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005F67C1  8B 87 E6 02 00 00         MOV EAX,dword ptr [EDI + 0x2e6]
005F67C7  85 C0                     TEST EAX,EAX
005F67C9  74 6E                     JZ 0x005f6839
005F67CB  8B 48 58                  MOV ECX,dword ptr [EAX + 0x58]
005F67CE  85 C9                     TEST ECX,ECX
005F67D0  74 08                     JZ 0x005f67da
005F67D2  8B 58 5C                  MOV EBX,dword ptr [EAX + 0x5c]
005F67D5  C1 E3 02                  SHL EBX,0x2
005F67D8  EB 02                     JMP 0x005f67dc
LAB_005f67da:
005F67DA  33 DB                     XOR EBX,EBX
LAB_005f67dc:
005F67DC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F67DF  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005F67E2  8D 74 19 6C               LEA ESI,[ECX + EBX*0x1 + 0x6c]
005F67E6  56                        PUSH ESI
005F67E7  52                        PUSH EDX
005F67E8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005F67EB  E8 60 67 0B 00            CALL 0x006acf50
005F67F0  2B F3                     SUB ESI,EBX
005F67F2  B9 1B 00 00 00            MOV ECX,0x1b
005F67F7  85 DB                     TEST EBX,EBX
005F67F9  8D 54 06 94               LEA EDX,[ESI + EAX*0x1 + -0x6c]
005F67FD  8B B7 E6 02 00 00         MOV ESI,dword ptr [EDI + 0x2e6]
005F6803  8B FA                     MOV EDI,EDX
005F6805  F3 A5                     MOVSD.REP ES:EDI,ESI
005F6807  74 1F                     JZ 0x005f6828
005F6809  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F680C  8B CB                     MOV ECX,EBX
005F680E  8D 7A 6C                  LEA EDI,[EDX + 0x6c]
005F6811  8B D1                     MOV EDX,ECX
005F6813  8B B6 E6 02 00 00         MOV ESI,dword ptr [ESI + 0x2e6]
005F6819  C1 E9 02                  SHR ECX,0x2
005F681C  8B 76 58                  MOV ESI,dword ptr [ESI + 0x58]
005F681F  F3 A5                     MOVSD.REP ES:EDI,ESI
005F6821  8B CA                     MOV ECX,EDX
005F6823  83 E1 03                  AND ECX,0x3
005F6826  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005f6828:
005F6828  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F682B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F682E  5F                        POP EDI
005F682F  5E                        POP ESI
005F6830  89 11                     MOV dword ptr [ECX],EDX
005F6832  5B                        POP EBX
005F6833  8B E5                     MOV ESP,EBP
005F6835  5D                        POP EBP
005F6836  C2 04 00                  RET 0x4
LAB_005f6839:
005F6839  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F683C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F683F  5F                        POP EDI
005F6840  5E                        POP ESI
005F6841  89 08                     MOV dword ptr [EAX],ECX
005F6843  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005F6846  5B                        POP EBX
005F6847  8B E5                     MOV ESP,EBP
005F6849  5D                        POP EBP
005F684A  C2 04 00                  RET 0x4
