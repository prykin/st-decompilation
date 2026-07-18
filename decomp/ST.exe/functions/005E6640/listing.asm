ChooseMapTy::OutListProc:
005E6640  55                        PUSH EBP
005E6641  8B EC                     MOV EBP,ESP
005E6643  83 EC 4C                  SUB ESP,0x4c
005E6646  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005E6649  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005E664F  53                        PUSH EBX
005E6650  56                        PUSH ESI
005E6651  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005E6654  57                        PUSH EDI
005E6655  8D 45 B8                  LEA EAX,[EBP + -0x48]
005E6658  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005E665B  6A 00                     PUSH 0x0
005E665D  50                        PUSH EAX
005E665E  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005E6661  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E6667  E8 84 71 14 00            CALL 0x0072d7f0
005E666C  8B F0                     MOV ESI,EAX
005E666E  83 C4 08                  ADD ESP,0x8
005E6671  85 F6                     TEST ESI,ESI
005E6673  75 76                     JNZ 0x005e66eb
005E6675  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005E6678  85 C9                     TEST ECX,ECX
005E667A  74 5D                     JZ 0x005e66d9
005E667C  8B B1 EC 1A 00 00         MOV ESI,dword ptr [ECX + 0x1aec]
005E6682  85 F6                     TEST ESI,ESI
005E6684  74 53                     JZ 0x005e66d9
005E6686  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005E6689  80 CB FF                  OR BL,0xff
005E668C  32 C0                     XOR AL,AL
005E668E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_005e6691:
005E6691  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005E6694  81 E7 FF 00 00 00         AND EDI,0xff
005E669A  39 94 B9 94 1A 00 00      CMP dword ptr [ECX + EDI*0x4 + 0x1a94],EDX
005E66A1  74 0B                     JZ 0x005e66ae
005E66A3  FE C0                     INC AL
005E66A5  3C 16                     CMP AL,0x16
005E66A7  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005E66AA  72 E5                     JC 0x005e6691
005E66AC  EB 02                     JMP 0x005e66b0
LAB_005e66ae:
005E66AE  8A D8                     MOV BL,AL
LAB_005e66b0:
005E66B0  80 FB FF                  CMP BL,0xff
005E66B3  74 24                     JZ 0x005e66d9
005E66B5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005E66B8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005E66BB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005E66BE  6A 00                     PUSH 0x0
005E66C0  51                        PUSH ECX
005E66C1  8D 48 C1                  LEA ECX,[EAX + -0x3f]
005E66C4  52                        PUSH EDX
005E66C5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005E66C8  51                        PUSH ECX
005E66C9  6A 00                     PUSH 0x0
005E66CB  6A 00                     PUSH 0x0
005E66CD  56                        PUSH ESI
005E66CE  50                        PUSH EAX
005E66CF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E66D2  52                        PUSH EDX
005E66D3  50                        PUSH EAX
005E66D4  E8 A7 DF 0C 00            CALL 0x006b4680
LAB_005e66d9:
005E66D9  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005E66DC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E66E2  5F                        POP EDI
005E66E3  5E                        POP ESI
005E66E4  5B                        POP EBX
005E66E5  8B E5                     MOV ESP,EBP
005E66E7  5D                        POP EBP
005E66E8  C2 20 00                  RET 0x20
LAB_005e66eb:
005E66EB  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005E66EE  68 50 C7 7C 00            PUSH 0x7cc750
005E66F3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E66F8  56                        PUSH ESI
005E66F9  6A 00                     PUSH 0x0
005E66FB  6A 1C                     PUSH 0x1c
005E66FD  68 5C DD 7C 00            PUSH 0x7cdd5c
005E6702  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E6708  E8 C3 6D 0C 00            CALL 0x006ad4d0
005E670D  83 C4 18                  ADD ESP,0x18
005E6710  85 C0                     TEST EAX,EAX
005E6712  74 01                     JZ 0x005e6715
005E6714  CC                        INT3
LAB_005e6715:
005E6715  6A 1C                     PUSH 0x1c
005E6717  68 5C DD 7C 00            PUSH 0x7cdd5c
005E671C  6A 00                     PUSH 0x0
005E671E  56                        PUSH ESI
005E671F  E8 1C F7 0B 00            CALL 0x006a5e40
005E6724  5F                        POP EDI
005E6725  5E                        POP ESI
005E6726  5B                        POP EBX
005E6727  8B E5                     MOV ESP,EBP
005E6729  5D                        POP EBP
005E672A  C2 20 00                  RET 0x20
