SettMapMTy::DeletePlayer:
005CFF40  55                        PUSH EBP
005CFF41  8B EC                     MOV EBP,ESP
005CFF43  83 EC 48                  SUB ESP,0x48
005CFF46  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005CFF4C  53                        PUSH EBX
005CFF4D  56                        PUSH ESI
005CFF4E  57                        PUSH EDI
005CFF4F  85 C0                     TEST EAX,EAX
005CFF51  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CFF54  0F 84 F5 00 00 00         JZ 0x005d004f
005CFF5A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CFF5F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005CFF62  8D 4D B8                  LEA ECX,[EBP + -0x48]
005CFF65  6A 00                     PUSH 0x0
005CFF67  52                        PUSH EDX
005CFF68  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005CFF6B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFF71  E8 7A D8 15 00            CALL 0x0072d7f0
005CFF76  8B F0                     MOV ESI,EAX
005CFF78  83 C4 08                  ADD ESP,0x8
005CFF7B  85 F6                     TEST ESI,ESI
005CFF7D  0F 85 8D 00 00 00         JNZ 0x005d0010
005CFF83  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005CFF86  33 D2                     XOR EDX,EDX
005CFF88  8B B0 84 1F 00 00         MOV ESI,dword ptr [EAX + 0x1f84]
005CFF8E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005CFF91  85 FF                     TEST EDI,EDI
005CFF93  7E 69                     JLE 0x005cfffe
005CFF95  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005CFF98  3B D7                     CMP EDX,EDI
LAB_005cff9a:
005CFF9A  73 0D                     JNC 0x005cffa9
005CFF9C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CFF9F  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005CFFA2  0F AF C2                  IMUL EAX,EDX
005CFFA5  03 C1                     ADD EAX,ECX
005CFFA7  EB 02                     JMP 0x005cffab
LAB_005cffa9:
005CFFA9  33 C0                     XOR EAX,EAX
LAB_005cffab:
005CFFAB  85 C0                     TEST EAX,EAX
005CFFAD  74 12                     JZ 0x005cffc1
005CFFAF  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005CFFB2  80 F9 02                  CMP CL,0x2
005CFFB5  74 05                     JZ 0x005cffbc
005CFFB7  80 F9 03                  CMP CL,0x3
005CFFBA  75 05                     JNZ 0x005cffc1
LAB_005cffbc:
005CFFBC  39 58 06                  CMP dword ptr [EAX + 0x6],EBX
005CFFBF  74 17                     JZ 0x005cffd8
LAB_005cffc1:
005CFFC1  42                        INC EDX
005CFFC2  3B D7                     CMP EDX,EDI
005CFFC4  7C D4                     JL 0x005cff9a
005CFFC6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005CFFC9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFFCF  5F                        POP EDI
005CFFD0  5E                        POP ESI
005CFFD1  5B                        POP EBX
005CFFD2  8B E5                     MOV ESP,EBP
005CFFD4  5D                        POP EBP
005CFFD5  C2 04 00                  RET 0x4
LAB_005cffd8:
005CFFD8  B1 01                     MOV CL,0x1
005CFFDA  C7 40 06 00 00 00 00      MOV dword ptr [EAX + 0x6],0x0
005CFFE1  88 48 04                  MOV byte ptr [EAX + 0x4],CL
005CFFE4  88 48 01                  MOV byte ptr [EAX + 0x1],CL
005CFFE7  80 38 00                  CMP byte ptr [EAX],0x0
005CFFEA  74 12                     JZ 0x005cfffe
005CFFEC  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
005CFFEF  3C 08                     CMP AL,0x8
005CFFF1  73 0B                     JNC 0x005cfffe
005CFFF3  50                        PUSH EAX
005CFFF4  B9 20 76 80 00            MOV ECX,0x807620
005CFFF9  E8 69 3F E3 FF            CALL 0x00403f67
LAB_005cfffe:
005CFFFE  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D0001  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0007  5F                        POP EDI
005D0008  5E                        POP ESI
005D0009  5B                        POP EBX
005D000A  8B E5                     MOV ESP,EBP
005D000C  5D                        POP EBP
005D000D  C2 04 00                  RET 0x4
LAB_005d0010:
005D0010  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D0013  68 D4 D3 7C 00            PUSH 0x7cd3d4
005D0018  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D001D  56                        PUSH ESI
005D001E  6A 00                     PUSH 0x0
005D0020  68 DC 04 00 00            PUSH 0x4dc
005D0025  68 58 D2 7C 00            PUSH 0x7cd258
005D002A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D0030  E8 9B D4 0D 00            CALL 0x006ad4d0
005D0035  83 C4 18                  ADD ESP,0x18
005D0038  85 C0                     TEST EAX,EAX
005D003A  74 01                     JZ 0x005d003d
005D003C  CC                        INT3
LAB_005d003d:
005D003D  68 DC 04 00 00            PUSH 0x4dc
005D0042  68 58 D2 7C 00            PUSH 0x7cd258
005D0047  6A 00                     PUSH 0x0
005D0049  56                        PUSH ESI
005D004A  E8 F1 5D 0D 00            CALL 0x006a5e40
LAB_005d004f:
005D004F  5F                        POP EDI
005D0050  5E                        POP ESI
005D0051  5B                        POP EBX
005D0052  8B E5                     MOV ESP,EBP
005D0054  5D                        POP EBP
005D0055  C2 04 00                  RET 0x4
