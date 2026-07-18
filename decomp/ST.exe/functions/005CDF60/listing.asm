SettMapMTy::SendPlList:
005CDF60  55                        PUSH EBP
005CDF61  8B EC                     MOV EBP,ESP
005CDF63  83 EC 4C                  SUB ESP,0x4c
005CDF66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CDF6B  53                        PUSH EBX
005CDF6C  56                        PUSH ESI
005CDF6D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CDF70  57                        PUSH EDI
005CDF71  8D 55 B8                  LEA EDX,[EBP + -0x48]
005CDF74  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005CDF77  6A 00                     PUSH 0x0
005CDF79  52                        PUSH EDX
005CDF7A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005CDF7D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDF83  E8 68 F8 15 00            CALL 0x0072d7f0
005CDF88  8B F0                     MOV ESI,EAX
005CDF8A  83 C4 08                  ADD ESP,0x8
005CDF8D  85 F6                     TEST ESI,ESI
005CDF8F  0F 85 B2 00 00 00         JNZ 0x005ce047
005CDF95  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005CDF98  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CDF9E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
005CDFA1  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
005CDFA4  8B 83 2A 22 00 00         MOV EAX,dword ptr [EBX + 0x222a]
005CDFAA  C1 E6 05                  SHL ESI,0x5
005CDFAD  83 C6 09                  ADD ESI,0x9
005CDFB0  3B C6                     CMP EAX,ESI
005CDFB2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005CDFB5  73 19                     JNC 0x005cdfd0
005CDFB7  8B 8B 26 22 00 00         MOV ECX,dword ptr [EBX + 0x2226]
005CDFBD  56                        PUSH ESI
005CDFBE  51                        PUSH ECX
005CDFBF  E8 8C EF 0D 00            CALL 0x006acf50
005CDFC4  89 83 26 22 00 00         MOV dword ptr [EBX + 0x2226],EAX
005CDFCA  89 B3 2A 22 00 00         MOV dword ptr [EBX + 0x222a],ESI
LAB_005cdfd0:
005CDFD0  8B 83 26 22 00 00         MOV EAX,dword ptr [EBX + 0x2226]
005CDFD6  8B 93 21 21 00 00         MOV EDX,dword ptr [EBX + 0x2121]
005CDFDC  6A FF                     PUSH -0x1
005CDFDE  6A 01                     PUSH 0x1
005CDFE0  89 10                     MOV dword ptr [EAX],EDX
005CDFE2  8B 0D AB 8A 80 00         MOV ECX,dword ptr [0x00808aab]
005CDFE8  83 C0 04                  ADD EAX,0x4
005CDFEB  89 08                     MOV dword ptr [EAX],ECX
005CDFED  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005CDFF3  83 C0 04                  ADD EAX,0x4
005CDFF6  8D 4E F7                  LEA ECX,[ESI + -0x9]
005CDFF9  88 10                     MOV byte ptr [EAX],DL
005CDFFB  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005CE001  8D 78 01                  LEA EDI,[EAX + 0x1]
005CE004  8B C1                     MOV EAX,ECX
005CE006  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
005CE009  C1 E9 02                  SHR ECX,0x2
005CE00C  F3 A5                     MOVSD.REP ES:EDI,ESI
005CE00E  8B C8                     MOV ECX,EAX
005CE010  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CE013  83 E1 03                  AND ECX,0x3
005CE016  F3 A4                     MOVSB.REP ES:EDI,ESI
005CE018  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005CE01B  8B 93 26 22 00 00         MOV EDX,dword ptr [EBX + 0x2226]
005CE021  51                        PUSH ECX
005CE022  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CE028  52                        PUSH EDX
005CE029  6A 22                     PUSH 0x22
005CE02B  50                        PUSH EAX
005CE02C  51                        PUSH ECX
005CE02D  E8 2E 73 14 00            CALL 0x00715360
005CE032  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005CE035  83 C4 1C                  ADD ESP,0x1c
005CE038  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CE03E  5F                        POP EDI
005CE03F  5E                        POP ESI
005CE040  5B                        POP EBX
005CE041  8B E5                     MOV ESP,EBP
005CE043  5D                        POP EBP
005CE044  C2 04 00                  RET 0x4
LAB_005ce047:
005CE047  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005CE04A  68 64 D3 7C 00            PUSH 0x7cd364
005CE04F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CE054  56                        PUSH ESI
005CE055  6A 00                     PUSH 0x0
005CE057  68 30 02 00 00            PUSH 0x230
005CE05C  68 58 D2 7C 00            PUSH 0x7cd258
005CE061  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CE066  E8 65 F4 0D 00            CALL 0x006ad4d0
005CE06B  83 C4 18                  ADD ESP,0x18
005CE06E  85 C0                     TEST EAX,EAX
005CE070  74 01                     JZ 0x005ce073
005CE072  CC                        INT3
LAB_005ce073:
005CE073  68 30 02 00 00            PUSH 0x230
005CE078  68 58 D2 7C 00            PUSH 0x7cd258
005CE07D  6A 00                     PUSH 0x0
005CE07F  56                        PUSH ESI
005CE080  E8 BB 7D 0D 00            CALL 0x006a5e40
005CE085  5F                        POP EDI
005CE086  5E                        POP ESI
005CE087  5B                        POP EBX
005CE088  8B E5                     MOV ESP,EBP
005CE08A  5D                        POP EBP
005CE08B  C2 04 00                  RET 0x4
