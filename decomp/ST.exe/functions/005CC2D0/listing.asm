FUN_005cc2d0:
005CC2D0  55                        PUSH EBP
005CC2D1  8B EC                     MOV EBP,ESP
005CC2D3  83 EC 48                  SUB ESP,0x48
005CC2D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CC2DB  56                        PUSH ESI
005CC2DC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CC2DF  57                        PUSH EDI
005CC2E0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005CC2E3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005CC2E6  6A 00                     PUSH 0x0
005CC2E8  52                        PUSH EDX
005CC2E9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005CC2EC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CC2F2  E8 F9 14 16 00            CALL 0x0072d7f0
005CC2F7  8B F0                     MOV ESI,EAX
005CC2F9  83 C4 08                  ADD ESP,0x8
005CC2FC  85 F6                     TEST ESI,ESI
005CC2FE  0F 85 A9 00 00 00         JNZ 0x005cc3ad
005CC304  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005CC307  8B 8F 04 22 00 00         MOV ECX,dword ptr [EDI + 0x2204]
005CC30D  8D 87 04 22 00 00         LEA EAX,[EDI + 0x2204]
005CC313  85 C9                     TEST ECX,ECX
005CC315  74 06                     JZ 0x005cc31d
005CC317  50                        PUSH EAX
005CC318  E8 43 ED 0D 00            CALL 0x006ab060
LAB_005cc31d:
005CC31D  8B 87 00 22 00 00         MOV EAX,dword ptr [EDI + 0x2200]
005CC323  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CC329  50                        PUSH EAX
005CC32A  51                        PUSH ECX
005CC32B  E8 80 78 0E 00            CALL 0x006b3bb0
005CC330  8B 8F 37 22 00 00         MOV ECX,dword ptr [EDI + 0x2237]
005CC336  C7 87 00 22 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x2200],0xffffffff
005CC340  85 C9                     TEST ECX,ECX
005CC342  74 54                     JZ 0x005cc398
005CC344  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005CC347  33 F6                     XOR ESI,ESI
005CC349  85 C0                     TEST EAX,EAX
005CC34B  76 35                     JBE 0x005cc382
005CC34D  3B F0                     CMP ESI,EAX
005CC34F  73 0D                     JNC 0x005cc35e
LAB_005cc351:
005CC351  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CC354  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005CC357  0F AF C6                  IMUL EAX,ESI
005CC35A  03 C2                     ADD EAX,EDX
005CC35C  EB 02                     JMP 0x005cc360
LAB_005cc35e:
005CC35E  33 C0                     XOR EAX,EAX
LAB_005cc360:
005CC360  85 C0                     TEST EAX,EAX
005CC362  74 10                     JZ 0x005cc374
005CC364  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005CC367  83 C0 08                  ADD EAX,0x8
005CC36A  85 C9                     TEST ECX,ECX
005CC36C  74 06                     JZ 0x005cc374
005CC36E  50                        PUSH EAX
005CC36F  E8 EC EC 0D 00            CALL 0x006ab060
LAB_005cc374:
005CC374  8B 8F 37 22 00 00         MOV ECX,dword ptr [EDI + 0x2237]
005CC37A  46                        INC ESI
005CC37B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005CC37E  3B F0                     CMP ESI,EAX
005CC380  72 CF                     JC 0x005cc351
LAB_005cc382:
005CC382  8B 97 37 22 00 00         MOV EDX,dword ptr [EDI + 0x2237]
005CC388  52                        PUSH EDX
005CC389  E8 82 1D 0E 00            CALL 0x006ae110
005CC38E  C7 87 37 22 00 00 00 00 00 00  MOV dword ptr [EDI + 0x2237],0x0
LAB_005cc398:
005CC398  8B CF                     MOV ECX,EDI
005CC39A  E8 18 7C E3 FF            CALL 0x00403fb7
005CC39F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005CC3A2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CC3A7  5F                        POP EDI
005CC3A8  5E                        POP ESI
005CC3A9  8B E5                     MOV ESP,EBP
005CC3AB  5D                        POP EBP
005CC3AC  C3                        RET
LAB_005cc3ad:
005CC3AD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005CC3B0  68 9C D2 7C 00            PUSH 0x7cd29c
005CC3B5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CC3BA  56                        PUSH ESI
005CC3BB  6A 00                     PUSH 0x0
005CC3BD  6A 65                     PUSH 0x65
005CC3BF  68 58 D2 7C 00            PUSH 0x7cd258
005CC3C4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CC3CA  E8 01 11 0E 00            CALL 0x006ad4d0
005CC3CF  83 C4 18                  ADD ESP,0x18
005CC3D2  85 C0                     TEST EAX,EAX
005CC3D4  74 01                     JZ 0x005cc3d7
005CC3D6  CC                        INT3
LAB_005cc3d7:
005CC3D7  6A 65                     PUSH 0x65
005CC3D9  68 58 D2 7C 00            PUSH 0x7cd258
005CC3DE  6A 00                     PUSH 0x0
005CC3E0  56                        PUSH ESI
005CC3E1  E8 5A 9A 0D 00            CALL 0x006a5e40
005CC3E6  5F                        POP EDI
005CC3E7  5E                        POP ESI
005CC3E8  8B E5                     MOV ESP,EBP
005CC3EA  5D                        POP EBP
005CC3EB  C3                        RET
