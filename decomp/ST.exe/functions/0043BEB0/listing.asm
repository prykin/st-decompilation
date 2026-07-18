FUN_0043beb0:
0043BEB0  55                        PUSH EBP
0043BEB1  8B EC                     MOV EBP,ESP
0043BEB3  83 EC 68                  SUB ESP,0x68
0043BEB6  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0043BEB9  53                        PUSH EBX
0043BEBA  56                        PUSH ESI
0043BEBB  57                        PUSH EDI
0043BEBC  8B D1                     MOV EDX,ECX
0043BEBE  33 FF                     XOR EDI,EDI
0043BEC0  3C 01                     CMP AL,0x1
0043BEC2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0043BEC5  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0043BEC8  0F 85 D2 01 00 00         JNZ 0x0043c0a0
0043BECE  33 C0                     XOR EAX,EAX
0043BED0  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043BED5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043BED8  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043BEDB  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043BEDE  C1 E1 04                  SHL ECX,0x4
0043BEE1  03 C8                     ADD ECX,EAX
0043BEE3  8B 04 4D 83 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4f83]
0043BEEA  3B C7                     CMP EAX,EDI
0043BEEC  8D 1C 4D 83 4F 7F 00      LEA EBX,[ECX*0x2 + 0x7f4f83]
0043BEF3  0F 84 E7 19 00 00         JZ 0x0043d8e0
0043BEF9  83 F8 3C                  CMP EAX,0x3c
0043BEFC  74 47                     JZ 0x0043bf45
0043BEFE  3D AE 01 00 00            CMP EAX,0x1ae
0043BF03  74 30                     JZ 0x0043bf35
0043BF05  68 38 7F 7A 00            PUSH 0x7a7f38
0043BF0A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043BF0F  57                        PUSH EDI
0043BF10  57                        PUSH EDI
0043BF11  68 8A 1B 00 00            PUSH 0x1b8a
0043BF16  68 04 60 7A 00            PUSH 0x7a6004
0043BF1B  E8 B0 15 27 00            CALL 0x006ad4d0
0043BF20  83 C4 18                  ADD ESP,0x18
0043BF23  85 C0                     TEST EAX,EAX
0043BF25  0F 84 B5 19 00 00         JZ 0x0043d8e0
0043BF2B  CC                        INT3
LAB_0043bf35:
0043BF35  66 8B 43 08               MOV AX,word ptr [EBX + 0x8]
0043BF39  6A 03                     PUSH 0x3
0043BF3B  50                        PUSH EAX
0043BF3C  6A FF                     PUSH -0x1
0043BF3E  8B CA                     MOV ECX,EDX
0043BF40  E9 17 0C 00 00            JMP 0x0043cb5c
LAB_0043bf45:
0043BF45  66 8B 43 0E               MOV AX,word ptr [EBX + 0xe]
0043BF49  66 3D 01 00               CMP AX,0x1
0043BF4D  75 45                     JNZ 0x0043bf94
0043BF4F  8B 7B 0A                  MOV EDI,dword ptr [EBX + 0xa]
0043BF52  33 F6                     XOR ESI,ESI
0043BF54  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043BF57  85 C0                     TEST EAX,EAX
0043BF59  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043BF5C  0F 8E 7E 19 00 00         JLE 0x0043d8e0
LAB_0043bf62:
0043BF62  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043BF65  8B CF                     MOV ECX,EDI
0043BF67  52                        PUSH EDX
0043BF68  8B D6                     MOV EDX,ESI
0043BF6A  E8 01 0D 27 00            CALL 0x006acc70
0043BF6F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043BF72  66 3D FF FF               CMP AX,0xffff
0043BF76  75 11                     JNZ 0x0043bf89
0043BF78  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043BF7B  46                        INC ESI
0043BF7C  3B F0                     CMP ESI,EAX
0043BF7E  7C E2                     JL 0x0043bf62
0043BF80  5F                        POP EDI
0043BF81  5E                        POP ESI
0043BF82  5B                        POP EBX
0043BF83  8B E5                     MOV ESP,EBP
0043BF85  5D                        POP EBP
0043BF86  C2 08 00                  RET 0x8
LAB_0043bf89:
0043BF89  6A 01                     PUSH 0x1
0043BF8B  50                        PUSH EAX
0043BF8C  8A 43 04                  MOV AL,byte ptr [EBX + 0x4]
0043BF8F  E9 C4 0B 00 00            JMP 0x0043cb58
LAB_0043bf94:
0043BF94  0F 86 F7 00 00 00         JBE 0x0043c091
0043BF9A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0043BF9D  33 C0                     XOR EAX,EAX
0043BF9F  C6 06 02                  MOV byte ptr [ESI],0x2
0043BFA2  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043BFA7  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043BFAA  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043BFAD  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0043BFB0  C1 E2 04                  SHL EDX,0x4
0043BFB3  03 D0                     ADD EDX,EAX
0043BFB5  39 3C 55 23 50 7F 00      CMP dword ptr [EDX*0x2 + 0x7f5023],EDI
0043BFBC  75 06                     JNZ 0x0043bfc4
0043BFBE  C6 46 01 01               MOV byte ptr [ESI + 0x1],0x1
0043BFC2  EB 04                     JMP 0x0043bfc8
LAB_0043bfc4:
0043BFC4  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
LAB_0043bfc8:
0043BFC8  C6 46 02 01               MOV byte ptr [ESI + 0x2],0x1
0043BFCC  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043BFD1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043BFD7  50                        PUSH EAX
0043BFD8  E8 DA 89 FC FF            CALL 0x004049b7
0043BFDD  88 46 07                  MOV byte ptr [ESI + 0x7],AL
0043BFE0  8B 4B 0A                  MOV ECX,dword ptr [EBX + 0xa]
0043BFE3  8D 7E 2A                  LEA EDI,[ESI + 0x2a]
0043BFE6  33 D2                     XOR EDX,EDX
0043BFE8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0043BFEB  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0043BFEE  89 17                     MOV dword ptr [EDI],EDX
0043BFF0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043BFF3  88 57 04                  MOV byte ptr [EDI + 0x4],DL
0043BFF6  33 FF                     XOR EDI,EDI
0043BFF8  85 C0                     TEST EAX,EAX
0043BFFA  C6 46 1D 01               MOV byte ptr [ESI + 0x1d],0x1
0043BFFE  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0043C001  0F 8E D9 18 00 00         JLE 0x0043d8e0
0043C007  EB 03                     JMP 0x0043c00c
LAB_0043c009:
0043C009  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_0043c00c:
0043C00C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0043C00F  8B D7                     MOV EDX,EDI
0043C011  50                        PUSH EAX
0043C012  E8 59 0C 27 00            CALL 0x006acc70
0043C017  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043C01A  66 3D FF FF               CMP AX,0xffff
0043C01E  74 5D                     JZ 0x0043c07d
0043C020  8A 4B 04                  MOV CL,byte ptr [EBX + 0x4]
0043C023  6A 01                     PUSH 0x1
0043C025  50                        PUSH EAX
0043C026  51                        PUSH ECX
0043C027  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C02A  E8 8B 68 FC FF            CALL 0x004028ba
0043C02F  8B F8                     MOV EDI,EAX
0043C031  8D 55 0A                  LEA EDX,[EBP + 0xa]
0043C034  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043C037  52                        PUSH EDX
0043C038  8D 4D FE                  LEA ECX,[EBP + -0x2]
0043C03B  50                        PUSH EAX
0043C03C  51                        PUSH ECX
0043C03D  8B CF                     MOV ECX,EDI
0043C03F  E8 81 58 FC FF            CALL 0x004018c5
0043C044  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
0043C048  8B C6                     MOV EAX,ESI
0043C04A  8B CF                     MOV ECX,EDI
0043C04C  2B C2                     SUB EAX,EDX
0043C04E  C6 40 2E 01               MOV byte ptr [EAX + 0x2e],0x1
0043C052  8B 17                     MOV EDX,dword ptr [EDI]
0043C054  8D 45 98                  LEA EAX,[EBP + -0x68]
0043C057  50                        PUSH EAX
0043C058  FF 52 30                  CALL dword ptr [EDX + 0x30]
0043C05B  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0043C05E  8B 55 9B                  MOV EDX,dword ptr [EBP + -0x65]
0043C061  8A 45 B3                  MOV AL,byte ptr [EBP + -0x4d]
0043C064  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0043C067  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0043C06A  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
0043C06D  8D 4D D0                  LEA ECX,[EBP + -0x30]
0043C070  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
0043C073  51                        PUSH ECX
0043C074  52                        PUSH EDX
0043C075  E8 46 21 27 00            CALL 0x006ae1c0
0043C07A  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_0043c07d:
0043C07D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043C080  47                        INC EDI
0043C081  3B F8                     CMP EDI,EAX
0043C083  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0043C086  7C 81                     JL 0x0043c009
0043C088  5F                        POP EDI
0043C089  5E                        POP ESI
0043C08A  5B                        POP EBX
0043C08B  8B E5                     MOV ESP,EBP
0043C08D  5D                        POP EBP
0043C08E  C2 08 00                  RET 0x8
LAB_0043c091:
0043C091  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043C094  5F                        POP EDI
0043C095  5E                        POP ESI
0043C096  5B                        POP EBX
0043C097  C6 00 00                  MOV byte ptr [EAX],0x0
0043C09A  8B E5                     MOV ESP,EBP
0043C09C  5D                        POP EBP
0043C09D  C2 08 00                  RET 0x8
LAB_0043c0a0:
0043C0A0  3C 02                     CMP AL,0x2
0043C0A2  0F 85 D0 08 00 00         JNZ 0x0043c978
0043C0A8  33 C0                     XOR EAX,EAX
0043C0AA  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C0AF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043C0B2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043C0B5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043C0B8  C1 E1 04                  SHL ECX,0x4
0043C0BB  03 C8                     ADD ECX,EAX
0043C0BD  8B 04 4D 83 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4f83]
0043C0C4  85 C0                     TEST EAX,EAX
0043C0C6  8D 3C 4D 83 4F 7F 00      LEA EDI,[ECX*0x2 + 0x7f4f83]
0043C0CD  0F 84 0D 18 00 00         JZ 0x0043d8e0
0043C0D3  83 F8 3C                  CMP EAX,0x3c
0043C0D6  74 47                     JZ 0x0043c11f
0043C0D8  3D AE 01 00 00            CMP EAX,0x1ae
0043C0DD  74 32                     JZ 0x0043c111
0043C0DF  68 FC 7E 7A 00            PUSH 0x7a7efc
0043C0E4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043C0E9  6A 00                     PUSH 0x0
0043C0EB  6A 00                     PUSH 0x0
0043C0ED  68 16 1D 00 00            PUSH 0x1d16
0043C0F2  68 04 60 7A 00            PUSH 0x7a6004
0043C0F7  E8 D4 13 27 00            CALL 0x006ad4d0
0043C0FC  83 C4 18                  ADD ESP,0x18
0043C0FF  85 C0                     TEST EAX,EAX
0043C101  0F 84 D9 17 00 00         JZ 0x0043d8e0
0043C107  CC                        INT3
LAB_0043c111:
0043C111  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0043C115  6A 03                     PUSH 0x3
0043C117  52                        PUSH EDX
0043C118  6A FF                     PUSH -0x1
0043C11A  E9 13 09 00 00            JMP 0x0043ca32
LAB_0043c11f:
0043C11F  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
0043C123  66 3D 01 00               CMP AX,0x1
0043C127  75 45                     JNZ 0x0043c16e
0043C129  8B 5F 0A                  MOV EBX,dword ptr [EDI + 0xa]
0043C12C  33 F6                     XOR ESI,ESI
0043C12E  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043C131  85 C0                     TEST EAX,EAX
0043C133  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043C136  0F 8E A4 17 00 00         JLE 0x0043d8e0
LAB_0043c13c:
0043C13C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043C13F  8B CB                     MOV ECX,EBX
0043C141  52                        PUSH EDX
0043C142  8B D6                     MOV EDX,ESI
0043C144  E8 27 0B 27 00            CALL 0x006acc70
0043C149  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043C14C  66 3D FF FF               CMP AX,0xffff
0043C150  75 11                     JNZ 0x0043c163
0043C152  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043C155  46                        INC ESI
0043C156  3B F0                     CMP ESI,EAX
0043C158  7C E2                     JL 0x0043c13c
0043C15A  5F                        POP EDI
0043C15B  5E                        POP ESI
0043C15C  5B                        POP EBX
0043C15D  8B E5                     MOV ESP,EBP
0043C15F  5D                        POP EBP
0043C160  C2 08 00                  RET 0x8
LAB_0043c163:
0043C163  6A 01                     PUSH 0x1
0043C165  50                        PUSH EAX
0043C166  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043C169  E9 C3 08 00 00            JMP 0x0043ca31
LAB_0043c16e:
0043C16E  0F 86 F4 07 00 00         JBE 0x0043c968
0043C174  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0043C177  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0043C17A  8B CB                     MOV ECX,EBX
0043C17C  C6 46 05 02               MOV byte ptr [ESI + 0x5],0x2
0043C180  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0043C186  52                        PUSH EDX
0043C187  E8 2B 88 FC FF            CALL 0x004049b7
0043C18C  88 46 04                  MOV byte ptr [ESI + 0x4],AL
0043C18F  8B 7F 0A                  MOV EDI,dword ptr [EDI + 0xa]
0043C192  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0043C195  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043C198  33 FF                     XOR EDI,EDI
0043C19A  85 C0                     TEST EAX,EAX
0043C19C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043C19F  7E 3D                     JLE 0x0043c1de
LAB_0043c1a1:
0043C1A1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043C1A4  8D 45 F8                  LEA EAX,[EBP + -0x8]
0043C1A7  50                        PUSH EAX
0043C1A8  8B D7                     MOV EDX,EDI
0043C1AA  E8 C1 0A 27 00            CALL 0x006acc70
0043C1AF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043C1B2  66 3D FF FF               CMP AX,0xffff
0043C1B6  74 1C                     JZ 0x0043c1d4
0043C1B8  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C1BE  6A 01                     PUSH 0x1
0043C1C0  50                        PUSH EAX
0043C1C1  51                        PUSH ECX
0043C1C2  8B CB                     MOV ECX,EBX
0043C1C4  E8 F1 66 FC FF            CALL 0x004028ba
0043C1C9  8B C8                     MOV ECX,EAX
0043C1CB  E8 9B 60 FC FF            CALL 0x0040226b
0043C1D0  85 C0                     TEST EAX,EAX
0043C1D2  74 0A                     JZ 0x0043c1de
LAB_0043c1d4:
0043C1D4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0043C1D7  47                        INC EDI
0043C1D8  3B F9                     CMP EDI,ECX
0043C1DA  7C C5                     JL 0x0043c1a1
0043C1DC  EB 03                     JMP 0x0043c1e1
LAB_0043c1de:
0043C1DE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0043c1e1:
0043C1E1  3B F9                     CMP EDI,ECX
0043C1E3  75 15                     JNZ 0x0043c1fa
0043C1E5  C6 46 15 00               MOV byte ptr [ESI + 0x15],0x0
0043C1E9  C6 46 08 00               MOV byte ptr [ESI + 0x8],0x0
0043C1ED  C6 46 07 00               MOV byte ptr [ESI + 0x7],0x0
0043C1F1  5F                        POP EDI
0043C1F2  5E                        POP ESI
0043C1F3  5B                        POP EBX
0043C1F4  8B E5                     MOV ESP,EBP
0043C1F6  5D                        POP EBP
0043C1F7  C2 08 00                  RET 0x8
LAB_0043c1fa:
0043C1FA  33 C0                     XOR EAX,EAX
0043C1FC  C6 46 08 01               MOV byte ptr [ESI + 0x8],0x1
0043C200  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C205  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043C208  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043C20B  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043C20E  C1 E2 04                  SHL EDX,0x4
0043C211  03 D0                     ADD EDX,EAX
0043C213  8B 04 55 21 4E 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f4e21]
0043C21A  85 C0                     TEST EAX,EAX
0043C21C  74 75                     JZ 0x0043c293
0043C21E  33 FF                     XOR EDI,EDI
0043C220  C6 46 15 03               MOV byte ptr [ESI + 0x15],0x3
0043C224  85 C9                     TEST ECX,ECX
0043C226  7E 55                     JLE 0x0043c27d
LAB_0043c228:
0043C228  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043C22B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0043C22E  50                        PUSH EAX
0043C22F  8B D7                     MOV EDX,EDI
0043C231  E8 3A 0A 27 00            CALL 0x006acc70
0043C236  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043C239  66 3D FF FF               CMP AX,0xffff
0043C23D  74 36                     JZ 0x0043c275
0043C23F  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C245  6A 01                     PUSH 0x1
0043C247  50                        PUSH EAX
0043C248  51                        PUSH ECX
0043C249  8B CB                     MOV ECX,EBX
0043C24B  E8 6A 66 FC FF            CALL 0x004028ba
0043C250  66 8B 50 30               MOV DX,word ptr [EAX + 0x30]
0043C254  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C259  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043C25F  52                        PUSH EDX
0043C260  50                        PUSH EAX
0043C261  E8 93 9A FC FF            CALL 0x00405cf9
0043C266  85 C0                     TEST EAX,EAX
0043C268  74 0B                     JZ 0x0043c275
0043C26A  C6 46 15 01               MOV byte ptr [ESI + 0x15],0x1
0043C26E  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0043C271  85 C9                     TEST ECX,ECX
0043C273  74 08                     JZ 0x0043c27d
LAB_0043c275:
0043C275  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043C278  47                        INC EDI
0043C279  3B F8                     CMP EDI,EAX
0043C27B  7C AB                     JL 0x0043c228
LAB_0043c27d:
0043C27D  3B 7D F0                  CMP EDI,dword ptr [EBP + -0x10]
0043C280  75 15                     JNZ 0x0043c297
0043C282  8A 46 15                  MOV AL,byte ptr [ESI + 0x15]
0043C285  3C 03                     CMP AL,0x3
0043C287  74 0A                     JZ 0x0043c293
0043C289  3C 01                     CMP AL,0x1
0043C28B  75 0A                     JNZ 0x0043c297
0043C28D  C6 46 15 03               MOV byte ptr [ESI + 0x15],0x3
0043C291  EB 04                     JMP 0x0043c297
LAB_0043c293:
0043C293  C6 46 15 00               MOV byte ptr [ESI + 0x15],0x0
LAB_0043c297:
0043C297  8B CB                     MOV ECX,EBX
0043C299  C6 46 07 01               MOV byte ptr [ESI + 0x7],0x1
0043C29D  E8 01 96 FC FF            CALL 0x004058a3
0043C2A2  8B F8                     MOV EDI,EAX
0043C2A4  8B CB                     MOV ECX,EBX
0043C2A6  57                        PUSH EDI
0043C2A7  E8 B5 5A FC FF            CALL 0x00401d61
0043C2AC  8D 4E 0F                  LEA ECX,[ESI + 0xf]
0043C2AF  BA F1 FF FF FF            MOV EDX,0xfffffff1
0043C2B4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0043C2B7  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0043C2BA  2B D6                     SUB EDX,ESI
LAB_0043c2bc:
0043C2BC  33 DB                     XOR EBX,EBX
0043C2BE  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0043C2C1  83 C0 02                  ADD EAX,0x2
0043C2C4  88 59 FA                  MOV byte ptr [ECX + -0x6],BL
0043C2C7  8A 58 FE                  MOV BL,byte ptr [EAX + -0x2]
0043C2CA  88 19                     MOV byte ptr [ECX],BL
0043C2CC  41                        INC ECX
0043C2CD  8D 1C 0A                  LEA EBX,[EDX + ECX*0x1]
0043C2D0  83 FB 06                  CMP EBX,0x6
0043C2D3  7C E7                     JL 0x0043c2bc
0043C2D5  8D 4D EC                  LEA ECX,[EBP + -0x14]
0043C2D8  51                        PUSH ECX
0043C2D9  E8 82 ED 26 00            CALL 0x006ab060
0043C2DE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043C2E1  33 DB                     XOR EBX,EBX
0043C2E3  85 C0                     TEST EAX,EAX
0043C2E5  C6 46 39 01               MOV byte ptr [ESI + 0x39],0x1
0043C2E9  C6 46 38 01               MOV byte ptr [ESI + 0x38],0x1
0043C2ED  C6 46 37 01               MOV byte ptr [ESI + 0x37],0x1
0043C2F1  C6 46 36 01               MOV byte ptr [ESI + 0x36],0x1
0043C2F5  7E 3B                     JLE 0x0043c332
LAB_0043c2f7:
0043C2F7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043C2FA  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043C2FD  52                        PUSH EDX
0043C2FE  8B D3                     MOV EDX,EBX
0043C300  E8 6B 09 27 00            CALL 0x006acc70
0043C305  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043C308  66 3D FF FF               CMP AX,0xffff
0043C30C  74 1C                     JZ 0x0043c32a
0043C30E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C311  6A 01                     PUSH 0x1
0043C313  50                        PUSH EAX
0043C314  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C319  50                        PUSH EAX
0043C31A  E8 9B 65 FC FF            CALL 0x004028ba
0043C31F  8B 88 EE 07 00 00         MOV ECX,dword ptr [EAX + 0x7ee]
0043C325  C6 44 31 36 03            MOV byte ptr [ECX + ESI*0x1 + 0x36],0x3
LAB_0043c32a:
0043C32A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043C32D  43                        INC EBX
0043C32E  3B D8                     CMP EBX,EAX
0043C330  7C C5                     JL 0x0043c2f7
LAB_0043c332:
0043C332  81 FF 00 00 04 00         CMP EDI,0x40000
0043C338  0F 87 89 00 00 00         JA 0x0043c3c7
0043C33E  74 7F                     JZ 0x0043c3bf
0043C340  81 FF 80 00 00 00         CMP EDI,0x80
0043C346  77 43                     JA 0x0043c38b
0043C348  74 36                     JZ 0x0043c380
0043C34A  8B C7                     MOV EAX,EDI
0043C34C  83 E8 02                  SUB EAX,0x2
0043C34F  74 24                     JZ 0x0043c375
0043C351  83 E8 02                  SUB EAX,0x2
0043C354  74 14                     JZ 0x0043c36a
0043C356  83 E8 04                  SUB EAX,0x4
0043C359  0F 85 C8 00 00 00         JNZ 0x0043c427
0043C35F  C7 06 11 00 00 00         MOV dword ptr [ESI],0x11
0043C365  E9 BD 00 00 00            JMP 0x0043c427
LAB_0043c36a:
0043C36A  C7 06 0B 00 00 00         MOV dword ptr [ESI],0xb
0043C370  E9 B2 00 00 00            JMP 0x0043c427
LAB_0043c375:
0043C375  C7 06 05 00 00 00         MOV dword ptr [ESI],0x5
0043C37B  E9 A7 00 00 00            JMP 0x0043c427
LAB_0043c380:
0043C380  C7 06 09 00 00 00         MOV dword ptr [ESI],0x9
0043C386  E9 9C 00 00 00            JMP 0x0043c427
LAB_0043c38b:
0043C38B  81 FF 00 01 00 00         CMP EDI,0x100
0043C391  74 24                     JZ 0x0043c3b7
0043C393  81 FF 00 00 01 00         CMP EDI,0x10000
0043C399  74 14                     JZ 0x0043c3af
0043C39B  81 FF 00 00 02 00         CMP EDI,0x20000
0043C3A1  0F 85 80 00 00 00         JNZ 0x0043c427
0043C3A7  C7 06 1A 00 00 00         MOV dword ptr [ESI],0x1a
0043C3AD  EB 78                     JMP 0x0043c427
LAB_0043c3af:
0043C3AF  C7 06 22 00 00 00         MOV dword ptr [ESI],0x22
0043C3B5  EB 70                     JMP 0x0043c427
LAB_0043c3b7:
0043C3B7  C7 06 15 00 00 00         MOV dword ptr [ESI],0x15
0043C3BD  EB 68                     JMP 0x0043c427
LAB_0043c3bf:
0043C3BF  C7 06 19 00 00 00         MOV dword ptr [ESI],0x19
0043C3C5  EB 60                     JMP 0x0043c427
LAB_0043c3c7:
0043C3C7  81 FF 00 00 40 00         CMP EDI,0x400000
0043C3CD  77 3A                     JA 0x0043c409
0043C3CF  74 30                     JZ 0x0043c401
0043C3D1  81 FF 00 00 08 00         CMP EDI,0x80000
0043C3D7  74 20                     JZ 0x0043c3f9
0043C3D9  81 FF 00 00 10 00         CMP EDI,0x100000
0043C3DF  74 10                     JZ 0x0043c3f1
0043C3E1  81 FF 00 00 20 00         CMP EDI,0x200000
0043C3E7  75 3E                     JNZ 0x0043c427
0043C3E9  C7 06 1B 00 00 00         MOV dword ptr [ESI],0x1b
0043C3EF  EB 36                     JMP 0x0043c427
LAB_0043c3f1:
0043C3F1  C7 06 1D 00 00 00         MOV dword ptr [ESI],0x1d
0043C3F7  EB 2E                     JMP 0x0043c427
LAB_0043c3f9:
0043C3F9  C7 06 1C 00 00 00         MOV dword ptr [ESI],0x1c
0043C3FF  EB 26                     JMP 0x0043c427
LAB_0043c401:
0043C401  C7 06 21 00 00 00         MOV dword ptr [ESI],0x21
0043C407  EB 1E                     JMP 0x0043c427
LAB_0043c409:
0043C409  81 FF 00 00 80 00         CMP EDI,0x800000
0043C40F  74 10                     JZ 0x0043c421
0043C411  81 FF 00 00 00 01         CMP EDI,0x1000000
0043C417  75 0E                     JNZ 0x0043c427
0043C419  C7 06 24 00 00 00         MOV dword ptr [ESI],0x24
0043C41F  EB 06                     JMP 0x0043c427
LAB_0043c421:
0043C421  C7 06 23 00 00 00         MOV dword ptr [ESI],0x23
LAB_0043c427:
0043C427  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0043C42A  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0043C42D  33 C0                     XOR EAX,EAX
0043C42F  3B C8                     CMP ECX,EAX
0043C431  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0043C434  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0043C437  7E 66                     JLE 0x0043c49f
LAB_0043c439:
0043C439  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043C43C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043C43F  52                        PUSH EDX
0043C440  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0043C443  E8 28 08 27 00            CALL 0x006acc70
0043C448  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043C44B  66 3D FF FF               CMP AX,0xffff
0043C44F  74 34                     JZ 0x0043c485
0043C451  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0043C454  6A 01                     PUSH 0x1
0043C456  41                        INC ECX
0043C457  50                        PUSH EAX
0043C458  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C45D  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0043C460  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C463  50                        PUSH EAX
0043C464  E8 51 64 FC FF            CALL 0x004028ba
0043C469  83 7D DC 01               CMP dword ptr [EBP + -0x24],0x1
0043C46D  75 08                     JNZ 0x0043c477
0043C46F  33 DB                     XOR EBX,EBX
0043C471  66 8B 58 30               MOV BX,word ptr [EAX + 0x30]
0043C475  EB 0E                     JMP 0x0043c485
LAB_0043c477:
0043C477  33 C9                     XOR ECX,ECX
0043C479  66 8B 48 30               MOV CX,word ptr [EAX + 0x30]
0043C47D  3B D9                     CMP EBX,ECX
0043C47F  0F 85 5B 14 00 00         JNZ 0x0043d8e0
LAB_0043c485:
0043C485  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0043C488  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0043C48B  40                        INC EAX
0043C48C  3B C1                     CMP EAX,ECX
0043C48E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0043C491  7C A6                     JL 0x0043c439
0043C493  81 FB FF FF 00 00         CMP EBX,0xffff
0043C499  0F 84 41 14 00 00         JZ 0x0043d8e0
LAB_0043c49f:
0043C49F  81 FF 00 10 00 00         CMP EDI,0x1000
0043C4A5  0F 87 F7 01 00 00         JA 0x0043c6a2
0043C4AB  0F 84 CA 01 00 00         JZ 0x0043c67b
0043C4B1  83 FF 40                  CMP EDI,0x40
0043C4B4  0F 87 E1 00 00 00         JA 0x0043c59b
0043C4BA  0F 84 AB 00 00 00         JZ 0x0043c56b
0043C4C0  4F                        DEC EDI
0043C4C1  83 FF 27                  CMP EDI,0x27
0043C4C4  0F 87 16 14 00 00         JA 0x0043d8e0
0043C4CA  33 D2                     XOR EDX,EDX
0043C4CC  8A 97 00 D9 43 00         MOV DL,byte ptr [EDI + 0x43d900]
switchD_0043c4d2::switchD:
0043C4D2  FF 24 95 EC D8 43 00      JMP dword ptr [EDX*0x4 + 0x43d8ec]
switchD_0043c4d2::caseD_1:
0043C4D9  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C4DE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C4E1  53                        PUSH EBX
0043C4E2  50                        PUSH EAX
0043C4E3  E8 11 98 FC FF            CALL 0x00405cf9
0043C4E8  8B 10                     MOV EDX,dword ptr [EAX]
0043C4EA  8B C8                     MOV ECX,EAX
0043C4EC  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C4EF  48                        DEC EAX
0043C4F0  83 F8 0E                  CMP EAX,0xe
0043C4F3  0F 87 E7 13 00 00         JA 0x0043d8e0
0043C4F9  33 C9                     XOR ECX,ECX
0043C4FB  8A 88 40 D9 43 00         MOV CL,byte ptr [EAX + 0x43d940]
switchD_0043c501::switchD:
0043C501  FF 24 8D 28 D9 43 00      JMP dword ptr [ECX*0x4 + 0x43d928]
switchD_0043c594::caseD_e:
0043C508  C6 46 14 03               MOV byte ptr [ESI + 0x14],0x3
0043C50C  5F                        POP EDI
0043C50D  5E                        POP ESI
0043C50E  5B                        POP EBX
0043C50F  8B E5                     MOV ESP,EBP
0043C511  5D                        POP EBP
0043C512  C2 08 00                  RET 0x8
switchD_0043c4d2::caseD_2:
0043C515  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C51A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C51D  53                        PUSH EBX
0043C51E  50                        PUSH EAX
0043C51F  E8 D5 97 FC FF            CALL 0x00405cf9
0043C524  8B 10                     MOV EDX,dword ptr [EAX]
0043C526  8B C8                     MOV ECX,EAX
0043C528  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C52B  48                        DEC EAX
0043C52C  83 F8 0C                  CMP EAX,0xc
0043C52F  0F 87 AB 13 00 00         JA 0x0043d8e0
0043C535  33 C9                     XOR ECX,ECX
0043C537  8A 88 68 D9 43 00         MOV CL,byte ptr [EAX + 0x43d968]
switchD_0043c53d::switchD:
0043C53D  FF 24 8D 50 D9 43 00      JMP dword ptr [ECX*0x4 + 0x43d950]
switchD_0043c4d2::caseD_10:
0043C544  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C549  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C54C  53                        PUSH EBX
0043C54D  50                        PUSH EAX
0043C54E  E8 A6 97 FC FF            CALL 0x00405cf9
0043C553  8B 10                     MOV EDX,dword ptr [EAX]
0043C555  8B C8                     MOV ECX,EAX
0043C557  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C55A  48                        DEC EAX
0043C55B  83 F8 06                  CMP EAX,0x6
0043C55E  0F 87 7C 13 00 00         JA 0x0043d8e0
switchD_0043c564::switchD:
0043C564  FF 24 85 78 D9 43 00      JMP dword ptr [EAX*0x4 + 0x43d978]
LAB_0043c56b:
0043C56B  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C571  53                        PUSH EBX
0043C572  51                        PUSH ECX
0043C573  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C576  E8 7E 97 FC FF            CALL 0x00405cf9
0043C57B  8B 10                     MOV EDX,dword ptr [EAX]
0043C57D  8B C8                     MOV ECX,EAX
0043C57F  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C582  48                        DEC EAX
0043C583  83 F8 0D                  CMP EAX,0xd
0043C586  0F 87 54 13 00 00         JA 0x0043d8e0
0043C58C  33 C9                     XOR ECX,ECX
0043C58E  8A 88 AC D9 43 00         MOV CL,byte ptr [EAX + 0x43d9ac]
switchD_0043c594::switchD:
0043C594  FF 24 8D 94 D9 43 00      JMP dword ptr [ECX*0x4 + 0x43d994]
LAB_0043c59b:
0043C59B  81 FF 00 02 00 00         CMP EDI,0x200
0043C5A1  77 65                     JA 0x0043c608
0043C5A3  74 3B                     JZ 0x0043c5e0
0043C5A5  81 FF 80 00 00 00         CMP EDI,0x80
0043C5AB  74 0C                     JZ 0x0043c5b9
0043C5AD  81 FF 00 01 00 00         CMP EDI,0x100
0043C5B3  0F 85 27 13 00 00         JNZ 0x0043d8e0
LAB_0043c5b9:
0043C5B9  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C5BE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C5C1  53                        PUSH EBX
0043C5C2  50                        PUSH EAX
0043C5C3  E8 31 97 FC FF            CALL 0x00405cf9
0043C5C8  8B 10                     MOV EDX,dword ptr [EAX]
0043C5CA  8B C8                     MOV ECX,EAX
0043C5CC  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C5CF  48                        DEC EAX
0043C5D0  83 F8 06                  CMP EAX,0x6
0043C5D3  0F 87 07 13 00 00         JA 0x0043d8e0
switchD_0043c5d9::switchD:
0043C5D9  FF 24 85 BC D9 43 00      JMP dword ptr [EAX*0x4 + 0x43d9bc]
LAB_0043c5e0:
0043C5E0  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C5E6  53                        PUSH EBX
0043C5E7  51                        PUSH ECX
0043C5E8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C5EB  E8 09 97 FC FF            CALL 0x00405cf9
0043C5F0  8B 10                     MOV EDX,dword ptr [EAX]
0043C5F2  8B C8                     MOV ECX,EAX
0043C5F4  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C5F7  48                        DEC EAX
0043C5F8  83 F8 09                  CMP EAX,0x9
0043C5FB  0F 87 DF 12 00 00         JA 0x0043d8e0
switchD_0043c601::switchD:
0043C601  FF 24 85 D8 D9 43 00      JMP dword ptr [EAX*0x4 + 0x43d9d8]
LAB_0043c608:
0043C608  81 FF 00 04 00 00         CMP EDI,0x400
0043C60E  74 3C                     JZ 0x0043c64c
0043C610  81 FF 00 08 00 00         CMP EDI,0x800
0043C616  0F 85 C4 12 00 00         JNZ 0x0043d8e0
0043C61C  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C622  53                        PUSH EBX
0043C623  51                        PUSH ECX
0043C624  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C627  E8 CD 96 FC FF            CALL 0x00405cf9
0043C62C  8B 10                     MOV EDX,dword ptr [EAX]
0043C62E  8B C8                     MOV ECX,EAX
0043C630  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C633  48                        DEC EAX
0043C634  83 F8 12                  CMP EAX,0x12
0043C637  0F 87 A3 12 00 00         JA 0x0043d8e0
0043C63D  33 C9                     XOR ECX,ECX
0043C63F  8A 88 18 DA 43 00         MOV CL,byte ptr [EAX + 0x43da18]
switchD_0043c645::switchD:
0043C645  FF 24 8D 00 DA 43 00      JMP dword ptr [ECX*0x4 + 0x43da00]
LAB_0043c64c:
0043C64C  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C651  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C654  53                        PUSH EBX
0043C655  50                        PUSH EAX
0043C656  E8 9E 96 FC FF            CALL 0x00405cf9
0043C65B  8B 10                     MOV EDX,dword ptr [EAX]
0043C65D  8B C8                     MOV ECX,EAX
0043C65F  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C662  48                        DEC EAX
0043C663  83 F8 14                  CMP EAX,0x14
0043C666  0F 87 74 12 00 00         JA 0x0043d8e0
0043C66C  33 C9                     XOR ECX,ECX
0043C66E  8A 88 44 DA 43 00         MOV CL,byte ptr [EAX + 0x43da44]
switchD_0043c674::switchD:
0043C674  FF 24 8D 2C DA 43 00      JMP dword ptr [ECX*0x4 + 0x43da2c]
switchD_0043c4d2::caseD_28:
0043C67B  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C680  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C683  53                        PUSH EBX
0043C684  50                        PUSH EAX
0043C685  E8 6F 96 FC FF            CALL 0x00405cf9
0043C68A  8B 10                     MOV EDX,dword ptr [EAX]
0043C68C  8B C8                     MOV ECX,EAX
0043C68E  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C691  48                        DEC EAX
0043C692  83 F8 06                  CMP EAX,0x6
0043C695  0F 87 45 12 00 00         JA 0x0043d8e0
switchD_0043c69b::switchD:
0043C69B  FF 24 85 5C DA 43 00      JMP dword ptr [EAX*0x4 + 0x43da5c]
LAB_0043c6a2:
0043C6A2  81 FF 00 00 10 00         CMP EDI,0x100000
0043C6A8  0F 87 5F 01 00 00         JA 0x0043c80d
0043C6AE  0F 84 2A 01 00 00         JZ 0x0043c7de
0043C6B4  81 FF 00 00 02 00         CMP EDI,0x20000
0043C6BA  0F 87 AC 00 00 00         JA 0x0043c76c
0043C6C0  74 7A                     JZ 0x0043c73c
0043C6C2  81 FF 00 20 00 00         CMP EDI,0x2000
0043C6C8  74 3C                     JZ 0x0043c706
0043C6CA  81 FF 00 00 01 00         CMP EDI,0x10000
0043C6D0  0F 85 0A 12 00 00         JNZ 0x0043d8e0
0043C6D6  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C6DC  53                        PUSH EBX
0043C6DD  51                        PUSH ECX
0043C6DE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C6E1  E8 13 96 FC FF            CALL 0x00405cf9
0043C6E6  8B 10                     MOV EDX,dword ptr [EAX]
0043C6E8  8B C8                     MOV ECX,EAX
0043C6EA  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C6ED  48                        DEC EAX
0043C6EE  83 F8 10                  CMP EAX,0x10
0043C6F1  0F 87 E9 11 00 00         JA 0x0043d8e0
0043C6F7  33 C9                     XOR ECX,ECX
0043C6F9  8A 88 90 DA 43 00         MOV CL,byte ptr [EAX + 0x43da90]
switchD_0043c6ff::switchD:
0043C6FF  FF 24 8D 78 DA 43 00      JMP dword ptr [ECX*0x4 + 0x43da78]
LAB_0043c706:
0043C706  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C70B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C70E  53                        PUSH EBX
0043C70F  50                        PUSH EAX
0043C710  E8 E4 95 FC FF            CALL 0x00405cf9
0043C715  8B 10                     MOV EDX,dword ptr [EAX]
0043C717  8B C8                     MOV ECX,EAX
0043C719  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C71C  48                        DEC EAX
0043C71D  83 F8 06                  CMP EAX,0x6
0043C720  0F 87 BA 11 00 00         JA 0x0043d8e0
switchD_0043c726::switchD:
0043C726  FF 24 85 A4 DA 43 00      JMP dword ptr [EAX*0x4 + 0x43daa4]
switchD_0043c5d9::caseD_1:
0043C72D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043C730  5F                        POP EDI
0043C731  5E                        POP ESI
0043C732  5B                        POP EBX
0043C733  C6 00 03                  MOV byte ptr [EAX],0x3
0043C736  8B E5                     MOV ESP,EBP
0043C738  5D                        POP EBP
0043C739  C2 08 00                  RET 0x8
LAB_0043c73c:
0043C73C  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043C742  53                        PUSH EBX
0043C743  51                        PUSH ECX
0043C744  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C747  E8 AD 95 FC FF            CALL 0x00405cf9
0043C74C  8B 10                     MOV EDX,dword ptr [EAX]
0043C74E  8B C8                     MOV ECX,EAX
0043C750  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C753  48                        DEC EAX
0043C754  83 F8 10                  CMP EAX,0x10
0043C757  0F 87 83 11 00 00         JA 0x0043d8e0
0043C75D  33 C9                     XOR ECX,ECX
0043C75F  8A 88 D8 DA 43 00         MOV CL,byte ptr [EAX + 0x43dad8]
switchD_0043c765::switchD:
0043C765  FF 24 8D C0 DA 43 00      JMP dword ptr [ECX*0x4 + 0x43dac0]
LAB_0043c76c:
0043C76C  81 FF 00 00 04 00         CMP EDI,0x40000
0043C772  74 3B                     JZ 0x0043c7af
0043C774  81 FF 00 00 08 00         CMP EDI,0x80000
0043C77A  0F 85 60 11 00 00         JNZ 0x0043d8e0
0043C780  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C785  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C788  53                        PUSH EBX
0043C789  50                        PUSH EAX
0043C78A  E8 6A 95 FC FF            CALL 0x00405cf9
0043C78F  8B 10                     MOV EDX,dword ptr [EAX]
0043C791  8B C8                     MOV ECX,EAX
0043C793  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C796  48                        DEC EAX
0043C797  83 F8 10                  CMP EAX,0x10
0043C79A  0F 87 40 11 00 00         JA 0x0043d8e0
0043C7A0  33 C9                     XOR ECX,ECX
0043C7A2  8A 88 00 DB 43 00         MOV CL,byte ptr [EAX + 0x43db00]
switchD_0043c7a8::switchD:
0043C7A8  FF 24 8D EC DA 43 00      JMP dword ptr [ECX*0x4 + 0x43daec]
LAB_0043c7af:
0043C7AF  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C7B4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C7B7  53                        PUSH EBX
0043C7B8  50                        PUSH EAX
0043C7B9  E8 3B 95 FC FF            CALL 0x00405cf9
0043C7BE  8B 10                     MOV EDX,dword ptr [EAX]
0043C7C0  8B C8                     MOV ECX,EAX
0043C7C2  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C7C5  48                        DEC EAX
0043C7C6  83 F8 10                  CMP EAX,0x10
0043C7C9  0F 87 11 11 00 00         JA 0x0043d8e0
0043C7CF  33 C9                     XOR ECX,ECX
0043C7D1  8A 88 28 DB 43 00         MOV CL,byte ptr [EAX + 0x43db28]
switchD_0043c7d7::switchD:
0043C7D7  FF 24 8D 14 DB 43 00      JMP dword ptr [ECX*0x4 + 0x43db14]
LAB_0043c7de:
0043C7DE  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C7E3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C7E6  53                        PUSH EBX
0043C7E7  50                        PUSH EAX
0043C7E8  E8 0C 95 FC FF            CALL 0x00405cf9
0043C7ED  8B 10                     MOV EDX,dword ptr [EAX]
0043C7EF  8B C8                     MOV ECX,EAX
0043C7F1  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C7F4  48                        DEC EAX
0043C7F5  83 F8 12                  CMP EAX,0x12
0043C7F8  0F 87 E2 10 00 00         JA 0x0043d8e0
0043C7FE  33 C9                     XOR ECX,ECX
0043C800  8A 88 50 DB 43 00         MOV CL,byte ptr [EAX + 0x43db50]
switchD_0043c806::switchD:
0043C806  FF 24 8D 3C DB 43 00      JMP dword ptr [ECX*0x4 + 0x43db3c]
LAB_0043c80d:
0043C80D  81 FF 00 00 80 00         CMP EDI,0x800000
0043C813  0F 87 C1 00 00 00         JA 0x0043c8da
0043C819  0F 84 8C 00 00 00         JZ 0x0043c8ab
0043C81F  81 FF 00 00 20 00         CMP EDI,0x200000
0043C825  74 55                     JZ 0x0043c87c
0043C827  81 FF 00 00 40 00         CMP EDI,0x400000
0043C82D  0F 85 AD 10 00 00         JNZ 0x0043d8e0
0043C833  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C838  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C83B  53                        PUSH EBX
0043C83C  50                        PUSH EAX
0043C83D  E8 B7 94 FC FF            CALL 0x00405cf9
0043C842  8B 10                     MOV EDX,dword ptr [EAX]
0043C844  8B C8                     MOV ECX,EAX
0043C846  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C849  48                        DEC EAX
0043C84A  83 F8 10                  CMP EAX,0x10
0043C84D  0F 87 8D 10 00 00         JA 0x0043d8e0
0043C853  33 C9                     XOR ECX,ECX
0043C855  8A 88 7C DB 43 00         MOV CL,byte ptr [EAX + 0x43db7c]
switchD_0043c85b::switchD:
0043C85B  FF 24 8D 64 DB 43 00      JMP dword ptr [ECX*0x4 + 0x43db64]
switchD_0043c594::caseD_2:
0043C862  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
0043C866  5F                        POP EDI
0043C867  5E                        POP ESI
0043C868  5B                        POP EBX
0043C869  8B E5                     MOV ESP,EBP
0043C86B  5D                        POP EBP
0043C86C  C2 08 00                  RET 0x8
switchD_0043c594::caseD_4:
0043C86F  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
0043C873  5F                        POP EDI
0043C874  5E                        POP ESI
0043C875  5B                        POP EBX
0043C876  8B E5                     MOV ESP,EBP
0043C878  5D                        POP EBP
0043C879  C2 08 00                  RET 0x8
LAB_0043c87c:
0043C87C  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C881  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C884  53                        PUSH EBX
0043C885  50                        PUSH EAX
0043C886  E8 6E 94 FC FF            CALL 0x00405cf9
0043C88B  8B 10                     MOV EDX,dword ptr [EAX]
0043C88D  8B C8                     MOV ECX,EAX
0043C88F  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C892  48                        DEC EAX
0043C893  83 F8 10                  CMP EAX,0x10
0043C896  0F 87 44 10 00 00         JA 0x0043d8e0
0043C89C  33 C9                     XOR ECX,ECX
0043C89E  8A 88 A4 DB 43 00         MOV CL,byte ptr [EAX + 0x43dba4]
switchD_0043c8a4::switchD:
0043C8A4  FF 24 8D 90 DB 43 00      JMP dword ptr [ECX*0x4 + 0x43db90]
LAB_0043c8ab:
0043C8AB  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C8B0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C8B3  53                        PUSH EBX
0043C8B4  50                        PUSH EAX
0043C8B5  E8 3F 94 FC FF            CALL 0x00405cf9
0043C8BA  8B 10                     MOV EDX,dword ptr [EAX]
0043C8BC  8B C8                     MOV ECX,EAX
0043C8BE  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C8C1  48                        DEC EAX
0043C8C2  83 F8 10                  CMP EAX,0x10
0043C8C5  0F 87 15 10 00 00         JA 0x0043d8e0
0043C8CB  33 C9                     XOR ECX,ECX
0043C8CD  8A 88 CC DB 43 00         MOV CL,byte ptr [EAX + 0x43dbcc]
switchD_0043c8d3::switchD:
0043C8D3  FF 24 8D B8 DB 43 00      JMP dword ptr [ECX*0x4 + 0x43dbb8]
LAB_0043c8da:
0043C8DA  81 FF 00 00 00 01         CMP EDI,0x1000000
0043C8E0  74 3B                     JZ 0x0043c91d
0043C8E2  81 FF 00 00 00 02         CMP EDI,0x2000000
0043C8E8  0F 85 F2 0F 00 00         JNZ 0x0043d8e0
0043C8EE  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C8F3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C8F6  53                        PUSH EBX
0043C8F7  50                        PUSH EAX
0043C8F8  E8 FC 93 FC FF            CALL 0x00405cf9
0043C8FD  8B 10                     MOV EDX,dword ptr [EAX]
0043C8FF  8B C8                     MOV ECX,EAX
0043C901  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C904  48                        DEC EAX
0043C905  83 F8 10                  CMP EAX,0x10
0043C908  0F 87 D2 0F 00 00         JA 0x0043d8e0
0043C90E  33 C9                     XOR ECX,ECX
0043C910  8A 88 F4 DB 43 00         MOV CL,byte ptr [EAX + 0x43dbf4]
switchD_0043c916::switchD:
0043C916  FF 24 8D E0 DB 43 00      JMP dword ptr [ECX*0x4 + 0x43dbe0]
LAB_0043c91d:
0043C91D  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C922  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043C925  53                        PUSH EBX
0043C926  50                        PUSH EAX
0043C927  E8 CD 93 FC FF            CALL 0x00405cf9
0043C92C  8B 10                     MOV EDX,dword ptr [EAX]
0043C92E  8B C8                     MOV ECX,EAX
0043C930  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043C933  48                        DEC EAX
0043C934  83 F8 10                  CMP EAX,0x10
0043C937  0F 87 A3 0F 00 00         JA 0x0043d8e0
0043C93D  33 C9                     XOR ECX,ECX
0043C93F  8A 88 18 DC 43 00         MOV CL,byte ptr [EAX + 0x43dc18]
switchD_0043c945::switchD:
0043C945  FF 24 8D 08 DC 43 00      JMP dword ptr [ECX*0x4 + 0x43dc08]
switchD_0043c594::caseD_1:
0043C94C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043C94F  5F                        POP EDI
0043C950  5E                        POP ESI
0043C951  5B                        POP EBX
0043C952  C6 02 03                  MOV byte ptr [EDX],0x3
0043C955  8B E5                     MOV ESP,EBP
0043C957  5D                        POP EBP
0043C958  C2 08 00                  RET 0x8
switchD_0043c594::caseD_3:
0043C95B  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
0043C95F  5F                        POP EDI
0043C960  5E                        POP ESI
0043C961  5B                        POP EBX
0043C962  8B E5                     MOV ESP,EBP
0043C964  5D                        POP EBP
0043C965  C2 08 00                  RET 0x8
LAB_0043c968:
0043C968  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043C96B  5F                        POP EDI
0043C96C  5E                        POP ESI
0043C96D  5B                        POP EBX
0043C96E  C6 40 05 00               MOV byte ptr [EAX + 0x5],0x0
0043C972  8B E5                     MOV ESP,EBP
0043C974  5D                        POP EBP
0043C975  C2 08 00                  RET 0x8
LAB_0043c978:
0043C978  B9 04 00 00 00            MOV ECX,0x4
0043C97D  3A C1                     CMP AL,CL
0043C97F  0F 85 1F 01 00 00         JNZ 0x0043caa4
0043C985  33 C0                     XOR EAX,EAX
0043C987  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043C98C  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043C98F  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043C992  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043C995  C1 E6 04                  SHL ESI,0x4
0043C998  03 F0                     ADD ESI,EAX
0043C99A  8B 04 75 D3 4F 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f4fd3]
0043C9A1  3D 9A 01 00 00            CMP EAX,0x19a
0043C9A6  8D 34 75 D3 4F 7F 00      LEA ESI,[ESI*0x2 + 0x7f4fd3]
0043C9AD  0F 8F 9B 00 00 00         JG 0x0043ca4e
0043C9B3  74 31                     JZ 0x0043c9e6
0043C9B5  3B C7                     CMP EAX,EDI
0043C9B7  0F 84 23 0F 00 00         JZ 0x0043d8e0
0043C9BD  83 F8 5A                  CMP EAX,0x5a
0043C9C0  74 18                     JZ 0x0043c9da
0043C9C2  3D 72 01 00 00            CMP EAX,0x172
0043C9C7  0F 85 8D 00 00 00         JNZ 0x0043ca5a
0043C9CD  66 8B 4E 08               MOV CX,word ptr [ESI + 0x8]
0043C9D1  6A 02                     PUSH 0x2
0043C9D3  51                        PUSH ECX
0043C9D4  6A FF                     PUSH -0x1
0043C9D6  8B CA                     MOV ECX,EDX
0043C9D8  EB 5B                     JMP 0x0043ca35
LAB_0043c9da:
0043C9DA  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043C9DE  51                        PUSH ECX
0043C9DF  50                        PUSH EAX
0043C9E0  6A FF                     PUSH -0x1
0043C9E2  8B CA                     MOV ECX,EDX
0043C9E4  EB 4F                     JMP 0x0043ca35
LAB_0043c9e6:
0043C9E6  66 83 7E 0E 01            CMP word ptr [ESI + 0xe],0x1
0043C9EB  0F 85 EF 0E 00 00         JNZ 0x0043d8e0
0043C9F1  8B 7E 0A                  MOV EDI,dword ptr [ESI + 0xa]
0043C9F4  33 DB                     XOR EBX,EBX
0043C9F6  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043C9F9  85 C0                     TEST EAX,EAX
0043C9FB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043C9FE  0F 8E DC 0E 00 00         JLE 0x0043d8e0
LAB_0043ca04:
0043CA04  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043CA07  8B CF                     MOV ECX,EDI
0043CA09  52                        PUSH EDX
0043CA0A  8B D3                     MOV EDX,EBX
0043CA0C  E8 5F 02 27 00            CALL 0x006acc70
0043CA11  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CA14  66 3D FF FF               CMP AX,0xffff
0043CA18  75 11                     JNZ 0x0043ca2b
0043CA1A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043CA1D  43                        INC EBX
0043CA1E  3B D8                     CMP EBX,EAX
0043CA20  7C E2                     JL 0x0043ca04
0043CA22  5F                        POP EDI
0043CA23  5E                        POP ESI
0043CA24  5B                        POP EBX
0043CA25  8B E5                     MOV ESP,EBP
0043CA27  5D                        POP EBP
0043CA28  C2 08 00                  RET 0x8
LAB_0043ca2b:
0043CA2B  6A 01                     PUSH 0x1
0043CA2D  50                        PUSH EAX
0043CA2E  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
LAB_0043ca31:
0043CA31  50                        PUSH EAX
LAB_0043ca32:
0043CA32  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0043ca35:
0043CA35  E8 80 5E FC FF            CALL 0x004028ba
0043CA3A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043CA3D  8B 10                     MOV EDX,dword ptr [EAX]
0043CA3F  51                        PUSH ECX
0043CA40  8B C8                     MOV ECX,EAX
0043CA42  FF 52 34                  CALL dword ptr [EDX + 0x34]
0043CA45  5F                        POP EDI
0043CA46  5E                        POP ESI
0043CA47  5B                        POP EBX
0043CA48  8B E5                     MOV ESP,EBP
0043CA4A  5D                        POP EBP
0043CA4B  C2 08 00                  RET 0x8
LAB_0043ca4e:
0043CA4E  2D A4 01 00 00            SUB EAX,0x1a4
0043CA53  74 42                     JZ 0x0043ca97
0043CA55  83 E8 14                  SUB EAX,0x14
0043CA58  74 30                     JZ 0x0043ca8a
LAB_0043ca5a:
0043CA5A  68 C0 7E 7A 00            PUSH 0x7a7ec0
0043CA5F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043CA64  57                        PUSH EDI
0043CA65  57                        PUSH EDI
0043CA66  68 47 1D 00 00            PUSH 0x1d47
0043CA6B  68 04 60 7A 00            PUSH 0x7a6004
0043CA70  E8 5B 0A 27 00            CALL 0x006ad4d0
0043CA75  83 C4 18                  ADD ESP,0x18
0043CA78  85 C0                     TEST EAX,EAX
0043CA7A  0F 84 60 0E 00 00         JZ 0x0043d8e0
0043CA80  CC                        INT3
LAB_0043ca8a:
0043CA8A  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043CA8E  6A 06                     PUSH 0x6
0043CA90  50                        PUSH EAX
0043CA91  6A FF                     PUSH -0x1
0043CA93  8B CA                     MOV ECX,EDX
0043CA95  EB 9E                     JMP 0x0043ca35
LAB_0043ca97:
0043CA97  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043CA9B  6A 05                     PUSH 0x5
0043CA9D  50                        PUSH EAX
0043CA9E  6A FF                     PUSH -0x1
0043CAA0  8B CA                     MOV ECX,EDX
0043CAA2  EB 91                     JMP 0x0043ca35
LAB_0043caa4:
0043CAA4  3C 05                     CMP AL,0x5
0043CAA6  0F 85 1F 01 00 00         JNZ 0x0043cbcb
0043CAAC  33 C0                     XOR EAX,EAX
0043CAAE  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043CAB3  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043CAB6  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043CAB9  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043CABC  C1 E6 04                  SHL ESI,0x4
0043CABF  03 F0                     ADD ESI,EAX
0043CAC1  8B 04 75 D3 4F 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f4fd3]
0043CAC8  3D 9A 01 00 00            CMP EAX,0x19a
0043CACD  8D 34 75 D3 4F 7F 00      LEA ESI,[ESI*0x2 + 0x7f4fd3]
0043CAD4  0F 8F 9B 00 00 00         JG 0x0043cb75
0043CADA  74 31                     JZ 0x0043cb0d
0043CADC  3B C7                     CMP EAX,EDI
0043CADE  0F 84 FC 0D 00 00         JZ 0x0043d8e0
0043CAE4  83 F8 5A                  CMP EAX,0x5a
0043CAE7  74 18                     JZ 0x0043cb01
0043CAE9  3D 72 01 00 00            CMP EAX,0x172
0043CAEE  0F 85 8D 00 00 00         JNZ 0x0043cb81
0043CAF4  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043CAF8  6A 02                     PUSH 0x2
0043CAFA  50                        PUSH EAX
0043CAFB  6A FF                     PUSH -0x1
0043CAFD  8B CA                     MOV ECX,EDX
0043CAFF  EB 5B                     JMP 0x0043cb5c
LAB_0043cb01:
0043CB01  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043CB05  51                        PUSH ECX
0043CB06  50                        PUSH EAX
0043CB07  6A FF                     PUSH -0x1
0043CB09  8B CA                     MOV ECX,EDX
0043CB0B  EB 4F                     JMP 0x0043cb5c
LAB_0043cb0d:
0043CB0D  66 83 7E 0E 01            CMP word ptr [ESI + 0xe],0x1
0043CB12  0F 85 C8 0D 00 00         JNZ 0x0043d8e0
0043CB18  8B 7E 0A                  MOV EDI,dword ptr [ESI + 0xa]
0043CB1B  33 DB                     XOR EBX,EBX
0043CB1D  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043CB20  85 C0                     TEST EAX,EAX
0043CB22  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043CB25  0F 8E B5 0D 00 00         JLE 0x0043d8e0
LAB_0043cb2b:
0043CB2B  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043CB2E  8B CF                     MOV ECX,EDI
0043CB30  52                        PUSH EDX
0043CB31  8B D3                     MOV EDX,EBX
0043CB33  E8 38 01 27 00            CALL 0x006acc70
0043CB38  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CB3B  66 3D FF FF               CMP AX,0xffff
0043CB3F  75 11                     JNZ 0x0043cb52
0043CB41  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043CB44  43                        INC EBX
0043CB45  3B D8                     CMP EBX,EAX
0043CB47  7C E2                     JL 0x0043cb2b
0043CB49  5F                        POP EDI
0043CB4A  5E                        POP ESI
0043CB4B  5B                        POP EBX
0043CB4C  8B E5                     MOV ESP,EBP
0043CB4E  5D                        POP EBP
0043CB4F  C2 08 00                  RET 0x8
LAB_0043cb52:
0043CB52  6A 01                     PUSH 0x1
0043CB54  50                        PUSH EAX
0043CB55  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
LAB_0043cb58:
0043CB58  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043CB5B  50                        PUSH EAX
LAB_0043cb5c:
0043CB5C  E8 59 5D FC FF            CALL 0x004028ba
0043CB61  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043CB64  8B 10                     MOV EDX,dword ptr [EAX]
0043CB66  51                        PUSH ECX
0043CB67  8B C8                     MOV ECX,EAX
0043CB69  FF 52 30                  CALL dword ptr [EDX + 0x30]
0043CB6C  5F                        POP EDI
0043CB6D  5E                        POP ESI
0043CB6E  5B                        POP EBX
0043CB6F  8B E5                     MOV ESP,EBP
0043CB71  5D                        POP EBP
0043CB72  C2 08 00                  RET 0x8
LAB_0043cb75:
0043CB75  2D A4 01 00 00            SUB EAX,0x1a4
0043CB7A  74 42                     JZ 0x0043cbbe
0043CB7C  83 E8 14                  SUB EAX,0x14
0043CB7F  74 30                     JZ 0x0043cbb1
LAB_0043cb81:
0043CB81  68 84 7E 7A 00            PUSH 0x7a7e84
0043CB86  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043CB8B  57                        PUSH EDI
0043CB8C  57                        PUSH EDI
0043CB8D  68 78 1D 00 00            PUSH 0x1d78
0043CB92  68 04 60 7A 00            PUSH 0x7a6004
0043CB97  E8 34 09 27 00            CALL 0x006ad4d0
0043CB9C  83 C4 18                  ADD ESP,0x18
0043CB9F  85 C0                     TEST EAX,EAX
0043CBA1  0F 84 39 0D 00 00         JZ 0x0043d8e0
0043CBA7  CC                        INT3
LAB_0043cbb1:
0043CBB1  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043CBB5  6A 06                     PUSH 0x6
0043CBB7  50                        PUSH EAX
0043CBB8  6A FF                     PUSH -0x1
0043CBBA  8B CA                     MOV ECX,EDX
0043CBBC  EB 9E                     JMP 0x0043cb5c
LAB_0043cbbe:
0043CBBE  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043CBC2  6A 05                     PUSH 0x5
0043CBC4  50                        PUSH EAX
0043CBC5  6A FF                     PUSH -0x1
0043CBC7  8B CA                     MOV ECX,EDX
0043CBC9  EB 91                     JMP 0x0043cb5c
LAB_0043cbcb:
0043CBCB  3C 06                     CMP AL,0x6
0043CBCD  0F 85 D8 00 00 00         JNZ 0x0043ccab
0043CBD3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043CBD6  8B 02                     MOV EAX,dword ptr [EDX]
0043CBD8  3B C7                     CMP EAX,EDI
0043CBDA  74 03                     JZ 0x0043cbdf
0043CBDC  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
LAB_0043cbdf:
0043CBDF  33 C0                     XOR EAX,EAX
0043CBE1  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043CBE6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043CBE9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043CBEC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043CBEF  C1 E1 04                  SHL ECX,0x4
0043CBF2  03 C8                     ADD ECX,EAX
0043CBF4  8B 04 4D D3 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4fd3]
0043CBFB  85 C0                     TEST EAX,EAX
0043CBFD  8D 3C 4D D3 4F 7F 00      LEA EDI,[ECX*0x2 + 0x7f4fd3]
0043CC04  0F 84 D6 0C 00 00         JZ 0x0043d8e0
0043CC0A  3D 9A 01 00 00            CMP EAX,0x19a
0043CC0F  74 32                     JZ 0x0043cc43
0043CC11  68 48 7E 7A 00            PUSH 0x7a7e48
0043CC16  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043CC1B  6A 00                     PUSH 0x0
0043CC1D  6A 00                     PUSH 0x0
0043CC1F  68 95 1D 00 00            PUSH 0x1d95
0043CC24  68 04 60 7A 00            PUSH 0x7a6004
0043CC29  E8 A2 08 27 00            CALL 0x006ad4d0
0043CC2E  83 C4 18                  ADD ESP,0x18
0043CC31  85 C0                     TEST EAX,EAX
0043CC33  0F 84 A7 0C 00 00         JZ 0x0043d8e0
0043CC39  CC                        INT3
LAB_0043cc43:
0043CC43  66 83 7F 0E 01            CMP word ptr [EDI + 0xe],0x1
0043CC48  0F 85 92 0C 00 00         JNZ 0x0043d8e0
0043CC4E  8B 5F 0A                  MOV EBX,dword ptr [EDI + 0xa]
0043CC51  33 F6                     XOR ESI,ESI
0043CC53  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043CC56  85 C0                     TEST EAX,EAX
0043CC58  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043CC5B  0F 8E 7F 0C 00 00         JLE 0x0043d8e0
LAB_0043cc61:
0043CC61  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043CC64  8B CB                     MOV ECX,EBX
0043CC66  52                        PUSH EDX
0043CC67  8B D6                     MOV EDX,ESI
0043CC69  E8 02 00 27 00            CALL 0x006acc70
0043CC6E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CC71  66 3D FF FF               CMP AX,0xffff
0043CC75  75 11                     JNZ 0x0043cc88
0043CC77  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043CC7A  46                        INC ESI
0043CC7B  3B F0                     CMP ESI,EAX
0043CC7D  7C E2                     JL 0x0043cc61
0043CC7F  5F                        POP EDI
0043CC80  5E                        POP ESI
0043CC81  5B                        POP EBX
0043CC82  8B E5                     MOV ESP,EBP
0043CC84  5D                        POP EBP
0043CC85  C2 08 00                  RET 0x8
LAB_0043cc88:
0043CC88  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043CC8B  6A 01                     PUSH 0x1
0043CC8D  50                        PUSH EAX
0043CC8E  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043CC91  50                        PUSH EAX
0043CC92  E8 23 5C FC FF            CALL 0x004028ba
0043CC97  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043CC9A  8B 10                     MOV EDX,dword ptr [EAX]
0043CC9C  51                        PUSH ECX
0043CC9D  8B C8                     MOV ECX,EAX
0043CC9F  FF 52 38                  CALL dword ptr [EDX + 0x38]
0043CCA2  5F                        POP EDI
0043CCA3  5E                        POP ESI
0043CCA4  5B                        POP EBX
0043CCA5  8B E5                     MOV ESP,EBP
0043CCA7  5D                        POP EBP
0043CCA8  C2 08 00                  RET 0x8
LAB_0043ccab:
0043CCAB  3C 07                     CMP AL,0x7
0043CCAD  0F 85 E4 00 00 00         JNZ 0x0043cd97
0043CCB3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043CCB6  8B 10                     MOV EDX,dword ptr [EAX]
0043CCB8  89 7A 0C                  MOV dword ptr [EDX + 0xc],EDI
0043CCBB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0043CCBE  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
0043CCC1  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0043CCC4  89 7A 0C                  MOV dword ptr [EDX + 0xc],EDI
0043CCC7  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0043CCCA  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
0043CCCD  33 C0                     XOR EAX,EAX
0043CCCF  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043CCD4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043CCD7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043CCDA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043CCDD  C1 E1 04                  SHL ECX,0x4
0043CCE0  03 C8                     ADD ECX,EAX
0043CCE2  8B 04 4D D3 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4fd3]
0043CCE9  3B C7                     CMP EAX,EDI
0043CCEB  8D 1C 4D D3 4F 7F 00      LEA EBX,[ECX*0x2 + 0x7f4fd3]
0043CCF2  0F 84 E8 0B 00 00         JZ 0x0043d8e0
0043CCF8  3D 9A 01 00 00            CMP EAX,0x19a
0043CCFD  74 30                     JZ 0x0043cd2f
0043CCFF  68 0C 7E 7A 00            PUSH 0x7a7e0c
0043CD04  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043CD09  57                        PUSH EDI
0043CD0A  57                        PUSH EDI
0043CD0B  68 B2 1D 00 00            PUSH 0x1db2
0043CD10  68 04 60 7A 00            PUSH 0x7a6004
0043CD15  E8 B6 07 27 00            CALL 0x006ad4d0
0043CD1A  83 C4 18                  ADD ESP,0x18
0043CD1D  85 C0                     TEST EAX,EAX
0043CD1F  0F 84 BB 0B 00 00         JZ 0x0043d8e0
0043CD25  CC                        INT3
LAB_0043cd2f:
0043CD2F  66 83 7B 0E 01            CMP word ptr [EBX + 0xe],0x1
0043CD34  0F 85 A6 0B 00 00         JNZ 0x0043d8e0
0043CD3A  8B 7B 0A                  MOV EDI,dword ptr [EBX + 0xa]
0043CD3D  33 F6                     XOR ESI,ESI
0043CD3F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043CD42  85 C0                     TEST EAX,EAX
0043CD44  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043CD47  0F 8E 93 0B 00 00         JLE 0x0043d8e0
LAB_0043cd4d:
0043CD4D  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043CD50  8B CF                     MOV ECX,EDI
0043CD52  52                        PUSH EDX
0043CD53  8B D6                     MOV EDX,ESI
0043CD55  E8 16 FF 26 00            CALL 0x006acc70
0043CD5A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CD5D  66 3D FF FF               CMP AX,0xffff
0043CD61  75 11                     JNZ 0x0043cd74
0043CD63  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043CD66  46                        INC ESI
0043CD67  3B F0                     CMP ESI,EAX
0043CD69  7C E2                     JL 0x0043cd4d
0043CD6B  5F                        POP EDI
0043CD6C  5E                        POP ESI
0043CD6D  5B                        POP EBX
0043CD6E  8B E5                     MOV ESP,EBP
0043CD70  5D                        POP EBP
0043CD71  C2 08 00                  RET 0x8
LAB_0043cd74:
0043CD74  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043CD77  6A 01                     PUSH 0x1
0043CD79  50                        PUSH EAX
0043CD7A  8A 43 04                  MOV AL,byte ptr [EBX + 0x4]
0043CD7D  50                        PUSH EAX
0043CD7E  E8 37 5B FC FF            CALL 0x004028ba
0043CD83  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043CD86  8B 10                     MOV EDX,dword ptr [EAX]
0043CD88  51                        PUSH ECX
0043CD89  8B C8                     MOV ECX,EAX
0043CD8B  FF 52 3C                  CALL dword ptr [EDX + 0x3c]
0043CD8E  5F                        POP EDI
0043CD8F  5E                        POP ESI
0043CD90  5B                        POP EBX
0043CD91  8B E5                     MOV ESP,EBP
0043CD93  5D                        POP EBP
0043CD94  C2 08 00                  RET 0x8
LAB_0043cd97:
0043CD97  3C 08                     CMP AL,0x8
0043CD99  0F 85 E5 00 00 00         JNZ 0x0043ce84
0043CD9F  33 C0                     XOR EAX,EAX
0043CDA1  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0043CDA4  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043CDA9  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043CDAC  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043CDAF  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0043CDB2  8B 0B                     MOV ECX,dword ptr [EBX]
0043CDB4  C1 E2 04                  SHL EDX,0x4
0043CDB7  03 D0                     ADD EDX,EAX
0043CDB9  33 C0                     XOR EAX,EAX
0043CDBB  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0043CDBE  8D 3C 55 83 4F 7F 00      LEA EDI,[EDX*0x2 + 0x7f4f83]
0043CDC5  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
0043CDC8  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
0043CDCB  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0043CDCE  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0043CDD1  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
0043CDD4  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
0043CDD7  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0043CDDA  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0043CDDD  8B 0F                     MOV ECX,dword ptr [EDI]
0043CDDF  3B C8                     CMP ECX,EAX
0043CDE1  0F 84 F9 0A 00 00         JZ 0x0043d8e0
0043CDE7  83 F9 3C                  CMP ECX,0x3c
0043CDEA  74 30                     JZ 0x0043ce1c
0043CDEC  68 D0 7D 7A 00            PUSH 0x7a7dd0
0043CDF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043CDF6  50                        PUSH EAX
0043CDF7  50                        PUSH EAX
0043CDF8  68 D0 1D 00 00            PUSH 0x1dd0
0043CDFD  68 04 60 7A 00            PUSH 0x7a6004
0043CE02  E8 C9 06 27 00            CALL 0x006ad4d0
0043CE07  83 C4 18                  ADD ESP,0x18
0043CE0A  85 C0                     TEST EAX,EAX
0043CE0C  0F 84 CE 0A 00 00         JZ 0x0043d8e0
0043CE12  CC                        INT3
LAB_0043ce1c:
0043CE1C  66 39 47 0E               CMP word ptr [EDI + 0xe],AX
0043CE20  0F 86 BA 0A 00 00         JBE 0x0043d8e0
0043CE26  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
0043CE29  33 F6                     XOR ESI,ESI
0043CE2B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0043CE2E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0043CE31  85 C0                     TEST EAX,EAX
0043CE33  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043CE36  0F 8E A4 0A 00 00         JLE 0x0043d8e0
LAB_0043ce3c:
0043CE3C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043CE3F  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043CE42  52                        PUSH EDX
0043CE43  8B D6                     MOV EDX,ESI
0043CE45  E8 26 FE 26 00            CALL 0x006acc70
0043CE4A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CE4D  66 3D FF FF               CMP AX,0xffff
0043CE51  75 11                     JNZ 0x0043ce64
0043CE53  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043CE56  46                        INC ESI
0043CE57  3B F0                     CMP ESI,EAX
0043CE59  7C E1                     JL 0x0043ce3c
0043CE5B  5F                        POP EDI
0043CE5C  5E                        POP ESI
0043CE5D  5B                        POP EBX
0043CE5E  8B E5                     MOV ESP,EBP
0043CE60  5D                        POP EBP
0043CE61  C2 08 00                  RET 0x8
LAB_0043ce64:
0043CE64  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043CE67  6A 01                     PUSH 0x1
0043CE69  50                        PUSH EAX
0043CE6A  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043CE6D  50                        PUSH EAX
0043CE6E  E8 47 5A FC FF            CALL 0x004028ba
0043CE73  8B 10                     MOV EDX,dword ptr [EAX]
0043CE75  53                        PUSH EBX
0043CE76  8B C8                     MOV ECX,EAX
0043CE78  FF 52 40                  CALL dword ptr [EDX + 0x40]
0043CE7B  5F                        POP EDI
0043CE7C  5E                        POP ESI
0043CE7D  5B                        POP EBX
0043CE7E  8B E5                     MOV ESP,EBP
0043CE80  5D                        POP EBP
0043CE81  C2 08 00                  RET 0x8
LAB_0043ce84:
0043CE84  3C 09                     CMP AL,0x9
0043CE86  0F 85 CC 00 00 00         JNZ 0x0043cf58
0043CE8C  33 C0                     XOR EAX,EAX
0043CE8E  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043CE93  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043CE96  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043CE99  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043CE9C  C1 E1 04                  SHL ECX,0x4
0043CE9F  03 C8                     ADD ECX,EAX
0043CEA1  8B 04 4D D3 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4fd3]
0043CEA8  85 C0                     TEST EAX,EAX
0043CEAA  8D 3C 4D D3 4F 7F 00      LEA EDI,[ECX*0x2 + 0x7f4fd3]
0043CEB1  0F 84 29 0A 00 00         JZ 0x0043d8e0
0043CEB7  3D 9A 01 00 00            CMP EAX,0x19a
0043CEBC  74 32                     JZ 0x0043cef0
0043CEBE  68 94 7D 7A 00            PUSH 0x7a7d94
0043CEC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043CEC8  6A 00                     PUSH 0x0
0043CECA  6A 00                     PUSH 0x0
0043CECC  68 EC 1D 00 00            PUSH 0x1dec
0043CED1  68 04 60 7A 00            PUSH 0x7a6004
0043CED6  E8 F5 05 27 00            CALL 0x006ad4d0
0043CEDB  83 C4 18                  ADD ESP,0x18
0043CEDE  85 C0                     TEST EAX,EAX
0043CEE0  0F 84 FA 09 00 00         JZ 0x0043d8e0
0043CEE6  CC                        INT3
LAB_0043cef0:
0043CEF0  66 83 7F 0E 01            CMP word ptr [EDI + 0xe],0x1
0043CEF5  0F 85 E5 09 00 00         JNZ 0x0043d8e0
0043CEFB  8B 5F 0A                  MOV EBX,dword ptr [EDI + 0xa]
0043CEFE  33 F6                     XOR ESI,ESI
0043CF00  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043CF03  85 C0                     TEST EAX,EAX
0043CF05  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043CF08  0F 8E D2 09 00 00         JLE 0x0043d8e0
LAB_0043cf0e:
0043CF0E  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043CF11  8B CB                     MOV ECX,EBX
0043CF13  52                        PUSH EDX
0043CF14  8B D6                     MOV EDX,ESI
0043CF16  E8 55 FD 26 00            CALL 0x006acc70
0043CF1B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CF1E  66 3D FF FF               CMP AX,0xffff
0043CF22  75 11                     JNZ 0x0043cf35
0043CF24  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043CF27  46                        INC ESI
0043CF28  3B F0                     CMP ESI,EAX
0043CF2A  7C E2                     JL 0x0043cf0e
0043CF2C  5F                        POP EDI
0043CF2D  5E                        POP ESI
0043CF2E  5B                        POP EBX
0043CF2F  8B E5                     MOV ESP,EBP
0043CF31  5D                        POP EBP
0043CF32  C2 08 00                  RET 0x8
LAB_0043cf35:
0043CF35  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043CF38  6A 01                     PUSH 0x1
0043CF3A  50                        PUSH EAX
0043CF3B  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043CF3E  50                        PUSH EAX
0043CF3F  E8 76 59 FC FF            CALL 0x004028ba
0043CF44  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043CF47  8B 10                     MOV EDX,dword ptr [EAX]
0043CF49  51                        PUSH ECX
0043CF4A  8B C8                     MOV ECX,EAX
0043CF4C  FF 52 44                  CALL dword ptr [EDX + 0x44]
0043CF4F  5F                        POP EDI
0043CF50  5E                        POP ESI
0043CF51  5B                        POP EBX
0043CF52  8B E5                     MOV ESP,EBP
0043CF54  5D                        POP EBP
0043CF55  C2 08 00                  RET 0x8
LAB_0043cf58:
0043CF58  3C 0A                     CMP AL,0xa
0043CF5A  0F 85 97 00 00 00         JNZ 0x0043cff7
0043CF60  33 C0                     XOR EAX,EAX
0043CF62  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043CF67  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043CF6A  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043CF6D  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0043CF70  C1 E2 04                  SHL EDX,0x4
0043CF73  03 D0                     ADD EDX,EAX
0043CF75  8B 0C 55 D3 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4fd3]
0043CF7C  8D 04 55 D3 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4fd3]
0043CF83  81 F9 9A 01 00 00         CMP ECX,0x19a
0043CF89  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0043CF8C  0F 85 4E 09 00 00         JNZ 0x0043d8e0
0043CF92  66 83 78 0E 01            CMP word ptr [EAX + 0xe],0x1
0043CF97  0F 85 43 09 00 00         JNZ 0x0043d8e0
0043CF9D  8B 58 0A                  MOV EBX,dword ptr [EAX + 0xa]
0043CFA0  33 F6                     XOR ESI,ESI
0043CFA2  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
0043CFA5  85 FF                     TEST EDI,EDI
0043CFA7  0F 8E 33 09 00 00         JLE 0x0043d8e0
LAB_0043cfad:
0043CFAD  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043CFB0  8B D6                     MOV EDX,ESI
0043CFB2  51                        PUSH ECX
0043CFB3  8B CB                     MOV ECX,EBX
0043CFB5  E8 B6 FC 26 00            CALL 0x006acc70
0043CFBA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043CFBD  66 3D FF FF               CMP AX,0xffff
0043CFC1  75 0E                     JNZ 0x0043cfd1
0043CFC3  46                        INC ESI
0043CFC4  3B F7                     CMP ESI,EDI
0043CFC6  7C E5                     JL 0x0043cfad
0043CFC8  5F                        POP EDI
0043CFC9  5E                        POP ESI
0043CFCA  5B                        POP EBX
0043CFCB  8B E5                     MOV ESP,EBP
0043CFCD  5D                        POP EBP
0043CFCE  C2 08 00                  RET 0x8
LAB_0043cfd1:
0043CFD1  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0043CFD4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043CFD7  6A 01                     PUSH 0x1
0043CFD9  50                        PUSH EAX
0043CFDA  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
0043CFDD  50                        PUSH EAX
0043CFDE  E8 D7 58 FC FF            CALL 0x004028ba
0043CFE3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043CFE6  8B 10                     MOV EDX,dword ptr [EAX]
0043CFE8  51                        PUSH ECX
0043CFE9  8B C8                     MOV ECX,EAX
0043CFEB  FF 52 48                  CALL dword ptr [EDX + 0x48]
0043CFEE  5F                        POP EDI
0043CFEF  5E                        POP ESI
0043CFF0  5B                        POP EBX
0043CFF1  8B E5                     MOV ESP,EBP
0043CFF3  5D                        POP EBP
0043CFF4  C2 08 00                  RET 0x8
LAB_0043cff7:
0043CFF7  3C 0B                     CMP AL,0xb
0043CFF9  0F 85 D0 02 00 00         JNZ 0x0043d2cf
0043CFFF  33 C0                     XOR EAX,EAX
0043D001  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D006  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043D009  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043D00C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0043D00F  C1 E2 04                  SHL EDX,0x4
0043D012  03 D0                     ADD EDX,EAX
0043D014  8B 04 55 83 4F 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f4f83]
0043D01B  3B C7                     CMP EAX,EDI
0043D01D  8D 1C 55 83 4F 7F 00      LEA EBX,[EDX*0x2 + 0x7f4f83]
0043D024  0F 84 B6 08 00 00         JZ 0x0043d8e0
0043D02A  83 F8 3C                  CMP EAX,0x3c
0043D02D  74 30                     JZ 0x0043d05f
0043D02F  68 54 7D 7A 00            PUSH 0x7a7d54
0043D034  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D039  57                        PUSH EDI
0043D03A  57                        PUSH EDI
0043D03B  68 85 1E 00 00            PUSH 0x1e85
0043D040  68 04 60 7A 00            PUSH 0x7a6004
0043D045  E8 86 04 27 00            CALL 0x006ad4d0
0043D04A  83 C4 18                  ADD ESP,0x18
0043D04D  85 C0                     TEST EAX,EAX
0043D04F  0F 84 8B 08 00 00         JZ 0x0043d8e0
0043D055  CC                        INT3
LAB_0043d05f:
0043D05F  66 8B 43 0E               MOV AX,word ptr [EBX + 0xe]
0043D063  66 3D 01 00               CMP AX,0x1
0043D067  75 5D                     JNZ 0x0043d0c6
0043D069  8B 7B 0A                  MOV EDI,dword ptr [EBX + 0xa]
0043D06C  33 F6                     XOR ESI,ESI
0043D06E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043D071  85 C0                     TEST EAX,EAX
0043D073  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D076  0F 8E 64 08 00 00         JLE 0x0043d8e0
LAB_0043d07c:
0043D07C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0043D07F  8B D6                     MOV EDX,ESI
0043D081  50                        PUSH EAX
0043D082  8B CF                     MOV ECX,EDI
0043D084  E8 E7 FB 26 00            CALL 0x006acc70
0043D089  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D08C  66 3D FF FF               CMP AX,0xffff
0043D090  75 11                     JNZ 0x0043d0a3
0043D092  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D095  46                        INC ESI
0043D096  3B F0                     CMP ESI,EAX
0043D098  7C E2                     JL 0x0043d07c
0043D09A  5F                        POP EDI
0043D09B  5E                        POP ESI
0043D09C  5B                        POP EBX
0043D09D  8B E5                     MOV ESP,EBP
0043D09F  5D                        POP EBP
0043D0A0  C2 08 00                  RET 0x8
LAB_0043d0a3:
0043D0A3  8A 4B 04                  MOV CL,byte ptr [EBX + 0x4]
0043D0A6  6A 01                     PUSH 0x1
0043D0A8  50                        PUSH EAX
0043D0A9  51                        PUSH ECX
0043D0AA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D0AD  E8 08 58 FC FF            CALL 0x004028ba
0043D0B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D0B5  8B 10                     MOV EDX,dword ptr [EAX]
0043D0B7  51                        PUSH ECX
0043D0B8  8B C8                     MOV ECX,EAX
0043D0BA  FF 52 4C                  CALL dword ptr [EDX + 0x4c]
0043D0BD  5F                        POP EDI
0043D0BE  5E                        POP ESI
0043D0BF  5B                        POP EBX
0043D0C0  8B E5                     MOV ESP,EBP
0043D0C2  5D                        POP EBP
0043D0C3  C2 08 00                  RET 0x8
LAB_0043d0c6:
0043D0C6  0F 86 14 08 00 00         JBE 0x0043d8e0
0043D0CC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0043D0CF  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0043D0D5  C6 46 04 2B               MOV byte ptr [ESI + 0x4],0x2b
0043D0D9  C6 46 05 2C               MOV byte ptr [ESI + 0x5],0x2c
0043D0DD  C6 46 06 05               MOV byte ptr [ESI + 0x6],0x5
0043D0E1  C6 46 07 06               MOV byte ptr [ESI + 0x7],0x6
0043D0E5  C6 46 08 4D               MOV byte ptr [ESI + 0x8],0x4d
0043D0E9  C6 46 09 2D               MOV byte ptr [ESI + 0x9],0x2d
0043D0ED  C6 46 0A 01               MOV byte ptr [ESI + 0xa],0x1
0043D0F1  C6 46 0C 01               MOV byte ptr [ESI + 0xc],0x1
0043D0F5  C6 46 0D 01               MOV byte ptr [ESI + 0xd],0x1
0043D0F9  C6 46 0E 01               MOV byte ptr [ESI + 0xe],0x1
0043D0FD  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
0043D101  C6 46 0B 00               MOV byte ptr [ESI + 0xb],0x0
0043D105  8B 7B 0A                  MOV EDI,dword ptr [EBX + 0xa]
0043D108  33 DB                     XOR EBX,EBX
0043D10A  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0043D10D  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043D110  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
0043D114  85 C0                     TEST EAX,EAX
0043D116  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D119  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
0043D11D  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
0043D121  7E 57                     JLE 0x0043d17a
LAB_0043d123:
0043D123  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043D126  8B CF                     MOV ECX,EDI
0043D128  52                        PUSH EDX
0043D129  8B D3                     MOV EDX,EBX
0043D12B  E8 40 FB 26 00            CALL 0x006acc70
0043D130  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D133  66 3D FF FF               CMP AX,0xffff
0043D137  74 39                     JZ 0x0043d172
0043D139  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D13C  6A 01                     PUSH 0x1
0043D13E  50                        PUSH EAX
0043D13F  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D144  50                        PUSH EAX
0043D145  E8 70 57 FC FF            CALL 0x004028ba
0043D14A  8B 88 E6 07 00 00         MOV ECX,dword ptr [EAX + 0x7e6]
0043D150  85 C9                     TEST ECX,ECX
0043D152  74 06                     JZ 0x0043d15a
0043D154  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
0043D158  EB 04                     JMP 0x0043d15e
LAB_0043d15a:
0043D15A  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_0043d15e:
0043D15E  80 7E 12 03               CMP byte ptr [ESI + 0x12],0x3
0043D162  75 0E                     JNZ 0x0043d172
0043D164  8B 88 EA 07 00 00         MOV ECX,dword ptr [EAX + 0x7ea]
0043D16A  85 C9                     TEST ECX,ECX
0043D16C  75 04                     JNZ 0x0043d172
0043D16E  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
LAB_0043d172:
0043D172  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D175  43                        INC EBX
0043D176  3B D8                     CMP EBX,EAX
0043D178  7C A9                     JL 0x0043d123
LAB_0043d17a:
0043D17A  33 DB                     XOR EBX,EBX
0043D17C  85 C0                     TEST EAX,EAX
0043D17E  7E 4E                     JLE 0x0043d1ce
LAB_0043d180:
0043D180  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043D183  8B D3                     MOV EDX,EBX
0043D185  51                        PUSH ECX
0043D186  8B CF                     MOV ECX,EDI
0043D188  E8 E3 FA 26 00            CALL 0x006acc70
0043D18D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D190  66 3D FF FF               CMP AX,0xffff
0043D194  74 30                     JZ 0x0043d1c6
0043D196  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0043D19C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D19F  6A 01                     PUSH 0x1
0043D1A1  50                        PUSH EAX
0043D1A2  52                        PUSH EDX
0043D1A3  E8 12 57 FC FF            CALL 0x004028ba
0043D1A8  8B 10                     MOV EDX,dword ptr [EAX]
0043D1AA  8B C8                     MOV ECX,EAX
0043D1AC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043D1AF  83 C0 F9                  ADD EAX,-0x7
0043D1B2  83 F8 14                  CMP EAX,0x14
0043D1B5  77 17                     JA 0x0043d1ce
0043D1B7  33 C9                     XOR ECX,ECX
0043D1B9  8A 88 34 DC 43 00         MOV CL,byte ptr [EAX + 0x43dc34]
switchD_0043d1bf::switchD:
0043D1BF  FF 24 8D 2C DC 43 00      JMP dword ptr [ECX*0x4 + 0x43dc2c]
switchD_0043d1bf::caseD_7:
0043D1C6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D1C9  43                        INC EBX
0043D1CA  3B D8                     CMP EBX,EAX
0043D1CC  7C B2                     JL 0x0043d180
switchD_0043d1bf::caseD_a:
0043D1CE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D1D1  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
0043D1D8  3B D8                     CMP EBX,EAX
0043D1DA  75 17                     JNZ 0x0043d1f3
0043D1DC  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
0043D1E3  C6 46 0A 00               MOV byte ptr [ESI + 0xa],0x0
0043D1E7  C6 46 0B 00               MOV byte ptr [ESI + 0xb],0x0
0043D1EB  C6 46 0C 00               MOV byte ptr [ESI + 0xc],0x0
0043D1EF  C6 46 0D 00               MOV byte ptr [ESI + 0xd],0x0
LAB_0043d1f3:
0043D1F3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D1F6  33 DB                     XOR EBX,EBX
0043D1F8  33 FF                     XOR EDI,EDI
0043D1FA  85 C0                     TEST EAX,EAX
0043D1FC  7E 52                     JLE 0x0043d250
LAB_0043d1fe:
0043D1FE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043D201  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043D204  52                        PUSH EDX
0043D205  8B D7                     MOV EDX,EDI
0043D207  E8 64 FA 26 00            CALL 0x006acc70
0043D20C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D20F  66 3D FF FF               CMP AX,0xffff
0043D213  74 33                     JZ 0x0043d248
0043D215  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D218  6A 01                     PUSH 0x1
0043D21A  50                        PUSH EAX
0043D21B  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D220  50                        PUSH EAX
0043D221  43                        INC EBX
0043D222  E8 93 56 FC FF            CALL 0x004028ba
0043D227  83 FB 01                  CMP EBX,0x1
0043D22A  75 0B                     JNZ 0x0043d237
0043D22C  33 C9                     XOR ECX,ECX
0043D22E  66 8B 48 30               MOV CX,word ptr [EAX + 0x30]
0043D232  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0043D235  EB 11                     JMP 0x0043d248
LAB_0043d237:
0043D237  33 C9                     XOR ECX,ECX
0043D239  66 8B 48 30               MOV CX,word ptr [EAX + 0x30]
0043D23D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043D240  3B C1                     CMP EAX,ECX
0043D242  0F 85 98 06 00 00         JNZ 0x0043d8e0
LAB_0043d248:
0043D248  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D24B  47                        INC EDI
0043D24C  3B F8                     CMP EDI,EAX
0043D24E  7C AE                     JL 0x0043d1fe
LAB_0043d250:
0043D250  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
0043D254  0F 84 86 06 00 00         JZ 0x0043d8e0
0043D25A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043D25D  3D FF FF 00 00            CMP EAX,0xffff
0043D262  0F 84 78 06 00 00         JZ 0x0043d8e0
0043D268  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D26B  8B D0                     MOV EDX,EAX
0043D26D  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D272  52                        PUSH EDX
0043D273  50                        PUSH EAX
0043D274  E8 80 8A FC FF            CALL 0x00405cf9
0043D279  8B 10                     MOV EDX,dword ptr [EAX]
0043D27B  8B C8                     MOV ECX,EAX
0043D27D  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0043D280  83 C0 FB                  ADD EAX,-0x5
0043D283  83 F8 0F                  CMP EAX,0xf
0043D286  0F 87 54 06 00 00         JA 0x0043d8e0
0043D28C  33 C9                     XOR ECX,ECX
0043D28E  8A 88 60 DC 43 00         MOV CL,byte ptr [EAX + 0x43dc60]
switchD_0043d294::switchD:
0043D294  FF 24 8D 4C DC 43 00      JMP dword ptr [ECX*0x4 + 0x43dc4c]
switchD_0043d294::caseD_5:
0043D29B  C6 46 0C 03               MOV byte ptr [ESI + 0xc],0x3
0043D29F  5F                        POP EDI
0043D2A0  5E                        POP ESI
0043D2A1  5B                        POP EBX
0043D2A2  8B E5                     MOV ESP,EBP
0043D2A4  5D                        POP EBP
0043D2A5  C2 08 00                  RET 0x8
switchD_0043d294::caseD_6:
0043D2A8  C6 46 0D 03               MOV byte ptr [ESI + 0xd],0x3
0043D2AC  5F                        POP EDI
0043D2AD  5E                        POP ESI
0043D2AE  5B                        POP EBX
0043D2AF  8B E5                     MOV ESP,EBP
0043D2B1  5D                        POP EBP
0043D2B2  C2 08 00                  RET 0x8
switchD_0043d294::caseD_10:
0043D2B5  C6 46 0E 03               MOV byte ptr [ESI + 0xe],0x3
0043D2B9  5F                        POP EDI
0043D2BA  5E                        POP ESI
0043D2BB  5B                        POP EBX
0043D2BC  8B E5                     MOV ESP,EBP
0043D2BE  5D                        POP EBP
0043D2BF  C2 08 00                  RET 0x8
switchD_0043d294::caseD_14:
0043D2C2  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
0043D2C6  5F                        POP EDI
0043D2C7  5E                        POP ESI
0043D2C8  5B                        POP EBX
0043D2C9  8B E5                     MOV ESP,EBP
0043D2CB  5D                        POP EBP
0043D2CC  C2 08 00                  RET 0x8
LAB_0043d2cf:
0043D2CF  3C 0C                     CMP AL,0xc
0043D2D1  0F 85 D8 00 00 00         JNZ 0x0043d3af
0043D2D7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043D2DA  8B 02                     MOV EAX,dword ptr [EDX]
0043D2DC  3B C7                     CMP EAX,EDI
0043D2DE  74 03                     JZ 0x0043d2e3
0043D2E0  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
LAB_0043d2e3:
0043D2E3  33 C0                     XOR EAX,EAX
0043D2E5  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D2EA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043D2ED  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043D2F0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043D2F3  C1 E1 04                  SHL ECX,0x4
0043D2F6  03 C8                     ADD ECX,EAX
0043D2F8  8B 04 4D D3 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4fd3]
0043D2FF  85 C0                     TEST EAX,EAX
0043D301  8D 3C 4D D3 4F 7F 00      LEA EDI,[ECX*0x2 + 0x7f4fd3]
0043D308  0F 84 D2 05 00 00         JZ 0x0043d8e0
0043D30E  3D 9A 01 00 00            CMP EAX,0x19a
0043D313  74 32                     JZ 0x0043d347
0043D315  68 14 7D 7A 00            PUSH 0x7a7d14
0043D31A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D31F  6A 00                     PUSH 0x0
0043D321  6A 00                     PUSH 0x0
0043D323  68 A3 1E 00 00            PUSH 0x1ea3
0043D328  68 04 60 7A 00            PUSH 0x7a6004
0043D32D  E8 9E 01 27 00            CALL 0x006ad4d0
0043D332  83 C4 18                  ADD ESP,0x18
0043D335  85 C0                     TEST EAX,EAX
0043D337  0F 84 A3 05 00 00         JZ 0x0043d8e0
0043D33D  CC                        INT3
LAB_0043d347:
0043D347  66 83 7F 0E 01            CMP word ptr [EDI + 0xe],0x1
0043D34C  0F 85 8E 05 00 00         JNZ 0x0043d8e0
0043D352  8B 5F 0A                  MOV EBX,dword ptr [EDI + 0xa]
0043D355  33 F6                     XOR ESI,ESI
0043D357  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043D35A  85 C0                     TEST EAX,EAX
0043D35C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D35F  0F 8E 7B 05 00 00         JLE 0x0043d8e0
LAB_0043d365:
0043D365  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043D368  8B CB                     MOV ECX,EBX
0043D36A  52                        PUSH EDX
0043D36B  8B D6                     MOV EDX,ESI
0043D36D  E8 FE F8 26 00            CALL 0x006acc70
0043D372  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D375  66 3D FF FF               CMP AX,0xffff
0043D379  75 11                     JNZ 0x0043d38c
0043D37B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D37E  46                        INC ESI
0043D37F  3B F0                     CMP ESI,EAX
0043D381  7C E2                     JL 0x0043d365
0043D383  5F                        POP EDI
0043D384  5E                        POP ESI
0043D385  5B                        POP EBX
0043D386  8B E5                     MOV ESP,EBP
0043D388  5D                        POP EBP
0043D389  C2 08 00                  RET 0x8
LAB_0043d38c:
0043D38C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D38F  6A 01                     PUSH 0x1
0043D391  50                        PUSH EAX
0043D392  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043D395  50                        PUSH EAX
0043D396  E8 1F 55 FC FF            CALL 0x004028ba
0043D39B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D39E  8B 10                     MOV EDX,dword ptr [EAX]
0043D3A0  51                        PUSH ECX
0043D3A1  8B C8                     MOV ECX,EAX
0043D3A3  FF 52 50                  CALL dword ptr [EDX + 0x50]
0043D3A6  5F                        POP EDI
0043D3A7  5E                        POP ESI
0043D3A8  5B                        POP EBX
0043D3A9  8B E5                     MOV ESP,EBP
0043D3AB  5D                        POP EBP
0043D3AC  C2 08 00                  RET 0x8
LAB_0043d3af:
0043D3AF  3C 0E                     CMP AL,0xe
0043D3B1  0F 85 1A 01 00 00         JNZ 0x0043d4d1
0043D3B7  33 C0                     XOR EAX,EAX
0043D3B9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043D3BC  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D3C1  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0043D3C4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043D3C7  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043D3CA  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043D3CD  C1 E2 04                  SHL EDX,0x4
0043D3D0  03 D0                     ADD EDX,EAX
0043D3D2  8D 04 55 83 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f83]
0043D3D9  83 C0 1A                  ADD EAX,0x1a
0043D3DC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0043D3DF  EB 03                     JMP 0x0043d3e4
LAB_0043d3e1:
0043D3E1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0043d3e4:
0043D3E4  8B 48 F6                  MOV ECX,dword ptr [EAX + -0xa]
0043D3E7  85 C9                     TEST ECX,ECX
0043D3E9  74 32                     JZ 0x0043d41d
0043D3EB  83 F9 3C                  CMP ECX,0x3c
0043D3EE  74 69                     JZ 0x0043d459
0043D3F0  81 F9 AE 01 00 00         CMP ECX,0x1ae
0043D3F6  74 46                     JZ 0x0043d43e
0043D3F8  68 D4 7C 7A 00            PUSH 0x7a7cd4
0043D3FD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D402  6A 00                     PUSH 0x0
0043D404  6A 00                     PUSH 0x0
0043D406  68 CC 1E 00 00            PUSH 0x1ecc
0043D40B  68 04 60 7A 00            PUSH 0x7a6004
0043D410  E8 BB 00 27 00            CALL 0x006ad4d0
0043D415  83 C4 18                  ADD ESP,0x18
0043D418  85 C0                     TEST EAX,EAX
0043D41A  74 01                     JZ 0x0043d41d
0043D41C  CC                        INT3
LAB_0043d41d:
0043D41D  C6 07 00                  MOV byte ptr [EDI],0x0
LAB_0043d420:
0043D420  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043D423  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0043D426  83 C2 10                  ADD EDX,0x10
0043D429  83 C7 0B                  ADD EDI,0xb
0043D42C  48                        DEC EAX
0043D42D  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0043D430  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0043D433  75 AC                     JNZ 0x0043d3e1
0043D435  5F                        POP EDI
0043D436  5E                        POP ESI
0043D437  5B                        POP EBX
0043D438  8B E5                     MOV ESP,EBP
0043D43A  5D                        POP EBP
0043D43B  C2 08 00                  RET 0x8
LAB_0043d43e:
0043D43E  66 8B 40 FE               MOV AX,word ptr [EAX + -0x2]
0043D442  6A 03                     PUSH 0x3
0043D444  50                        PUSH EAX
0043D445  6A FF                     PUSH -0x1
LAB_0043d447:
0043D447  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D44A  E8 6B 54 FC FF            CALL 0x004028ba
0043D44F  8B 10                     MOV EDX,dword ptr [EAX]
0043D451  57                        PUSH EDI
0043D452  8B C8                     MOV ECX,EAX
0043D454  FF 52 58                  CALL dword ptr [EDX + 0x58]
0043D457  EB C7                     JMP 0x0043d420
LAB_0043d459:
0043D459  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0043D45D  66 3D 01 00               CMP AX,0x1
0043D461  75 3D                     JNZ 0x0043d4a0
0043D463  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043D466  33 F6                     XOR ESI,ESI
0043D468  8B 18                     MOV EBX,dword ptr [EAX]
0043D46A  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043D46D  85 C0                     TEST EAX,EAX
0043D46F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D472  7E AC                     JLE 0x0043d420
LAB_0043d474:
0043D474  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043D477  8B D6                     MOV EDX,ESI
0043D479  51                        PUSH ECX
0043D47A  8B CB                     MOV ECX,EBX
0043D47C  E8 EF F7 26 00            CALL 0x006acc70
0043D481  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D484  66 3D FF FF               CMP AX,0xffff
0043D488  75 0A                     JNZ 0x0043d494
0043D48A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D48D  46                        INC ESI
0043D48E  3B F0                     CMP ESI,EAX
0043D490  7C E2                     JL 0x0043d474
0043D492  EB 8C                     JMP 0x0043d420
LAB_0043d494:
0043D494  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043D497  6A 01                     PUSH 0x1
0043D499  50                        PUSH EAX
0043D49A  8A 42 FA                  MOV AL,byte ptr [EDX + -0x6]
0043D49D  50                        PUSH EAX
0043D49E  EB A7                     JMP 0x0043d447
LAB_0043d4a0:
0043D4A0  0F 86 77 FF FF FF         JBE 0x0043d41d
0043D4A6  C6 07 02                  MOV byte ptr [EDI],0x2
0043D4A9  33 C0                     XOR EAX,EAX
0043D4AB  C6 47 01 01               MOV byte ptr [EDI + 0x1],0x1
0043D4AF  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D4B4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043D4B7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043D4BA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043D4BD  C1 E1 04                  SHL ECX,0x4
0043D4C0  03 C8                     ADD ECX,EAX
0043D4C2  8A 14 4D 20 4E 7F 00      MOV DL,byte ptr [ECX*0x2 + 0x7f4e20]
0043D4C9  88 57 06                  MOV byte ptr [EDI + 0x6],DL
0043D4CC  E9 4F FF FF FF            JMP 0x0043d420
LAB_0043d4d1:
0043D4D1  3C 0F                     CMP AL,0xf
0043D4D3  0F 85 07 01 00 00         JNZ 0x0043d5e0
0043D4D9  33 C0                     XOR EAX,EAX
0043D4DB  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043D4DE  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D4E3  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0043D4E6  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043D4E9  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043D4EC  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043D4EF  C1 E2 04                  SHL EDX,0x4
0043D4F2  03 D0                     ADD EDX,EAX
0043D4F4  8D 34 55 D3 4F 7F 00      LEA ESI,[EDX*0x2 + 0x7f4fd3]
0043D4FB  83 C6 18                  ADD ESI,0x18
LAB_0043d4fe:
0043D4FE  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
0043D501  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D504  3D 9A 01 00 00            CMP EAX,0x19a
0043D509  7F 6A                     JG 0x0043d575
0043D50B  74 22                     JZ 0x0043d52f
0043D50D  85 C0                     TEST EAX,EAX
0043D50F  0F 84 91 00 00 00         JZ 0x0043d5a6
0043D515  83 F8 5A                  CMP EAX,0x5a
0043D518  74 0E                     JZ 0x0043d528
0043D51A  3D 72 01 00 00            CMP EAX,0x172
0043D51F  75 60                     JNZ 0x0043d581
0043D521  6A 02                     PUSH 0x2
0043D523  E9 89 00 00 00            JMP 0x0043d5b1
LAB_0043d528:
0043D528  6A 04                     PUSH 0x4
0043D52A  E9 82 00 00 00            JMP 0x0043d5b1
LAB_0043d52f:
0043D52F  66 83 7E 06 01            CMP word ptr [ESI + 0x6],0x1
0043D534  75 70                     JNZ 0x0043d5a6
0043D536  8B 46 02                  MOV EAX,dword ptr [ESI + 0x2]
0043D539  33 DB                     XOR EBX,EBX
0043D53B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0043D53E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0043D541  85 C0                     TEST EAX,EAX
0043D543  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D546  7E 7C                     JLE 0x0043d5c4
LAB_0043d548:
0043D548  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043D54B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0043D54E  50                        PUSH EAX
0043D54F  8B D3                     MOV EDX,EBX
0043D551  E8 1A F7 26 00            CALL 0x006acc70
0043D556  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D559  66 3D FF FF               CMP AX,0xffff
0043D55D  75 0A                     JNZ 0x0043d569
0043D55F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D562  43                        INC EBX
0043D563  3B D8                     CMP EBX,EAX
0043D565  7C E1                     JL 0x0043d548
0043D567  EB 5B                     JMP 0x0043d5c4
LAB_0043d569:
0043D569  8A 4E FC                  MOV CL,byte ptr [ESI + -0x4]
0043D56C  6A 01                     PUSH 0x1
0043D56E  50                        PUSH EAX
0043D56F  51                        PUSH ECX
0043D570  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D573  EB 42                     JMP 0x0043d5b7
LAB_0043d575:
0043D575  2D A4 01 00 00            SUB EAX,0x1a4
0043D57A  74 33                     JZ 0x0043d5af
0043D57C  83 E8 14                  SUB EAX,0x14
0043D57F  74 2A                     JZ 0x0043d5ab
LAB_0043d581:
0043D581  68 94 7C 7A 00            PUSH 0x7a7c94
0043D586  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D58B  6A 00                     PUSH 0x0
0043D58D  6A 00                     PUSH 0x0
0043D58F  68 FE 1E 00 00            PUSH 0x1efe
0043D594  68 04 60 7A 00            PUSH 0x7a6004
0043D599  E8 32 FF 26 00            CALL 0x006ad4d0
0043D59E  83 C4 18                  ADD ESP,0x18
0043D5A1  85 C0                     TEST EAX,EAX
0043D5A3  74 01                     JZ 0x0043d5a6
0043D5A5  CC                        INT3
LAB_0043d5a6:
0043D5A6  C6 07 00                  MOV byte ptr [EDI],0x0
0043D5A9  EB 19                     JMP 0x0043d5c4
LAB_0043d5ab:
0043D5AB  6A 06                     PUSH 0x6
0043D5AD  EB 02                     JMP 0x0043d5b1
LAB_0043d5af:
0043D5AF  6A 05                     PUSH 0x5
LAB_0043d5b1:
0043D5B1  66 8B 06                  MOV AX,word ptr [ESI]
0043D5B4  50                        PUSH EAX
0043D5B5  6A FF                     PUSH -0x1
LAB_0043d5b7:
0043D5B7  E8 FE 52 FC FF            CALL 0x004028ba
0043D5BC  8B 10                     MOV EDX,dword ptr [EAX]
0043D5BE  57                        PUSH EDI
0043D5BF  8B C8                     MOV ECX,EAX
0043D5C1  FF 52 5C                  CALL dword ptr [EDX + 0x5c]
LAB_0043d5c4:
0043D5C4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043D5C7  83 C6 10                  ADD ESI,0x10
0043D5CA  83 C7 0B                  ADD EDI,0xb
0043D5CD  48                        DEC EAX
0043D5CE  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0043D5D1  0F 85 27 FF FF FF         JNZ 0x0043d4fe
0043D5D7  5F                        POP EDI
0043D5D8  5E                        POP ESI
0043D5D9  5B                        POP EBX
0043D5DA  8B E5                     MOV ESP,EBP
0043D5DC  5D                        POP EBP
0043D5DD  C2 08 00                  RET 0x8
LAB_0043d5e0:
0043D5E0  3C 10                     CMP AL,0x10
0043D5E2  0F 85 ED 00 00 00         JNZ 0x0043d6d5
0043D5E8  33 C0                     XOR EAX,EAX
0043D5EA  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D5EF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043D5F2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043D5F5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043D5F8  C1 E1 04                  SHL ECX,0x4
0043D5FB  03 C8                     ADD ECX,EAX
0043D5FD  8B 04 4D 83 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4f83]
0043D604  85 C0                     TEST EAX,EAX
0043D606  8D 3C 4D 83 4F 7F 00      LEA EDI,[ECX*0x2 + 0x7f4f83]
0043D60D  0F 84 CD 02 00 00         JZ 0x0043d8e0
0043D613  83 F8 3C                  CMP EAX,0x3c
0043D616  74 3D                     JZ 0x0043d655
0043D618  3D AE 01 00 00            CMP EAX,0x1ae
0043D61D  0F 84 BD 02 00 00         JZ 0x0043d8e0
0043D623  68 54 7C 7A 00            PUSH 0x7a7c54
0043D628  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D62D  6A 00                     PUSH 0x0
0043D62F  6A 00                     PUSH 0x0
0043D631  68 22 1F 00 00            PUSH 0x1f22
0043D636  68 04 60 7A 00            PUSH 0x7a6004
0043D63B  E8 90 FE 26 00            CALL 0x006ad4d0
0043D640  83 C4 18                  ADD ESP,0x18
0043D643  85 C0                     TEST EAX,EAX
0043D645  0F 84 95 02 00 00         JZ 0x0043d8e0
0043D64B  CC                        INT3
LAB_0043d655:
0043D655  66 83 7F 0E 00            CMP word ptr [EDI + 0xe],0x0
0043D65A  0F 86 80 02 00 00         JBE 0x0043d8e0
0043D660  8B 5F 0A                  MOV EBX,dword ptr [EDI + 0xa]
0043D663  33 F6                     XOR ESI,ESI
0043D665  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043D668  85 C0                     TEST EAX,EAX
0043D66A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D66D  7E 3A                     JLE 0x0043d6a9
LAB_0043d66f:
0043D66F  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043D672  8B CB                     MOV ECX,EBX
0043D674  52                        PUSH EDX
0043D675  8B D6                     MOV EDX,ESI
0043D677  E8 F4 F5 26 00            CALL 0x006acc70
0043D67C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D67F  66 3D FF FF               CMP AX,0xffff
0043D683  75 0A                     JNZ 0x0043d68f
0043D685  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D688  46                        INC ESI
0043D689  3B F0                     CMP ESI,EAX
0043D68B  7C E2                     JL 0x0043d66f
0043D68D  EB 1A                     JMP 0x0043d6a9
LAB_0043d68f:
0043D68F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D692  6A 01                     PUSH 0x1
0043D694  50                        PUSH EAX
0043D695  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043D698  50                        PUSH EAX
0043D699  E8 1C 52 FC FF            CALL 0x004028ba
0043D69E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D6A1  8B 10                     MOV EDX,dword ptr [EAX]
0043D6A3  51                        PUSH ECX
0043D6A4  8B C8                     MOV ECX,EAX
0043D6A6  FF 52 60                  CALL dword ptr [EDX + 0x60]
LAB_0043d6a9:
0043D6A9  66 83 7F 0E 01            CMP word ptr [EDI + 0xe],0x1
0043D6AE  0F 86 2C 02 00 00         JBE 0x0043d8e0
0043D6B4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D6B7  83 C8 FF                  OR EAX,0xffffffff
0043D6BA  5F                        POP EDI
0043D6BB  5E                        POP ESI
0043D6BC  89 81 B0 01 00 00         MOV dword ptr [ECX + 0x1b0],EAX
0043D6C2  89 81 E0 01 00 00         MOV dword ptr [ECX + 0x1e0],EAX
0043D6C8  89 81 10 02 00 00         MOV dword ptr [ECX + 0x210],EAX
0043D6CE  5B                        POP EBX
0043D6CF  8B E5                     MOV ESP,EBP
0043D6D1  5D                        POP EBP
0043D6D2  C2 08 00                  RET 0x8
LAB_0043d6d5:
0043D6D5  3C 11                     CMP AL,0x11
0043D6D7  0F 85 89 01 00 00         JNZ 0x0043d866
0043D6DD  33 C0                     XOR EAX,EAX
0043D6DF  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D6E4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043D6E7  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043D6EA  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0043D6ED  C1 E2 04                  SHL EDX,0x4
0043D6F0  03 D0                     ADD EDX,EAX
0043D6F2  8B 0C 55 83 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f83]
0043D6F9  8D 04 55 83 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f83]
0043D700  3B CF                     CMP ECX,EDI
0043D702  0F 84 D8 01 00 00         JZ 0x0043d8e0
0043D708  83 F9 3C                  CMP ECX,0x3c
0043D70B  74 30                     JZ 0x0043d73d
0043D70D  68 14 7C 7A 00            PUSH 0x7a7c14
0043D712  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D717  57                        PUSH EDI
0043D718  57                        PUSH EDI
0043D719  68 4C 1F 00 00            PUSH 0x1f4c
0043D71E  68 04 60 7A 00            PUSH 0x7a6004
0043D723  E8 A8 FD 26 00            CALL 0x006ad4d0
0043D728  83 C4 18                  ADD ESP,0x18
0043D72B  85 C0                     TEST EAX,EAX
0043D72D  0F 84 AD 01 00 00         JZ 0x0043d8e0
0043D733  CC                        INT3
LAB_0043d73d:
0043D73D  66 83 78 0E 01            CMP word ptr [EAX + 0xe],0x1
0043D742  0F 86 98 01 00 00         JBE 0x0043d8e0
0043D748  8B 78 0A                  MOV EDI,dword ptr [EAX + 0xa]
0043D74B  33 F6                     XOR ESI,ESI
0043D74D  33 DB                     XOR EBX,EBX
0043D74F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0043D752  85 C0                     TEST EAX,EAX
0043D754  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043D757  7E 61                     JLE 0x0043d7ba
LAB_0043d759:
0043D759  8D 45 F8                  LEA EAX,[EBP + -0x8]
0043D75C  8B D3                     MOV EDX,EBX
0043D75E  50                        PUSH EAX
0043D75F  8B CF                     MOV ECX,EDI
0043D761  E8 0A F5 26 00            CALL 0x006acc70
0043D766  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043D769  66 3D FF FF               CMP AX,0xffff
0043D76D  74 34                     JZ 0x0043d7a3
0043D76F  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043D775  6A 01                     PUSH 0x1
0043D777  50                        PUSH EAX
0043D778  51                        PUSH ECX
0043D779  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D77C  46                        INC ESI
0043D77D  E8 38 51 FC FF            CALL 0x004028ba
0043D782  83 FE 01                  CMP ESI,0x1
0043D785  75 0B                     JNZ 0x0043d792
0043D787  33 C9                     XOR ECX,ECX
0043D789  66 8B 48 30               MOV CX,word ptr [EAX + 0x30]
0043D78D  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0043D790  EB 14                     JMP 0x0043d7a6
LAB_0043d792:
0043D792  33 D2                     XOR EDX,EDX
0043D794  66 8B 50 30               MOV DX,word ptr [EAX + 0x30]
0043D798  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043D79B  3B C2                     CMP EAX,EDX
0043D79D  0F 85 3D 01 00 00         JNZ 0x0043d8e0
LAB_0043d7a3:
0043D7A3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_0043d7a6:
0043D7A6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043D7A9  43                        INC EBX
0043D7AA  3B D8                     CMP EBX,EAX
0043D7AC  7C AB                     JL 0x0043d759
0043D7AE  81 F9 FF FF 00 00         CMP ECX,0xffff
0043D7B4  0F 84 26 01 00 00         JZ 0x0043d8e0
LAB_0043d7ba:
0043D7BA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043D7BD  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043D7C3  50                        PUSH EAX
0043D7C4  51                        PUSH ECX
0043D7C5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043D7C8  E8 2C 85 FC FF            CALL 0x00405cf9
0043D7CD  8B 10                     MOV EDX,dword ptr [EAX]
0043D7CF  8B C8                     MOV ECX,EAX
0043D7D1  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0043D7D4  83 C0 03                  ADD EAX,0x3
0043D7D7  83 F8 08                  CMP EAX,0x8
0043D7DA  0F 87 00 01 00 00         JA 0x0043d8e0
switchD_0043d7e0::switchD:
0043D7E0  FF 24 85 70 DC 43 00      JMP dword ptr [EAX*0x4 + 0x43dc70]
switchD_0043d7e0::caseD_1:
0043D7E7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043D7EA  5F                        POP EDI
0043D7EB  5E                        POP ESI
0043D7EC  5B                        POP EBX
0043D7ED  C6 00 01                  MOV byte ptr [EAX],0x1
0043D7F0  8B E5                     MOV ESP,EBP
0043D7F2  5D                        POP EBP
0043D7F3  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_4:
0043D7F6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D7F9  5F                        POP EDI
0043D7FA  5E                        POP ESI
0043D7FB  5B                        POP EBX
0043D7FC  C6 41 01 01               MOV byte ptr [ECX + 0x1],0x1
0043D800  8B E5                     MOV ESP,EBP
0043D802  5D                        POP EBP
0043D803  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_fffffffd:
0043D806  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043D809  5F                        POP EDI
0043D80A  5E                        POP ESI
0043D80B  5B                        POP EBX
0043D80C  C6 42 02 01               MOV byte ptr [EDX + 0x2],0x1
0043D810  8B E5                     MOV ESP,EBP
0043D812  5D                        POP EBP
0043D813  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_fffffffe:
0043D816  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043D819  5F                        POP EDI
0043D81A  5E                        POP ESI
0043D81B  5B                        POP EBX
0043D81C  C6 40 03 01               MOV byte ptr [EAX + 0x3],0x1
0043D820  8B E5                     MOV ESP,EBP
0043D822  5D                        POP EBP
0043D823  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_2:
0043D826  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D829  5F                        POP EDI
0043D82A  5E                        POP ESI
0043D82B  5B                        POP EBX
0043D82C  C6 41 04 01               MOV byte ptr [ECX + 0x4],0x1
0043D830  8B E5                     MOV ESP,EBP
0043D832  5D                        POP EBP
0043D833  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_5:
0043D836  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043D839  5F                        POP EDI
0043D83A  5E                        POP ESI
0043D83B  5B                        POP EBX
0043D83C  C6 42 05 01               MOV byte ptr [EDX + 0x5],0x1
0043D840  8B E5                     MOV ESP,EBP
0043D842  5D                        POP EBP
0043D843  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_3:
0043D846  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043D849  5F                        POP EDI
0043D84A  5E                        POP ESI
0043D84B  5B                        POP EBX
0043D84C  C6 40 06 01               MOV byte ptr [EAX + 0x6],0x1
0043D850  8B E5                     MOV ESP,EBP
0043D852  5D                        POP EBP
0043D853  C2 08 00                  RET 0x8
switchD_0043d7e0::caseD_0:
0043D856  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D859  5F                        POP EDI
0043D85A  5E                        POP ESI
0043D85B  5B                        POP EBX
0043D85C  C6 41 07 01               MOV byte ptr [ECX + 0x7],0x1
0043D860  8B E5                     MOV ESP,EBP
0043D862  5D                        POP EBP
0043D863  C2 08 00                  RET 0x8
LAB_0043d866:
0043D866  3C 12                     CMP AL,0x12
0043D868  75 76                     JNZ 0x0043d8e0
0043D86A  33 C0                     XOR EAX,EAX
0043D86C  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043D871  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043D874  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043D877  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043D87A  C1 E1 04                  SHL ECX,0x4
0043D87D  03 C8                     ADD ECX,EAX
0043D87F  8D 04 4D 83 4F 7F 00      LEA EAX,[ECX*0x2 + 0x7f4f83]
0043D886  8B 0C 4D 83 4F 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4f83]
0043D88D  3B CF                     CMP ECX,EDI
0043D88F  74 4F                     JZ 0x0043d8e0
0043D891  81 F9 AE 01 00 00         CMP ECX,0x1ae
0043D897  74 2C                     JZ 0x0043d8c5
0043D899  68 D4 7B 7A 00            PUSH 0x7a7bd4
0043D89E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043D8A3  57                        PUSH EDI
0043D8A4  57                        PUSH EDI
0043D8A5  68 5D 1F 00 00            PUSH 0x1f5d
0043D8AA  68 04 60 7A 00            PUSH 0x7a6004
0043D8AF  E8 1C FC 26 00            CALL 0x006ad4d0
0043D8B4  83 C4 18                  ADD ESP,0x18
0043D8B7  85 C0                     TEST EAX,EAX
0043D8B9  74 25                     JZ 0x0043d8e0
0043D8BB  CC                        INT3
LAB_0043d8c5:
0043D8C5  66 8B 40 08               MOV AX,word ptr [EAX + 0x8]
0043D8C9  6A 03                     PUSH 0x3
0043D8CB  50                        PUSH EAX
0043D8CC  6A FF                     PUSH -0x1
0043D8CE  8B CA                     MOV ECX,EDX
0043D8D0  E8 E5 4F FC FF            CALL 0x004028ba
0043D8D5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043D8D8  8B 10                     MOV EDX,dword ptr [EAX]
0043D8DA  51                        PUSH ECX
0043D8DB  8B C8                     MOV ECX,EAX
0043D8DD  FF 52 64                  CALL dword ptr [EDX + 0x64]
switchD_0043c4d2::caseD_3:
0043D8E0  5F                        POP EDI
0043D8E1  5E                        POP ESI
0043D8E2  5B                        POP EBX
0043D8E3  8B E5                     MOV ESP,EBP
0043D8E5  5D                        POP EBP
0043D8E6  C2 08 00                  RET 0x8
