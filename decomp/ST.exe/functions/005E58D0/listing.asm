MTestTy::InitMTest:
005E58D0  55                        PUSH EBP
005E58D1  8B EC                     MOV EBP,ESP
005E58D3  81 EC 48 04 00 00         SUB ESP,0x448
005E58D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E58DE  56                        PUSH ESI
005E58DF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E58E2  57                        PUSH EDI
005E58E3  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E58E6  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E58E9  6A 00                     PUSH 0x0
005E58EB  52                        PUSH EDX
005E58EC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E58EF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E58F5  E8 F6 7E 14 00            CALL 0x0072d7f0
005E58FA  8B F0                     MOV ESI,EAX
005E58FC  83 C4 08                  ADD ESP,0x8
005E58FF  85 F6                     TEST ESI,ESI
005E5901  0F 85 CA 01 00 00         JNZ 0x005e5ad1
005E5907  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005E590C  85 C0                     TEST EAX,EAX
005E590E  74 2A                     JZ 0x005e593a
005E5910  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005E5916  85 C9                     TEST ECX,ECX
005E5918  74 14                     JZ 0x005e592e
005E591A  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E591D  83 F9 FF                  CMP ECX,-0x1
005E5920  74 18                     JZ 0x005e593a
005E5922  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005E5925  51                        PUSH ECX
005E5926  50                        PUSH EAX
005E5927  E8 C4 E1 0C 00            CALL 0x006b3af0
005E592C  EB 0C                     JMP 0x005e593a
LAB_005e592e:
005E592E  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005E5934  51                        PUSH ECX
005E5935  E8 D6 31 0D 00            CALL 0x006b8b10
LAB_005e593a:
005E593A  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005E5940  6A 01                     PUSH 0x1
005E5942  6A 00                     PUSH 0x0
005E5944  68 9C C7 7C 00            PUSH 0x7cc79c
005E5949  52                        PUSH EDX
005E594A  E8 A1 50 12 00            CALL 0x0070a9f0
005E594F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E5952  83 C4 10                  ADD ESP,0x10
005E5955  8D 8D B8 FB FF FF         LEA ECX,[EBP + 0xfffffbb8]
005E595B  6A 00                     PUSH 0x0
005E595D  51                        PUSH ECX
005E595E  50                        PUSH EAX
005E595F  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
005E5962  E8 F9 69 0D 00            CALL 0x006bc360
005E5967  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E596D  8D 8D B8 FB FF FF         LEA ECX,[EBP + 0xfffffbb8]
005E5973  C7 82 40 01 00 00 1F 00 00 00  MOV dword ptr [EDX + 0x140],0x1f
005E597D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E5982  05 44 01 00 00            ADD EAX,0x144
005E5987  50                        PUSH EAX
005E5988  6A 15                     PUSH 0x15
005E598A  68 8B 00 00 00            PUSH 0x8b
005E598F  68 00 01 00 00            PUSH 0x100
005E5994  6A 00                     PUSH 0x0
005E5996  51                        PUSH ECX
005E5997  E8 E4 2D 13 00            CALL 0x00718780
005E599C  8D 56 61                  LEA EDX,[ESI + 0x61]
005E599F  83 C4 18                  ADD ESP,0x18
005E59A2  B9 08 00 00 00            MOV ECX,0x8
005E59A7  33 C0                     XOR EAX,EAX
005E59A9  8B FA                     MOV EDI,EDX
005E59AB  52                        PUSH EDX
005E59AC  F3 AB                     STOSD.REP ES:EDI
005E59AE  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E59B1  6A 01                     PUSH 0x1
005E59B3  6A 03                     PUSH 0x3
005E59B5  8B CE                     MOV ECX,ESI
005E59B7  C7 46 71 13 00 00 00      MOV dword ptr [ESI + 0x71],0x13
005E59BE  89 46 75                  MOV dword ptr [ESI + 0x75],EAX
005E59C1  E8 3A 06 10 00            CALL 0x006e6000
005E59C6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E59CC  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005E59D2  85 C9                     TEST ECX,ECX
005E59D4  74 1C                     JZ 0x005e59f2
005E59D6  6A 01                     PUSH 0x1
005E59D8  6A 00                     PUSH 0x0
005E59DA  6A 00                     PUSH 0x0
005E59DC  E8 C4 C5 E1 FF            CALL 0x00401fa5
005E59E1  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E59E7  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005E59ED  E8 3C EC E1 FF            CALL 0x0040462e
LAB_005e59f2:
005E59F2  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E59F7  6A 00                     PUSH 0x0
005E59F9  6A 01                     PUSH 0x1
005E59FB  50                        PUSH EAX
005E59FC  E8 42 C3 E1 FF            CALL 0x00401d43
005E5A01  83 C4 0C                  ADD ESP,0xc
005E5A04  8B CE                     MOV ECX,ESI
005E5A06  E8 71 E4 E1 FF            CALL 0x00403e7c
005E5A0B  8B 4E 5D                  MOV ECX,dword ptr [ESI + 0x5d]
005E5A0E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E5A14  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E5A19  6A 00                     PUSH 0x0
005E5A1B  6A 02                     PUSH 0x2
005E5A1D  6A 0A                     PUSH 0xa
005E5A1F  51                        PUSH ECX
005E5A20  52                        PUSH EDX
005E5A21  50                        PUSH EAX
005E5A22  E8 63 EA E1 FF            CALL 0x0040448a
005E5A27  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005E5A2D  83 C4 18                  ADD ESP,0x18
005E5A30  85 FF                     TEST EDI,EDI
005E5A32  74 4D                     JZ 0x005e5a81
005E5A34  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005E5A3A  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005E5A40  51                        PUSH ECX
005E5A41  52                        PUSH EDX
005E5A42  6A 00                     PUSH 0x0
005E5A44  8B CF                     MOV ECX,EDI
005E5A46  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005E5A4D  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005E5A56  E8 23 F6 E1 FF            CALL 0x0040507e
005E5A5B  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005E5A61  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005E5A67  50                        PUSH EAX
005E5A68  51                        PUSH ECX
005E5A69  8B CF                     MOV ECX,EDI
005E5A6B  E8 AE C9 E1 FF            CALL 0x0040241e
005E5A70  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005E5A77  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005e5a81:
005E5A81  6A 00                     PUSH 0x0
005E5A83  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005E5A86  6A 00                     PUSH 0x0
005E5A88  6A 00                     PUSH 0x0
005E5A8A  6A 00                     PUSH 0x0
005E5A8C  6A 00                     PUSH 0x0
005E5A8E  6A 00                     PUSH 0x0
005E5A90  6A 01                     PUSH 0x1
005E5A92  6A 02                     PUSH 0x2
005E5A94  6A 64                     PUSH 0x64
005E5A96  6A 02                     PUSH 0x2
005E5A98  52                        PUSH EDX
005E5A99  6A 01                     PUSH 0x1
005E5A9B  E8 1F D3 E1 FF            CALL 0x00402dbf
005E5AA0  6A 00                     PUSH 0x0
005E5AA2  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E5AA5  6A 00                     PUSH 0x0
005E5AA7  6A 00                     PUSH 0x0
005E5AA9  6A 00                     PUSH 0x0
005E5AAB  6A 00                     PUSH 0x0
005E5AAD  6A 00                     PUSH 0x0
005E5AAF  6A 1C                     PUSH 0x1c
005E5AB1  6A 02                     PUSH 0x2
005E5AB3  6A 62                     PUSH 0x62
005E5AB5  6A 02                     PUSH 0x2
005E5AB7  50                        PUSH EAX
005E5AB8  6A 01                     PUSH 0x1
005E5ABA  E8 00 D3 E1 FF            CALL 0x00402dbf
005E5ABF  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005E5AC2  83 C4 60                  ADD ESP,0x60
005E5AC5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E5ACB  5F                        POP EDI
005E5ACC  5E                        POP ESI
005E5ACD  8B E5                     MOV ESP,EBP
005E5ACF  5D                        POP EBP
005E5AD0  C3                        RET
LAB_005e5ad1:
005E5AD1  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E5AD4  68 E4 DC 7C 00            PUSH 0x7cdce4
005E5AD9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E5ADE  56                        PUSH ESI
005E5ADF  6A 00                     PUSH 0x0
005E5AE1  6A 31                     PUSH 0x31
005E5AE3  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5AE8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E5AEE  E8 DD 79 0C 00            CALL 0x006ad4d0
005E5AF3  83 C4 18                  ADD ESP,0x18
005E5AF6  85 C0                     TEST EAX,EAX
005E5AF8  74 01                     JZ 0x005e5afb
005E5AFA  CC                        INT3
LAB_005e5afb:
005E5AFB  6A 31                     PUSH 0x31
005E5AFD  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5B02  6A 00                     PUSH 0x0
005E5B04  56                        PUSH ESI
005E5B05  E8 36 03 0C 00            CALL 0x006a5e40
005E5B0A  5F                        POP EDI
005E5B0B  5E                        POP ESI
005E5B0C  8B E5                     MOV ESP,EBP
005E5B0E  5D                        POP EBP
005E5B0F  C3                        RET
