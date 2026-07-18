FUN_004999c0:
004999C0  55                        PUSH EBP
004999C1  8B EC                     MOV EBP,ESP
004999C3  83 EC 50                  SUB ESP,0x50
004999C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004999CB  53                        PUSH EBX
004999CC  56                        PUSH ESI
004999CD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004999D0  57                        PUSH EDI
004999D1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004999D4  8D 4D B0                  LEA ECX,[EBP + -0x50]
004999D7  6A 00                     PUSH 0x0
004999D9  52                        PUSH EDX
004999DA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004999DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004999E3  E8 08 3E 29 00            CALL 0x0072d7f0
004999E8  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004999EB  8B F0                     MOV ESI,EAX
004999ED  83 C4 08                  ADD ESP,0x8
004999F0  85 F6                     TEST ESI,ESI
004999F2  0F 85 D2 00 00 00         JNZ 0x00499aca
004999F8  8B 83 12 02 00 00         MOV EAX,dword ptr [EBX + 0x212]
004999FE  85 C0                     TEST EAX,EAX
00499A00  75 1A                     JNZ 0x00499a1c
00499A02  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00499A07  68 09 05 00 00            PUSH 0x509
00499A0C  68 3C BE 7A 00            PUSH 0x7abe3c
00499A11  50                        PUSH EAX
00499A12  68 09 00 FE AF            PUSH 0xaffe0009
00499A17  E8 24 C4 20 00            CALL 0x006a5e40
LAB_00499a1c:
00499A1C  8B 83 0E 02 00 00         MOV EAX,dword ptr [EBX + 0x20e]
00499A22  85 C0                     TEST EAX,EAX
00499A24  75 1B                     JNZ 0x00499a41
00499A26  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00499A2C  68 0B 05 00 00            PUSH 0x50b
00499A31  68 3C BE 7A 00            PUSH 0x7abe3c
00499A36  51                        PUSH ECX
00499A37  68 04 00 FE AF            PUSH 0xaffe0004
00499A3C  E8 FF C3 20 00            CALL 0x006a5e40
LAB_00499a41:
00499A41  8B 93 0E 02 00 00         MOV EDX,dword ptr [EBX + 0x20e]
00499A47  33 FF                     XOR EDI,EDI
00499A49  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00499A4C  85 F6                     TEST ESI,ESI
00499A4E  7E 63                     JLE 0x00499ab3
LAB_00499a50:
00499A50  8B 8B 0E 02 00 00         MOV ECX,dword ptr [EBX + 0x20e]
00499A56  8D 45 FC                  LEA EAX,[EBP + -0x4]
00499A59  50                        PUSH EAX
00499A5A  8B D7                     MOV EDX,EDI
00499A5C  E8 0F 32 21 00            CALL 0x006acc70
00499A61  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
00499A65  66 3D FF FF               CMP AX,0xffff
00499A69  74 10                     JZ 0x00499a7b
00499A6B  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
00499A6E  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
00499A71  3A D1                     CMP DL,CL
00499A73  75 06                     JNZ 0x00499a7b
00499A75  66 3B 45 0C               CMP AX,word ptr [EBP + 0xc]
00499A79  74 07                     JZ 0x00499a82
LAB_00499a7b:
00499A7B  47                        INC EDI
00499A7C  3B FE                     CMP EDI,ESI
00499A7E  7C D0                     JL 0x00499a50
00499A80  EB 31                     JMP 0x00499ab3
LAB_00499a82:
00499A82  6A 01                     PUSH 0x1
00499A84  6A 04                     PUSH 0x4
00499A86  6A 01                     PUSH 0x1
00499A88  6A 00                     PUSH 0x0
00499A8A  E8 01 48 21 00            CALL 0x006ae290
00499A8F  8D 55 F8                  LEA EDX,[EBP + -0x8]
00499A92  8B F0                     MOV ESI,EAX
00499A94  52                        PUSH EDX
00499A95  56                        PUSH ESI
00499A96  66 C7 45 F8 FF FF         MOV word ptr [EBP + -0x8],0xffff
00499A9C  66 89 7D FA               MOV word ptr [EBP + -0x6],DI
00499AA0  E8 1B 47 21 00            CALL 0x006ae1c0
00499AA5  56                        PUSH ESI
00499AA6  8B CB                     MOV ECX,EBX
00499AA8  E8 D8 AE F6 FF            CALL 0x00404985
00499AAD  56                        PUSH ESI
00499AAE  E8 5D 46 21 00            CALL 0x006ae110
LAB_00499ab3:
00499AB3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00499AB6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00499abb:
00499ABB  8B 83 12 02 00 00         MOV EAX,dword ptr [EBX + 0x212]
00499AC1  5F                        POP EDI
00499AC2  5E                        POP ESI
00499AC3  5B                        POP EBX
00499AC4  8B E5                     MOV ESP,EBP
00499AC6  5D                        POP EBP
00499AC7  C2 08 00                  RET 0x8
LAB_00499aca:
00499ACA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00499ACD  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00499AD3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00499AD9  74 E0                     JZ 0x00499abb
00499ADB  68 C8 BE 7A 00            PUSH 0x7abec8
00499AE0  68 CC 4C 7A 00            PUSH 0x7a4ccc
00499AE5  56                        PUSH ESI
00499AE6  6A 00                     PUSH 0x0
00499AE8  68 1C 05 00 00            PUSH 0x51c
00499AED  68 3C BE 7A 00            PUSH 0x7abe3c
00499AF2  E8 D9 39 21 00            CALL 0x006ad4d0
00499AF7  83 C4 18                  ADD ESP,0x18
00499AFA  85 C0                     TEST EAX,EAX
00499AFC  74 01                     JZ 0x00499aff
00499AFE  CC                        INT3
LAB_00499aff:
00499AFF  68 1D 05 00 00            PUSH 0x51d
00499B04  68 3C BE 7A 00            PUSH 0x7abe3c
00499B09  6A 00                     PUSH 0x0
00499B0B  56                        PUSH ESI
00499B0C  E8 2F C3 20 00            CALL 0x006a5e40
00499B11  5F                        POP EDI
00499B12  5E                        POP ESI
00499B13  83 C8 FF                  OR EAX,0xffffffff
00499B16  5B                        POP EBX
00499B17  8B E5                     MOV ESP,EBP
00499B19  5D                        POP EBP
00499B1A  C2 08 00                  RET 0x8
