FUN_005ecfe0:
005ECFE0  55                        PUSH EBP
005ECFE1  8B EC                     MOV EBP,ESP
005ECFE3  51                        PUSH ECX
005ECFE4  53                        PUSH EBX
005ECFE5  56                        PUSH ESI
005ECFE6  57                        PUSH EDI
005ECFE7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005ECFEA  83 CB FF                  OR EBX,0xffffffff
005ECFED  8B F1                     MOV ESI,ECX
005ECFEF  85 FF                     TEST EDI,EDI
005ECFF1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005ECFF4  0F 8C 10 01 00 00         JL 0x005ed10a
005ECFFA  83 FF 05                  CMP EDI,0x5
005ECFFD  0F 8D 07 01 00 00         JGE 0x005ed10a
005ED003  66 8B 96 46 02 00 00      MOV DX,word ptr [ESI + 0x246]
005ED00A  0F BF CA                  MOVSX ECX,DX
005ED00D  3B F9                     CMP EDI,ECX
005ED00F  75 16                     JNZ 0x005ed027
005ED011  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005ED014  39 86 BA 02 00 00         CMP dword ptr [ESI + 0x2ba],EAX
005ED01A  75 0B                     JNZ 0x005ed027
005ED01C  5F                        POP EDI
005ED01D  5E                        POP ESI
005ED01E  33 C0                     XOR EAX,EAX
005ED020  5B                        POP EBX
005ED021  8B E5                     MOV ESP,EBP
005ED023  5D                        POP EBP
005ED024  C2 14 00                  RET 0x14
LAB_005ed027:
005ED027  8B C7                     MOV EAX,EDI
005ED029  2B C1                     SUB EAX,ECX
005ED02B  85 C0                     TEST EAX,EAX
005ED02D  7E 07                     JLE 0x005ed036
005ED02F  B8 01 00 00 00            MOV EAX,0x1
005ED034  EB 04                     JMP 0x005ed03a
LAB_005ed036:
005ED036  F7 D8                     NEG EAX
005ED038  1B C0                     SBB EAX,EAX
LAB_005ed03a:
005ED03A  66 8B 8E 44 02 00 00      MOV CX,word ptr [ESI + 0x244]
005ED041  03 D0                     ADD EDX,EAX
005ED043  66 8B 86 42 02 00 00      MOV AX,word ptr [ESI + 0x242]
005ED04A  66 85 C0                  TEST AX,AX
005ED04D  7C 61                     JL 0x005ed0b0
005ED04F  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005ED056  7D 58                     JGE 0x005ed0b0
005ED058  66 85 C9                  TEST CX,CX
005ED05B  7C 53                     JL 0x005ed0b0
005ED05D  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
005ED064  7D 4A                     JGE 0x005ed0b0
005ED066  66 85 D2                  TEST DX,DX
005ED069  7C 45                     JL 0x005ed0b0
005ED06B  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
005ED072  7D 3C                     JGE 0x005ed0b0
005ED074  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005ED07B  0F BF D2                  MOVSX EDX,DX
005ED07E  0F AF FA                  IMUL EDI,EDX
005ED081  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
005ED088  0F BF D9                  MOVSX EBX,CX
005ED08B  0F AF D3                  IMUL EDX,EBX
005ED08E  03 FA                     ADD EDI,EDX
005ED090  0F BF D0                  MOVSX EDX,AX
005ED093  03 FA                     ADD EDI,EDX
005ED095  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005ED09B  8B 14 FA                  MOV EDX,dword ptr [EDX + EDI*0x8]
005ED09E  85 D2                     TEST EDX,EDX
005ED0A0  74 08                     JZ 0x005ed0aa
005ED0A2  3B D6                     CMP EDX,ESI
005ED0A4  0F 85 A8 00 00 00         JNZ 0x005ed152
LAB_005ed0aa:
005ED0AA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005ED0AD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_005ed0b0:
005ED0B0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005ED0B3  6A 1E                     PUSH 0x1e
005ED0B5  6A 00                     PUSH 0x0
005ED0B7  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005ED0BA  8D 44 D0 64               LEA EAX,[EAX + EDX*0x8 + 0x64]
005ED0BE  0F BF D0                  MOVSX EDX,AX
005ED0C1  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
005ED0C4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ED0C7  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
005ED0CB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005ED0CE  50                        PUSH EAX
005ED0CF  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
005ED0D2  0F BF C9                  MOVSX ECX,CX
005ED0D5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ED0D8  8D 04 C5 64 00 00 00      LEA EAX,[EAX*0x8 + 0x64]
005ED0DF  0F BF C0                  MOVSX EAX,AX
005ED0E2  50                        PUSH EAX
005ED0E3  51                        PUSH ECX
005ED0E4  52                        PUSH EDX
005ED0E5  8B CE                     MOV ECX,ESI
005ED0E7  E8 DA 6E E1 FF            CALL 0x00403fc6
005ED0EC  85 C0                     TEST EAX,EAX
005ED0EE  74 65                     JZ 0x005ed155
005ED0F0  BB 01 00 00 00            MOV EBX,0x1
005ED0F5  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
005ED0FF  5F                        POP EDI
005ED100  8B C3                     MOV EAX,EBX
005ED102  5E                        POP ESI
005ED103  5B                        POP EBX
005ED104  8B E5                     MOV ESP,EBP
005ED106  5D                        POP EBP
005ED107  C2 14 00                  RET 0x14
LAB_005ed10a:
005ED10A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005ED10D  83 FA FF                  CMP EDX,-0x1
005ED110  74 43                     JZ 0x005ed155
005ED112  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005ED115  83 F9 FF                  CMP ECX,-0x1
005ED118  74 3B                     JZ 0x005ed155
005ED11A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005ED11D  83 F8 FF                  CMP EAX,-0x1
005ED120  74 33                     JZ 0x005ed155
005ED122  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
005ED125  6A 1E                     PUSH 0x1e
005ED127  6A 00                     PUSH 0x0
005ED129  57                        PUSH EDI
005ED12A  50                        PUSH EAX
005ED12B  51                        PUSH ECX
005ED12C  52                        PUSH EDX
005ED12D  8B CE                     MOV ECX,ESI
005ED12F  E8 92 6E E1 FF            CALL 0x00403fc6
005ED134  85 C0                     TEST EAX,EAX
005ED136  74 1A                     JZ 0x005ed152
005ED138  BB 01 00 00 00            MOV EBX,0x1
005ED13D  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
005ED147  5F                        POP EDI
005ED148  8B C3                     MOV EAX,EBX
005ED14A  5E                        POP ESI
005ED14B  5B                        POP EBX
005ED14C  8B E5                     MOV ESP,EBP
005ED14E  5D                        POP EBP
005ED14F  C2 14 00                  RET 0x14
LAB_005ed152:
005ED152  83 CB FF                  OR EBX,0xffffffff
LAB_005ed155:
005ED155  5F                        POP EDI
005ED156  8B C3                     MOV EAX,EBX
005ED158  5E                        POP ESI
005ED159  5B                        POP EBX
005ED15A  8B E5                     MOV ESP,EBP
005ED15C  5D                        POP EBP
005ED15D  C2 14 00                  RET 0x14
