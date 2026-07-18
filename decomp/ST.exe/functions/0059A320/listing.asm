FSGSTy::PaintLogPsw:
0059A320  55                        PUSH EBP
0059A321  8B EC                     MOV EBP,ESP
0059A323  83 EC 48                  SUB ESP,0x48
0059A326  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059A32B  53                        PUSH EBX
0059A32C  56                        PUSH ESI
0059A32D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059A330  57                        PUSH EDI
0059A331  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059A334  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059A337  6A 00                     PUSH 0x0
0059A339  52                        PUSH EDX
0059A33A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059A33D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059A343  E8 A8 34 19 00            CALL 0x0072d7f0
0059A348  8B F0                     MOV ESI,EAX
0059A34A  83 C4 08                  ADD ESP,0x8
0059A34D  85 F6                     TEST ESI,ESI
0059A34F  0F 85 00 02 00 00         JNZ 0x0059a555
0059A355  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059A358  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A35E  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0059A361  85 DB                     TEST EBX,EBX
0059A363  75 18                     JNZ 0x0059a37d
0059A365  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0059A369  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0059A36D  83 C3 1F                  ADD EBX,0x1f
0059A370  C1 EB 03                  SHR EBX,0x3
0059A373  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0059A379  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0059a37d:
0059A37D  50                        PUSH EAX
0059A37E  E8 1D AC 11 00            CALL 0x006b4fa0
0059A383  8B CB                     MOV ECX,EBX
0059A385  8B F8                     MOV EDI,EAX
0059A387  8B D1                     MOV EDX,ECX
0059A389  83 C8 FF                  OR EAX,0xffffffff
0059A38C  C1 E9 02                  SHR ECX,0x2
0059A38F  F3 AB                     STOSD.REP ES:EDI
0059A391  8B CA                     MOV ECX,EDX
0059A393  6A 14                     PUSH 0x14
0059A395  83 E1 03                  AND ECX,0x3
0059A398  68 86 01 00 00            PUSH 0x186
0059A39D  F3 AA                     STOSB.REP ES:EDI
0059A39F  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A3A5  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A3AB  6A 2A                     PUSH 0x2a
0059A3AD  6A 19                     PUSH 0x19
0059A3AF  6A 00                     PUSH 0x0
0059A3B1  50                        PUSH EAX
0059A3B2  E8 D9 66 17 00            CALL 0x00710a90
0059A3B7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A3BD  6A 02                     PUSH 0x2
0059A3BF  6A FF                     PUSH -0x1
0059A3C1  6A 00                     PUSH 0x0
0059A3C3  51                        PUSH ECX
0059A3C4  68 4F 25 00 00            PUSH 0x254f
0059A3C9  E8 72 5D 11 00            CALL 0x006b0140
0059A3CE  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A3D4  50                        PUSH EAX
0059A3D5  E8 E6 75 17 00            CALL 0x007119c0
0059A3DA  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A3E0  6A 0D                     PUSH 0xd
0059A3E2  6A 0F                     PUSH 0xf
0059A3E4  6A 1B                     PUSH 0x1b
0059A3E6  68 88 01 00 00            PUSH 0x188
0059A3EB  6A 3D                     PUSH 0x3d
0059A3ED  6A 18                     PUSH 0x18
0059A3EF  6A 00                     PUSH 0x0
0059A3F1  52                        PUSH EDX
0059A3F2  E8 E9 BA 11 00            CALL 0x006b5ee0
0059A3F7  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A3FD  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A403  6A 14                     PUSH 0x14
0059A405  68 B4 00 00 00            PUSH 0xb4
0059A40A  6A 61                     PUSH 0x61
0059A40C  6A 19                     PUSH 0x19
0059A40E  6A 00                     PUSH 0x0
0059A410  50                        PUSH EAX
0059A411  E8 7A 66 17 00            CALL 0x00710a90
0059A416  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A41C  6A 02                     PUSH 0x2
0059A41E  6A FF                     PUSH -0x1
0059A420  6A 00                     PUSH 0x0
0059A422  51                        PUSH ECX
0059A423  68 56 25 00 00            PUSH 0x2556
0059A428  E8 13 5D 11 00            CALL 0x006b0140
0059A42D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A433  50                        PUSH EAX
0059A434  E8 87 75 17 00            CALL 0x007119c0
0059A439  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A43F  6A 0D                     PUSH 0xd
0059A441  6A 0F                     PUSH 0xf
0059A443  6A 16                     PUSH 0x16
0059A445  68 B6 00 00 00            PUSH 0xb6
0059A44A  6A 74                     PUSH 0x74
0059A44C  6A 18                     PUSH 0x18
0059A44E  6A 00                     PUSH 0x0
0059A450  52                        PUSH EDX
0059A451  E8 8A BA 11 00            CALL 0x006b5ee0
0059A456  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A45C  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A462  6A 14                     PUSH 0x14
0059A464  68 B4 00 00 00            PUSH 0xb4
0059A469  68 89 00 00 00            PUSH 0x89
0059A46E  6A 19                     PUSH 0x19
0059A470  6A 00                     PUSH 0x0
0059A472  50                        PUSH EAX
0059A473  E8 18 66 17 00            CALL 0x00710a90
0059A478  6A 02                     PUSH 0x2
0059A47A  6A FF                     PUSH -0x1
0059A47C  6A 00                     PUSH 0x0
0059A47E  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A484  51                        PUSH ECX
0059A485  68 55 25 00 00            PUSH 0x2555
0059A48A  E8 B1 5C 11 00            CALL 0x006b0140
0059A48F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A495  50                        PUSH EAX
0059A496  E8 25 75 17 00            CALL 0x007119c0
0059A49B  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A4A1  6A 0D                     PUSH 0xd
0059A4A3  6A 0F                     PUSH 0xf
0059A4A5  6A 16                     PUSH 0x16
0059A4A7  68 B6 00 00 00            PUSH 0xb6
0059A4AC  68 9C 00 00 00            PUSH 0x9c
0059A4B1  6A 18                     PUSH 0x18
0059A4B3  6A 00                     PUSH 0x0
0059A4B5  52                        PUSH EDX
0059A4B6  E8 25 BA 11 00            CALL 0x006b5ee0
0059A4BB  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A4C1  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A4C7  6A 14                     PUSH 0x14
0059A4C9  68 B4 00 00 00            PUSH 0xb4
0059A4CE  68 B1 00 00 00            PUSH 0xb1
0059A4D3  6A 19                     PUSH 0x19
0059A4D5  6A 00                     PUSH 0x0
0059A4D7  50                        PUSH EAX
0059A4D8  E8 B3 65 17 00            CALL 0x00710a90
0059A4DD  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A4E3  6A 02                     PUSH 0x2
0059A4E5  6A FF                     PUSH -0x1
0059A4E7  6A 00                     PUSH 0x0
0059A4E9  51                        PUSH ECX
0059A4EA  68 54 25 00 00            PUSH 0x2554
0059A4EF  E8 4C 5C 11 00            CALL 0x006b0140
0059A4F4  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A4FA  50                        PUSH EAX
0059A4FB  E8 C0 74 17 00            CALL 0x007119c0
0059A500  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A506  6A 0D                     PUSH 0xd
0059A508  6A 0F                     PUSH 0xf
0059A50A  6A 16                     PUSH 0x16
0059A50C  68 B6 00 00 00            PUSH 0xb6
0059A511  68 C4 00 00 00            PUSH 0xc4
0059A516  6A 18                     PUSH 0x18
0059A518  6A 00                     PUSH 0x0
0059A51A  52                        PUSH EDX
0059A51B  E8 C0 B9 11 00            CALL 0x006b5ee0
0059A520  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
0059A526  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059A52C  50                        PUSH EAX
0059A52D  51                        PUSH ECX
0059A52E  E8 FD 8E 11 00            CALL 0x006b3430
0059A533  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
0059A539  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059A53E  52                        PUSH EDX
0059A53F  50                        PUSH EAX
0059A540  E8 8B 90 11 00            CALL 0x006b35d0
0059A545  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059A548  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059A54E  5F                        POP EDI
0059A54F  5E                        POP ESI
0059A550  5B                        POP EBX
0059A551  8B E5                     MOV ESP,EBP
0059A553  5D                        POP EBP
0059A554  C3                        RET
LAB_0059a555:
0059A555  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059A558  68 18 C2 7C 00            PUSH 0x7cc218
0059A55D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059A562  56                        PUSH ESI
0059A563  6A 00                     PUSH 0x0
0059A565  68 01 04 00 00            PUSH 0x401
0059A56A  68 70 BF 7C 00            PUSH 0x7cbf70
0059A56F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059A575  E8 56 2F 11 00            CALL 0x006ad4d0
0059A57A  83 C4 18                  ADD ESP,0x18
0059A57D  85 C0                     TEST EAX,EAX
0059A57F  74 01                     JZ 0x0059a582
0059A581  CC                        INT3
LAB_0059a582:
0059A582  68 01 04 00 00            PUSH 0x401
0059A587  68 70 BF 7C 00            PUSH 0x7cbf70
0059A58C  6A 00                     PUSH 0x0
0059A58E  56                        PUSH ESI
0059A58F  E8 AC B8 10 00            CALL 0x006a5e40
0059A594  5F                        POP EDI
0059A595  5E                        POP ESI
0059A596  5B                        POP EBX
0059A597  8B E5                     MOV ESP,EBP
0059A599  5D                        POP EBP
0059A59A  C3                        RET
