FUN_006ea190:
006EA190  55                        PUSH EBP
006EA191  8B EC                     MOV EBP,ESP
006EA193  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA199  56                        PUSH ESI
006EA19A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EA19D  57                        PUSH EDI
006EA19E  33 FF                     XOR EDI,EDI
006EA1A0  3B F0                     CMP ESI,EAX
006EA1A2  0F 83 AC 00 00 00         JNC 0x006ea254
006EA1A8  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA1AE  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006EA1B1  C1 E0 03                  SHL EAX,0x3
006EA1B4  2B C6                     SUB EAX,ESI
006EA1B6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA1B9  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
006EA1BC  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006EA1BF  F6 C4 80                  TEST AH,0x80
006EA1C2  0F 84 8C 00 00 00         JZ 0x006ea254
006EA1C8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EA1CB  8B 8A 94 00 00 00         MOV ECX,dword ptr [EDX + 0x94]
006EA1D1  3B C1                     CMP EAX,ECX
006EA1D3  73 6D                     JNC 0x006ea242
006EA1D5  8B 8A A4 00 00 00         MOV ECX,dword ptr [EDX + 0xa4]
006EA1DB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006EA1DE  8D 74 81 02               LEA ESI,[ECX + EAX*0x4 + 0x2]
006EA1E2  66 8B 4C 81 02            MOV CX,word ptr [ECX + EAX*0x4 + 0x2]
006EA1E7  8B C1                     MOV EAX,ECX
006EA1E9  C1 E8 06                  SHR EAX,0x6
006EA1EC  83 E0 01                  AND EAX,0x1
006EA1EF  85 FF                     TEST EDI,EDI
006EA1F1  74 13                     JZ 0x006ea206
006EA1F3  83 C9 40                  OR ECX,0x40
006EA1F6  5F                        POP EDI
006EA1F7  66 89 0E                  MOV word ptr [ESI],CX
006EA1FA  8B 0A                     MOV ECX,dword ptr [EDX]
006EA1FC  80 CD 04                  OR CH,0x4
006EA1FF  5E                        POP ESI
006EA200  89 0A                     MOV dword ptr [EDX],ECX
006EA202  5D                        POP EBP
006EA203  C2 0C 00                  RET 0xc
LAB_006ea206:
006EA206  81 E1 BF FF 00 00         AND ECX,0xffbf
006EA20C  66 89 0E                  MOV word ptr [ESI],CX
006EA20F  8B B2 94 00 00 00         MOV ESI,dword ptr [EDX + 0x94]
006EA215  33 C9                     XOR ECX,ECX
006EA217  85 F6                     TEST ESI,ESI
006EA219  7E 16                     JLE 0x006ea231
006EA21B  8B BA A4 00 00 00         MOV EDI,dword ptr [EDX + 0xa4]
006EA221  83 C7 02                  ADD EDI,0x2
LAB_006ea224:
006EA224  F6 07 40                  TEST byte ptr [EDI],0x40
006EA227  75 08                     JNZ 0x006ea231
006EA229  41                        INC ECX
006EA22A  83 C7 04                  ADD EDI,0x4
006EA22D  3B CE                     CMP ECX,ESI
006EA22F  7C F3                     JL 0x006ea224
LAB_006ea231:
006EA231  3B CE                     CMP ECX,ESI
006EA233  7C 30                     JL 0x006ea265
006EA235  8B 0A                     MOV ECX,dword ptr [EDX]
006EA237  5F                        POP EDI
006EA238  80 E5 FB                  AND CH,0xfb
006EA23B  5E                        POP ESI
006EA23C  89 0A                     MOV dword ptr [EDX],ECX
006EA23E  5D                        POP EBP
006EA23F  C2 0C 00                  RET 0xc
LAB_006ea242:
006EA242  68 1C EE 7E 00            PUSH 0x7eee1c
006EA247  E8 54 EF FF FF            CALL 0x006e91a0
006EA24C  8B C7                     MOV EAX,EDI
006EA24E  5F                        POP EDI
006EA24F  5E                        POP ESI
006EA250  5D                        POP EBP
006EA251  C2 0C 00                  RET 0xc
LAB_006ea254:
006EA254  83 FE FF                  CMP ESI,-0x1
006EA257  74 0A                     JZ 0x006ea263
006EA259  68 1C EE 7E 00            PUSH 0x7eee1c
006EA25E  E8 ED E9 FF FF            CALL 0x006e8c50
LAB_006ea263:
006EA263  8B C7                     MOV EAX,EDI
LAB_006ea265:
006EA265  5F                        POP EDI
006EA266  5E                        POP ESI
006EA267  5D                        POP EBP
006EA268  C2 0C 00                  RET 0xc
