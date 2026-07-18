FUN_006b2850:
006B2850  55                        PUSH EBP
006B2851  8B EC                     MOV EBP,ESP
006B2853  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B2856  56                        PUSH ESI
006B2857  57                        PUSH EDI
006B2858  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B285B  B8 01 00 00 00            MOV EAX,0x1
006B2860  3B 8F A0 01 00 00         CMP ECX,dword ptr [EDI + 0x1a0]
006B2866  73 44                     JNC 0x006b28ac
006B2868  8B 97 B0 01 00 00         MOV EDX,dword ptr [EDI + 0x1b0]
006B286E  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
006B2871  8B 11                     MOV EDX,dword ptr [ECX]
006B2873  8B F2                     MOV ESI,EDX
006B2875  81 E6 00 C0 00 00         AND ESI,0xc000
006B287B  81 FE 00 C0 00 00         CMP ESI,0xc000
006B2881  75 29                     JNZ 0x006b28ac
006B2883  8B F2                     MOV ESI,EDX
006B2885  F7 D6                     NOT ESI
006B2887  C1 EE 11                  SHR ESI,0x11
006B288A  23 F0                     AND ESI,EAX
006B288C  8B C2                     MOV EAX,EDX
006B288E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B2891  25 FF FF FD FF            AND EAX,0xfffdffff
006B2896  85 D2                     TEST EDX,EDX
006B2898  89 01                     MOV dword ptr [ECX],EAX
006B289A  75 07                     JNZ 0x006b28a3
006B289C  0D 00 00 02 00            OR EAX,0x20000
006B28A1  89 01                     MOV dword ptr [ECX],EAX
LAB_006b28a3:
006B28A3  51                        PUSH ECX
006B28A4  57                        PUSH EDI
006B28A5  E8 36 FB FF FF            CALL 0x006b23e0
006B28AA  8B C6                     MOV EAX,ESI
LAB_006b28ac:
006B28AC  5F                        POP EDI
006B28AD  5E                        POP ESI
006B28AE  5D                        POP EBP
006B28AF  C2 0C 00                  RET 0xc
