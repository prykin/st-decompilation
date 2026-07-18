FUN_006d5260:
006D5260  55                        PUSH EBP
006D5261  8B EC                     MOV EBP,ESP
006D5263  81 EC 10 04 00 00         SUB ESP,0x410
006D5269  53                        PUSH EBX
006D526A  56                        PUSH ESI
006D526B  57                        PUSH EDI
006D526C  8B F9                     MOV EDI,ECX
006D526E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006D5271  8D 47 7C                  LEA EAX,[EDI + 0x7c]
006D5274  50                        PUSH EAX
006D5275  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D5278  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D527E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5281  8B B7 84 02 00 00         MOV ESI,dword ptr [EDI + 0x284]
006D5287  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006D528A  8B 58 44                  MOV EBX,dword ptr [EAX + 0x44]
006D528D  83 F9 58                  CMP ECX,0x58
006D5290  0F 86 AB 01 00 00         JBE 0x006d5441
006D5296  53                        PUSH EBX
006D5297  E8 C2 47 07 00            CALL 0x00749a5e
006D529C  85 C0                     TEST EAX,EAX
006D529E  0F 84 9D 01 00 00         JZ 0x006d5441
006D52A4  85 F6                     TEST ESI,ESI
006D52A6  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006D52AD  74 51                     JZ 0x006d5300
006D52AF  56                        PUSH ESI
006D52B0  E8 A9 47 07 00            CALL 0x00749a5e
006D52B5  85 C0                     TEST EAX,EAX
006D52B7  74 47                     JZ 0x006d5300
006D52B9  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006D52BC  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
006D52BF  3B C8                     CMP ECX,EAX
006D52C1  74 12                     JZ 0x006d52d5
006D52C3  85 C9                     TEST ECX,ECX
006D52C5  75 39                     JNZ 0x006d5300
006D52C7  8A 4B 3E                  MOV CL,byte ptr [EBX + 0x3e]
006D52CA  BA 01 00 00 00            MOV EDX,0x1
006D52CF  D3 E2                     SHL EDX,CL
006D52D1  3B C2                     CMP EAX,EDX
006D52D3  75 2B                     JNZ 0x006d5300
LAB_006d52d5:
006D52D5  56                        PUSH ESI
006D52D6  8D 3C 85 00 00 00 00      LEA EDI,[EAX*0x4 + 0x0]
006D52DD  E8 97 47 07 00            CALL 0x00749a79
006D52E2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006D52E5  53                        PUSH EBX
006D52E6  8B F8                     MOV EDI,EAX
006D52E8  E8 8C 47 07 00            CALL 0x00749a79
006D52ED  8B F0                     MOV ESI,EAX
006D52EF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D52F2  8B C8                     MOV ECX,EAX
006D52F4  33 D2                     XOR EDX,EDX
006D52F6  F3 A6                     CMPSB.REPE ES:EDI,ESI
006D52F8  75 03                     JNZ 0x006d52fd
006D52FA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006d52fd:
006D52FD  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006d5300:
006D5300  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5303  8D 8F 40 02 00 00         LEA ECX,[EDI + 0x240]
006D5309  50                        PUSH EAX
006D530A  E8 7B 66 07 00            CALL 0x0074b98a
006D530F  8B B7 84 02 00 00         MOV ESI,dword ptr [EDI + 0x284]
006D5315  66 8B 46 3E               MOV AX,word ptr [ESI + 0x3e]
006D5319  66 3D 08 00               CMP AX,0x8
006D531D  77 13                     JA 0x006d5332
006D531F  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
006D5322  85 C9                     TEST ECX,ECX
006D5324  75 0C                     JNZ 0x006d5332
006D5326  BA 01 00 00 00            MOV EDX,0x1
006D532B  8A C8                     MOV CL,AL
006D532D  D3 E2                     SHL EDX,CL
006D532F  89 56 50                  MOV dword ptr [ESI + 0x50],EDX
LAB_006d5332:
006D5332  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
006D5335  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
006D5338  3B CA                     CMP ECX,EDX
006D533A  76 0C                     JBE 0x006d5348
006D533C  BA 01 00 00 00            MOV EDX,0x1
006D5341  8A C8                     MOV CL,AL
006D5343  D3 E2                     SHL EDX,CL
006D5345  89 56 54                  MOV dword ptr [ESI + 0x54],EDX
LAB_006d5348:
006D5348  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006D534B  85 C0                     TEST EAX,EAX
006D534D  75 0C                     JNZ 0x006d535b
006D534F  8D 46 30                  LEA EAX,[ESI + 0x30]
006D5352  50                        PUSH EAX
006D5353  E8 E9 44 07 00            CALL 0x00749841
006D5358  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
LAB_006d535b:
006D535B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D535E  85 C0                     TEST EAX,EAX
006D5360  0F 84 31 01 00 00         JZ 0x006d5497
006D5366  56                        PUSH ESI
006D5367  E8 0D 47 07 00            CALL 0x00749a79
006D536C  8B 76 50                  MOV ESI,dword ptr [ESI + 0x50]
006D536F  85 F6                     TEST ESI,ESI
006D5371  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006D5374  76 51                     JBE 0x006d53c7
006D5376  8D BD F0 FB FF FF         LEA EDI,[EBP + 0xfffffbf0]
006D537C  8D B5 F1 FB FF FF         LEA ESI,[EBP + 0xfffffbf1]
006D5382  8D 9D F2 FB FF FF         LEA EBX,[EBP + 0xfffffbf2]
006D5388  2B F8                     SUB EDI,EAX
006D538A  2B F0                     SUB ESI,EAX
006D538C  8D 48 01                  LEA ECX,[EAX + 0x1]
006D538F  2B D8                     SUB EBX,EAX
006D5391  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5394  8D 95 F0 FB FF FF         LEA EDX,[EBP + 0xfffffbf0]
006D539A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006d539d:
006D539D  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
006D53A0  83 C1 04                  ADD ECX,0x4
006D53A3  88 02                     MOV byte ptr [EDX],AL
006D53A5  8A 41 FC                  MOV AL,byte ptr [ECX + -0x4]
006D53A8  88 44 0F FC               MOV byte ptr [EDI + ECX*0x1 + -0x4],AL
006D53AC  8A 41 FB                  MOV AL,byte ptr [ECX + -0x5]
006D53AF  88 44 0E FC               MOV byte ptr [ESI + ECX*0x1 + -0x4],AL
006D53B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D53B6  C6 44 0B FC 00            MOV byte ptr [EBX + ECX*0x1 + -0x4],0x0
006D53BB  83 C2 04                  ADD EDX,0x4
006D53BE  48                        DEC EAX
006D53BF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D53C2  75 D9                     JNZ 0x006d539d
006D53C4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006d53c7:
006D53C7  33 FF                     XOR EDI,EDI
006D53C9  8D 85 F0 FB FF FF         LEA EAX,[EBP + 0xfffffbf0]
LAB_006d53cf:
006D53CF  83 38 00                  CMP dword ptr [EAX],0x0
006D53D2  75 09                     JNZ 0x006d53dd
006D53D4  47                        INC EDI
006D53D5  83 C0 04                  ADD EAX,0x4
006D53D8  83 FF 0A                  CMP EDI,0xa
006D53DB  7C F2                     JL 0x006d53cf
LAB_006d53dd:
006D53DD  81 FE F6 00 00 00         CMP ESI,0xf6
006D53E3  7E 18                     JLE 0x006d53fd
006D53E5  8D 84 B5 EC FB FF FF      LEA EAX,[EBP + ESI*0x4 + 0xfffffbec]
LAB_006d53ec:
006D53EC  83 38 00                  CMP dword ptr [EAX],0x0
006D53EF  75 0C                     JNZ 0x006d53fd
006D53F1  4E                        DEC ESI
006D53F2  83 E8 04                  SUB EAX,0x4
006D53F5  81 FE F6 00 00 00         CMP ESI,0xf6
006D53FB  7F EF                     JG 0x006d53ec
LAB_006d53fd:
006D53FD  6A 00                     PUSH 0x0
006D53FF  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006D5405  85 FF                     TEST EDI,EDI
006D5407  8B D8                     MOV EBX,EAX
006D5409  7E 1D                     JLE 0x006d5428
006D540B  83 FF 0A                  CMP EDI,0xa
006D540E  8B C7                     MOV EAX,EDI
006D5410  7E 05                     JLE 0x006d5417
006D5412  B8 0A 00 00 00            MOV EAX,0xa
LAB_006d5417:
006D5417  8D 8D F0 FB FF FF         LEA ECX,[EBP + 0xfffffbf0]
006D541D  51                        PUSH ECX
006D541E  50                        PUSH EAX
006D541F  6A 00                     PUSH 0x0
006D5421  53                        PUSH EBX
006D5422  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
LAB_006d5428:
006D5428  81 FE 00 01 00 00         CMP ESI,0x100
006D542E  7D 2F                     JGE 0x006d545f
006D5430  81 FE F6 00 00 00         CMP ESI,0xf6
006D5436  7C 15                     JL 0x006d544d
006D5438  B8 00 01 00 00            MOV EAX,0x100
006D543D  2B C6                     SUB EAX,ESI
006D543F  EB 11                     JMP 0x006d5452
LAB_006d5441:
006D5441  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D5448  E9 B3 FE FF FF            JMP 0x006d5300
LAB_006d544d:
006D544D  B8 0A 00 00 00            MOV EAX,0xa
LAB_006d5452:
006D5452  8D 55 C8                  LEA EDX,[EBP + -0x38]
006D5455  52                        PUSH EDX
006D5456  50                        PUSH EAX
006D5457  56                        PUSH ESI
006D5458  53                        PUSH EBX
006D5459  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
LAB_006d545f:
006D545F  53                        PUSH EBX
006D5460  6A 00                     PUSH 0x0
006D5462  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
006D5468  2B F7                     SUB ESI,EDI
006D546A  6A 00                     PUSH 0x0
006D546C  56                        PUSH ESI
006D546D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D5470  8D 84 BD F0 FB FF FF      LEA EAX,[EBP + EDI*0x4 + 0xfffffbf0]
006D5477  57                        PUSH EDI
006D5478  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D547E  50                        PUSH EAX
006D547F  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
006D5482  52                        PUSH EDX
006D5483  E8 98 B5 FD FF            CALL 0x006b0a20
006D5488  6A 00                     PUSH 0x0
006D548A  6A 00                     PUSH 0x0
006D548C  6A 09                     PUSH 0x9
006D548E  8B CE                     MOV ECX,ESI
006D5490  E8 71 1F 07 00            CALL 0x00747406
006D5495  8B FE                     MOV EDI,ESI
LAB_006d5497:
006D5497  8D 87 40 02 00 00         LEA EAX,[EDI + 0x240]
006D549D  8D 8F 94 02 00 00         LEA ECX,[EDI + 0x294]
006D54A3  50                        PUSH EAX
006D54A4  E8 67 0C 00 00            CALL 0x006d6110
006D54A9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006D54AC  50                        PUSH EAX
006D54AD  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D54B3  5F                        POP EDI
006D54B4  5E                        POP ESI
006D54B5  33 C0                     XOR EAX,EAX
006D54B7  5B                        POP EBX
006D54B8  8B E5                     MOV ESP,EBP
006D54BA  5D                        POP EBP
006D54BB  C2 04 00                  RET 0x4
