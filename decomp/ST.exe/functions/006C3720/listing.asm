FUN_006c3720:
006C3720  55                        PUSH EBP
006C3721  8B EC                     MOV EBP,ESP
006C3723  83 EC 08                  SUB ESP,0x8
006C3726  56                        PUSH ESI
006C3727  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C372A  57                        PUSH EDI
006C372B  6A FF                     PUSH -0x1
006C372D  8B 46 74                  MOV EAX,dword ptr [ESI + 0x74]
006C3730  50                        PUSH EAX
006C3731  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
006C3737  85 C0                     TEST EAX,EAX
006C3739  0F 85 81 00 00 00         JNZ 0x006c37c0
006C373F  53                        PUSH EBX
006C3740  8D BE 08 05 00 00         LEA EDI,[ESI + 0x508]
LAB_006c3746:
006C3746  57                        PUSH EDI
006C3747  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C374D  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
006C3750  8D 55 F8                  LEA EDX,[EBP + -0x8]
006C3753  6A 00                     PUSH 0x0
006C3755  52                        PUSH EDX
006C3756  8B 08                     MOV ECX,dword ptr [EAX]
006C3758  8D 55 FC                  LEA EDX,[EBP + -0x4]
006C375B  52                        PUSH EDX
006C375C  8D 55 08                  LEA EDX,[EBP + 0x8]
006C375F  52                        PUSH EDX
006C3760  50                        PUSH EAX
006C3761  FF 51 20                  CALL dword ptr [ECX + 0x20]
006C3764  85 C0                     TEST EAX,EAX
006C3766  75 3A                     JNZ 0x006c37a2
006C3768  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C376B  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
006C376E  85 C0                     TEST EAX,EAX
006C3770  7E 76                     JLE 0x006c37e8
006C3772  83 F8 03                  CMP EAX,0x3
006C3775  7F 71                     JG 0x006c37e8
006C3777  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006C377A  56                        PUSH ESI
006C377B  E8 90 09 00 00            CALL 0x006c4110
006C3780  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C3783  85 C0                     TEST EAX,EAX
006C3785  74 1B                     JZ 0x006c37a2
006C3787  F7 C3 00 00 00 20         TEST EBX,0x20000000
006C378D  74 13                     JZ 0x006c37a2
006C378F  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
006C3792  57                        PUSH EDI
006C3793  50                        PUSH EAX
006C3794  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
006C379A  50                        PUSH EAX
006C379B  51                        PUSH ECX
006C379C  FF 15 5C BE 85 00         CALL dword ptr [0x0085be5c]
LAB_006c37a2:
006C37A2  8D BE 08 05 00 00         LEA EDI,[ESI + 0x508]
006C37A8  57                        PUSH EDI
006C37A9  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C37AF  8B 56 74                  MOV EDX,dword ptr [ESI + 0x74]
006C37B2  6A FF                     PUSH -0x1
006C37B4  52                        PUSH EDX
006C37B5  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
006C37BB  85 C0                     TEST EAX,EAX
006C37BD  74 87                     JZ 0x006c3746
006C37BF  5B                        POP EBX
LAB_006c37c0:
006C37C0  8D BE 08 05 00 00         LEA EDI,[ESI + 0x508]
006C37C6  57                        PUSH EDI
006C37C7  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C37CD  57                        PUSH EDI
006C37CE  C7 86 84 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x84],0x0
006C37D8  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C37DE  5F                        POP EDI
006C37DF  33 C0                     XOR EAX,EAX
006C37E1  5E                        POP ESI
006C37E2  8B E5                     MOV ESP,EBP
006C37E4  5D                        POP EBP
006C37E5  C2 04 00                  RET 0x4
LAB_006c37e8:
006C37E8  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
006C37EF  EB B1                     JMP 0x006c37a2
