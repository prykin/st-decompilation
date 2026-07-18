FUN_0054cfc0:
0054CFC0  55                        PUSH EBP
0054CFC1  8B EC                     MOV EBP,ESP
0054CFC3  83 EC 50                  SUB ESP,0x50
0054CFC6  53                        PUSH EBX
0054CFC7  33 DB                     XOR EBX,EBX
0054CFC9  56                        PUSH ESI
0054CFCA  57                        PUSH EDI
0054CFCB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054CFCE  89 59 30                  MOV dword ptr [ECX + 0x30],EBX
0054CFD1  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054CFD6  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0054CFD9  8D 4D B0                  LEA ECX,[EBP + -0x50]
0054CFDC  53                        PUSH EBX
0054CFDD  52                        PUSH EDX
0054CFDE  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0054CFE5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0054CFE8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054CFEE  E8 FD 07 1E 00            CALL 0x0072d7f0
0054CFF3  8B F0                     MOV ESI,EAX
0054CFF5  83 C4 08                  ADD ESP,0x8
0054CFF8  3B F3                     CMP ESI,EBX
0054CFFA  0F 85 CE 00 00 00         JNZ 0x0054d0ce
0054D000  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0054D003  8B CE                     MOV ECX,ESI
0054D005  E8 E6 81 19 00            CALL 0x006e51f0
0054D00A  6A 07                     PUSH 0x7
0054D00C  89 5E 39                  MOV dword ptr [ESI + 0x39],EBX
0054D00F  C7 46 45 07 00 00 00      MOV dword ptr [ESI + 0x45],0x7
0054D016  E8 55 DC 15 00            CALL 0x006aac70
0054D01B  68 00 14 00 00            PUSH 0x1400
0054D020  89 46 3D                  MOV dword ptr [ESI + 0x3d],EAX
0054D023  C7 46 53 00 14 00 00      MOV dword ptr [ESI + 0x53],0x1400
0054D02A  E8 41 DC 15 00            CALL 0x006aac70
0054D02F  89 46 4F                  MOV dword ptr [ESI + 0x4f],EAX
0054D032  8D 4E 49                  LEA ECX,[ESI + 0x49]
0054D035  33 C0                     XOR EAX,EAX
0054D037  89 5E 41                  MOV dword ptr [ESI + 0x41],EBX
0054D03A  89 01                     MOV dword ptr [ECX],EAX
0054D03C  8D BE E4 00 00 00         LEA EDI,[ESI + 0xe4]
0054D042  88 41 04                  MOV byte ptr [ECX + 0x4],AL
0054D045  88 5E 4E                  MOV byte ptr [ESI + 0x4e],BL
0054D048  89 5E 59                  MOV dword ptr [ESI + 0x59],EBX
0054D04B  89 9E E8 00 00 00         MOV dword ptr [ESI + 0xe8],EBX
0054D051  89 9E EC 00 00 00         MOV dword ptr [ESI + 0xec],EBX
0054D057  66 89 5E 57               MOV word ptr [ESI + 0x57],BX
0054D05B  89 5E 28                  MOV dword ptr [ESI + 0x28],EBX
0054D05E  89 5E 2C                  MOV dword ptr [ESI + 0x2c],EBX
0054D061  89 1F                     MOV dword ptr [EDI],EBX
0054D063  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0054D069  3B CB                     CMP ECX,EBX
0054D06B  74 15                     JZ 0x0054d082
0054D06D  A1 30 AE 79 00            MOV EAX,[0x0079ae30]
0054D072  8D 55 F8                  LEA EDX,[EBP + -0x8]
0054D075  53                        PUSH EBX
0054D076  52                        PUSH EDX
0054D077  50                        PUSH EAX
0054D078  6A 0C                     PUSH 0xc
0054D07A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0054D07D  E8 5E 4C 1A 00            CALL 0x006f1ce0
LAB_0054d082:
0054D082  8B 0F                     MOV ECX,dword ptr [EDI]
0054D084  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0054D087  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
0054D08A  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
0054D08D  88 5E 38                  MOV byte ptr [ESI + 0x38],BL
0054D090  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0054D093  89 5E 69                  MOV dword ptr [ESI + 0x69],EBX
0054D096  89 5E 6D                  MOV dword ptr [ESI + 0x6d],EBX
0054D099  89 5E 71                  MOV dword ptr [ESI + 0x71],EBX
0054D09C  89 5E 75                  MOV dword ptr [ESI + 0x75],EBX
0054D09F  89 5E 79                  MOV dword ptr [ESI + 0x79],EBX
0054D0A2  88 9E BB 00 00 00         MOV byte ptr [ESI + 0xbb],BL
0054D0A8  33 C0                     XOR EAX,EAX
0054D0AA  81 C6 A7 00 00 00         ADD ESI,0xa7
0054D0B0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0054D0B3  89 06                     MOV dword ptr [ESI],EAX
0054D0B5  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
0054D0B8  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0054D0BB  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0054D0BE  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0054D0C1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D0C7  5F                        POP EDI
0054D0C8  5E                        POP ESI
0054D0C9  5B                        POP EBX
0054D0CA  8B E5                     MOV ESP,EBP
0054D0CC  5D                        POP EBP
0054D0CD  C3                        RET
LAB_0054d0ce:
0054D0CE  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0054D0D1  68 B8 84 7C 00            PUSH 0x7c84b8
0054D0D6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054D0DB  56                        PUSH ESI
0054D0DC  53                        PUSH EBX
0054D0DD  68 8C 01 00 00            PUSH 0x18c
0054D0E2  68 30 84 7C 00            PUSH 0x7c8430
0054D0E7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054D0ED  E8 DE 03 16 00            CALL 0x006ad4d0
0054D0F2  83 C4 18                  ADD ESP,0x18
0054D0F5  85 C0                     TEST EAX,EAX
0054D0F7  74 01                     JZ 0x0054d0fa
0054D0F9  CC                        INT3
LAB_0054d0fa:
0054D0FA  68 8E 01 00 00            PUSH 0x18e
0054D0FF  68 30 84 7C 00            PUSH 0x7c8430
0054D104  53                        PUSH EBX
0054D105  56                        PUSH ESI
0054D106  E8 35 8D 15 00            CALL 0x006a5e40
0054D10B  5F                        POP EDI
0054D10C  5E                        POP ESI
0054D10D  B8 FC FF FF FF            MOV EAX,0xfffffffc
0054D112  5B                        POP EBX
0054D113  8B E5                     MOV ESP,EBP
0054D115  5D                        POP EBP
0054D116  C3                        RET
