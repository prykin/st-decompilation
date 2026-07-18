FUN_005d06c0:
005D06C0  55                        PUSH EBP
005D06C1  8B EC                     MOV EBP,ESP
005D06C3  83 EC 48                  SUB ESP,0x48
005D06C6  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D06CC  53                        PUSH EBX
005D06CD  56                        PUSH ESI
005D06CE  57                        PUSH EDI
005D06CF  85 C0                     TEST EAX,EAX
005D06D1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D06D4  0F 84 1A 01 00 00         JZ 0x005d07f4
005D06DA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D06DF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D06E2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D06E5  6A 00                     PUSH 0x0
005D06E7  52                        PUSH EDX
005D06E8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D06EB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D06F1  E8 FA D0 15 00            CALL 0x0072d7f0
005D06F6  8B F0                     MOV ESI,EAX
005D06F8  83 C4 08                  ADD ESP,0x8
005D06FB  85 F6                     TEST ESI,ESI
005D06FD  0F 85 B2 00 00 00         JNZ 0x005d07b5
005D0703  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005D0706  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D0709  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005D070F  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D0712  73 0D                     JNC 0x005d0721
005D0714  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0717  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
005D071A  0F AF C2                  IMUL EAX,EDX
005D071D  03 C3                     ADD EAX,EBX
005D071F  EB 02                     JMP 0x005d0723
LAB_005d0721:
005D0721  33 C0                     XOR EAX,EAX
LAB_005d0723:
005D0723  85 C0                     TEST EAX,EAX
005D0725  74 7D                     JZ 0x005d07a4
005D0727  80 38 00                  CMP byte ptr [EAX],0x0
005D072A  74 78                     JZ 0x005d07a4
005D072C  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D072F  8A 5D 0C                  MOV BL,byte ptr [EBP + 0xc]
005D0732  80 F9 02                  CMP CL,0x2
005D0735  88 58 03                  MOV byte ptr [EAX + 0x3],BL
005D0738  75 13                     JNZ 0x005d074d
005D073A  8B 40 06                  MOV EAX,dword ptr [EAX + 0x6]
005D073D  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D0743  3B C1                     CMP EAX,ECX
005D0745  75 06                     JNZ 0x005d074d
005D0747  88 1D 4E 87 80 00         MOV byte ptr [0x0080874e],BL
LAB_005d074d:
005D074D  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005D0753  42                        INC EDX
005D0754  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D0757  3B D0                     CMP EDX,EAX
005D0759  7D 3C                     JGE 0x005d0797
LAB_005d075b:
005D075B  73 0D                     JNC 0x005d076a
005D075D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0760  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005D0763  0F AF C2                  IMUL EAX,EDX
005D0766  03 C7                     ADD EAX,EDI
005D0768  EB 02                     JMP 0x005d076c
LAB_005d076a:
005D076A  33 C0                     XOR EAX,EAX
LAB_005d076c:
005D076C  85 C0                     TEST EAX,EAX
005D076E  74 27                     JZ 0x005d0797
005D0770  80 38 00                  CMP byte ptr [EAX],0x0
005D0773  75 22                     JNZ 0x005d0797
005D0775  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
005D0778  88 58 03                  MOV byte ptr [EAX + 0x3],BL
005D077B  3B 0D 7F 87 80 00         CMP ECX,dword ptr [0x0080877f]
005D0781  75 06                     JNZ 0x005d0789
005D0783  88 1D 4E 87 80 00         MOV byte ptr [0x0080874e],BL
LAB_005d0789:
005D0789  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005D078F  42                        INC EDX
005D0790  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D0793  3B D0                     CMP EDX,EAX
005D0795  7C C4                     JL 0x005d075b
LAB_005d0797:
005D0797  8B 16                     MOV EDX,dword ptr [ESI]
005D0799  8B CE                     MOV ECX,ESI
005D079B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D079E  FF 86 21 21 00 00         INC dword ptr [ESI + 0x2121]
LAB_005d07a4:
005D07A4  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D07A7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D07AC  5F                        POP EDI
005D07AD  5E                        POP ESI
005D07AE  5B                        POP EBX
005D07AF  8B E5                     MOV ESP,EBP
005D07B1  5D                        POP EBP
005D07B2  C2 08 00                  RET 0x8
LAB_005d07b5:
005D07B5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D07B8  68 10 D4 7C 00            PUSH 0x7cd410
005D07BD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D07C2  56                        PUSH ESI
005D07C3  6A 00                     PUSH 0x0
005D07C5  68 7D 05 00 00            PUSH 0x57d
005D07CA  68 58 D2 7C 00            PUSH 0x7cd258
005D07CF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D07D5  E8 F6 CC 0D 00            CALL 0x006ad4d0
005D07DA  83 C4 18                  ADD ESP,0x18
005D07DD  85 C0                     TEST EAX,EAX
005D07DF  74 01                     JZ 0x005d07e2
005D07E1  CC                        INT3
LAB_005d07e2:
005D07E2  68 7D 05 00 00            PUSH 0x57d
005D07E7  68 58 D2 7C 00            PUSH 0x7cd258
005D07EC  6A 00                     PUSH 0x0
005D07EE  56                        PUSH ESI
005D07EF  E8 4C 56 0D 00            CALL 0x006a5e40
LAB_005d07f4:
005D07F4  5F                        POP EDI
005D07F5  5E                        POP ESI
005D07F6  5B                        POP EBX
005D07F7  8B E5                     MOV ESP,EBP
005D07F9  5D                        POP EBP
005D07FA  C2 08 00                  RET 0x8
