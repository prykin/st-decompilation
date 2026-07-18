FUN_006bbfa0:
006BBFA0  55                        PUSH EBP
006BBFA1  8B EC                     MOV EBP,ESP
006BBFA3  81 EC 18 04 00 00         SUB ESP,0x418
006BBFA9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BBFAC  53                        PUSH EBX
006BBFAD  33 DB                     XOR EBX,EBX
006BBFAF  56                        PUSH ESI
006BBFB0  57                        PUSH EDI
006BBFB1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BBFB4  3B C3                     CMP EAX,EBX
006BBFB6  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006BBFB9  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006BBFBC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006BBFBF  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006BBFC2  75 09                     JNZ 0x006bbfcd
006BBFC4  57                        PUSH EDI
006BBFC5  E8 D6 8F FF FF            CALL 0x006b4fa0
006BBFCA  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006bbfcd:
006BBFCD  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006BBFD0  99                        CDQ
006BBFD1  8B F0                     MOV ESI,EAX
006BBFD3  33 F2                     XOR ESI,EDX
006BBFD5  2B F2                     SUB ESI,EDX
006BBFD7  66 83 7F 0E 08            CMP word ptr [EDI + 0xe],0x8
006BBFDC  0F 85 A2 00 00 00         JNZ 0x006bc084
006BBFE2  57                        PUSH EDI
006BBFE3  E8 F8 8F FF FF            CALL 0x006b4fe0
006BBFE8  8B D8                     MOV EBX,EAX
006BBFEA  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006BBFED  6A 01                     PUSH 0x1
006BBFEF  53                        PUSH EBX
006BBFF0  6A 08                     PUSH 0x8
006BBFF2  56                        PUSH ESI
006BBFF3  50                        PUSH EAX
006BBFF4  E8 F7 50 01 00            CALL 0x006d10f0
006BBFF9  85 C0                     TEST EAX,EAX
006BBFFB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006BBFFE  75 20                     JNZ 0x006bc020
006BC000  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006BC006  6A 1B                     PUSH 0x1b
006BC008  68 5C DC 7E 00            PUSH 0x7edc5c
006BC00D  51                        PUSH ECX
006BC00E  6A FE                     PUSH -0x2
006BC010  E8 2B 9E FE FF            CALL 0x006a5e40
006BC015  5F                        POP EDI
006BC016  5E                        POP ESI
006BC017  33 C0                     XOR EAX,EAX
006BC019  5B                        POP EBX
006BC01A  8B E5                     MOV ESP,EBP
006BC01C  5D                        POP EBP
006BC01D  C2 0C 00                  RET 0xc
LAB_006bc020:
006BC020  8D 77 28                  LEA ESI,[EDI + 0x28]
006BC023  8B CB                     MOV ECX,EBX
006BC025  8D 78 28                  LEA EDI,[EAX + 0x28]
006BC028  F3 A5                     MOVSD.REP ES:EDI,ESI
006BC02A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BC02D  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
006BC030  85 F6                     TEST ESI,ESI
006BC032  75 18                     JNZ 0x006bc04c
006BC034  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
006BC038  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
006BC03C  83 C6 1F                  ADD ESI,0x1f
006BC03F  C1 EE 03                  SHR ESI,0x3
006BC042  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006BC048  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_006bc04c:
006BC04C  50                        PUSH EAX
006BC04D  E8 4E 8F FF FF            CALL 0x006b4fa0
006BC052  8B CE                     MOV ECX,ESI
006BC054  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BC057  8B D1                     MOV EDX,ECX
006BC059  8B F8                     MOV EDI,EAX
006BC05B  C1 E9 02                  SHR ECX,0x2
006BC05E  F3 A5                     MOVSD.REP ES:EDI,ESI
006BC060  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BC063  8B CA                     MOV ECX,EDX
006BC065  83 E1 03                  AND ECX,0x3
006BC068  6A FF                     PUSH -0x1
006BC06A  F3 A4                     MOVSB.REP ES:EDI,ESI
006BC06C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BC06F  50                        PUSH EAX
006BC070  6A 00                     PUSH 0x0
006BC072  51                        PUSH ECX
006BC073  E8 18 BF 00 00            CALL 0x006c7f90
006BC078  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BC07B  5F                        POP EDI
006BC07C  5E                        POP ESI
006BC07D  5B                        POP EBX
006BC07E  8B E5                     MOV ESP,EBP
006BC080  5D                        POP EBP
006BC081  C2 0C 00                  RET 0xc
LAB_006bc084:
006BC084  53                        PUSH EBX
006BC085  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006BC08B  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006BC08E  6A 01                     PUSH 0x1
006BC090  68 00 01 00 00            PUSH 0x100
006BC095  6A 08                     PUSH 0x8
006BC097  8B D8                     MOV EBX,EAX
006BC099  56                        PUSH ESI
006BC09A  52                        PUSH EDX
006BC09B  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006BC09E  E8 4D 50 01 00            CALL 0x006d10f0
006BC0A3  85 C0                     TEST EAX,EAX
006BC0A5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006BC0A8  75 0C                     JNZ 0x006bc0b6
006BC0AA  C7 45 F8 FE FF FF FF      MOV dword ptr [EBP + -0x8],0xfffffffe
006BC0B1  E9 46 01 00 00            JMP 0x006bc1fc
LAB_006bc0b6:
006BC0B6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BC0B9  85 C0                     TEST EAX,EAX
006BC0BB  75 17                     JNZ 0x006bc0d4
006BC0BD  8D 85 E8 FB FF FF         LEA EAX,[EBP + 0xfffffbe8]
006BC0C3  50                        PUSH EAX
006BC0C4  68 00 01 00 00            PUSH 0x100
006BC0C9  6A 00                     PUSH 0x0
006BC0CB  53                        PUSH EBX
006BC0CC  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
006BC0D2  EB 15                     JMP 0x006bc0e9
LAB_006bc0d4:
006BC0D4  8D 8D E8 FB FF FF         LEA ECX,[EBP + 0xfffffbe8]
006BC0DA  51                        PUSH ECX
006BC0DB  68 00 01 00 00            PUSH 0x100
006BC0E0  6A 00                     PUSH 0x0
006BC0E2  50                        PUSH EAX
006BC0E3  FF 15 A0 BA 85 00         CALL dword ptr [0x0085baa0]
LAB_006bc0e9:
006BC0E9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006BC0EC  8D 8D E9 FB FF FF         LEA ECX,[EBP + 0xfffffbe9]
006BC0F2  BE 00 01 00 00            MOV ESI,0x100
006BC0F7  8D 42 28                  LEA EAX,[EDX + 0x28]
LAB_006bc0fa:
006BC0FA  8A 51 FF                  MOV DL,byte ptr [ECX + -0x1]
006BC0FD  83 C1 04                  ADD ECX,0x4
006BC100  88 50 02                  MOV byte ptr [EAX + 0x2],DL
006BC103  8A 51 FC                  MOV DL,byte ptr [ECX + -0x4]
006BC106  88 50 01                  MOV byte ptr [EAX + 0x1],DL
006BC109  8A 51 FD                  MOV DL,byte ptr [ECX + -0x3]
006BC10C  88 10                     MOV byte ptr [EAX],DL
006BC10E  C6 40 03 00               MOV byte ptr [EAX + 0x3],0x0
006BC112  83 C0 04                  ADD EAX,0x4
006BC115  4E                        DEC ESI
006BC116  75 E2                     JNZ 0x006bc0fa
006BC118  53                        PUSH EBX
006BC119  FF 15 9C BA 85 00         CALL dword ptr [0x0085ba9c]
006BC11F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BC122  8B D8                     MOV EBX,EAX
006BC124  6A 00                     PUSH 0x0
006BC126  8D 45 EC                  LEA EAX,[EBP + -0x14]
006BC129  6A 00                     PUSH 0x0
006BC12B  50                        PUSH EAX
006BC12C  6A 00                     PUSH 0x0
006BC12E  51                        PUSH ECX
006BC12F  53                        PUSH EBX
006BC130  FF 15 98 BA 85 00         CALL dword ptr [0x0085ba98]
006BC136  8B F0                     MOV ESI,EAX
006BC138  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BC13B  85 C0                     TEST EAX,EAX
006BC13D  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006BC140  74 0D                     JZ 0x006bc14f
006BC142  6A 01                     PUSH 0x1
006BC144  50                        PUSH EAX
006BC145  53                        PUSH EBX
006BC146  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
006BC14C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006bc14f:
006BC14F  85 F6                     TEST ESI,ESI
006BC151  75 09                     JNZ 0x006bc15c
006BC153  C7 45 F8 03 FF FF FF      MOV dword ptr [EBP + -0x8],0xffffff03
006BC15A  EB 69                     JMP 0x006bc1c5
LAB_006bc15c:
006BC15C  56                        PUSH ESI
006BC15D  53                        PUSH EBX
006BC15E  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
006BC164  85 C0                     TEST EAX,EAX
006BC166  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006BC169  75 09                     JNZ 0x006bc174
006BC16B  C7 45 F8 03 FF FF FF      MOV dword ptr [EBP + -0x8],0xffffff03
006BC172  EB 51                     JMP 0x006bc1c5
LAB_006bc174:
006BC174  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BC177  52                        PUSH EDX
006BC178  57                        PUSH EDI
006BC179  6A 00                     PUSH 0x0
006BC17B  6A 00                     PUSH 0x0
006BC17D  53                        PUSH EBX
006BC17E  E8 0D 42 01 00            CALL 0x006d0390
006BC183  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BC186  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
006BC189  85 F6                     TEST ESI,ESI
006BC18B  75 18                     JNZ 0x006bc1a5
006BC18D  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
006BC191  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
006BC195  83 C6 1F                  ADD ESI,0x1f
006BC198  C1 EE 03                  SHR ESI,0x3
006BC19B  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006BC1A1  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_006bc1a5:
006BC1A5  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006BC1A8  50                        PUSH EAX
006BC1A9  E8 F2 8D FF FF            CALL 0x006b4fa0
006BC1AE  8B CE                     MOV ECX,ESI
006BC1B0  8B F7                     MOV ESI,EDI
006BC1B2  8B F8                     MOV EDI,EAX
006BC1B4  8B C1                     MOV EAX,ECX
006BC1B6  C1 E9 02                  SHR ECX,0x2
006BC1B9  F3 A5                     MOVSD.REP ES:EDI,ESI
006BC1BB  8B C8                     MOV ECX,EAX
006BC1BD  83 E1 03                  AND ECX,0x3
006BC1C0  F3 A4                     MOVSB.REP ES:EDI,ESI
006BC1C2  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_006bc1c5:
006BC1C5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006BC1C8  85 C0                     TEST EAX,EAX
006BC1CA  74 0A                     JZ 0x006bc1d6
006BC1CC  6A 01                     PUSH 0x1
006BC1CE  50                        PUSH EAX
006BC1CF  53                        PUSH EBX
006BC1D0  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
LAB_006bc1d6:
006BC1D6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006BC1D9  85 C0                     TEST EAX,EAX
006BC1DB  74 08                     JZ 0x006bc1e5
006BC1DD  50                        PUSH EAX
006BC1DE  53                        PUSH EBX
006BC1DF  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_006bc1e5:
006BC1E5  8B 3D 78 BA 85 00         MOV EDI,dword ptr [0x0085ba78]
006BC1EB  85 F6                     TEST ESI,ESI
006BC1ED  74 03                     JZ 0x006bc1f2
006BC1EF  56                        PUSH ESI
006BC1F0  FF D7                     CALL EDI
LAB_006bc1f2:
006BC1F2  85 DB                     TEST EBX,EBX
006BC1F4  74 03                     JZ 0x006bc1f9
006BC1F6  53                        PUSH EBX
006BC1F7  FF D7                     CALL EDI
LAB_006bc1f9:
006BC1F9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006bc1fc:
006BC1FC  85 DB                     TEST EBX,EBX
006BC1FE  74 09                     JZ 0x006bc209
006BC200  53                        PUSH EBX
006BC201  6A 00                     PUSH 0x0
006BC203  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
LAB_006bc209:
006BC209  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006BC20C  85 F6                     TEST ESI,ESI
006BC20E  74 38                     JZ 0x006bc248
006BC210  8D 4D FC                  LEA ECX,[EBP + -0x4]
006BC213  51                        PUSH ECX
006BC214  E8 47 EE FE FF            CALL 0x006ab060
006BC219  81 FE 03 FF FF FF         CMP ESI,0xffffff03
006BC21F  75 10                     JNZ 0x006bc231
006BC221  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006BC227  85 C0                     TEST EAX,EAX
006BC229  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BC22C  75 03                     JNZ 0x006bc231
006BC22E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006bc231:
006BC231  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006BC237  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006BC23A  6A 52                     PUSH 0x52
006BC23C  68 5C DC 7E 00            PUSH 0x7edc5c
006BC241  52                        PUSH EDX
006BC242  50                        PUSH EAX
006BC243  E8 F8 9B FE FF            CALL 0x006a5e40
LAB_006bc248:
006BC248  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BC24B  5F                        POP EDI
006BC24C  5E                        POP ESI
006BC24D  5B                        POP EBX
006BC24E  8B E5                     MOV ESP,EBP
006BC250  5D                        POP EBP
006BC251  C2 0C 00                  RET 0xc
