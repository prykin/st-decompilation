CPanelTy::SwitchTV:
004FF110  55                        PUSH EBP
004FF111  8B EC                     MOV EBP,ESP
004FF113  83 EC 54                  SUB ESP,0x54
004FF116  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FF119  53                        PUSH EBX
004FF11A  56                        PUSH ESI
004FF11B  57                        PUSH EDI
004FF11C  85 C0                     TEST EAX,EAX
004FF11E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004FF121  74 08                     JZ 0x004ff12b
004FF123  81 C1 63 0B 00 00         ADD ECX,0xb63
004FF129  EB 06                     JMP 0x004ff131
LAB_004ff12b:
004FF12B  81 C1 51 0C 00 00         ADD ECX,0xc51
LAB_004ff131:
004FF131  85 C0                     TEST EAX,EAX
004FF133  0F 94 C0                  SETZ AL
004FF136  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004FF139  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004FF13C  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004FF142  8D 45 B0                  LEA EAX,[EBP + -0x50]
004FF145  8D 55 AC                  LEA EDX,[EBP + -0x54]
004FF148  6A 00                     PUSH 0x0
004FF14A  50                        PUSH EAX
004FF14B  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004FF14E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FF154  E8 97 E6 22 00            CALL 0x0072d7f0
004FF159  8B F0                     MOV ESI,EAX
004FF15B  83 C4 08                  ADD ESP,0x8
004FF15E  85 F6                     TEST ESI,ESI
004FF160  0F 85 47 01 00 00         JNZ 0x004ff2ad
004FF166  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004FF169  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004FF16C  8B FB                     MOV EDI,EBX
004FF16E  81 E7 FF 00 00 00         AND EDI,0xff
004FF174  8A 84 37 EC 02 00 00      MOV AL,byte ptr [EDI + ESI*0x1 + 0x2ec]
004FF17B  48                        DEC EAX
004FF17C  74 30                     JZ 0x004ff1ae
004FF17E  83 E8 04                  SUB EAX,0x4
004FF181  0F 85 14 01 00 00         JNZ 0x004ff29b
004FF187  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004FF18A  6A 00                     PUSH 0x0
004FF18C  51                        PUSH ECX
004FF18D  E8 75 44 F0 FF            CALL 0x00403607
004FF192  89 84 BE F6 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2f6],EAX
004FF199  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004FF19C  83 C4 08                  ADD ESP,0x8
004FF19F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FF1A5  5F                        POP EDI
004FF1A6  5E                        POP ESI
004FF1A7  5B                        POP EBX
004FF1A8  8B E5                     MOV ESP,EBP
004FF1AA  5D                        POP EBP
004FF1AB  C2 04 00                  RET 0x4
LAB_004ff1ae:
004FF1AE  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004FF1B3  6A 00                     PUSH 0x0
004FF1B5  6A 00                     PUSH 0x0
004FF1B7  6A 01                     PUSH 0x1
004FF1B9  85 C0                     TEST EAX,EAX
004FF1BB  6A 00                     PUSH 0x0
004FF1BD  6A 06                     PUSH 0x6
004FF1BF  74 62                     JZ 0x004ff223
004FF1C1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004FF1C4  6A 01                     PUSH 0x1
004FF1C6  53                        PUSH EBX
004FF1C7  E8 3B 44 F0 FF            CALL 0x00403607
004FF1CC  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004FF1D2  83 C4 08                  ADD ESP,0x8
004FF1D5  50                        PUSH EAX
004FF1D6  6A 1F                     PUSH 0x1f
004FF1D8  52                        PUSH EDX
004FF1D9  E8 12 A9 20 00            CALL 0x00709af0
004FF1DE  89 84 BE E2 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2e2],EAX
004FF1E5  6A 00                     PUSH 0x0
004FF1E7  C6 84 37 EC 02 00 00 05   MOV byte ptr [EDI + ESI*0x1 + 0x2ec],0x5
004FF1EF  53                        PUSH EBX
004FF1F0  C6 84 37 EA 02 00 00 00   MOV byte ptr [EDI + ESI*0x1 + 0x2ea],0x0
004FF1F8  E8 0A 44 F0 FF            CALL 0x00403607
004FF1FD  68 B3 00 00 00            PUSH 0xb3
004FF202  89 84 BE F6 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2f6],EAX
004FF209  E8 21 6C F0 FF            CALL 0x00405e2f
004FF20E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004FF211  83 C4 2C                  ADD ESP,0x2c
004FF214  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FF21A  5F                        POP EDI
004FF21B  5E                        POP ESI
004FF21C  5B                        POP EBX
004FF21D  8B E5                     MOV ESP,EBP
004FF21F  5D                        POP EBP
004FF220  C2 04 00                  RET 0x4
LAB_004ff223:
004FF223  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FF226  6A 00                     PUSH 0x0
004FF228  50                        PUSH EAX
004FF229  E8 D9 43 F0 FF            CALL 0x00403607
004FF22E  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004FF234  83 C4 08                  ADD ESP,0x8
004FF237  50                        PUSH EAX
004FF238  6A 1F                     PUSH 0x1f
004FF23A  51                        PUSH ECX
004FF23B  E8 B0 A8 20 00            CALL 0x00709af0
004FF240  83 C4 20                  ADD ESP,0x20
004FF243  89 84 BE E2 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2e2],EAX
004FF24A  8B CE                     MOV ECX,ESI
004FF24C  C6 84 37 EA 02 00 00 00   MOV byte ptr [EDI + ESI*0x1 + 0x2ea],0x0
004FF254  53                        PUSH EBX
004FF255  E8 75 3A F0 FF            CALL 0x00402ccf
004FF25A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FF25D  F7 D8                     NEG EAX
004FF25F  1A C0                     SBB AL,AL
004FF261  24 F8                     AND AL,0xf8
004FF263  04 08                     ADD AL,0x8
004FF265  3C 0B                     CMP AL,0xb
004FF267  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
004FF26A  73 2F                     JNC 0x004ff29b
004FF26C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004FF26F  25 FF 00 00 00            AND EAX,0xff
004FF274  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004FF27B  85 C9                     TEST ECX,ECX
004FF27D  7C 1C                     JL 0x004ff29b
004FF27F  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
004FF286  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
004FF28A  52                        PUSH EDX
004FF28B  50                        PUSH EAX
004FF28C  6A FF                     PUSH -0x1
004FF28E  51                        PUSH ECX
004FF28F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FF295  51                        PUSH ECX
004FF296  E8 A5 43 1B 00            CALL 0x006b3640
LAB_004ff29b:
004FF29B  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004FF29E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FF2A4  5F                        POP EDI
004FF2A5  5E                        POP ESI
004FF2A6  5B                        POP EBX
004FF2A7  8B E5                     MOV ESP,EBP
004FF2A9  5D                        POP EBP
004FF2AA  C2 04 00                  RET 0x4
LAB_004ff2ad:
004FF2AD  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004FF2B0  68 84 24 7C 00            PUSH 0x7c2484
004FF2B5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FF2BA  56                        PUSH ESI
004FF2BB  6A 00                     PUSH 0x0
004FF2BD  68 D3 00 00 00            PUSH 0xd3
004FF2C2  68 CC 23 7C 00            PUSH 0x7c23cc
004FF2C7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FF2CC  E8 FF E1 1A 00            CALL 0x006ad4d0
004FF2D1  83 C4 18                  ADD ESP,0x18
004FF2D4  85 C0                     TEST EAX,EAX
004FF2D6  74 01                     JZ 0x004ff2d9
004FF2D8  CC                        INT3
LAB_004ff2d9:
004FF2D9  68 D3 00 00 00            PUSH 0xd3
004FF2DE  68 CC 23 7C 00            PUSH 0x7c23cc
004FF2E3  6A 00                     PUSH 0x0
004FF2E5  56                        PUSH ESI
004FF2E6  E8 55 6B 1A 00            CALL 0x006a5e40
004FF2EB  5F                        POP EDI
004FF2EC  5E                        POP ESI
004FF2ED  5B                        POP EBX
004FF2EE  8B E5                     MOV ESP,EBP
004FF2F0  5D                        POP EBP
004FF2F1  C2 04 00                  RET 0x4
