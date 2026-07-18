FUN_006d25e0:
006D25E0  55                        PUSH EBP
006D25E1  8B EC                     MOV EBP,ESP
006D25E3  53                        PUSH EBX
006D25E4  56                        PUSH ESI
006D25E5  57                        PUSH EDI
006D25E6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D25E9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D25EC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006D25EF  2B 5D 14                  SUB EBX,dword ptr [EBP + 0x14]
LAB_006d25f2:
006D25F2  33 C9                     XOR ECX,ECX
006D25F4  8A 0E                     MOV CL,byte ptr [ESI]
006D25F6  46                        INC ESI
006D25F7  0B C9                     OR ECX,ECX
006D25F9  0F 84 BB 00 00 00         JZ 0x006d26ba
006D25FF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D2602  80 F9 80                  CMP CL,0x80
006D2605  73 14                     JNC 0x006d261b
LAB_006d2607:
006D2607  03 F9                     ADD EDI,ECX
006D2609  2B D1                     SUB EDX,ECX
006D260B  0F 8E 9C 00 00 00         JLE 0x006d26ad
006D2611  33 C9                     XOR ECX,ECX
006D2613  8A 0E                     MOV CL,byte ptr [ESI]
006D2615  46                        INC ESI
006D2616  80 F9 80                  CMP CL,0x80
006D2619  72 EC                     JC 0x006d2607
LAB_006d261b:
006D261B  80 F9 C0                  CMP CL,0xc0
006D261E  72 21                     JC 0x006d2641
LAB_006d2620:
006D2620  80 E1 3F                  AND CL,0x3f
006D2623  8A 06                     MOV AL,byte ptr [ESI]
006D2625  46                        INC ESI
006D2626  2B D1                     SUB EDX,ECX
LAB_006d2628:
006D2628  88 07                     MOV byte ptr [EDI],AL
006D262A  47                        INC EDI
006D262B  49                        DEC ECX
006D262C  7F FA                     JG 0x006d2628
006D262E  0B D2                     OR EDX,EDX
006D2630  7E 7B                     JLE 0x006d26ad
006D2632  33 C9                     XOR ECX,ECX
006D2634  8A 0E                     MOV CL,byte ptr [ESI]
006D2636  46                        INC ESI
006D2637  80 F9 80                  CMP CL,0x80
006D263A  72 CB                     JC 0x006d2607
006D263C  80 F9 C0                  CMP CL,0xc0
006D263F  73 DF                     JNC 0x006d2620
LAB_006d2641:
006D2641  80 E1 3F                  AND CL,0x3f
006D2644  8A 06                     MOV AL,byte ptr [ESI]
006D2646  2B D1                     SUB EDX,ECX
006D2648  80 F9 03                  CMP CL,0x3
006D264B  88 07                     MOV byte ptr [EDI],AL
006D264D  77 29                     JA 0x006d2678
006D264F  46                        INC ESI
006D2650  47                        INC EDI
006D2651  49                        DEC ECX
006D2652  7E 0F                     JLE 0x006d2663
006D2654  8A 06                     MOV AL,byte ptr [ESI]
006D2656  46                        INC ESI
006D2657  88 07                     MOV byte ptr [EDI],AL
006D2659  47                        INC EDI
006D265A  49                        DEC ECX
006D265B  7E 06                     JLE 0x006d2663
006D265D  8A 06                     MOV AL,byte ptr [ESI]
006D265F  46                        INC ESI
006D2660  88 07                     MOV byte ptr [EDI],AL
006D2662  47                        INC EDI
LAB_006d2663:
006D2663  0B D2                     OR EDX,EDX
006D2665  7E 46                     JLE 0x006d26ad
006D2667  33 C9                     XOR ECX,ECX
006D2669  8A 0E                     MOV CL,byte ptr [ESI]
006D266B  46                        INC ESI
006D266C  80 F9 80                  CMP CL,0x80
006D266F  72 96                     JC 0x006d2607
006D2671  80 F9 C0                  CMP CL,0xc0
006D2674  73 AA                     JNC 0x006d2620
006D2676  EB C9                     JMP 0x006d2641
LAB_006d2678:
006D2678  D1 E9                     SHR ECX,0x1
006D267A  73 02                     JNC 0x006d267e
006D267C  46                        INC ESI
006D267D  47                        INC EDI
LAB_006d267e:
006D267E  D1 E9                     SHR ECX,0x1
006D2680  73 0C                     JNC 0x006d268e
006D2682  8A 06                     MOV AL,byte ptr [ESI]
006D2684  46                        INC ESI
006D2685  88 07                     MOV byte ptr [EDI],AL
006D2687  47                        INC EDI
006D2688  8A 06                     MOV AL,byte ptr [ESI]
006D268A  46                        INC ESI
006D268B  88 07                     MOV byte ptr [EDI],AL
006D268D  47                        INC EDI
LAB_006d268e:
006D268E  F3 A5                     MOVSD.REP ES:EDI,ESI
006D2690  0B D2                     OR EDX,EDX
006D2692  7E 19                     JLE 0x006d26ad
006D2694  33 C9                     XOR ECX,ECX
006D2696  8A 0E                     MOV CL,byte ptr [ESI]
006D2698  46                        INC ESI
006D2699  80 F9 80                  CMP CL,0x80
006D269C  0F 82 65 FF FF FF         JC 0x006d2607
006D26A2  80 F9 C0                  CMP CL,0xc0
006D26A5  0F 83 75 FF FF FF         JNC 0x006d2620
006D26AB  EB 94                     JMP 0x006d2641
LAB_006d26ad:
006D26AD  03 FB                     ADD EDI,EBX
006D26AF  FF 4D 18                  DEC dword ptr [EBP + 0x18]
006D26B2  0F 8F 3A FF FF FF         JG 0x006d25f2
006D26B8  EB 0D                     JMP 0x006d26c7
LAB_006d26ba:
006D26BA  46                        INC ESI
006D26BB  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D26BE  FF 4D 18                  DEC dword ptr [EBP + 0x18]
006D26C1  0F 8F 2B FF FF FF         JG 0x006d25f2
LAB_006d26c7:
006D26C7  5F                        POP EDI
006D26C8  5E                        POP ESI
006D26C9  5B                        POP EBX
006D26CA  5D                        POP EBP
006D26CB  C2 14 00                  RET 0x14
