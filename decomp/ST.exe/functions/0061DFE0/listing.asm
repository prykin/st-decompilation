FUN_0061dfe0:
0061DFE0  55                        PUSH EBP
0061DFE1  8B EC                     MOV EBP,ESP
0061DFE3  83 EC 08                  SUB ESP,0x8
0061DFE6  53                        PUSH EBX
0061DFE7  57                        PUSH EDI
0061DFE8  8B F9                     MOV EDI,ECX
0061DFEA  33 D2                     XOR EDX,EDX
0061DFEC  B9 03 00 00 00            MOV ECX,0x3
0061DFF1  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0061DFF4  8B 87 AC 00 00 00         MOV EAX,dword ptr [EDI + 0xac]
0061DFFA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061E000  05 39 30 00 00            ADD EAX,0x3039
0061E005  89 87 AC 00 00 00         MOV dword ptr [EDI + 0xac],EAX
0061E00B  C1 E8 10                  SHR EAX,0x10
0061E00E  F7 F1                     DIV ECX
0061E010  8B 87 A3 00 00 00         MOV EAX,dword ptr [EDI + 0xa3]
0061E016  8B DA                     MOV EBX,EDX
0061E018  8B 15 D0 32 80 00         MOV EDX,dword ptr [0x008032d0]
0061E01E  03 D9                     ADD EBX,ECX
0061E020  C1 E3 09                  SHL EBX,0x9
0061E023  03 DA                     ADD EBX,EDX
0061E025  85 C0                     TEST EAX,EAX
0061E027  0F 84 9D 00 00 00         JZ 0x0061e0ca
0061E02D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061E030  33 D2                     XOR EDX,EDX
0061E032  85 C9                     TEST ECX,ECX
0061E034  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061E037  0F 8E 8D 00 00 00         JLE 0x0061e0ca
0061E03D  56                        PUSH ESI
0061E03E  3B D1                     CMP EDX,ECX
LAB_0061e040:
0061E040  73 72                     JNC 0x0061e0b4
0061E042  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0061E045  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0061E048  0F AF F2                  IMUL ESI,EDX
0061E04B  03 F1                     ADD ESI,ECX
0061E04D  85 F6                     TEST ESI,ESI
0061E04F  74 63                     JZ 0x0061e0b4
0061E051  8B 56 21                  MOV EDX,dword ptr [ESI + 0x21]
0061E054  8A 46 20                  MOV AL,byte ptr [ESI + 0x20]
0061E057  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0061E05A  6A FF                     PUSH -0x1
0061E05C  53                        PUSH EBX
0061E05D  52                        PUSH EDX
0061E05E  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0061E061  50                        PUSH EAX
0061E062  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0061E065  51                        PUSH ECX
0061E066  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0061E069  52                        PUSH EDX
0061E06A  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0061E06D  50                        PUSH EAX
0061E06E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0061E071  51                        PUSH ECX
0061E072  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0061E075  52                        PUSH EDX
0061E076  8D 7E 26                  LEA EDI,[ESI + 0x26]
0061E079  50                        PUSH EAX
0061E07A  51                        PUSH ECX
0061E07B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061E081  57                        PUSH EDI
0061E082  E8 39 A8 0C 00            CALL 0x006e88c0
0061E087  8A 46 2F                  MOV AL,byte ptr [ESI + 0x2f]
0061E08A  84 C0                     TEST AL,AL
0061E08C  75 10                     JNZ 0x0061e09e
0061E08E  8B 17                     MOV EDX,dword ptr [EDI]
0061E090  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061E096  52                        PUSH EDX
0061E097  E8 C4 CA 0C 00            CALL 0x006eab60
0061E09C  EB 10                     JMP 0x0061e0ae
LAB_0061e09e:
0061E09E  8B 07                     MOV EAX,dword ptr [EDI]
0061E0A0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061E0A6  6A 00                     PUSH 0x0
0061E0A8  50                        PUSH EAX
0061E0A9  E8 F2 C9 0C 00            CALL 0x006eaaa0
LAB_0061e0ae:
0061E0AE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061E0B1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0061e0b4:
0061E0B4  8B 87 A3 00 00 00         MOV EAX,dword ptr [EDI + 0xa3]
0061E0BA  42                        INC EDX
0061E0BB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061E0BE  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061E0C1  3B D1                     CMP EDX,ECX
0061E0C3  0F 8C 77 FF FF FF         JL 0x0061e040
0061E0C9  5E                        POP ESI
LAB_0061e0ca:
0061E0CA  5F                        POP EDI
0061E0CB  5B                        POP EBX
0061E0CC  8B E5                     MOV ESP,EBP
0061E0CE  5D                        POP EBP
0061E0CF  C3                        RET
