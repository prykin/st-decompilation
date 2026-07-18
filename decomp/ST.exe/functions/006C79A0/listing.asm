FUN_006c79a0:
006C79A0  55                        PUSH EBP
006C79A1  8B EC                     MOV EBP,ESP
006C79A3  83 EC 30                  SUB ESP,0x30
006C79A6  53                        PUSH EBX
006C79A7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C79AA  56                        PUSH ESI
006C79AB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C79AE  8B 03                     MOV EAX,dword ptr [EBX]
006C79B0  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006C79B3  85 F6                     TEST ESI,ESI
006C79B5  57                        PUSH EDI
006C79B6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C79B9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C79BC  74 1C                     JZ 0x006c79da
006C79BE  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C79C1  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C79C4  85 C0                     TEST EAX,EAX
006C79C6  7D 02                     JGE 0x006c79ca
006C79C8  F7 D8                     NEG EAX
LAB_006c79ca:
006C79CA  50                        PUSH EAX
006C79CB  51                        PUSH ECX
006C79CC  53                        PUSH EBX
006C79CD  E8 DE FC FF FF            CALL 0x006c76b0
006C79D2  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006C79D5  E9 B3 00 00 00            JMP 0x006c7a8d
LAB_006c79da:
006C79DA  8B 7B 1A                  MOV EDI,dword ptr [EBX + 0x1a]
006C79DD  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C79E0  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006C79E3  6A 01                     PUSH 0x1
006C79E5  57                        PUSH EDI
006C79E6  6A 08                     PUSH 0x8
006C79E8  50                        PUSH EAX
006C79E9  51                        PUSH ECX
006C79EA  C7 43 04 00 00 00 00      MOV dword ptr [EBX + 0x4],0x0
006C79F1  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006C79F7  E8 F4 96 00 00            CALL 0x006d10f0
006C79FC  85 C0                     TEST EAX,EAX
006C79FE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C7A01  75 09                     JNZ 0x006c7a0c
006C7A03  5F                        POP EDI
006C7A04  5E                        POP ESI
006C7A05  5B                        POP EBX
006C7A06  8B E5                     MOV ESP,EBP
006C7A08  5D                        POP EBP
006C7A09  C2 0C 00                  RET 0xc
LAB_006c7a0c:
006C7A0C  50                        PUSH EAX
006C7A0D  E8 8E D5 FE FF            CALL 0x006b4fa0
006C7A12  83 FF 02                  CMP EDI,0x2
006C7A15  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006C7A18  75 39                     JNZ 0x006c7a53
006C7A1A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A1D  C6 42 2B 00               MOV byte ptr [EDX + 0x2b],0x0
006C7A21  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7A24  C6 40 28 00               MOV byte ptr [EAX + 0x28],0x0
006C7A28  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7A2B  B0 FF                     MOV AL,0xff
006C7A2D  C6 41 29 00               MOV byte ptr [ECX + 0x29],0x0
006C7A31  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A34  C6 42 2A 00               MOV byte ptr [EDX + 0x2a],0x0
006C7A38  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7A3B  88 41 2C                  MOV byte ptr [ECX + 0x2c],AL
006C7A3E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A41  88 42 2D                  MOV byte ptr [EDX + 0x2d],AL
006C7A44  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7A47  88 41 2E                  MOV byte ptr [ECX + 0x2e],AL
006C7A4A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A4D  C6 42 2F 00               MOV byte ptr [EDX + 0x2f],0x0
006C7A51  EB 3A                     JMP 0x006c7a8d
LAB_006c7a53:
006C7A53  8B 43 1E                  MOV EAX,dword ptr [EBX + 0x1e]
006C7A56  33 C9                     XOR ECX,ECX
006C7A58  85 FF                     TEST EDI,EDI
006C7A5A  7E 31                     JLE 0x006c7a8d
006C7A5C  8D 70 02                  LEA ESI,[EAX + 0x2]
LAB_006c7a5f:
006C7A5F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A62  8A 46 FE                  MOV AL,byte ptr [ESI + -0x2]
006C7A65  83 C6 03                  ADD ESI,0x3
006C7A68  88 44 8A 2A               MOV byte ptr [EDX + ECX*0x4 + 0x2a],AL
006C7A6C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A6F  8A 46 FC                  MOV AL,byte ptr [ESI + -0x4]
006C7A72  88 44 8A 29               MOV byte ptr [EDX + ECX*0x4 + 0x29],AL
006C7A76  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7A79  8A 46 FD                  MOV AL,byte ptr [ESI + -0x3]
006C7A7C  88 44 8A 28               MOV byte ptr [EDX + ECX*0x4 + 0x28],AL
006C7A80  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7A83  C6 44 88 2B 00            MOV byte ptr [EAX + ECX*0x4 + 0x2b],0x0
006C7A88  41                        INC ECX
006C7A89  3B CF                     CMP ECX,EDI
006C7A8B  7C D2                     JL 0x006c7a5f
LAB_006c7a8d:
006C7A8D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006C7A90  B9 0A 00 00 00            MOV ECX,0xa
006C7A95  BE 08 E0 7E 00            MOV ESI,0x7ee008
006C7A9A  8D 7D D0                  LEA EDI,[EBP + -0x30]
006C7A9D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7AA0  53                        PUSH EBX
006C7AA1  F3 A5                     MOVSD.REP ES:EDI,ESI
006C7AA3  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006C7AA6  83 C0 03                  ADD EAX,0x3
006C7AA9  24 FC                     AND AL,0xfc
006C7AAB  8D 4D D0                  LEA ECX,[EBP + -0x30]
006C7AAE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C7AB1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C7AB4  89 4B 22                  MOV dword ptr [EBX + 0x22],ECX
006C7AB7  C7 43 3A 20 7B 6C 00      MOV dword ptr [EBX + 0x3a],0x6c7b20
006C7ABE  89 53 2E                  MOV dword ptr [EBX + 0x2e],EDX
006C7AC1  89 43 32                  MOV dword ptr [EBX + 0x32],EAX
006C7AC4  E8 57 06 01 00            CALL 0x006d8120
006C7AC9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C7ACC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C7ACF  8B F0                     MOV ESI,EAX
006C7AD1  83 C4 04                  ADD ESP,0x4
006C7AD4  85 F6                     TEST ESI,ESI
006C7AD6  89 0B                     MOV dword ptr [EBX],ECX
006C7AD8  89 53 04                  MOV dword ptr [EBX + 0x4],EDX
006C7ADB  74 2F                     JZ 0x006c7b0c
006C7ADD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C7AE0  85 C0                     TEST EAX,EAX
006C7AE2  75 09                     JNZ 0x006c7aed
006C7AE4  8D 45 08                  LEA EAX,[EBP + 0x8]
006C7AE7  50                        PUSH EAX
006C7AE8  E8 73 35 FE FF            CALL 0x006ab060
LAB_006c7aed:
006C7AED  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C7AF3  6A 7C                     PUSH 0x7c
006C7AF5  68 30 E0 7E 00            PUSH 0x7ee030
006C7AFA  51                        PUSH ECX
006C7AFB  56                        PUSH ESI
006C7AFC  E8 3F E3 FD FF            CALL 0x006a5e40
006C7B01  5F                        POP EDI
006C7B02  5E                        POP ESI
006C7B03  33 C0                     XOR EAX,EAX
006C7B05  5B                        POP EBX
006C7B06  8B E5                     MOV ESP,EBP
006C7B08  5D                        POP EBP
006C7B09  C2 0C 00                  RET 0xc
LAB_006c7b0c:
006C7B0C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7B0F  5F                        POP EDI
006C7B10  5E                        POP ESI
006C7B11  5B                        POP EBX
006C7B12  8B E5                     MOV ESP,EBP
006C7B14  5D                        POP EBP
006C7B15  C2 0C 00                  RET 0xc
