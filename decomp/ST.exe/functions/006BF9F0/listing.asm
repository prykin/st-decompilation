FUN_006bf9f0:
006BF9F0  55                        PUSH EBP
006BF9F1  8B EC                     MOV EBP,ESP
006BF9F3  83 EC 50                  SUB ESP,0x50
006BF9F6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BF9F9  56                        PUSH ESI
006BF9FA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BF9FD  57                        PUSH EDI
006BF9FE  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006BFA01  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006BFA08  8B 06                     MOV EAX,dword ptr [ESI]
006BFA0A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BFA0D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BFA10  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006BFA13  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006BFA16  89 15 30 4F 85 00         MOV dword ptr [0x00854f30],EDX
006BFA1C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BFA1F  C7 05 74 4F 85 00 00 00 00 00  MOV dword ptr [0x00854f74],0x0
006BFA29  A3 34 4F 85 00            MOV [0x00854f34],EAX
006BFA2E  89 0D 38 4F 85 00         MOV dword ptr [0x00854f38],ECX
006BFA34  89 15 3C 4F 85 00         MOV dword ptr [0x00854f3c],EDX
006BFA3A  8B 06                     MOV EAX,dword ptr [ESI]
006BFA3C  05 84 04 00 00            ADD EAX,0x484
006BFA41  50                        PUSH EAX
006BFA42  68 30 4F 85 00            PUSH 0x854f30
006BFA47  68 30 4F 85 00            PUSH 0x854f30
006BFA4C  E8 5F 04 01 00            CALL 0x006cfeb0
006BFA51  83 C4 0C                  ADD ESP,0xc
006BFA54  85 C0                     TEST EAX,EAX
006BFA56  0F 84 BC 00 00 00         JZ 0x006bfb18
006BFA5C  BF 01 00 00 00            MOV EDI,0x1
006BFA61  8D 45 B4                  LEA EAX,[EBP + -0x4c]
006BFA64  89 3D E8 4F 85 00         MOV dword ptr [0x00854fe8],EDI
006BFA6A  89 BE B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EDI
006BFA70  89 BE B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EDI
006BFA76  8B 36                     MOV ESI,dword ptr [ESI]
006BFA78  6A 00                     PUSH 0x0
006BFA7A  50                        PUSH EAX
006BFA7B  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006BFA7E  80 E6 FE                  AND DH,0xfe
006BFA81  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006BFA84  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006BFA8A  8D 55 B0                  LEA EDX,[EBP + -0x50]
006BFA8D  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006BFA90  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006BFA96  E8 55 DD 06 00            CALL 0x0072d7f0
006BFA9B  83 C4 08                  ADD ESP,0x8
006BFA9E  85 C0                     TEST EAX,EAX
006BFAA0  75 18                     JNZ 0x006bfaba
006BFAA2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BFAA5  50                        PUSH EAX
006BFAA6  51                        PUSH ECX
006BFAA7  E8 94 DC FF FF            CALL 0x006bd740
006BFAAC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006BFAAF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BFAB2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006BFAB8  EB 0E                     JMP 0x006bfac8
LAB_006bfaba:
006BFABA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006BFABD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BFAC3  8B C8                     MOV ECX,EAX
006BFAC5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006bfac8:
006BFAC8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006BFACB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006BFACE  81 E2 00 01 00 00         AND EDX,0x100
006BFAD4  89 B8 B4 01 00 00         MOV dword ptr [EAX + 0x1b4],EDI
006BFADA  89 B8 B8 01 00 00         MOV dword ptr [EAX + 0x1b8],EDI
006BFAE0  8B 00                     MOV EAX,dword ptr [EAX]
006BFAE2  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
006BFAE5  0B F2                     OR ESI,EDX
006BFAE7  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
006BFAEA  C7 05 E8 4F 85 00 00 00 00 00  MOV dword ptr [0x00854fe8],0x0
006BFAF4  85 C9                     TEST ECX,ECX
006BFAF6  74 20                     JZ 0x006bfb18
006BFAF8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006BFAFD  68 11 08 00 00            PUSH 0x811
006BFB02  68 8C DC 7E 00            PUSH 0x7edc8c
006BFB07  50                        PUSH EAX
006BFB08  51                        PUSH ECX
006BFB09  E8 32 63 FE FF            CALL 0x006a5e40
006BFB0E  33 C0                     XOR EAX,EAX
006BFB10  5F                        POP EDI
006BFB11  5E                        POP ESI
006BFB12  8B E5                     MOV ESP,EBP
006BFB14  5D                        POP EBP
006BFB15  C2 14 00                  RET 0x14
LAB_006bfb18:
006BFB18  A1 74 4F 85 00            MOV EAX,[0x00854f74]
006BFB1D  5F                        POP EDI
006BFB1E  5E                        POP ESI
006BFB1F  8B E5                     MOV ESP,EBP
006BFB21  5D                        POP EBP
006BFB22  C2 14 00                  RET 0x14
