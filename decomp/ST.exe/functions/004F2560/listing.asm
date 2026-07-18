FUN_004f2560:
004F2560  55                        PUSH EBP
004F2561  8B EC                     MOV EBP,ESP
004F2563  83 EC 78                  SUB ESP,0x78
004F2566  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F2569  53                        PUSH EBX
004F256A  56                        PUSH ESI
004F256B  57                        PUSH EDI
004F256C  85 C0                     TEST EAX,EAX
004F256E  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004F2571  74 08                     JZ 0x004f257b
004F2573  8B 91 84 01 00 00         MOV EDX,dword ptr [ECX + 0x184]
004F2579  EB 06                     JMP 0x004f2581
LAB_004f257b:
004F257B  8B 91 9C 01 00 00         MOV EDX,dword ptr [ECX + 0x19c]
LAB_004f2581:
004F2581  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
004F2584  8D 91 63 0B 00 00         LEA EDX,[ECX + 0xb63]
004F258A  85 C0                     TEST EAX,EAX
004F258C  75 06                     JNZ 0x004f2594
004F258E  8D 91 51 0C 00 00         LEA EDX,[ECX + 0xc51]
LAB_004f2594:
004F2594  85 C0                     TEST EAX,EAX
004F2596  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004F2599  74 05                     JZ 0x004f25a0
004F259B  8B 51 40                  MOV EDX,dword ptr [ECX + 0x40]
004F259E  EB 03                     JMP 0x004f25a3
LAB_004f25a0:
004F25A0  8B 51 58                  MOV EDX,dword ptr [ECX + 0x58]
LAB_004f25a3:
004F25A3  85 C0                     TEST EAX,EAX
004F25A5  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004F25A8  74 08                     JZ 0x004f25b2
004F25AA  8B 91 98 00 00 00         MOV EDX,dword ptr [ECX + 0x98]
004F25B0  EB 06                     JMP 0x004f25b8
LAB_004f25b2:
004F25B2  8B 91 B0 00 00 00         MOV EDX,dword ptr [ECX + 0xb0]
LAB_004f25b8:
004F25B8  85 C0                     TEST EAX,EAX
004F25BA  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004F25BD  C7 45 D4 05 00 00 00      MOV dword ptr [EBP + -0x2c],0x5
004F25C4  C7 45 F0 2F 00 00 00      MOV dword ptr [EBP + -0x10],0x2f
004F25CB  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
004F25D2  74 08                     JZ 0x004f25dc
004F25D4  81 C1 1C 03 00 00         ADD ECX,0x31c
004F25DA  EB 06                     JMP 0x004f25e2
LAB_004f25dc:
004F25DC  81 C1 64 06 00 00         ADD ECX,0x664
LAB_004f25e2:
004F25E2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F25E7  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004F25EA  8D 55 8C                  LEA EDX,[EBP + -0x74]
004F25ED  8D 4D 88                  LEA ECX,[EBP + -0x78]
004F25F0  6A 00                     PUSH 0x0
004F25F2  52                        PUSH EDX
004F25F3  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
004F25F7  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
004F25FA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F2600  E8 EB B1 23 00            CALL 0x0072d7f0
004F2605  8B F0                     MOV ESI,EAX
004F2607  83 C4 08                  ADD ESP,0x8
004F260A  85 F6                     TEST ESI,ESI
004F260C  0F 85 D7 04 00 00         JNZ 0x004f2ae9
004F2612  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
004F2615  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004F2618  B9 46 00 00 00            MOV ECX,0x46
004F261D  8D BB 1C 03 00 00         LEA EDI,[EBX + 0x31c]
004F2623  F3 AB                     STOSD.REP ES:EDI
004F2625  66 8B 46 20               MOV AX,word ptr [ESI + 0x20]
004F2629  66 85 C0                  TEST AX,AX
004F262C  0F 84 67 01 00 00         JZ 0x004f2799
004F2632  66 8B 4E 24               MOV CX,word ptr [ESI + 0x24]
004F2636  6A 00                     PUSH 0x0
004F2638  51                        PUSH ECX
004F2639  50                        PUSH EAX
004F263A  E8 40 ED F0 FF            CALL 0x0040137f
004F263F  8B 93 8E 02 00 00         MOV EDX,dword ptr [EBX + 0x28e]
004F2645  50                        PUSH EAX
004F2646  52                        PUSH EDX
004F2647  E8 54 8D 21 00            CALL 0x0070b3a0
004F264C  8A 4E 07                  MOV CL,byte ptr [ESI + 0x7]
004F264F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004F2652  80 E9 03                  SUB CL,0x3
004F2655  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
004F2658  F6 D9                     NEG CL
004F265A  1B C9                     SBB ECX,ECX
004F265C  50                        PUSH EAX
004F265D  83 E1 05                  AND ECX,0x5
004F2660  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F2663  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004F2666  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004F2669  03 CA                     ADD ECX,EDX
004F266B  6A 06                     PUSH 0x6
004F266D  51                        PUSH ECX
004F266E  57                        PUSH EDI
004F266F  50                        PUSH EAX
004F2670  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
004F2673  E8 B1 0B F1 FF            CALL 0x00403229
004F2678  66 8B 46 28               MOV AX,word ptr [ESI + 0x28]
004F267C  83 C4 28                  ADD ESP,0x28
004F267F  66 3D FF FF               CMP AX,0xffff
004F2683  0F 84 B7 00 00 00         JZ 0x004f2740
004F2689  25 FF FF 00 00            AND EAX,0xffff
004F268E  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
004F2694  50                        PUSH EAX
004F2695  68 90 18 7C 00            PUSH 0x7c1890
004F269A  56                        PUSH ESI
004F269B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F26A1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F26A4  83 C4 0C                  ADD ESP,0xc
004F26A7  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
004F26AA  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004F26AD  83 E8 0C                  SUB EAX,0xc
004F26B0  6A 0C                     PUSH 0xc
004F26B2  99                        CDQ
004F26B3  2B C2                     SUB EAX,EDX
004F26B5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004F26B8  D1 F8                     SAR EAX,0x1
004F26BA  03 C1                     ADD EAX,ECX
004F26BC  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004F26C2  03 C2                     ADD EAX,EDX
004F26C4  6A 11                     PUSH 0x11
004F26C6  8D 57 2F                  LEA EDX,[EDI + 0x2f]
004F26C9  50                        PUSH EAX
004F26CA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004F26CD  52                        PUSH EDX
004F26CE  6A 00                     PUSH 0x0
004F26D0  50                        PUSH EAX
004F26D1  E8 BA E3 21 00            CALL 0x00710a90
004F26D6  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004F26DC  6A FF                     PUSH -0x1
004F26DE  6A FF                     PUSH -0x1
004F26E0  6A 00                     PUSH 0x0
004F26E2  6A FF                     PUSH -0x1
004F26E4  6A FD                     PUSH -0x3
004F26E6  56                        PUSH ESI
004F26E7  E8 84 F4 21 00            CALL 0x00711b70
004F26EC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F26EF  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004F26F2  25 FF 00 00 00            AND EAX,0xff
004F26F7  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
004F26FE  2B C8                     SUB ECX,EAX
004F2700  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004F2703  8D 34 8A                  LEA ESI,[EDX + ECX*0x4]
004F2706  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004F2709  8D 4C 07 2F               LEA ECX,[EDI + EAX*0x1 + 0x2f]
004F270D  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004F2710  03 D0                     ADD EDX,EAX
004F2712  89 0E                     MOV dword ptr [ESI],ECX
004F2714  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004F2717  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004F271A  C7 46 08 11 00 00 00      MOV dword ptr [ESI + 0x8],0x11
004F2721  C7 46 0C 0C 00 00 00      MOV dword ptr [ESI + 0xc],0xc
004F2728  66 8B 51 20               MOV DX,word ptr [ECX + 0x20]
004F272C  52                        PUSH EDX
004F272D  E8 62 1D F1 FF            CALL 0x00404494
004F2732  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
004F2735  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F2738  83 C4 04                  ADD ESP,0x4
004F273B  FE C0                     INC AL
004F273D  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_004f2740:
004F2740  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F2743  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004F2746  25 FF 00 00 00            AND EAX,0xff
004F274B  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
004F2752  2B C8                     SUB ECX,EAX
004F2754  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004F2757  8D 34 8A                  LEA ESI,[EDX + ECX*0x4]
004F275A  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004F275D  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
004F2760  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004F2763  03 D0                     ADD EDX,EAX
004F2765  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F2768  89 0E                     MOV dword ptr [ESI],ECX
004F276A  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004F276D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004F2770  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
004F2773  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004F2776  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004F2779  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
004F277C  66 8B 48 20               MOV CX,word ptr [EAX + 0x20]
004F2780  51                        PUSH ECX
004F2781  E8 0E 1D F1 FF            CALL 0x00404494
004F2786  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
004F2789  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F278C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004F278F  83 C4 04                  ADD ESP,0x4
004F2792  FE C0                     INC AL
004F2794  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004F2797  EB 03                     JMP 0x004f279c
LAB_004f2799:
004F2799  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_004f279c:
004F279C  66 8B 4E 1E               MOV CX,word ptr [ESI + 0x1e]
004F27A0  66 85 C9                  TEST CX,CX
004F27A3  0F 84 2E 03 00 00         JZ 0x004f2ad7
004F27A9  8B C1                     MOV EAX,ECX
004F27AB  25 FF FF 00 00            AND EAX,0xffff
004F27B0  2D DD 00 00 00            SUB EAX,0xdd
004F27B5  74 32                     JZ 0x004f27e9
004F27B7  48                        DEC EAX
004F27B8  74 24                     JZ 0x004f27de
004F27BA  66 8B 56 22               MOV DX,word ptr [ESI + 0x22]
004F27BE  6A 00                     PUSH 0x0
004F27C0  52                        PUSH EDX
004F27C1  51                        PUSH ECX
004F27C2  E8 B8 EB F0 FF            CALL 0x0040137f
004F27C7  50                        PUSH EAX
004F27C8  8B 83 8E 02 00 00         MOV EAX,dword ptr [EBX + 0x28e]
004F27CE  50                        PUSH EAX
004F27CF  E8 CC 8B 21 00            CALL 0x0070b3a0
004F27D4  8B C8                     MOV ECX,EAX
004F27D6  83 C4 14                  ADD ESP,0x14
004F27D9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F27DC  EB 21                     JMP 0x004f27ff
LAB_004f27de:
004F27DE  8B 8B D6 02 00 00         MOV ECX,dword ptr [EBX + 0x2d6]
004F27E4  6A 01                     PUSH 0x1
004F27E6  51                        PUSH ECX
004F27E7  EB 09                     JMP 0x004f27f2
LAB_004f27e9:
004F27E9  8B 93 D6 02 00 00         MOV EDX,dword ptr [EBX + 0x2d6]
004F27EF  6A 00                     PUSH 0x0
004F27F1  52                        PUSH EDX
LAB_004f27f2:
004F27F2  E8 A9 8B 21 00            CALL 0x0070b3a0
004F27F7  83 C4 08                  ADD ESP,0x8
004F27FA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F27FD  8B C8                     MOV ECX,EAX
LAB_004f27ff:
004F27FF  33 C0                     XOR EAX,EAX
004F2801  66 8B 46 1E               MOV AX,word ptr [ESI + 0x1e]
004F2805  05 5D FF FF FF            ADD EAX,0xffffff5d
004F280A  83 F8 5C                  CMP EAX,0x5c
004F280D  77 23                     JA 0x004f2832
004F280F  33 D2                     XOR EDX,EDX
004F2811  8A 90 3C 2B 4F 00         MOV DL,byte ptr [EAX + 0x4f2b3c]
switchD_004f2817::switchD:
004F2817  FF 24 95 34 2B 4F 00      JMP dword ptr [EDX*0x4 + 0x4f2b34]
switchD_004f2817::caseD_a3:
004F281E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F2821  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004F2824  51                        PUSH ECX
004F2825  83 C0 02                  ADD EAX,0x2
004F2828  6A 06                     PUSH 0x6
004F282A  8D 4F 01                  LEA ECX,[EDI + 0x1]
004F282D  50                        PUSH EAX
004F282E  51                        PUSH ECX
004F282F  52                        PUSH EDX
004F2830  EB 3E                     JMP 0x004f2870
switchD_004f2817::caseD_a4:
004F2832  66 83 7E 20 00            CMP word ptr [ESI + 0x20],0x0
004F2837  74 15                     JZ 0x004f284e
004F2839  8A 46 07                  MOV AL,byte ptr [ESI + 0x7]
004F283C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
004F283F  2C 03                     SUB AL,0x3
004F2841  F6 D8                     NEG AL
004F2843  1B C0                     SBB EAX,EAX
004F2845  24 FA                     AND AL,0xfa
004F2847  83 C0 22                  ADD EAX,0x22
004F284A  2B C2                     SUB EAX,EDX
004F284C  EB 0F                     JMP 0x004f285d
LAB_004f284e:
004F284E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
004F2851  B8 24 00 00 00            MOV EAX,0x24
004F2856  2B C2                     SUB EAX,EDX
004F2858  99                        CDQ
004F2859  2B C2                     SUB EAX,EDX
004F285B  D1 F8                     SAR EAX,0x1
LAB_004f285d:
004F285D  51                        PUSH ECX
004F285E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004F2861  8B D0                     MOV EDX,EAX
004F2863  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004F2866  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004F2869  03 D1                     ADD EDX,ECX
004F286B  6A 06                     PUSH 0x6
004F286D  52                        PUSH EDX
004F286E  57                        PUSH EDI
004F286F  50                        PUSH EAX
LAB_004f2870:
004F2870  E8 B4 09 F1 FF            CALL 0x00403229
004F2875  83 C4 14                  ADD ESP,0x14
004F2878  66 81 7E 1E FF 00         CMP word ptr [ESI + 0x1e],0xff
004F287E  75 4D                     JNZ 0x004f28cd
004F2880  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F2883  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004F2886  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004F2889  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F288C  51                        PUSH ECX
004F288D  83 C0 02                  ADD EAX,0x2
004F2890  52                        PUSH EDX
004F2891  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004F2894  8D 4F 01                  LEA ECX,[EDI + 0x1]
004F2897  50                        PUSH EAX
004F2898  51                        PUSH ECX
004F2899  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004F289F  6A 00                     PUSH 0x0
004F28A1  52                        PUSH EDX
004F28A2  E8 E9 E1 21 00            CALL 0x00710a90
004F28A7  A1 18 76 80 00            MOV EAX,[0x00807618]
004F28AC  6A FF                     PUSH -0x1
004F28AE  6A FF                     PUSH -0x1
004F28B0  6A 01                     PUSH 0x1
004F28B2  6A FF                     PUSH -0x1
004F28B4  6A FE                     PUSH -0x2
004F28B6  50                        PUSH EAX
004F28B7  68 15 27 00 00            PUSH 0x2715
004F28BC  E8 7F D8 1B 00            CALL 0x006b0140
004F28C1  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004F28C7  50                        PUSH EAX
004F28C8  E8 A3 F2 21 00            CALL 0x00711b70
LAB_004f28cd:
004F28CD  66 8B 46 26               MOV AX,word ptr [ESI + 0x26]
004F28D1  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
004F28D5  66 3D FF FF               CMP AX,0xffff
004F28D9  74 1D                     JZ 0x004f28f8
004F28DB  25 FF FF 00 00            AND EAX,0xffff
004F28E0  8D 8B E1 01 00 00         LEA ECX,[EBX + 0x1e1]
004F28E6  50                        PUSH EAX
004F28E7  68 90 18 7C 00            PUSH 0x7c1890
004F28EC  51                        PUSH ECX
004F28ED  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F28F3  83 C4 0C                  ADD ESP,0xc
004F28F6  EB 53                     JMP 0x004f294b
LAB_004f28f8:
004F28F8  33 C0                     XOR EAX,EAX
004F28FA  66 8B 46 1E               MOV AX,word ptr [ESI + 0x1e]
004F28FE  05 5D FF FF FF            ADD EAX,0xffffff5d
004F2903  83 F8 5C                  CMP EAX,0x5c
004F2906  77 15                     JA 0x004f291d
004F2908  33 D2                     XOR EDX,EDX
004F290A  8A 90 A4 2B 4F 00         MOV DL,byte ptr [EAX + 0x4f2ba4]
switchD_004f2910::switchD:
004F2910  FF 24 95 9C 2B 4F 00      JMP dword ptr [EDX*0x4 + 0x4f2b9c]
switchD_004f2910::caseD_a3:
004F2917  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
004F291B  EB 2E                     JMP 0x004f294b
switchD_004f2910::caseD_a4:
004F291D  BF 00 1B 7C 00            MOV EDI,0x7c1b00
004F2922  83 C9 FF                  OR ECX,0xffffffff
004F2925  33 C0                     XOR EAX,EAX
004F2927  8D 93 E1 01 00 00         LEA EDX,[EBX + 0x1e1]
004F292D  F2 AE                     SCASB.REPNE ES:EDI
004F292F  F7 D1                     NOT ECX
004F2931  2B F9                     SUB EDI,ECX
004F2933  8B C1                     MOV EAX,ECX
004F2935  8B F7                     MOV ESI,EDI
004F2937  8B FA                     MOV EDI,EDX
004F2939  C1 E9 02                  SHR ECX,0x2
004F293C  F3 A5                     MOVSD.REP ES:EDI,ESI
004F293E  8B C8                     MOV ECX,EAX
004F2940  83 E1 03                  AND ECX,0x3
004F2943  F3 A4                     MOVSB.REP ES:EDI,ESI
004F2945  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
004F2948  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_004f294b:
004F294B  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
004F294E  84 C0                     TEST AL,AL
004F2950  0F 84 E6 00 00 00         JZ 0x004f2a3c
004F2956  33 C0                     XOR EAX,EAX
004F2958  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
004F295F  66 8B 46 1E               MOV AX,word ptr [ESI + 0x1e]
004F2963  3D 9C 00 00 00            CMP EAX,0x9c
004F2968  7C 0E                     JL 0x004f2978
004F296A  3D 9E 00 00 00            CMP EAX,0x9e
004F296F  7F 07                     JG 0x004f2978
004F2971  C7 45 D0 04 00 00 00      MOV dword ptr [EBP + -0x30],0x4
LAB_004f2978:
004F2978  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F297B  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004F297E  6A 0C                     PUSH 0xc
004F2980  6A 11                     PUSH 0x11
004F2982  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
004F2985  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004F2988  83 E8 0C                  SUB EAX,0xc
004F298B  99                        CDQ
004F298C  2B C2                     SUB EAX,EDX
004F298E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004F2991  D1 F8                     SAR EAX,0x1
004F2993  03 C1                     ADD EAX,ECX
004F2995  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004F299B  03 C6                     ADD EAX,ESI
004F299D  03 C2                     ADD EAX,EDX
004F299F  8D 57 2F                  LEA EDX,[EDI + 0x2f]
004F29A2  50                        PUSH EAX
004F29A3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004F29A6  52                        PUSH EDX
004F29A7  6A 00                     PUSH 0x0
004F29A9  50                        PUSH EAX
004F29AA  E8 E1 E0 21 00            CALL 0x00710a90
004F29AF  6A FF                     PUSH -0x1
004F29B1  6A FF                     PUSH -0x1
004F29B3  6A 00                     PUSH 0x0
004F29B5  6A FF                     PUSH -0x1
004F29B7  8D 8B E1 01 00 00         LEA ECX,[EBX + 0x1e1]
004F29BD  6A FD                     PUSH -0x3
004F29BF  51                        PUSH ECX
004F29C0  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004F29C6  E8 A5 F1 21 00            CALL 0x00711b70
004F29CB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F29CE  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004F29D1  25 FF 00 00 00            AND EAX,0xff
004F29D6  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004F29D9  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
004F29E0  2B D0                     SUB EDX,EAX
004F29E2  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004F29E5  8D 34 90                  LEA ESI,[EAX + EDX*0x4]
004F29E8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F29EB  8D 54 0F 2F               LEA EDX,[EDI + ECX*0x1 + 0x2f]
004F29EF  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004F29F2  89 16                     MOV dword ptr [ESI],EDX
004F29F4  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
004F29F7  83 E8 0C                  SUB EAX,0xc
004F29FA  99                        CDQ
004F29FB  2B C2                     SUB EAX,EDX
004F29FD  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004F2A00  D1 F8                     SAR EAX,0x1
004F2A02  03 C1                     ADD EAX,ECX
004F2A04  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004F2A07  03 C3                     ADD EAX,EBX
004F2A09  03 C2                     ADD EAX,EDX
004F2A0B  03 C1                     ADD EAX,ECX
004F2A0D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004F2A10  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
004F2A13  C7 46 08 11 00 00 00      MOV dword ptr [ESI + 0x8],0x11
004F2A1A  C7 46 0C 0C 00 00 00      MOV dword ptr [ESI + 0xc],0xc
004F2A21  66 8B 51 1E               MOV DX,word ptr [ECX + 0x1e]
004F2A25  52                        PUSH EDX
004F2A26  E8 69 1A F1 FF            CALL 0x00404494
004F2A2B  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
004F2A2E  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F2A31  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004F2A34  83 C4 04                  ADD ESP,0x4
004F2A37  FE C0                     INC AL
004F2A39  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_004f2a3c:
004F2A3C  33 C0                     XOR EAX,EAX
004F2A3E  66 8B 46 1E               MOV AX,word ptr [ESI + 0x1e]
004F2A42  05 5D FF FF FF            ADD EAX,0xffffff5d
004F2A47  83 F8 5C                  CMP EAX,0x5c
004F2A4A  77 3E                     JA 0x004f2a8a
004F2A4C  33 C9                     XOR ECX,ECX
004F2A4E  8A 88 0C 2C 4F 00         MOV CL,byte ptr [EAX + 0x4f2c0c]
switchD_004f2a54::switchD:
004F2A54  FF 24 8D 04 2C 4F 00      JMP dword ptr [ECX*0x4 + 0x4f2c04]
switchD_004f2a54::caseD_a3:
004F2A5B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F2A5E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004F2A61  25 FF 00 00 00            AND EAX,0xff
004F2A66  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
004F2A6D  2B D0                     SUB EDX,EAX
004F2A6F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004F2A72  8D 1C 90                  LEA EBX,[EAX + EDX*0x4]
004F2A75  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004F2A78  8D 54 0F 01               LEA EDX,[EDI + ECX*0x1 + 0x1]
004F2A7C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004F2A7F  89 13                     MOV dword ptr [EBX],EDX
004F2A81  8D 54 01 02               LEA EDX,[ECX + EAX*0x1 + 0x2]
004F2A85  89 53 04                  MOV dword ptr [EBX + 0x4],EDX
004F2A88  EB 2E                     JMP 0x004f2ab8
switchD_004f2a54::caseD_a4:
004F2A8A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F2A8D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004F2A90  25 FF 00 00 00            AND EAX,0xff
004F2A95  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
004F2A9C  2B C8                     SUB ECX,EAX
004F2A9E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004F2AA1  03 F8                     ADD EDI,EAX
004F2AA3  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004F2AA6  8D 1C 8A                  LEA EBX,[EDX + ECX*0x4]
004F2AA9  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004F2AAC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004F2AAF  03 CA                     ADD ECX,EDX
004F2AB1  89 3B                     MOV dword ptr [EBX],EDI
004F2AB3  03 C8                     ADD ECX,EAX
004F2AB5  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
LAB_004f2ab8:
004F2AB8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F2ABB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004F2ABE  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
004F2AC1  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004F2AC4  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
004F2AC7  66 8B 46 1E               MOV AX,word ptr [ESI + 0x1e]
004F2ACB  50                        PUSH EAX
004F2ACC  E8 C3 19 F1 FF            CALL 0x00404494
004F2AD1  83 C4 04                  ADD ESP,0x4
004F2AD4  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
LAB_004f2ad7:
004F2AD7  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
004F2ADA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F2AE0  5F                        POP EDI
004F2AE1  5E                        POP ESI
004F2AE2  5B                        POP EBX
004F2AE3  8B E5                     MOV ESP,EBP
004F2AE5  5D                        POP EBP
004F2AE6  C2 04 00                  RET 0x4
LAB_004f2ae9:
004F2AE9  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
004F2AEC  68 E8 1A 7C 00            PUSH 0x7c1ae8
004F2AF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F2AF6  56                        PUSH ESI
004F2AF7  6A 00                     PUSH 0x0
004F2AF9  68 46 01 00 00            PUSH 0x146
004F2AFE  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F2B03  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F2B09  E8 C2 A9 1B 00            CALL 0x006ad4d0
004F2B0E  83 C4 18                  ADD ESP,0x18
004F2B11  85 C0                     TEST EAX,EAX
004F2B13  74 01                     JZ 0x004f2b16
004F2B15  CC                        INT3
LAB_004f2b16:
004F2B16  68 46 01 00 00            PUSH 0x146
004F2B1B  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F2B20  6A 00                     PUSH 0x0
004F2B22  56                        PUSH ESI
004F2B23  E8 18 33 1B 00            CALL 0x006a5e40
004F2B28  5F                        POP EDI
004F2B29  5E                        POP ESI
004F2B2A  5B                        POP EBX
004F2B2B  8B E5                     MOV ESP,EBP
004F2B2D  5D                        POP EBP
004F2B2E  C2 04 00                  RET 0x4
