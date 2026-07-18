FUN_006a01d0:
006A01D0  55                        PUSH EBP
006A01D1  8B EC                     MOV EBP,ESP
006A01D3  83 EC 60                  SUB ESP,0x60
006A01D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006A01DB  53                        PUSH EBX
006A01DC  56                        PUSH ESI
006A01DD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A01E0  57                        PUSH EDI
006A01E1  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006A01E4  8D 4D A0                  LEA ECX,[EBP + -0x60]
006A01E7  6A 00                     PUSH 0x0
006A01E9  52                        PUSH EDX
006A01EA  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
006A01F1  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006A01F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006A01FA  E8 F1 D5 08 00            CALL 0x0072d7f0
006A01FF  83 C4 08                  ADD ESP,0x8
006A0202  85 C0                     TEST EAX,EAX
006A0204  0F 85 A1 01 00 00         JNZ 0x006a03ab
006A020A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006A020D  6A 01                     PUSH 0x1
006A020F  8B 83 28 02 00 00         MOV EAX,dword ptr [EBX + 0x228]
006A0215  8B 8B 2C 02 00 00         MOV ECX,dword ptr [EBX + 0x22c]
006A021B  89 83 EB 53 00 00         MOV dword ptr [EBX + 0x53eb],EAX
006A0221  89 8B EF 53 00 00         MOV dword ptr [EBX + 0x53ef],ECX
006A0227  8D BB 24 01 00 00         LEA EDI,[EBX + 0x124]
006A022D  83 C9 FF                  OR ECX,0xffffffff
006A0230  33 C0                     XOR EAX,EAX
006A0232  8D 93 F3 53 00 00         LEA EDX,[EBX + 0x53f3]
006A0238  F2 AE                     SCASB.REPNE ES:EDI
006A023A  F7 D1                     NOT ECX
006A023C  2B F9                     SUB EDI,ECX
006A023E  8B C1                     MOV EAX,ECX
006A0240  8B F7                     MOV ESI,EDI
006A0242  8B FA                     MOV EDI,EDX
006A0244  C1 E9 02                  SHR ECX,0x2
006A0247  F3 A5                     MOVSD.REP ES:EDI,ESI
006A0249  8B C8                     MOV ECX,EAX
006A024B  83 E1 03                  AND ECX,0x3
006A024E  F3 A4                     MOVSB.REP ES:EDI,ESI
006A0250  8D 4D FC                  LEA ECX,[EBP + -0x4]
006A0253  33 F6                     XOR ESI,ESI
006A0255  51                        PUSH ECX
006A0256  8B 8B 34 02 00 00         MOV ECX,dword ptr [EBX + 0x234]
006A025C  68 30 D1 7C 00            PUSH 0x7cd130
006A0261  6A 0C                     PUSH 0xc
006A0263  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006A0266  E8 75 1A 05 00            CALL 0x006f1ce0
006A026B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A026E  8B 02                     MOV EAX,dword ptr [EDX]
006A0270  50                        PUSH EAX
006A0271  E8 BD 43 D6 FF            CALL 0x00404633
006A0276  83 C4 04                  ADD ESP,0x4
006A0279  8D 4D FC                  LEA ECX,[EBP + -0x4]
006A027C  51                        PUSH ECX
006A027D  8B 8B 34 02 00 00         MOV ECX,dword ptr [EBX + 0x234]
006A0283  E8 58 1E 05 00            CALL 0x006f20e0
006A0288  56                        PUSH ESI
006A0289  56                        PUSH ESI
006A028A  8D 53 20                  LEA EDX,[EBX + 0x20]
006A028D  6A 01                     PUSH 0x1
006A028F  52                        PUSH EDX
006A0290  68 45 03 00 00            PUSH 0x345
006A0295  E8 26 0C 05 00            CALL 0x006f0ec0
006A029A  83 C4 14                  ADD ESP,0x14
006A029D  8B CB                     MOV ECX,EBX
006A029F  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
006A02A2  E8 9C 47 D6 FF            CALL 0x00404a43
006A02A7  8B 83 39 02 00 00         MOV EAX,dword ptr [EBX + 0x239]
006A02AD  8B 8B 34 02 00 00         MOV ECX,dword ptr [EBX + 0x234]
006A02B3  8B 93 2C 02 00 00         MOV EDX,dword ptr [EBX + 0x22c]
006A02B9  6A 20                     PUSH 0x20
006A02BB  50                        PUSH EAX
006A02BC  8B 83 28 02 00 00         MOV EAX,dword ptr [EBX + 0x228]
006A02C2  51                        PUSH ECX
006A02C3  52                        PUSH EDX
006A02C4  50                        PUSH EAX
006A02C5  E8 86 F9 04 00            CALL 0x006efc50
006A02CA  83 C4 14                  ADD ESP,0x14
006A02CD  8B CB                     MOV ECX,EBX
006A02CF  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006A02D2  E8 6C 47 D6 FF            CALL 0x00404a43
006A02D7  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006A02DA  51                        PUSH ECX
006A02DB  E8 40 03 05 00            CALL 0x006f0620
006A02E0  83 C4 04                  ADD ESP,0x4
006A02E3  8B CB                     MOV ECX,EBX
006A02E5  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
006A02E8  E8 56 47 D6 FF            CALL 0x00404a43
006A02ED  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006A02F0  52                        PUSH EDX
006A02F1  6A 01                     PUSH 0x1
006A02F3  E8 BA 19 D6 FF            CALL 0x00401cb2
006A02F8  83 C4 08                  ADD ESP,0x8
006A02FB  8B CB                     MOV ECX,EBX
006A02FD  E8 41 47 D6 FF            CALL 0x00404a43
006A0302  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006A0305  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006A0308  50                        PUSH EAX
006A0309  51                        PUSH ECX
006A030A  E8 F1 08 05 00            CALL 0x006f0c00
006A030F  83 C4 08                  ADD ESP,0x8
006A0312  85 C0                     TEST EAX,EAX
006A0314  74 03                     JZ 0x006a0319
006A0316  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006a0319:
006A0319  8B CB                     MOV ECX,EBX
006A031B  E8 23 47 D6 FF            CALL 0x00404a43
006A0320  8D 83 EB 53 00 00         LEA EAX,[EBX + 0x53eb]
006A0326  8D 8B 4E 02 00 00         LEA ECX,[EBX + 0x24e]
006A032C  50                        PUSH EAX
006A032D  E8 EC 48 D6 FF            CALL 0x00404c1e
006A0332  85 C0                     TEST EAX,EAX
006A0334  75 03                     JNZ 0x006a0339
006A0336  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006a0339:
006A0339  8B CB                     MOV ECX,EBX
006A033B  E8 03 47 D6 FF            CALL 0x00404a43
006A0340  8B 93 28 02 00 00         MOV EDX,dword ptr [EBX + 0x228]
006A0346  8B 83 2C 02 00 00         MOV EAX,dword ptr [EBX + 0x22c]
006A034C  8B CB                     MOV ECX,EBX
006A034E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006A0351  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A0354  C7 45 EC 06 00 00 00      MOV dword ptr [EBP + -0x14],0x6
006A035B  E8 E3 46 D6 FF            CALL 0x00404a43
006A0360  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006A0363  51                        PUSH ECX
006A0364  8D 8B EF 1B 00 00         LEA ECX,[EBX + 0x1bef]
006A036A  E8 9D 3C D6 FF            CALL 0x0040400c
006A036F  8B CB                     MOV ECX,EBX
006A0371  E8 CD 46 D6 FF            CALL 0x00404a43
006A0376  8B 93 4A 02 00 00         MOV EDX,dword ptr [EBX + 0x24a]
006A037C  8B 83 39 02 00 00         MOV EAX,dword ptr [EBX + 0x239]
006A0382  52                        PUSH EDX
006A0383  56                        PUSH ESI
006A0384  56                        PUSH ESI
006A0385  50                        PUSH EAX
006A0386  8D 8B 03 1C 00 00         LEA ECX,[EBX + 0x1c03]
006A038C  E8 E0 4A D6 FF            CALL 0x00404e71
006A0391  8B CB                     MOV ECX,EBX
006A0393  E8 AB 46 D6 FF            CALL 0x00404a43
006A0398  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006A039B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A039E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006A03A4  5F                        POP EDI
006A03A5  5E                        POP ESI
006A03A6  5B                        POP EBX
006A03A7  8B E5                     MOV ESP,EBP
006A03A9  5D                        POP EBP
006A03AA  C3                        RET
LAB_006a03ab:
006A03AB  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006A03AE  68 70 86 7D 00            PUSH 0x7d8670
006A03B3  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A03B8  50                        PUSH EAX
006A03B9  6A 00                     PUSH 0x0
006A03BB  6A 72                     PUSH 0x72
006A03BD  68 4C 86 7D 00            PUSH 0x7d864c
006A03C2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006A03C8  E8 03 D1 00 00            CALL 0x006ad4d0
006A03CD  83 C4 18                  ADD ESP,0x18
006A03D0  85 C0                     TEST EAX,EAX
006A03D2  74 01                     JZ 0x006a03d5
006A03D4  CC                        INT3
LAB_006a03d5:
006A03D5  5F                        POP EDI
006A03D6  5E                        POP ESI
006A03D7  33 C0                     XOR EAX,EAX
006A03D9  5B                        POP EBX
006A03DA  8B E5                     MOV ESP,EBP
006A03DC  5D                        POP EBP
006A03DD  C3                        RET
