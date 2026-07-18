FUN_006f2310:
006F2310  55                        PUSH EBP
006F2311  8B EC                     MOV EBP,ESP
006F2313  81 EC 74 03 00 00         SUB ESP,0x374
006F2319  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F231E  56                        PUSH ESI
006F231F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006F2322  57                        PUSH EDI
006F2323  8D 55 B0                  LEA EDX,[EBP + -0x50]
006F2326  8D 4D AC                  LEA ECX,[EBP + -0x54]
006F2329  6A 00                     PUSH 0x0
006F232B  52                        PUSH EDX
006F232C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F2333  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
006F233A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006F233D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2343  E8 A8 B4 03 00            CALL 0x0072d7f0
006F2348  8B F0                     MOV ESI,EAX
006F234A  83 C4 08                  ADD ESP,0x8
006F234D  85 F6                     TEST ESI,ESI
006F234F  0F 85 A9 00 00 00         JNZ 0x006f23fe
006F2355  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
006F2358  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F235B  88 85 90 FD FF FF         MOV byte ptr [EBP + 0xfffffd90],AL
006F2361  8B FE                     MOV EDI,ESI
006F2363  83 C9 FF                  OR ECX,0xffffffff
006F2366  33 C0                     XOR EAX,EAX
006F2368  F2 AE                     SCASB.REPNE ES:EDI
006F236A  F7 D1                     NOT ECX
006F236C  49                        DEC ECX
006F236D  8D BD A8 FD FF FF         LEA EDI,[EBP + 0xfffffda8]
006F2373  66 89 8D A6 FD FF FF      MOV word ptr [EBP + 0xfffffda6],CX
006F237A  8D 45 F4                  LEA EAX,[EBP + -0xc]
006F237D  0F BF C9                  MOVSX ECX,CX
006F2380  8B D1                     MOV EDX,ECX
006F2382  50                        PUSH EAX
006F2383  C1 E9 02                  SHR ECX,0x2
006F2386  F3 A5                     MOVSD.REP ES:EDI,ESI
006F2388  8B CA                     MOV ECX,EDX
006F238A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F238D  83 E1 03                  AND ECX,0x3
006F2390  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2392  8B 02                     MOV EAX,dword ptr [EDX]
006F2394  8D 8D 90 FD FF FF         LEA ECX,[EBP + 0xfffffd90]
006F239A  51                        PUSH ECX
006F239B  8B 08                     MOV ECX,dword ptr [EAX]
006F239D  51                        PUSH ECX
006F239E  E8 BD F7 05 00            CALL 0x00751b60
006F23A3  83 F8 FC                  CMP EAX,-0x4
006F23A6  75 17                     JNZ 0x006f23bf
006F23A8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006F23AE  68 84 02 00 00            PUSH 0x284
006F23B3  68 A4 FA 7E 00            PUSH 0x7efaa4
006F23B8  52                        PUSH EDX
006F23B9  50                        PUSH EAX
006F23BA  E8 81 3A FB FF            CALL 0x006a5e40
LAB_006f23bf:
006F23BF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F23C2  85 C0                     TEST EAX,EAX
006F23C4  75 07                     JNZ 0x006f23cd
006F23C6  6A 0C                     PUSH 0xc
006F23C8  E8 43 88 FB FF            CALL 0x006aac10
LAB_006f23cd:
006F23CD  8B 8D 9A FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd9a]
006F23D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F23D6  89 08                     MOV dword ptr [EAX],ECX
006F23D8  8B 95 9E FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd9e]
006F23DE  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006F23E1  8B 8D A2 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffda2]
006F23E7  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006F23EA  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006F23ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F23F0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F23F6  5F                        POP EDI
006F23F7  5E                        POP ESI
006F23F8  8B E5                     MOV ESP,EBP
006F23FA  5D                        POP EBP
006F23FB  C2 10 00                  RET 0x10
LAB_006f23fe:
006F23FE  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F2401  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2406  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2409  85 C0                     TEST EAX,EAX
006F240B  74 10                     JZ 0x006f241d
006F240D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F2410  85 C0                     TEST EAX,EAX
006F2412  74 09                     JZ 0x006f241d
006F2414  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F2417  51                        PUSH ECX
006F2418  E8 43 8C FB FF            CALL 0x006ab060
LAB_006f241d:
006F241D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F2420  85 C0                     TEST EAX,EAX
006F2422  75 05                     JNZ 0x006f2429
006F2424  83 FE FC                  CMP ESI,-0x4
006F2427  74 6B                     JZ 0x006f2494
LAB_006f2429:
006F2429  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F242C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F242F  25 FF 00 00 00            AND EAX,0xff
006F2434  52                        PUSH EDX
006F2435  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F2438  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006F243B  81 C2 31 02 00 00         ADD EDX,0x231
006F2441  8D 0C 45 A4 F0 7E 00      LEA ECX,[EAX*0x2 + 0x7ef0a4]
006F2448  8D 85 8C FC FF FF         LEA EAX,[EBP + 0xfffffc8c]
006F244E  51                        PUSH ECX
006F244F  52                        PUSH EDX
006F2450  68 28 FC 7E 00            PUSH 0x7efc28
006F2455  50                        PUSH EAX
006F2456  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F245C  8D 8D 8C FC FF FF         LEA ECX,[EBP + 0xfffffc8c]
006F2462  51                        PUSH ECX
006F2463  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2468  56                        PUSH ESI
006F2469  6A 00                     PUSH 0x0
006F246B  68 96 02 00 00            PUSH 0x296
006F2470  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2475  E8 56 B0 FB FF            CALL 0x006ad4d0
006F247A  83 C4 2C                  ADD ESP,0x2c
006F247D  85 C0                     TEST EAX,EAX
006F247F  74 01                     JZ 0x006f2482
006F2481  CC                        INT3
LAB_006f2482:
006F2482  68 98 02 00 00            PUSH 0x298
006F2487  68 A4 FA 7E 00            PUSH 0x7efaa4
006F248C  6A 00                     PUSH 0x0
006F248E  56                        PUSH ESI
006F248F  E8 AC 39 FB FF            CALL 0x006a5e40
LAB_006f2494:
006F2494  5F                        POP EDI
006F2495  33 C0                     XOR EAX,EAX
006F2497  5E                        POP ESI
006F2498  8B E5                     MOV ESP,EBP
006F249A  5D                        POP EBP
006F249B  C2 10 00                  RET 0x10
