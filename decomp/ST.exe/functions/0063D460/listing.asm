FUN_0063d460:
0063D460  55                        PUSH EBP
0063D461  8B EC                     MOV EBP,ESP
0063D463  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0063D466  53                        PUSH EBX
0063D467  56                        PUSH ESI
0063D468  57                        PUSH EDI
0063D469  85 D2                     TEST EDX,EDX
0063D46B  8B F1                     MOV ESI,ECX
0063D46D  7D 02                     JGE 0x0063d471
0063D46F  33 D2                     XOR EDX,EDX
LAB_0063d471:
0063D471  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0063D474  83 E8 0A                  SUB EAX,0xa
0063D477  0F 84 08 01 00 00         JZ 0x0063d585
0063D47D  48                        DEC EAX
0063D47E  0F 84 91 00 00 00         JZ 0x0063d515
0063D484  48                        DEC EAX
0063D485  0F 85 50 01 00 00         JNZ 0x0063d5db
0063D48B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063D48E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D491  89 8E A8 02 00 00         MOV dword ptr [ESI + 0x2a8],ECX
0063D497  8B 8E C0 02 00 00         MOV ECX,dword ptr [ESI + 0x2c0]
0063D49D  89 86 A4 02 00 00         MOV dword ptr [ESI + 0x2a4],EAX
0063D4A3  89 96 AC 02 00 00         MOV dword ptr [ESI + 0x2ac],EDX
0063D4A9  8B 96 B8 02 00 00         MOV EDX,dword ptr [ESI + 0x2b8]
0063D4AF  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0063D4B6  2B C1                     SUB EAX,ECX
0063D4B8  89 96 B4 02 00 00         MOV dword ptr [ESI + 0x2b4],EDX
0063D4BE  C7 86 B0 02 00 00 50 00 00 00  MOV dword ptr [ESI + 0x2b0],0x50
0063D4C8  C7 86 C0 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2c0],0x0
0063D4D2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0063D4D5  B8 67 66 66 66            MOV EAX,0x66666667
0063D4DA  F7 E9                     IMUL ECX
0063D4DC  D1 FA                     SAR EDX,0x1
0063D4DE  8B C2                     MOV EAX,EDX
0063D4E0  C6 86 28 03 00 00 04      MOV byte ptr [ESI + 0x328],0x4
0063D4E7  C1 E8 1F                  SHR EAX,0x1f
0063D4EA  03 D0                     ADD EDX,EAX
0063D4EC  C7 86 BC 02 00 00 24 00 00 00  MOV dword ptr [ESI + 0x2bc],0x24
0063D4F6  89 96 2A 03 00 00         MOV dword ptr [ESI + 0x32a],EDX
0063D4FC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063D502  5F                        POP EDI
0063D503  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063D509  89 96 2E 03 00 00         MOV dword ptr [ESI + 0x32e],EDX
0063D50F  5E                        POP ESI
0063D510  5B                        POP EBX
0063D511  5D                        POP EBP
0063D512  C2 10 00                  RET 0x10
LAB_0063d515:
0063D515  8D 9E A4 02 00 00         LEA EBX,[ESI + 0x2a4]
0063D51B  B9 24 00 00 00            MOV ECX,0x24
0063D520  33 C0                     XOR EAX,EAX
0063D522  8B FB                     MOV EDI,EBX
0063D524  F3 AB                     STOSD.REP ES:EDI
0063D526  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063D529  66 AB                     STOSW ES:EDI
0063D52B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D52E  89 8E A8 02 00 00         MOV dword ptr [ESI + 0x2a8],ECX
0063D534  89 03                     MOV dword ptr [EBX],EAX
0063D536  B8 32 00 00 00            MOV EAX,0x32
0063D53B  89 86 B4 02 00 00         MOV dword ptr [ESI + 0x2b4],EAX
0063D541  89 86 BC 02 00 00         MOV dword ptr [ESI + 0x2bc],EAX
0063D547  33 C0                     XOR EAX,EAX
0063D549  89 96 AC 02 00 00         MOV dword ptr [ESI + 0x2ac],EDX
0063D54F  C7 86 B0 02 00 00 ED 03 00 00  MOV dword ptr [ESI + 0x2b0],0x3ed
0063D559  C6 86 28 03 00 00 04      MOV byte ptr [ESI + 0x328],0x4
0063D560  89 86 C0 02 00 00         MOV dword ptr [ESI + 0x2c0],EAX
0063D566  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063D56C  5F                        POP EDI
0063D56D  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
0063D573  89 86 3E 03 00 00         MOV dword ptr [ESI + 0x33e],EAX
0063D579  89 8E 2E 03 00 00         MOV dword ptr [ESI + 0x32e],ECX
0063D57F  5E                        POP ESI
0063D580  5B                        POP EBX
0063D581  5D                        POP EBP
0063D582  C2 10 00                  RET 0x10
LAB_0063d585:
0063D585  8D 9E A4 02 00 00         LEA EBX,[ESI + 0x2a4]
0063D58B  B9 24 00 00 00            MOV ECX,0x24
0063D590  33 C0                     XOR EAX,EAX
0063D592  8B FB                     MOV EDI,EBX
0063D594  F3 AB                     STOSD.REP ES:EDI
0063D596  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063D599  66 AB                     STOSW ES:EDI
0063D59B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D59E  89 8E A8 02 00 00         MOV dword ptr [ESI + 0x2a8],ECX
0063D5A4  89 03                     MOV dword ptr [EBX],EAX
0063D5A6  89 96 AC 02 00 00         MOV dword ptr [ESI + 0x2ac],EDX
0063D5AC  C7 86 B0 02 00 00 AC 06 00 00  MOV dword ptr [ESI + 0x2b0],0x6ac
0063D5B6  C7 86 B4 02 00 00 09 01 00 00  MOV dword ptr [ESI + 0x2b4],0x109
0063D5C0  C6 86 28 03 00 00 04      MOV byte ptr [ESI + 0x328],0x4
0063D5C7  C7 86 BC 02 00 00 32 00 00 00  MOV dword ptr [ESI + 0x2bc],0x32
0063D5D1  C7 86 C0 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2c0],0x0
LAB_0063d5db:
0063D5DB  5F                        POP EDI
0063D5DC  5E                        POP ESI
0063D5DD  5B                        POP EBX
0063D5DE  5D                        POP EBP
0063D5DF  C2 10 00                  RET 0x10
