FUN_006c2530:
006C2530  55                        PUSH EBP
006C2531  8B EC                     MOV EBP,ESP
006C2533  83 EC 08                  SUB ESP,0x8
006C2536  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C253B  53                        PUSH EBX
006C253C  56                        PUSH ESI
006C253D  57                        PUSH EDI
006C253E  85 C0                     TEST EAX,EAX
006C2540  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C2547  75 0E                     JNZ 0x006c2557
006C2549  5F                        POP EDI
006C254A  5E                        POP ESI
006C254B  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C2550  5B                        POP EBX
006C2551  8B E5                     MOV ESP,EBP
006C2553  5D                        POP EBP
006C2554  C2 20 00                  RET 0x20
LAB_006c2557:
006C2557  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C255A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C255D  F7 40 08 00 00 10 00      TEST dword ptr [EAX + 0x8],0x100000
006C2564  75 2F                     JNZ 0x006c2595
006C2566  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C2569  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C256C  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
006C256F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C2572  51                        PUSH ECX
006C2573  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C2576  52                        PUSH EDX
006C2577  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C257A  51                        PUSH ECX
006C257B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C257E  52                        PUSH EDX
006C257F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C2582  03 C3                     ADD EAX,EBX
006C2584  51                        PUSH ECX
006C2585  52                        PUSH EDX
006C2586  50                        PUSH EAX
006C2587  E8 04 EE FF FF            CALL 0x006c1390
006C258C  5F                        POP EDI
006C258D  5E                        POP ESI
006C258E  5B                        POP EBX
006C258F  8B E5                     MOV ESP,EBP
006C2591  5D                        POP EBP
006C2592  C2 20 00                  RET 0x20
LAB_006c2595:
006C2595  68 98 68 85 00            PUSH 0x856898
006C259A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C25A0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C25A3  A1 B0 68 85 00            MOV EAX,[0x008568b0]
006C25A8  80 CD 20                  OR CH,0x20
006C25AB  85 C0                     TEST EAX,EAX
006C25AD  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006C25B0  75 19                     JNZ 0x006c25cb
006C25B2  68 00 28 00 00            PUSH 0x2800
006C25B7  E8 B4 86 FE FF            CALL 0x006aac70
006C25BC  A3 B0 68 85 00            MOV [0x008568b0],EAX
006C25C1  C7 05 78 68 85 00 00 28 00 00  MOV dword ptr [0x00856878],0x2800
LAB_006c25cb:
006C25CB  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006C25CE  85 FF                     TEST EDI,EDI
006C25D0  7D 02                     JGE 0x006c25d4
006C25D2  33 FF                     XOR EDI,EDI
LAB_006c25d4:
006C25D4  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C25D7  85 C0                     TEST EAX,EAX
006C25D9  7C 05                     JL 0x006c25e0
006C25DB  83 F8 20                  CMP EAX,0x20
006C25DE  7C 07                     JL 0x006c25e7
LAB_006c25e0:
006C25E0  C7 45 24 1F 00 00 00      MOV dword ptr [EBP + 0x24],0x1f
LAB_006c25e7:
006C25E7  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
006C25EA  B2 01                     MOV DL,0x1
006C25EC  A8 02                     TEST AL,0x2
006C25EE  74 35                     JZ 0x006c2625
006C25F0  33 C9                     XOR ECX,ECX
006C25F2  B8 18 50 85 00            MOV EAX,0x855018
LAB_006c25f7:
006C25F7  84 50 E0                  TEST byte ptr [EAX + -0x20],DL
006C25FA  74 1E                     JZ 0x006c261a
006C25FC  39 70 FC                  CMP dword ptr [EAX + -0x4],ESI
006C25FF  75 19                     JNZ 0x006c261a
006C2601  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C2604  39 18                     CMP dword ptr [EAX],EBX
006C2606  75 12                     JNZ 0x006c261a
006C2608  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C260B  81 E3 FF 00 00 00         AND EBX,0xff
006C2611  39 58 0C                  CMP dword ptr [EAX + 0xc],EBX
006C2614  0F 84 4B 03 00 00         JZ 0x006c2965
LAB_006c261a:
006C261A  05 C4 00 00 00            ADD EAX,0xc4
006C261F  41                        INC ECX
006C2620  83 F9 20                  CMP ECX,0x20
006C2623  7C D2                     JL 0x006c25f7
LAB_006c2625:
006C2625  A1 C0 68 85 00            MOV EAX,[0x008568c0]
006C262A  85 C0                     TEST EAX,EAX
006C262C  75 3F                     JNZ 0x006c266d
006C262E  8D 45 F8                  LEA EAX,[EBP + -0x8]
006C2631  C7 05 C4 68 85 00 00 00 00 00  MOV dword ptr [0x008568c4],0x0
006C263B  50                        PUSH EAX
006C263C  6A 00                     PUSH 0x0
006C263E  6A 00                     PUSH 0x0
006C2640  68 E0 08 6C 00            PUSH 0x6c08e0
006C2645  6A 00                     PUSH 0x0
006C2647  6A 00                     PUSH 0x0
006C2649  FF 15 70 BB 85 00         CALL dword ptr [0x0085bb70]
006C264F  85 C0                     TEST EAX,EAX
006C2651  A3 C0 68 85 00            MOV [0x008568c0],EAX
006C2656  0F 84 87 02 00 00         JZ 0x006c28e3
006C265C  6A 02                     PUSH 0x2
006C265E  50                        PUSH EAX
006C265F  FF 15 74 BB 85 00         CALL dword ptr [0x0085bb74]
006C2665  85 C0                     TEST EAX,EAX
006C2667  0F 84 76 02 00 00         JZ 0x006c28e3
LAB_006c266d:
006C266D  68 80 68 85 00            PUSH 0x856880
006C2672  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C2678  A1 C4 68 85 00            MOV EAX,[0x008568c4]
006C267D  85 C0                     TEST EAX,EAX
006C267F  74 28                     JZ 0x006c26a9
006C2681  8B 0D C0 68 85 00         MOV ECX,dword ptr [0x008568c0]
006C2687  51                        PUSH ECX
006C2688  FF 15 78 BB 85 00         CALL dword ptr [0x0085bb78]
006C268E  83 F8 FF                  CMP EAX,-0x1
006C2691  0F 84 4C 02 00 00         JZ 0x006c28e3
006C2697  A1 C4 68 85 00            MOV EAX,[0x008568c4]
006C269C  33 D2                     XOR EDX,EDX
006C269E  85 C0                     TEST EAX,EAX
006C26A0  0F 94 C2                  SETZ DL
006C26A3  89 15 C4 68 85 00         MOV dword ptr [0x008568c4],EDX
LAB_006c26a9:
006C26A9  68 80 68 85 00            PUSH 0x856880
006C26AE  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C26B4  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006C26B7  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
006C26BA  C1 E0 04                  SHL EAX,0x4
006C26BD  03 C7                     ADD EAX,EDI
006C26BF  33 D2                     XOR EDX,EDX
006C26C1  3B FB                     CMP EDI,EBX
006C26C3  8B CF                     MOV ECX,EDI
006C26C5  8D 34 85 F8 4F 85 00      LEA ESI,[EAX*0x4 + 0x854ff8]
006C26CC  8B C6                     MOV EAX,ESI
006C26CE  7F 64                     JG 0x006c2734
LAB_006c26d0:
006C26D0  F6 00 01                  TEST byte ptr [EAX],0x1
006C26D3  75 0C                     JNZ 0x006c26e1
006C26D5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006C26D8  85 DB                     TEST EBX,EBX
006C26DA  7D 24                     JGE 0x006c2700
006C26DC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C26DF  EB 1F                     JMP 0x006c2700
LAB_006c26e1:
006C26E1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C26E4  39 58 1C                  CMP dword ptr [EAX + 0x1c],EBX
006C26E7  75 17                     JNZ 0x006c2700
006C26E9  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C26EC  39 58 20                  CMP dword ptr [EAX + 0x20],EBX
006C26EF  75 0F                     JNZ 0x006c2700
006C26F1  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C26F4  81 E3 FF 00 00 00         AND EBX,0xff
006C26FA  39 58 2C                  CMP dword ptr [EAX + 0x2c],EBX
006C26FD  75 01                     JNZ 0x006c2700
006C26FF  42                        INC EDX
LAB_006c2700:
006C2700  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006C2703  05 C4 00 00 00            ADD EAX,0xc4
006C2708  41                        INC ECX
006C2709  3B CB                     CMP ECX,EBX
006C270B  7E C3                     JLE 0x006c26d0
006C270D  83 FA 05                  CMP EDX,0x5
006C2710  0F 8F 4F 02 00 00         JG 0x006c2965
006C2716  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C2719  85 C0                     TEST EAX,EAX
006C271B  7C 17                     JL 0x006c2734
006C271D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C2720  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006C2723  C1 E1 04                  SHL ECX,0x4
006C2726  03 C8                     ADD ECX,EAX
006C2728  8D 34 8D F8 4F 85 00      LEA ESI,[ECX*0x4 + 0x854ff8]
006C272F  E9 2F 01 00 00            JMP 0x006c2863
LAB_006c2734:
006C2734  F6 45 14 08               TEST byte ptr [EBP + 0x14],0x8
006C2738  0F 84 9A 00 00 00         JZ 0x006c27d8
006C273E  8B 35 F4 4F 85 00         MOV ESI,dword ptr [0x00854ff4]
006C2744  85 F6                     TEST ESI,ESI
006C2746  74 24                     JZ 0x006c276c
LAB_006c2748:
006C2748  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006C274B  85 C0                     TEST EAX,EAX
006C274D  7D 17                     JGE 0x006c2766
006C274F  8B 1E                     MOV EBX,dword ptr [ESI]
006C2751  56                        PUSH ESI
006C2752  68 F4 4F 85 00            PUSH 0x854ff4
006C2757  E8 64 71 FF FF            CALL 0x006b98c0
006C275C  56                        PUSH ESI
006C275D  E8 2E 37 FE FF            CALL 0x006a5e90
006C2762  8B F3                     MOV ESI,EBX
006C2764  EB 02                     JMP 0x006c2768
LAB_006c2766:
006C2766  8B 36                     MOV ESI,dword ptr [ESI]
LAB_006c2768:
006C2768  85 F6                     TEST ESI,ESI
006C276A  75 DC                     JNZ 0x006c2748
LAB_006c276c:
006C276C  A1 B0 68 85 00            MOV EAX,[0x008568b0]
006C2771  85 C0                     TEST EAX,EAX
006C2773  75 19                     JNZ 0x006c278e
006C2775  68 00 28 00 00            PUSH 0x2800
006C277A  E8 F1 84 FE FF            CALL 0x006aac70
006C277F  A3 B0 68 85 00            MOV [0x008568b0],EAX
006C2784  C7 05 78 68 85 00 00 28 00 00  MOV dword ptr [0x00856878],0x2800
LAB_006c278e:
006C278E  6A 3C                     PUSH 0x3c
006C2790  E8 7B 84 FE FF            CALL 0x006aac10
006C2795  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C2798  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C279B  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006C279E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C27A1  81 E1 FF 00 00 00         AND ECX,0xff
006C27A7  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006C27AA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C27AD  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006C27B0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C27B3  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006C27B6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C27B9  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
006C27BC  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C27BF  50                        PUSH EAX
006C27C0  68 F4 4F 85 00            PUSH 0x854ff4
006C27C5  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
006C27C8  89 78 34                  MOV dword ptr [EAX + 0x34],EDI
006C27CB  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
006C27CE  E8 3D 71 FF FF            CALL 0x006b9910
006C27D3  E9 8D 01 00 00            JMP 0x006c2965
LAB_006c27d8:
006C27D8  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
006C27DB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C27DE  8A 56 2C                  MOV DL,byte ptr [ESI + 0x2c]
006C27E1  8D 46 2C                  LEA EAX,[ESI + 0x2c]
006C27E4  8D 77 01                  LEA ESI,[EDI + 0x1]
006C27E7  88 55 20                  MOV byte ptr [EBP + 0x20],DL
006C27EA  3B F1                     CMP ESI,ECX
006C27EC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006C27EF  7F 34                     JG 0x006c2825
LAB_006c27f1:
006C27F1  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C27F4  8B 90 C4 00 00 00         MOV EDX,dword ptr [EAX + 0xc4]
006C27FA  05 C4 00 00 00            ADD EAX,0xc4
006C27FF  81 E1 FF 00 00 00         AND ECX,0xff
006C2805  3B D1                     CMP EDX,ECX
006C2807  7C 07                     JL 0x006c2810
006C2809  75 12                     JNZ 0x006c281d
006C280B  39 58 DC                  CMP dword ptr [EAX + -0x24],EBX
006C280E  73 0D                     JNC 0x006c281d
LAB_006c2810:
006C2810  8A 08                     MOV CL,byte ptr [EAX]
006C2812  8B 58 DC                  MOV EBX,dword ptr [EAX + -0x24]
006C2815  88 4D 20                  MOV byte ptr [EBP + 0x20],CL
006C2818  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006C281B  8B FE                     MOV EDI,ESI
LAB_006c281d:
006C281D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C2820  46                        INC ESI
006C2821  3B F1                     CMP ESI,ECX
006C2823  7E CC                     JLE 0x006c27f1
LAB_006c2825:
006C2825  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C2828  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006C282B  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
006C282E  C1 E2 04                  SHL EDX,0x4
006C2831  03 D7                     ADD EDX,EDI
006C2833  3A D8                     CMP BL,AL
006C2835  8D 34 95 F8 4F 85 00      LEA ESI,[EDX*0x4 + 0x854ff8]
006C283C  0F 86 1C 01 00 00         JBE 0x006c295e
006C2842  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C2845  85 C0                     TEST EAX,EAX
006C2847  74 0F                     JZ 0x006c2858
006C2849  8B 08                     MOV ECX,dword ptr [EAX]
006C284B  50                        PUSH EAX
006C284C  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C284F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C2852  50                        PUSH EAX
006C2853  8B 10                     MOV EDX,dword ptr [EAX]
006C2855  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_006c2858:
006C2858  B9 31 00 00 00            MOV ECX,0x31
006C285D  33 C0                     XOR EAX,EAX
006C285F  8B FE                     MOV EDI,ESI
006C2861  F3 AB                     STOSD.REP ES:EDI
LAB_006c2863:
006C2863  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C2866  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C2869  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C286C  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006C286F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C2872  8D 7E 4C                  LEA EDI,[ESI + 0x4c]
006C2875  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
006C2878  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C287B  81 E3 FF 00 00 00         AND EBX,0xff
006C2881  6A 3E                     PUSH 0x3e
006C2883  57                        PUSH EDI
006C2884  89 5E 2C                  MOV dword ptr [ESI + 0x2c],EBX
006C2887  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
006C288A  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006C288D  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
006C2890  50                        PUSH EAX
006C2891  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006C2894  50                        PUSH EAX
006C2895  E8 56 21 01 00            CALL 0x006d49f0
006C289A  8B D8                     MOV EBX,EAX
006C289C  85 DB                     TEST EBX,EBX
006C289E  75 3B                     JNZ 0x006c28db
006C28A0  66 8B 0F                  MOV CX,word ptr [EDI]
006C28A3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C28A6  66 49                     DEC CX
006C28A8  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
006C28AB  66 F7 D9                  NEG CX
006C28AE  1B C9                     SBB ECX,ECX
006C28B0  83 E1 24                  AND ECX,0x24
006C28B3  83 C1 1A                  ADD ECX,0x1a
006C28B6  03 CA                     ADD ECX,EDX
006C28B8  A8 04                     TEST AL,0x4
006C28BA  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006C28BD  75 11                     JNZ 0x006c28d0
006C28BF  56                        PUSH ESI
006C28C0  E8 2B D3 FF FF            CALL 0x006bfbf0
006C28C5  8B D8                     MOV EBX,EAX
006C28C7  85 DB                     TEST EBX,EBX
006C28C9  75 10                     JNZ 0x006c28db
006C28CB  E9 95 00 00 00            JMP 0x006c2965
LAB_006c28d0:
006C28D0  8B 06                     MOV EAX,dword ptr [ESI]
006C28D2  0C 21                     OR AL,0x21
006C28D4  89 06                     MOV dword ptr [ESI],EAX
006C28D6  E9 8A 00 00 00            JMP 0x006c2965
LAB_006c28db:
006C28DB  81 FB 03 FF FF FF         CMP EBX,0xffffff03
006C28E1  75 08                     JNZ 0x006c28eb
LAB_006c28e3:
006C28E3  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006C28E9  8B D8                     MOV EBX,EAX
LAB_006c28eb:
006C28EB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006C28EE  85 F6                     TEST ESI,ESI
006C28F0  7C 39                     JL 0x006c292b
006C28F2  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006C28F5  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
006C28F8  C1 E6 04                  SHL ESI,0x4
006C28FB  03 F7                     ADD ESI,EDI
006C28FD  C1 E6 02                  SHL ESI,0x2
006C2900  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C2906  85 C0                     TEST EAX,EAX
006C2908  74 12                     JZ 0x006c291c
006C290A  8B 10                     MOV EDX,dword ptr [EAX]
006C290C  50                        PUSH EAX
006C290D  FF 52 48                  CALL dword ptr [EDX + 0x48]
006C2910  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C2916  50                        PUSH EAX
006C2917  8B 08                     MOV ECX,dword ptr [EAX]
006C2919  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006c291c:
006C291C  B9 31 00 00 00            MOV ECX,0x31
006C2921  33 C0                     XOR EAX,EAX
006C2923  8D BE F8 4F 85 00         LEA EDI,[ESI + 0x854ff8]
006C2929  F3 AB                     STOSD.REP ES:EDI
LAB_006c292b:
006C292B  83 FB FC                  CMP EBX,-0x4
006C292E  74 2E                     JZ 0x006c295e
006C2930  68 98 68 85 00            PUSH 0x856898
006C2935  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C293B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C2941  68 FA 00 00 00            PUSH 0xfa
006C2946  68 48 DE 7E 00            PUSH 0x7ede48
006C294B  52                        PUSH EDX
006C294C  53                        PUSH EBX
006C294D  E8 EE 34 FE FF            CALL 0x006a5e40
006C2952  5F                        POP EDI
006C2953  5E                        POP ESI
006C2954  83 C8 FF                  OR EAX,0xffffffff
006C2957  5B                        POP EBX
006C2958  8B E5                     MOV ESP,EBP
006C295A  5D                        POP EBP
006C295B  C2 20 00                  RET 0x20
LAB_006c295e:
006C295E  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
LAB_006c2965:
006C2965  68 98 68 85 00            PUSH 0x856898
006C296A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C2970  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C2973  5F                        POP EDI
006C2974  5E                        POP ESI
006C2975  5B                        POP EBX
006C2976  8B E5                     MOV ESP,EBP
006C2978  5D                        POP EBP
006C2979  C2 20 00                  RET 0x20
