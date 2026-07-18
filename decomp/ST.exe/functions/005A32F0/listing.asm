FSGSTy::CreateGame:
005A32F0  55                        PUSH EBP
005A32F1  8B EC                     MOV EBP,ESP
005A32F3  83 EC 48                  SUB ESP,0x48
005A32F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A32FB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A32FE  56                        PUSH ESI
005A32FF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005A3302  8D 4D B8                  LEA ECX,[EBP + -0x48]
005A3305  6A 00                     PUSH 0x0
005A3307  52                        PUSH EDX
005A3308  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005A330B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A3311  E8 DA A4 18 00            CALL 0x0072d7f0
005A3316  8B F0                     MOV ESI,EAX
005A3318  83 C4 08                  ADD ESP,0x8
005A331B  85 F6                     TEST ESI,ESI
005A331D  0F 85 53 01 00 00         JNZ 0x005a3476
005A3323  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A3329  85 F6                     TEST ESI,ESI
005A332B  74 4D                     JZ 0x005a337a
005A332D  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A3333  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A3339  50                        PUSH EAX
005A333A  51                        PUSH ECX
005A333B  6A 00                     PUSH 0x0
005A333D  8B CE                     MOV ECX,ESI
005A333F  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A3346  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A334F  E8 2A 1D E6 FF            CALL 0x0040507e
005A3354  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A335A  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A3360  52                        PUSH EDX
005A3361  50                        PUSH EAX
005A3362  8B CE                     MOV ECX,ESI
005A3364  E8 B5 F0 E5 FF            CALL 0x0040241e
005A3369  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A3370  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a337a:
005A337A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A337D  85 C0                     TEST EAX,EAX
005A337F  0F 85 B8 00 00 00         JNZ 0x005a343d
005A3385  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005A338B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A338E  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
005A3391  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005A3398  89 15 7F 87 80 00         MOV dword ptr [0x0080877f],EDX
005A339E  C6 86 61 1A 00 00 00      MOV byte ptr [ESI + 0x1a61],0x0
005A33A5  C6 05 A0 67 80 00 01      MOV byte ptr [0x008067a0],0x1
005A33AC  8B 86 C2 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ec2]
005A33B2  3D 01 05 00 00            CMP EAX,0x501
005A33B7  77 2B                     JA 0x005a33e4
005A33B9  74 20                     JZ 0x005a33db
005A33BB  3D 00 02 00 00            CMP EAX,0x200
005A33C0  74 10                     JZ 0x005a33d2
005A33C2  3D 00 04 00 00            CMP EAX,0x400
005A33C7  75 22                     JNZ 0x005a33eb
005A33C9  C6 05 00 34 80 00 15      MOV byte ptr [0x00803400],0x15
005A33D0  EB 29                     JMP 0x005a33fb
LAB_005a33d2:
005A33D2  C6 05 00 34 80 00 14      MOV byte ptr [0x00803400],0x14
005A33D9  EB 20                     JMP 0x005a33fb
LAB_005a33db:
005A33DB  C6 05 00 34 80 00 05      MOV byte ptr [0x00803400],0x5
005A33E2  EB 17                     JMP 0x005a33fb
LAB_005a33e4:
005A33E4  3D 02 05 00 00            CMP EAX,0x502
005A33E9  74 09                     JZ 0x005a33f4
LAB_005a33eb:
005A33EB  C6 05 00 34 80 00 04      MOV byte ptr [0x00803400],0x4
005A33F2  EB 07                     JMP 0x005a33fb
LAB_005a33f4:
005A33F4  C6 05 00 34 80 00 0C      MOV byte ptr [0x00803400],0xc
LAB_005a33fb:
005A33FB  6A 00                     PUSH 0x0
005A33FD  6A 13                     PUSH 0x13
005A33FF  68 1F 61 00 00            PUSH 0x611f
005A3404  8B CE                     MOV ECX,ESI
005A3406  E8 B5 02 E6 FF            CALL 0x004036c0
005A340B  8B 06                     MOV EAX,dword ptr [ESI]
005A340D  8B CE                     MOV ECX,ESI
005A340F  FF 50 08                  CALL dword ptr [EAX + 0x8]
005A3412  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005A3418  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A341E  85 C9                     TEST ECX,ECX
005A3420  74 44                     JZ 0x005a3466
005A3422  6A 01                     PUSH 0x1
005A3424  6A 00                     PUSH 0x0
005A3426  6A 01                     PUSH 0x1
005A3428  E8 78 EB E5 FF            CALL 0x00401fa5
005A342D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005A3430  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A3436  5E                        POP ESI
005A3437  8B E5                     MOV ESP,EBP
005A3439  5D                        POP EBP
005A343A  C2 04 00                  RET 0x4
LAB_005a343d:
005A343D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A3440  8B 82 5B 1A 00 00         MOV EAX,dword ptr [EDX + 0x1a5b]
005A3446  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A344C  85 C9                     TEST ECX,ECX
005A344E  74 16                     JZ 0x005a3466
005A3450  6A 00                     PUSH 0x0
005A3452  6A 00                     PUSH 0x0
005A3454  6A 00                     PUSH 0x0
005A3456  6A 00                     PUSH 0x0
005A3458  6A 00                     PUSH 0x0
005A345A  6A 00                     PUSH 0x0
005A345C  68 94 25 00 00            PUSH 0x2594
005A3461  E8 42 0B E6 FF            CALL 0x00403fa8
LAB_005a3466:
005A3466  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005A3469  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A346F  5E                        POP ESI
005A3470  8B E5                     MOV ESP,EBP
005A3472  5D                        POP EBP
005A3473  C2 04 00                  RET 0x4
LAB_005a3476:
005A3476  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005A3479  68 54 C5 7C 00            PUSH 0x7cc554
005A347E  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A3483  56                        PUSH ESI
005A3484  6A 00                     PUSH 0x0
005A3486  68 B9 0A 00 00            PUSH 0xab9
005A348B  68 70 BF 7C 00            PUSH 0x7cbf70
005A3490  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A3496  E8 35 A0 10 00            CALL 0x006ad4d0
005A349B  83 C4 18                  ADD ESP,0x18
005A349E  85 C0                     TEST EAX,EAX
005A34A0  74 01                     JZ 0x005a34a3
005A34A2  CC                        INT3
LAB_005a34a3:
005A34A3  68 B9 0A 00 00            PUSH 0xab9
005A34A8  68 70 BF 7C 00            PUSH 0x7cbf70
005A34AD  6A 00                     PUSH 0x0
005A34AF  56                        PUSH ESI
005A34B0  E8 8B 29 10 00            CALL 0x006a5e40
005A34B5  5E                        POP ESI
005A34B6  8B E5                     MOV ESP,EBP
005A34B8  5D                        POP EBP
005A34B9  C2 04 00                  RET 0x4
