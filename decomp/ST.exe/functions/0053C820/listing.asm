FUN_0053c820:
0053C820  55                        PUSH EBP
0053C821  8B EC                     MOV EBP,ESP
0053C823  83 EC 58                  SUB ESP,0x58
0053C826  53                        PUSH EBX
0053C827  56                        PUSH ESI
0053C828  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053C82B  57                        PUSH EDI
0053C82C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053C82F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053C832  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0053C835  8B 10                     MOV EDX,dword ptr [EAX]
0053C837  2B D6                     SUB EDX,ESI
0053C839  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0053C83C  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053C83F  85 D2                     TEST EDX,EDX
0053C841  75 10                     JNZ 0x0053c853
0053C843  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0053C846  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
0053C84C  2B C2                     SUB EAX,EDX
0053C84E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0053C851  EB 0B                     JMP 0x0053c85e
LAB_0053c853:
0053C853  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053C856  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053C859  2B D0                     SUB EDX,EAX
0053C85B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0053c85e:
0053C85E  8B 81 99 01 00 00         MOV EAX,dword ptr [ECX + 0x199]
0053C864  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
0053C867  8D B4 10 51 3F FF FF      LEA ESI,[EAX + EDX*0x1 + 0xffff3f51]
0053C86E  33 C0                     XOR EAX,EAX
0053C870  8A 81 78 02 00 00         MOV AL,byte ptr [ECX + 0x278]
0053C876  8B 94 81 7A 02 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x27a]
0053C87D  85 D2                     TEST EDX,EDX
0053C87F  74 10                     JZ 0x0053c891
0053C881  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
0053C884  73 0B                     JNC 0x0053c891
0053C886  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0053C889  0F AF C6                  IMUL EAX,ESI
0053C88C  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0053C88F  EB 02                     JMP 0x0053c893
LAB_0053c891:
0053C891  33 C0                     XOR EAX,EAX
LAB_0053c893:
0053C893  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
0053C898  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053C89B  74 1A                     JZ 0x0053c8b7
0053C89D  85 C0                     TEST EAX,EAX
0053C89F  74 16                     JZ 0x0053c8b7
0053C8A1  8B 08                     MOV ECX,dword ptr [EAX]
0053C8A3  8A 10                     MOV DL,byte ptr [EAX]
0053C8A5  C1 E9 10                  SHR ECX,0x10
0053C8A8  51                        PUSH ECX
0053C8A9  52                        PUSH EDX
0053C8AA  E8 41 6B EC FF            CALL 0x004033f0
0053C8AF  83 C4 08                  ADD ESP,0x8
0053C8B2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053C8B5  EB 1E                     JMP 0x0053c8d5
LAB_0053c8b7:
0053C8B7  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
0053C8BD  8B 81 88 01 00 00         MOV EAX,dword ptr [ECX + 0x188]
0053C8C3  33 D2                     XOR EDX,EDX
0053C8C5  80 FB 03                  CMP BL,0x3
0053C8C8  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
0053C8CC  0F 95 C2                  SETNZ DL
0053C8CF  42                        INC EDX
0053C8D0  2B CA                     SUB ECX,EDX
0053C8D2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0053c8d5:
0053C8D5  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053C8DA  8D 55 AC                  LEA EDX,[EBP + -0x54]
0053C8DD  8D 4D A8                  LEA ECX,[EBP + -0x58]
0053C8E0  6A 00                     PUSH 0x0
0053C8E2  52                        PUSH EDX
0053C8E3  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0053C8E6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053C8EC  E8 FF 0E 1F 00            CALL 0x0072d7f0
0053C8F1  8B F0                     MOV ESI,EAX
0053C8F3  83 C4 08                  ADD ESP,0x8
0053C8F6  85 F6                     TEST ESI,ESI
0053C8F8  0F 85 AF 00 00 00         JNZ 0x0053c9ad
0053C8FE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053C901  85 C0                     TEST EAX,EAX
0053C903  74 17                     JZ 0x0053c91c
0053C905  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0053C908  84 C9                     TEST CL,CL
0053C90A  74 10                     JZ 0x0053c91c
0053C90C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0053C90F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053C912  50                        PUSH EAX
0053C913  8B 8E 88 01 00 00         MOV ECX,dword ptr [ESI + 0x188]
0053C919  51                        PUSH ECX
0053C91A  EB 0E                     JMP 0x0053c92a
LAB_0053c91c:
0053C91C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0053C91F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053C922  52                        PUSH EDX
0053C923  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
0053C929  50                        PUSH EAX
LAB_0053c92a:
0053C92A  E8 71 EA 1C 00            CALL 0x0070b3a0
0053C92F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0053C932  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0053C935  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053C938  83 C4 08                  ADD ESP,0x8
0053C93B  50                        PUSH EAX
0053C93C  6A 01                     PUSH 0x1
0053C93E  57                        PUSH EDI
0053C93F  53                        PUSH EBX
0053C940  51                        PUSH ECX
0053C941  E8 E3 68 EC FF            CALL 0x00403229
0053C946  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0053C949  83 C4 14                  ADD ESP,0x14
0053C94C  66 83 7A 14 03            CMP word ptr [EDX + 0x14],0x3
0053C951  75 2F                     JNZ 0x0053c982
0053C953  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053C956  85 C0                     TEST EAX,EAX
0053C958  74 28                     JZ 0x0053c982
0053C95A  8A 40 08                  MOV AL,byte ptr [EAX + 0x8]
0053C95D  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
0053C963  F6 D8                     NEG AL
0053C965  1B C0                     SBB EAX,EAX
0053C967  83 C0 07                  ADD EAX,0x7
0053C96A  50                        PUSH EAX
0053C96B  51                        PUSH ECX
0053C96C  E8 2F EA 1C 00            CALL 0x0070b3a0
0053C971  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053C974  50                        PUSH EAX
0053C975  6A 06                     PUSH 0x6
0053C977  57                        PUSH EDI
0053C978  53                        PUSH EBX
0053C979  52                        PUSH EDX
0053C97A  E8 AA 68 EC FF            CALL 0x00403229
0053C97F  83 C4 1C                  ADD ESP,0x1c
LAB_0053c982:
0053C982  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053C985  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053C988  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053C98B  50                        PUSH EAX
0053C98C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053C991  51                        PUSH ECX
0053C992  6A FF                     PUSH -0x1
0053C994  52                        PUSH EDX
0053C995  50                        PUSH EAX
0053C996  E8 A5 6C 17 00            CALL 0x006b3640
0053C99B  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0053C99E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053C9A4  5F                        POP EDI
0053C9A5  5E                        POP ESI
0053C9A6  5B                        POP EBX
0053C9A7  8B E5                     MOV ESP,EBP
0053C9A9  5D                        POP EBP
0053C9AA  C2 04 00                  RET 0x4
LAB_0053c9ad:
0053C9AD  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0053C9B0  68 50 77 7C 00            PUSH 0x7c7750
0053C9B5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053C9BA  56                        PUSH ESI
0053C9BB  6A 00                     PUSH 0x0
0053C9BD  68 88 00 00 00            PUSH 0x88
0053C9C2  68 C8 76 7C 00            PUSH 0x7c76c8
0053C9C7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053C9CD  E8 FE 0A 17 00            CALL 0x006ad4d0
0053C9D2  83 C4 18                  ADD ESP,0x18
0053C9D5  85 C0                     TEST EAX,EAX
0053C9D7  74 01                     JZ 0x0053c9da
0053C9D9  CC                        INT3
LAB_0053c9da:
0053C9DA  68 88 00 00 00            PUSH 0x88
0053C9DF  68 C8 76 7C 00            PUSH 0x7c76c8
0053C9E4  6A 00                     PUSH 0x0
0053C9E6  56                        PUSH ESI
0053C9E7  E8 54 94 16 00            CALL 0x006a5e40
0053C9EC  5F                        POP EDI
0053C9ED  5E                        POP ESI
0053C9EE  5B                        POP EBX
0053C9EF  8B E5                     MOV ESP,EBP
0053C9F1  5D                        POP EBP
0053C9F2  C2 04 00                  RET 0x4
