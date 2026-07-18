FUN_0054ec20:
0054EC20  55                        PUSH EBP
0054EC21  8B EC                     MOV EBP,ESP
0054EC23  83 EC 54                  SUB ESP,0x54
0054EC26  8B 41 39                  MOV EAX,dword ptr [ECX + 0x39]
0054EC29  53                        PUSH EBX
0054EC2A  56                        PUSH ESI
0054EC2B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054EC2E  57                        PUSH EDI
0054EC2F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0054EC32  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0054EC38  8D 45 B0                  LEA EAX,[EBP + -0x50]
0054EC3B  8D 55 AC                  LEA EDX,[EBP + -0x54]
0054EC3E  6A 00                     PUSH 0x0
0054EC40  50                        PUSH EAX
0054EC41  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
0054EC48  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0054EC4B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054EC51  E8 9A EB 1D 00            CALL 0x0072d7f0
0054EC56  8B F0                     MOV ESI,EAX
0054EC58  83 C4 08                  ADD ESP,0x8
0054EC5B  85 F6                     TEST ESI,ESI
0054EC5D  0F 85 E6 00 00 00         JNZ 0x0054ed49
0054EC63  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0054EC66  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0054EC69  8B 4E 4F                  MOV ECX,dword ptr [ESI + 0x4f]
0054EC6C  89 01                     MOV dword ptr [ECX],EAX
0054EC6E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054EC71  85 C0                     TEST EAX,EAX
0054EC73  74 18                     JZ 0x0054ec8d
LAB_0054ec75:
0054EC75  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
0054EC78  8B 58 0F                  MOV EBX,dword ptr [EAX + 0xf]
0054EC7B  8B 00                     MOV EAX,dword ptr [EAX]
0054EC7D  03 D3                     ADD EDX,EBX
0054EC7F  85 C0                     TEST EAX,EAX
0054EC81  8D 7C 17 1B               LEA EDI,[EDI + EDX*0x1 + 0x1b]
0054EC85  75 EE                     JNZ 0x0054ec75
0054EC87  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054EC8A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0054ec8d:
0054EC8D  3B 7E 53                  CMP EDI,dword ptr [ESI + 0x53]
0054EC90  76 10                     JBE 0x0054eca2
0054EC92  8B 46 4F                  MOV EAX,dword ptr [ESI + 0x4f]
0054EC95  57                        PUSH EDI
0054EC96  50                        PUSH EAX
0054EC97  E8 B4 E2 15 00            CALL 0x006acf50
0054EC9C  89 46 4F                  MOV dword ptr [ESI + 0x4f],EAX
0054EC9F  89 7E 53                  MOV dword ptr [ESI + 0x53],EDI
LAB_0054eca2:
0054ECA2  8B 56 4F                  MOV EDX,dword ptr [ESI + 0x4f]
0054ECA5  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
0054ECA8  83 C2 04                  ADD EDX,0x4
0054ECAB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0054ECAE  85 C0                     TEST EAX,EAX
0054ECB0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054ECB3  74 38                     JZ 0x0054eced
LAB_0054ecb5:
0054ECB5  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
0054ECB8  8B 70 0F                  MOV ESI,dword ptr [EAX + 0xf]
0054ECBB  8B FA                     MOV EDI,EDX
0054ECBD  8D 4C 31 1B               LEA ECX,[ECX + ESI*0x1 + 0x1b]
0054ECC1  8B F0                     MOV ESI,EAX
0054ECC3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054ECC6  8B D9                     MOV EBX,ECX
0054ECC8  C1 E9 02                  SHR ECX,0x2
0054ECCB  F3 A5                     MOVSD.REP ES:EDI,ESI
0054ECCD  8B CB                     MOV ECX,EBX
0054ECCF  83 E1 03                  AND ECX,0x3
0054ECD2  F3 A4                     MOVSB.REP ES:EDI,ESI
0054ECD4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0054ECD7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0054ECDA  03 D7                     ADD EDX,EDI
0054ECDC  8B 4E 4F                  MOV ECX,dword ptr [ESI + 0x4f]
0054ECDF  8B 19                     MOV EBX,dword ptr [ECX]
0054ECE1  43                        INC EBX
0054ECE2  89 19                     MOV dword ptr [ECX],EBX
0054ECE4  8B 00                     MOV EAX,dword ptr [EAX]
0054ECE6  85 C0                     TEST EAX,EAX
0054ECE8  75 CB                     JNZ 0x0054ecb5
0054ECEA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0054eced:
0054ECED  8B 4E 39                  MOV ECX,dword ptr [ESI + 0x39]
0054ECF0  8D 46 39                  LEA EAX,[ESI + 0x39]
0054ECF3  85 C9                     TEST ECX,ECX
0054ECF5  74 06                     JZ 0x0054ecfd
0054ECF7  50                        PUSH EAX
0054ECF8  E8 93 AB 16 00            CALL 0x006b9890
LAB_0054ecfd:
0054ECFD  8B 46 4F                  MOV EAX,dword ptr [ESI + 0x4f]
0054ED00  83 38 00                  CMP dword ptr [EAX],0x0
0054ED03  74 34                     JZ 0x0054ed39
0054ED05  8B 0D 12 C5 80 00         MOV ECX,dword ptr [0x0080c512]
0054ED0B  85 C9                     TEST ECX,ECX
0054ED0D  75 2A                     JNZ 0x0054ed39
0054ED0F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0054ED12  6A FF                     PUSH -0x1
0054ED14  6A 01                     PUSH 0x1
0054ED16  52                        PUSH EDX
0054ED17  50                        PUSH EAX
0054ED18  A1 64 17 81 00            MOV EAX,[0x00811764]
0054ED1D  6A 38                     PUSH 0x38
0054ED1F  6A 01                     PUSH 0x1
0054ED21  50                        PUSH EAX
0054ED22  E8 39 66 1C 00            CALL 0x00715360
0054ED27  83 C4 1C                  ADD ESP,0x1c
0054ED2A  85 C0                     TEST EAX,EAX
0054ED2C  74 0B                     JZ 0x0054ed39
0054ED2E  6A 00                     PUSH 0x0
0054ED30  6A 04                     PUSH 0x4
0054ED32  8B CE                     MOV ECX,ESI
0054ED34  E8 B4 6C EB FF            CALL 0x004059ed
LAB_0054ed39:
0054ED39  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054ED3C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054ED42  5F                        POP EDI
0054ED43  5E                        POP ESI
0054ED44  5B                        POP EBX
0054ED45  8B E5                     MOV ESP,EBP
0054ED47  5D                        POP EBP
0054ED48  C3                        RET
LAB_0054ed49:
0054ED49  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0054ED4C  68 98 85 7C 00            PUSH 0x7c8598
0054ED51  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054ED56  56                        PUSH ESI
0054ED57  6A 00                     PUSH 0x0
0054ED59  68 E6 04 00 00            PUSH 0x4e6
0054ED5E  68 30 84 7C 00            PUSH 0x7c8430
0054ED63  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054ED69  E8 62 E7 15 00            CALL 0x006ad4d0
0054ED6E  83 C4 18                  ADD ESP,0x18
0054ED71  85 C0                     TEST EAX,EAX
0054ED73  74 01                     JZ 0x0054ed76
0054ED75  CC                        INT3
LAB_0054ed76:
0054ED76  68 E8 04 00 00            PUSH 0x4e8
0054ED7B  68 30 84 7C 00            PUSH 0x7c8430
0054ED80  6A 00                     PUSH 0x0
0054ED82  56                        PUSH ESI
0054ED83  E8 B8 70 15 00            CALL 0x006a5e40
0054ED88  5F                        POP EDI
0054ED89  5E                        POP ESI
0054ED8A  5B                        POP EBX
0054ED8B  8B E5                     MOV ESP,EBP
0054ED8D  5D                        POP EBP
0054ED8E  C3                        RET
