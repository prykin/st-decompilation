FUN_006b2710:
006B2710  55                        PUSH EBP
006B2711  8B EC                     MOV EBP,ESP
006B2713  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2716  53                        PUSH EBX
006B2717  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B271A  56                        PUSH ESI
006B271B  57                        PUSH EDI
006B271C  3B 83 A0 01 00 00         CMP EAX,dword ptr [EBX + 0x1a0]
006B2722  73 77                     JNC 0x006b279b
006B2724  8B 8B B0 01 00 00         MOV ECX,dword ptr [EBX + 0x1b0]
006B272A  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006B272D  8B 16                     MOV EDX,dword ptr [ESI]
006B272F  81 E2 00 C0 00 00         AND EDX,0xc000
006B2735  81 FA 00 80 00 00         CMP EDX,0x8000
006B273B  75 5E                     JNZ 0x006b279b
006B273D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2740  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B2743  56                        PUSH ESI
006B2744  53                        PUSH EBX
006B2745  89 86 B8 00 00 00         MOV dword ptr [ESI + 0xb8],EAX
006B274B  89 8E BC 00 00 00         MOV dword ptr [ESI + 0xbc],ECX
006B2751  E8 8A FC FF FF            CALL 0x006b23e0
006B2756  F7 06 00 00 00 04         TEST dword ptr [ESI],0x4000000
006B275C  74 3D                     JZ 0x006b279b
006B275E  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B2764  85 C0                     TEST EAX,EAX
006B2766  74 33                     JZ 0x006b279b
006B2768  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
006B276E  33 FF                     XOR EDI,EDI
006B2770  85 C9                     TEST ECX,ECX
006B2772  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006B2775  7E 24                     JLE 0x006b279b
LAB_006b2777:
006B2777  8B 96 D0 00 00 00         MOV EDX,dword ptr [ESI + 0xd0]
006B277D  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
006B2780  85 C0                     TEST EAX,EAX
006B2782  7C 12                     JL 0x006b2796
006B2784  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B2787  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B278A  51                        PUSH ECX
006B278B  52                        PUSH EDX
006B278C  50                        PUSH EAX
006B278D  53                        PUSH EBX
006B278E  E8 7D FF FF FF            CALL 0x006b2710
006B2793  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_006b2796:
006B2796  47                        INC EDI
006B2797  3B F9                     CMP EDI,ECX
006B2799  7C DC                     JL 0x006b2777
LAB_006b279b:
006B279B  5F                        POP EDI
006B279C  5E                        POP ESI
006B279D  5B                        POP EBX
006B279E  5D                        POP EBP
006B279F  C2 10 00                  RET 0x10
