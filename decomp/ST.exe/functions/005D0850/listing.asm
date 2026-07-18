FUN_005d0850:
005D0850  55                        PUSH EBP
005D0851  8B EC                     MOV EBP,ESP
005D0853  83 EC 48                  SUB ESP,0x48
005D0856  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D085C  53                        PUSH EBX
005D085D  56                        PUSH ESI
005D085E  57                        PUSH EDI
005D085F  85 C0                     TEST EAX,EAX
005D0861  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D0864  0F 84 3F 01 00 00         JZ 0x005d09a9
005D086A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D086F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D0872  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D0875  6A 00                     PUSH 0x0
005D0877  52                        PUSH EDX
005D0878  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D087B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0881  E8 6A CF 15 00            CALL 0x0072d7f0
005D0886  8B F0                     MOV ESI,EAX
005D0888  83 C4 08                  ADD ESP,0x8
005D088B  85 F6                     TEST ESI,ESI
005D088D  0F 85 D7 00 00 00         JNZ 0x005d096a
005D0893  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005D0896  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005D0899  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D089F  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
005D08A2  73 0D                     JNC 0x005d08b1
005D08A4  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005D08A7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D08AA  0F AF F7                  IMUL ESI,EDI
005D08AD  03 F1                     ADD ESI,ECX
005D08AF  EB 02                     JMP 0x005d08b3
LAB_005d08b1:
005D08B1  33 F6                     XOR ESI,ESI
LAB_005d08b3:
005D08B3  85 F6                     TEST ESI,ESI
005D08B5  0F 84 9E 00 00 00         JZ 0x005d0959
005D08BB  80 3E 00                  CMP byte ptr [ESI],0x0
005D08BE  0F 84 95 00 00 00         JZ 0x005d0959
005D08C4  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D08C7  3C FF                     CMP AL,0xff
005D08C9  74 0B                     JZ 0x005d08d6
005D08CB  50                        PUSH EAX
005D08CC  B9 20 76 80 00            MOV ECX,0x807620
005D08D1  E8 91 36 E3 FF            CALL 0x00403f67
LAB_005d08d6:
005D08D6  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
005D08D9  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005D08DC  80 F9 02                  CMP CL,0x2
005D08DF  88 46 02                  MOV byte ptr [ESI + 0x2],AL
005D08E2  75 12                     JNZ 0x005d08f6
005D08E4  8B 4E 06                  MOV ECX,dword ptr [ESI + 0x6]
005D08E7  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005D08ED  3B CA                     CMP ECX,EDX
005D08EF  75 05                     JNZ 0x005d08f6
005D08F1  A2 4D 87 80 00            MOV [0x0080874d],AL
LAB_005d08f6:
005D08F6  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D08FC  8D 57 01                  LEA EDX,[EDI + 0x1]
005D08FF  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D0902  3B D0                     CMP EDX,EAX
005D0904  7D 3F                     JGE 0x005d0945
LAB_005d0906:
005D0906  73 0D                     JNC 0x005d0915
005D0908  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D090B  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
005D090E  0F AF C2                  IMUL EAX,EDX
005D0911  03 C6                     ADD EAX,ESI
005D0913  EB 02                     JMP 0x005d0917
LAB_005d0915:
005D0915  33 C0                     XOR EAX,EAX
LAB_005d0917:
005D0917  85 C0                     TEST EAX,EAX
005D0919  74 2A                     JZ 0x005d0945
005D091B  80 38 00                  CMP byte ptr [EAX],0x0
005D091E  75 25                     JNZ 0x005d0945
005D0920  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
005D0923  88 48 02                  MOV byte ptr [EAX + 0x2],CL
005D0926  8B 40 06                  MOV EAX,dword ptr [EAX + 0x6]
005D0929  3B 05 7F 87 80 00         CMP EAX,dword ptr [0x0080877f]
005D092F  75 06                     JNZ 0x005d0937
005D0931  88 0D 4D 87 80 00         MOV byte ptr [0x0080874d],CL
LAB_005d0937:
005D0937  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D093D  42                        INC EDX
005D093E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D0941  3B D0                     CMP EDX,EAX
005D0943  7C C1                     JL 0x005d0906
LAB_005d0945:
005D0945  8B 13                     MOV EDX,dword ptr [EBX]
005D0947  8B CB                     MOV ECX,EBX
005D0949  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D094C  8B CB                     MOV ECX,EBX
005D094E  E8 47 21 E3 FF            CALL 0x00402a9a
005D0953  FF 83 21 21 00 00         INC dword ptr [EBX + 0x2121]
LAB_005d0959:
005D0959  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D095C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D0961  5F                        POP EDI
005D0962  5E                        POP ESI
005D0963  5B                        POP EBX
005D0964  8B E5                     MOV ESP,EBP
005D0966  5D                        POP EBP
005D0967  C2 08 00                  RET 0x8
LAB_005d096a:
005D096A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D096D  68 34 D4 7C 00            PUSH 0x7cd434
005D0972  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D0977  56                        PUSH ESI
005D0978  6A 00                     PUSH 0x0
005D097A  68 98 05 00 00            PUSH 0x598
005D097F  68 58 D2 7C 00            PUSH 0x7cd258
005D0984  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D098A  E8 41 CB 0D 00            CALL 0x006ad4d0
005D098F  83 C4 18                  ADD ESP,0x18
005D0992  85 C0                     TEST EAX,EAX
005D0994  74 01                     JZ 0x005d0997
005D0996  CC                        INT3
LAB_005d0997:
005D0997  68 98 05 00 00            PUSH 0x598
005D099C  68 58 D2 7C 00            PUSH 0x7cd258
005D09A1  6A 00                     PUSH 0x0
005D09A3  56                        PUSH ESI
005D09A4  E8 97 54 0D 00            CALL 0x006a5e40
LAB_005d09a9:
005D09A9  5F                        POP EDI
005D09AA  5E                        POP ESI
005D09AB  5B                        POP EBX
005D09AC  8B E5                     MOV ESP,EBP
005D09AE  5D                        POP EBP
005D09AF  C2 08 00                  RET 0x8
