FUN_004e2ad0:
004E2AD0  55                        PUSH EBP
004E2AD1  8B EC                     MOV EBP,ESP
004E2AD3  83 EC 20                  SUB ESP,0x20
004E2AD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E2AD9  53                        PUSH EBX
004E2ADA  56                        PUSH ESI
004E2ADB  83 F8 02                  CMP EAX,0x2
004E2ADE  8B F1                     MOV ESI,ECX
004E2AE0  0F 85 E2 00 00 00         JNZ 0x004e2bc8
004E2AE6  6A 01                     PUSH 0x1
004E2AE8  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004E2AF2  E8 00 02 F2 FF            CALL 0x00402cf7
004E2AF7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E2AFA  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E2AFD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2B03  53                        PUSH EBX
004E2B04  50                        PUSH EAX
004E2B05  E8 00 0D F2 FF            CALL 0x0040380a
004E2B0A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004E2B0D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E2B10  33 D2                     XOR EDX,EDX
004E2B12  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004E2B18  3B C2                     CMP EAX,EDX
004E2B1A  75 4D                     JNZ 0x004e2b69
004E2B1C  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E2B22  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2B28  50                        PUSH EAX
004E2B29  E8 89 1E F2 FF            CALL 0x004049b7
004E2B2E  25 FF 00 00 00            AND EAX,0xff
004E2B33  48                        DEC EAX
004E2B34  74 22                     JZ 0x004e2b58
004E2B36  48                        DEC EAX
004E2B37  74 0C                     JZ 0x004e2b45
004E2B39  48                        DEC EAX
004E2B3A  75 2D                     JNZ 0x004e2b69
004E2B3C  8B 16                     MOV EDX,dword ptr [ESI]
004E2B3E  68 8F 03 00 00            PUSH 0x38f
004E2B43  EB 1A                     JMP 0x004e2b5f
LAB_004e2b45:
004E2B45  8B 06                     MOV EAX,dword ptr [ESI]
004E2B47  68 D4 02 00 00            PUSH 0x2d4
004E2B4C  6A 04                     PUSH 0x4
004E2B4E  8B CE                     MOV ECX,ESI
004E2B50  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E2B56  EB 11                     JMP 0x004e2b69
LAB_004e2b58:
004E2B58  8B 16                     MOV EDX,dword ptr [ESI]
004E2B5A  68 0C 02 00 00            PUSH 0x20c
LAB_004e2b5f:
004E2B5F  6A 04                     PUSH 0x4
004E2B61  8B CE                     MOV ECX,ESI
004E2B63  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004e2b69:
004E2B69  A1 BC 17 81 00            MOV EAX,[0x008117bc]
004E2B6E  85 C0                     TEST EAX,EAX
004E2B70  74 56                     JZ 0x004e2bc8
004E2B72  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E2B75  57                        PUSH EDI
004E2B76  B9 08 00 00 00            MOV ECX,0x8
004E2B7B  33 C0                     XOR EAX,EAX
004E2B7D  8D 7D E0                  LEA EDI,[EBP + -0x20]
004E2B80  53                        PUSH EBX
004E2B81  F3 AB                     STOSD.REP ES:EDI
004E2B83  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004E2B87  66 8B 46 24               MOV AX,word ptr [ESI + 0x24]
004E2B8B  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
004E2B8F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2B95  52                        PUSH EDX
004E2B96  C7 45 F0 E6 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de6
004E2B9D  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
004E2BA1  66 89 5D F8               MOV word ptr [EBP + -0x8],BX
004E2BA5  E8 C1 EC F1 FF            CALL 0x0040186b
004E2BAA  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004E2BB0  40                        INC EAX
004E2BB1  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
004E2BB5  8D 55 E0                  LEA EDX,[EBP + -0x20]
004E2BB8  8B 01                     MOV EAX,dword ptr [ECX]
004E2BBA  52                        PUSH EDX
004E2BBB  FF 10                     CALL dword ptr [EAX]
004E2BBD  5F                        POP EDI
004E2BBE  5E                        POP ESI
004E2BBF  33 C0                     XOR EAX,EAX
004E2BC1  5B                        POP EBX
004E2BC2  8B E5                     MOV ESP,EBP
004E2BC4  5D                        POP EBP
004E2BC5  C2 0C 00                  RET 0xc
LAB_004e2bc8:
004E2BC8  5E                        POP ESI
004E2BC9  33 C0                     XOR EAX,EAX
004E2BCB  5B                        POP EBX
004E2BCC  8B E5                     MOV ESP,EBP
004E2BCE  5D                        POP EBP
004E2BCF  C2 0C 00                  RET 0xc
