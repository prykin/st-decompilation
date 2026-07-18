FUN_006d05b0:
006D05B0  55                        PUSH EBP
006D05B1  8B EC                     MOV EBP,ESP
006D05B3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D05B6  53                        PUSH EBX
006D05B7  8B C8                     MOV ECX,EAX
006D05B9  48                        DEC EAX
006D05BA  56                        PUSH ESI
006D05BB  57                        PUSH EDI
006D05BC  85 C9                     TEST ECX,ECX
006D05BE  0F 8E B2 00 00 00         JLE 0x006d0676
006D05C4  40                        INC EAX
006D05C5  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d05c8:
006D05C8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D05CB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D05CE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D05D1  55                        PUSH EBP
006D05D2  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
006D05D5  F7 C7 02 00 00 00         TEST EDI,0x2
006D05DB  74 13                     JZ 0x006d05f0
006D05DD  33 D2                     XOR EDX,EDX
006D05DF  8A 16                     MOV DL,byte ptr [ESI]
006D05E1  46                        INC ESI
006D05E2  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D05E7  66 89 07                  MOV word ptr [EDI],AX
006D05EA  83 C7 02                  ADD EDI,0x2
006D05ED  49                        DEC ECX
006D05EE  7E 62                     JLE 0x006d0652
LAB_006d05f0:
006D05F0  83 E9 02                  SUB ECX,0x2
006D05F3  7C 4C                     JL 0x006d0641
LAB_006d05f5:
006D05F5  8B 1E                     MOV EBX,dword ptr [ESI]
006D05F7  83 C6 02                  ADD ESI,0x2
006D05FA  33 D2                     XOR EDX,EDX
006D05FC  8A D7                     MOV DL,BH
006D05FE  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D0603  33 D2                     XOR EDX,EDX
006D0605  8A D3                     MOV DL,BL
006D0607  C1 E0 10                  SHL EAX,0x10
006D060A  C1 EB 10                  SHR EBX,0x10
006D060D  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D0612  89 07                     MOV dword ptr [EDI],EAX
006D0614  83 C7 04                  ADD EDI,0x4
006D0617  83 E9 02                  SUB ECX,0x2
006D061A  7C 25                     JL 0x006d0641
006D061C  33 D2                     XOR EDX,EDX
006D061E  8A D7                     MOV DL,BH
006D0620  83 C6 02                  ADD ESI,0x2
006D0623  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D0628  33 D2                     XOR EDX,EDX
006D062A  8A D3                     MOV DL,BL
006D062C  C1 E0 10                  SHL EAX,0x10
006D062F  C1 EB 10                  SHR EBX,0x10
006D0632  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D0637  89 07                     MOV dword ptr [EDI],EAX
006D0639  83 C7 04                  ADD EDI,0x4
006D063C  83 E9 02                  SUB ECX,0x2
006D063F  7D B4                     JGE 0x006d05f5
LAB_006d0641:
006D0641  83 C1 02                  ADD ECX,0x2
006D0644  74 0C                     JZ 0x006d0652
006D0646  33 D2                     XOR EDX,EDX
006D0648  8A 16                     MOV DL,byte ptr [ESI]
006D064A  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D064F  66 89 07                  MOV word ptr [EDI],AX
LAB_006d0652:
006D0652  5D                        POP EBP
006D0653  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D0656  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D0659  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D065C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D065F  03 C8                     ADD ECX,EAX
006D0661  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D0664  03 F2                     ADD ESI,EDX
006D0666  48                        DEC EAX
006D0667  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006D066A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D066D  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006D0670  0F 85 52 FF FF FF         JNZ 0x006d05c8
LAB_006d0676:
006D0676  5F                        POP EDI
006D0677  5E                        POP ESI
006D0678  5B                        POP EBX
006D0679  5D                        POP EBP
006D067A  C2 1C 00                  RET 0x1c
