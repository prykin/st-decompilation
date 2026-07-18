FUN_006f24a0:
006F24A0  55                        PUSH EBP
006F24A1  8B EC                     MOV EBP,ESP
006F24A3  81 EC 6C 03 00 00         SUB ESP,0x36c
006F24A9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F24AE  56                        PUSH ESI
006F24AF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F24B2  57                        PUSH EDI
006F24B3  8D 55 B8                  LEA EDX,[EBP + -0x48]
006F24B6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006F24B9  6A 00                     PUSH 0x0
006F24BB  52                        PUSH EDX
006F24BC  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006F24BF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F24C5  E8 26 B3 03 00            CALL 0x0072d7f0
006F24CA  8B F0                     MOV ESI,EAX
006F24CC  83 C4 08                  ADD ESP,0x8
006F24CF  85 F6                     TEST ESI,ESI
006F24D1  0F 85 80 00 00 00         JNZ 0x006f2557
006F24D7  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
006F24DA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F24DD  88 85 94 FC FF FF         MOV byte ptr [EBP + 0xfffffc94],AL
006F24E3  8B FE                     MOV EDI,ESI
006F24E5  83 C9 FF                  OR ECX,0xffffffff
006F24E8  33 C0                     XOR EAX,EAX
006F24EA  F2 AE                     SCASB.REPNE ES:EDI
006F24EC  F7 D1                     NOT ECX
006F24EE  49                        DEC ECX
006F24EF  8D BD AC FC FF FF         LEA EDI,[EBP + 0xfffffcac]
006F24F5  66 89 8D AA FC FF FF      MOV word ptr [EBP + 0xfffffcaa],CX
006F24FC  8D 45 F8                  LEA EAX,[EBP + -0x8]
006F24FF  0F BF C9                  MOVSX ECX,CX
006F2502  8B D1                     MOV EDX,ECX
006F2504  50                        PUSH EAX
006F2505  C1 E9 02                  SHR ECX,0x2
006F2508  F3 A5                     MOVSD.REP ES:EDI,ESI
006F250A  8B CA                     MOV ECX,EDX
006F250C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F250F  83 E1 03                  AND ECX,0x3
006F2512  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2514  8B 02                     MOV EAX,dword ptr [EDX]
006F2516  8D 8D 94 FC FF FF         LEA ECX,[EBP + 0xfffffc94]
006F251C  51                        PUSH ECX
006F251D  8B 08                     MOV ECX,dword ptr [EAX]
006F251F  51                        PUSH ECX
006F2520  E8 3B F6 05 00            CALL 0x00751b60
006F2525  83 F8 FC                  CMP EAX,-0x4
006F2528  75 17                     JNZ 0x006f2541
006F252A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006F2530  68 B6 02 00 00            PUSH 0x2b6
006F2535  68 A4 FA 7E 00            PUSH 0x7efaa4
006F253A  52                        PUSH EDX
006F253B  50                        PUSH EAX
006F253C  E8 FF 38 FB FF            CALL 0x006a5e40
LAB_006f2541:
006F2541  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F2544  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2549  8B 85 95 FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffc95]
006F254F  5F                        POP EDI
006F2550  5E                        POP ESI
006F2551  8B E5                     MOV ESP,EBP
006F2553  5D                        POP EBP
006F2554  C2 0C 00                  RET 0xc
LAB_006f2557:
006F2557  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F255A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006F255D  85 C0                     TEST EAX,EAX
006F255F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2565  75 0F                     JNZ 0x006f2576
006F2567  83 FE FC                  CMP ESI,-0x4
006F256A  75 0A                     JNZ 0x006f2576
006F256C  8B C6                     MOV EAX,ESI
006F256E  5F                        POP EDI
006F256F  5E                        POP ESI
006F2570  8B E5                     MOV ESP,EBP
006F2572  5D                        POP EBP
006F2573  C2 0C 00                  RET 0xc
LAB_006f2576:
006F2576  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F2579  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F257C  25 FF 00 00 00            AND EAX,0xff
006F2581  52                        PUSH EDX
006F2582  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F2585  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006F2588  81 C2 31 02 00 00         ADD EDX,0x231
006F258E  8D 0C 45 A4 F0 7E 00      LEA ECX,[EAX*0x2 + 0x7ef0a4]
006F2595  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
006F259B  51                        PUSH ECX
006F259C  52                        PUSH EDX
006F259D  68 5C FC 7E 00            PUSH 0x7efc5c
006F25A2  50                        PUSH EAX
006F25A3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F25A9  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
006F25AF  51                        PUSH ECX
006F25B0  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F25B5  56                        PUSH ESI
006F25B6  6A 00                     PUSH 0x0
006F25B8  68 BD 02 00 00            PUSH 0x2bd
006F25BD  68 A4 FA 7E 00            PUSH 0x7efaa4
006F25C2  E8 09 AF FB FF            CALL 0x006ad4d0
006F25C7  83 C4 2C                  ADD ESP,0x2c
006F25CA  85 C0                     TEST EAX,EAX
006F25CC  74 01                     JZ 0x006f25cf
006F25CE  CC                        INT3
LAB_006f25cf:
006F25CF  68 BF 02 00 00            PUSH 0x2bf
006F25D4  68 A4 FA 7E 00            PUSH 0x7efaa4
006F25D9  6A 00                     PUSH 0x0
006F25DB  56                        PUSH ESI
006F25DC  E8 5F 38 FB FF            CALL 0x006a5e40
006F25E1  85 F6                     TEST ESI,ESI
006F25E3  7D 0A                     JGE 0x006f25ef
006F25E5  8B C6                     MOV EAX,ESI
006F25E7  5F                        POP EDI
006F25E8  5E                        POP ESI
006F25E9  8B E5                     MOV ESP,EBP
006F25EB  5D                        POP EBP
006F25EC  C2 0C 00                  RET 0xc
LAB_006f25ef:
006F25EF  5F                        POP EDI
006F25F0  83 C8 FF                  OR EAX,0xffffffff
006F25F3  5E                        POP ESI
006F25F4  8B E5                     MOV ESP,EBP
006F25F6  5D                        POP EBP
006F25F7  C2 0C 00                  RET 0xc
