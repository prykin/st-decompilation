FUN_006b28c0:
006B28C0  55                        PUSH EBP
006B28C1  8B EC                     MOV EBP,ESP
006B28C3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B28C6  56                        PUSH ESI
006B28C7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B28CA  57                        PUSH EDI
006B28CB  B8 01 00 00 00            MOV EAX,0x1
006B28D0  3B 8E A0 01 00 00         CMP ECX,dword ptr [ESI + 0x1a0]
006B28D6  73 50                     JNC 0x006b2928
006B28D8  8B 96 B0 01 00 00         MOV EDX,dword ptr [ESI + 0x1b0]
006B28DE  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
006B28E1  8B 11                     MOV EDX,dword ptr [ECX]
006B28E3  8B FA                     MOV EDI,EDX
006B28E5  81 E7 00 C0 00 00         AND EDI,0xc000
006B28EB  81 FF 00 C0 00 00         CMP EDI,0xc000
006B28F1  75 35                     JNZ 0x006b2928
006B28F3  8B C2                     MOV EAX,EDX
006B28F5  53                        PUSH EBX
006B28F6  25 00 00 02 40            AND EAX,0x40020000
006B28FB  33 DB                     XOR EBX,EBX
006B28FD  3D 00 00 02 40            CMP EAX,0x40020000
006B2902  8B C2                     MOV EAX,EDX
006B2904  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B2907  0F 94 C3                  SETZ BL
006B290A  25 FF FF FD BF            AND EAX,0xbffdffff
006B290F  8B FB                     MOV EDI,EBX
006B2911  85 D2                     TEST EDX,EDX
006B2913  89 01                     MOV dword ptr [ECX],EAX
006B2915  5B                        POP EBX
006B2916  74 07                     JZ 0x006b291f
006B2918  0D 00 00 02 40            OR EAX,0x40020000
006B291D  89 01                     MOV dword ptr [ECX],EAX
LAB_006b291f:
006B291F  51                        PUSH ECX
006B2920  56                        PUSH ESI
006B2921  E8 BA FA FF FF            CALL 0x006b23e0
006B2926  8B C7                     MOV EAX,EDI
LAB_006b2928:
006B2928  5F                        POP EDI
006B2929  5E                        POP ESI
006B292A  5D                        POP EBP
006B292B  C2 0C 00                  RET 0xc
