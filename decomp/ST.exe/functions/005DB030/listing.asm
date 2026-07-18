FUN_005db030:
005DB030  55                        PUSH EBP
005DB031  8B EC                     MOV EBP,ESP
005DB033  B8 14 1E 00 00            MOV EAX,0x1e14
005DB038  E8 03 2A 15 00            CALL 0x0072da40
005DB03D  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
005DB040  53                        PUSH EBX
005DB041  33 C0                     XOR EAX,EAX
005DB043  56                        PUSH ESI
005DB044  84 C9                     TEST CL,CL
005DB046  57                        PUSH EDI
005DB047  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DB04A  0F 85 B8 01 00 00         JNZ 0x005db208
005DB050  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005DB053  8D 85 EC E1 FF FF         LEA EAX,[EBP + 0xffffe1ec]
005DB059  8D 4D DC                  LEA ECX,[EBP + -0x24]
005DB05C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005DB05F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005DB062  8D 85 88 FB FF FF         LEA EAX,[EBP + 0xfffffb88]
005DB068  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005DB06B  6A 00                     PUSH 0x0
005DB06D  8D 8D 90 FD FF FF         LEA ECX,[EBP + 0xfffffd90]
005DB073  50                        PUSH EAX
005DB074  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005DB077  8D 95 8C FC FF FF         LEA EDX,[EBP + 0xfffffc8c]
005DB07D  51                        PUSH ECX
005DB07E  52                        PUSH EDX
005DB07F  50                        PUSH EAX
005DB080  C7 45 F0 05 04 00 8F      MOV dword ptr [EBP + -0x10],0x8f000405
005DB087  C7 45 F8 05 02 00 8F      MOV dword ptr [EBP + -0x8],0x8f000205
005DB08E  C7 45 F4 05 08 00 8F      MOV dword ptr [EBP + -0xc],0x8f000805
005DB095  E8 96 36 15 00            CALL 0x0072e730
005DB09A  8D 8D 88 FB FF FF         LEA ECX,[EBP + 0xfffffb88]
005DB0A0  6A 00                     PUSH 0x0
005DB0A2  8D 95 90 FD FF FF         LEA EDX,[EBP + 0xfffffd90]
005DB0A8  51                        PUSH ECX
005DB0A9  8D 85 8C FC FF FF         LEA EAX,[EBP + 0xfffffc8c]
005DB0AF  52                        PUSH EDX
005DB0B0  8D 8D 94 FE FF FF         LEA ECX,[EBP + 0xfffffe94]
005DB0B6  50                        PUSH EAX
005DB0B7  51                        PUSH ECX
005DB0B8  E8 53 40 15 00            CALL 0x0072f110
005DB0BD  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005DB0C3  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005DB0C6  8D 45 98                  LEA EAX,[EBP + -0x68]
005DB0C9  6A 00                     PUSH 0x0
005DB0CB  51                        PUSH ECX
005DB0CC  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
005DB0CF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DB0D4  E8 17 27 15 00            CALL 0x0072d7f0
005DB0D9  83 C4 30                  ADD ESP,0x30
005DB0DC  85 C0                     TEST EAX,EAX
005DB0DE  0F 85 18 01 00 00         JNZ 0x005db1fc
005DB0E4  50                        PUSH EAX
005DB0E5  50                        PUSH EAX
005DB0E6  8D 95 94 FE FF FF         LEA EDX,[EBP + 0xfffffe94]
005DB0EC  50                        PUSH EAX
005DB0ED  52                        PUSH EDX
005DB0EE  68 45 03 00 00            PUSH 0x345
005DB0F3  E8 C8 5D 11 00            CALL 0x006f0ec0
005DB0F8  8B 0D D8 C1 79 00         MOV ECX,dword ptr [0x0079c1d8]
005DB0FE  83 C4 14                  ADD ESP,0x14
005DB101  8B D8                     MOV EBX,EAX
005DB103  8D 45 E8                  LEA EAX,[EBP + -0x18]
005DB106  6A 00                     PUSH 0x0
005DB108  50                        PUSH EAX
005DB109  51                        PUSH ECX
005DB10A  6A 00                     PUSH 0x0
005DB10C  8B CB                     MOV ECX,EBX
005DB10E  E8 CD 6B 11 00            CALL 0x006f1ce0
005DB113  85 C0                     TEST EAX,EAX
005DB115  0F 84 C6 00 00 00         JZ 0x005db1e1
005DB11B  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005DB11E  80 3E 05                  CMP byte ptr [ESI],0x5
005DB121  75 20                     JNZ 0x005db143
005DB123  A1 C8 C1 79 00            MOV EAX,[0x0079c1c8]
005DB128  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005DB12B  6A 00                     PUSH 0x0
005DB12D  52                        PUSH EDX
005DB12E  50                        PUSH EAX
005DB12F  68 80 00 00 00            PUSH 0x80
005DB134  8B CB                     MOV ECX,EBX
005DB136  E8 A5 6B 11 00            CALL 0x006f1ce0
005DB13B  85 C0                     TEST EAX,EAX
005DB13D  0F 84 9E 00 00 00         JZ 0x005db1e1
LAB_005db143:
005DB143  8B 85 EC E1 FF FF         MOV EAX,dword ptr [EBP + 0xffffe1ec]
005DB149  33 C9                     XOR ECX,ECX
005DB14B  85 C0                     TEST EAX,EAX
005DB14D  74 61                     JZ 0x005db1b0
005DB14F  8B 95 F4 E1 FF FF         MOV EDX,dword ptr [EBP + 0xffffe1f4]
005DB155  8B 46 01                  MOV EAX,dword ptr [ESI + 0x1]
005DB158  3B D0                     CMP EDX,EAX
005DB15A  75 54                     JNZ 0x005db1b0
005DB15C  33 C0                     XOR EAX,EAX
005DB15E  8A 06                     MOV AL,byte ptr [ESI]
005DB160  83 C0 FE                  ADD EAX,-0x2
005DB163  83 F8 03                  CMP EAX,0x3
005DB166  77 48                     JA 0x005db1b0
switchD_005db168::switchD:
005DB168  FF 24 85 10 B2 5D 00      JMP dword ptr [EAX*0x4 + 0x5db210]
switchD_005db168::caseD_2:
005DB16F  8B 85 F0 E1 FF FF         MOV EAX,dword ptr [EBP + 0xffffe1f0]
005DB175  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005DB178  3B C2                     CMP EAX,EDX
005DB17A  74 2F                     JZ 0x005db1ab
005DB17C  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
005DB17F  75 2F                     JNZ 0x005db1b0
005DB181  EB 28                     JMP 0x005db1ab
switchD_005db168::caseD_3:
005DB183  8B 85 F0 E1 FF FF         MOV EAX,dword ptr [EBP + 0xffffe1f0]
005DB189  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DB18C  3B C2                     CMP EAX,EDX
005DB18E  75 20                     JNZ 0x005db1b0
005DB190  EB 19                     JMP 0x005db1ab
switchD_005db168::caseD_5:
005DB192  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
005DB195  8B 45 DF                  MOV EAX,dword ptr [EBP + -0x21]
005DB198  3B D0                     CMP EDX,EAX
005DB19A  75 14                     JNZ 0x005db1b0
005DB19C  EB 0D                     JMP 0x005db1ab
switchD_005db168::caseD_4:
005DB19E  8B 85 F0 E1 FF FF         MOV EAX,dword ptr [EBP + 0xffffe1f0]
005DB1A4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005DB1A7  3B C2                     CMP EAX,EDX
005DB1A9  75 05                     JNZ 0x005db1b0
LAB_005db1ab:
005DB1AB  B9 01 00 00 00            MOV ECX,0x1
switchD_005db168::default:
005DB1B0  85 C9                     TEST ECX,ECX
005DB1B2  74 2D                     JZ 0x005db1e1
005DB1B4  8D BD 94 FE FF FF         LEA EDI,[EBP + 0xfffffe94]
005DB1BA  83 C9 FF                  OR ECX,0xffffffff
005DB1BD  33 C0                     XOR EAX,EAX
005DB1BF  C7 45 FC 90 FF FF FF      MOV dword ptr [EBP + -0x4],0xffffff90
005DB1C6  F2 AE                     SCASB.REPNE ES:EDI
005DB1C8  F7 D1                     NOT ECX
005DB1CA  2B F9                     SUB EDI,ECX
005DB1CC  8B D1                     MOV EDX,ECX
005DB1CE  8B F7                     MOV ESI,EDI
005DB1D0  BF 16 ED 80 00            MOV EDI,0x80ed16
005DB1D5  C1 E9 02                  SHR ECX,0x2
005DB1D8  F3 A5                     MOVSD.REP ES:EDI,ESI
005DB1DA  8B CA                     MOV ECX,EDX
005DB1DC  83 E1 03                  AND ECX,0x3
005DB1DF  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005db1e1:
005DB1E1  53                        PUSH EBX
005DB1E2  E8 89 5F 11 00            CALL 0x006f1170
005DB1E7  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
005DB1EA  83 C4 04                  ADD ESP,0x4
005DB1ED  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DB1F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DB1F5  5F                        POP EDI
005DB1F6  5E                        POP ESI
005DB1F7  5B                        POP EBX
005DB1F8  8B E5                     MOV ESP,EBP
005DB1FA  5D                        POP EBP
005DB1FB  C3                        RET
LAB_005db1fc:
005DB1FC  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
005DB1FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DB202  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_005db208:
005DB208  5F                        POP EDI
005DB209  5E                        POP ESI
005DB20A  5B                        POP EBX
005DB20B  8B E5                     MOV ESP,EBP
005DB20D  5D                        POP EBP
005DB20E  C3                        RET
