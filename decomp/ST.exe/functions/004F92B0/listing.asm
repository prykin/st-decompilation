FUN_004f92b0:
004F92B0  55                        PUSH EBP
004F92B1  8B EC                     MOV EBP,ESP
004F92B3  83 EC 4C                  SUB ESP,0x4c
004F92B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F92BB  53                        PUSH EBX
004F92BC  56                        PUSH ESI
004F92BD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F92C0  57                        PUSH EDI
004F92C1  8D 55 B8                  LEA EDX,[EBP + -0x48]
004F92C4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F92C7  6A 00                     PUSH 0x0
004F92C9  52                        PUSH EDX
004F92CA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004F92CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F92D3  E8 18 45 23 00            CALL 0x0072d7f0
004F92D8  8B F0                     MOV ESI,EAX
004F92DA  83 C4 08                  ADD ESP,0x8
004F92DD  85 F6                     TEST ESI,ESI
004F92DF  0F 85 EB 00 00 00         JNZ 0x004f93d0
004F92E5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004F92E8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004F92EB  6A 01                     PUSH 0x1
004F92ED  50                        PUSH EAX
004F92EE  8B 0B                     MOV ECX,dword ptr [EBX]
004F92F0  6A FF                     PUSH -0x1
004F92F2  50                        PUSH EAX
004F92F3  8B 86 04 01 00 00         MOV EAX,dword ptr [ESI + 0x104]
004F92F9  50                        PUSH EAX
004F92FA  68 EC 21 7C 00            PUSH 0x7c21ec
004F92FF  68 D8 21 7C 00            PUSH 0x7c21d8
004F9304  51                        PUSH ECX
004F9305  8B 8E D0 01 00 00         MOV ECX,dword ptr [ESI + 0x1d0]
004F930B  E8 D0 93 21 00            CALL 0x007126e0
004F9310  8B F8                     MOV EDI,EAX
004F9312  8B 03                     MOV EAX,dword ptr [EBX]
004F9314  85 C0                     TEST EAX,EAX
004F9316  74 06                     JZ 0x004f931e
004F9318  50                        PUSH EAX
004F9319  E8 52 C2 1B 00            CALL 0x006b5570
LAB_004f931e:
004F931E  85 FF                     TEST EDI,EDI
004F9320  74 04                     JZ 0x004f9326
004F9322  89 3B                     MOV dword ptr [EBX],EDI
004F9324  EB 0D                     JMP 0x004f9333
LAB_004f9326:
004F9326  6A 01                     PUSH 0x1
004F9328  6A 01                     PUSH 0x1
004F932A  6A 00                     PUSH 0x0
004F932C  E8 BF C1 1B 00            CALL 0x006b54f0
004F9331  89 03                     MOV dword ptr [EBX],EAX
LAB_004f9333:
004F9333  8B 86 B0 01 00 00         MOV EAX,dword ptr [ESI + 0x1b0]
004F9339  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004F933C  85 C9                     TEST ECX,ECX
004F933E  75 18                     JNZ 0x004f9358
004F9340  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
004F9344  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
004F9348  83 C1 1F                  ADD ECX,0x1f
004F934B  C1 E9 03                  SHR ECX,0x3
004F934E  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
004F9354  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_004f9358:
004F9358  50                        PUSH EAX
004F9359  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F935C  E8 3F BC 1B 00            CALL 0x006b4fa0
004F9361  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F9364  8B F8                     MOV EDI,EAX
004F9366  8B D1                     MOV EDX,ECX
004F9368  83 C8 FF                  OR EAX,0xffffffff
004F936B  C1 E9 02                  SHR ECX,0x2
004F936E  F3 AB                     STOSD.REP ES:EDI
004F9370  8B CA                     MOV ECX,EDX
004F9372  6A 00                     PUSH 0x0
004F9374  83 E1 03                  AND ECX,0x3
004F9377  6A 00                     PUSH 0x0
004F9379  F3 AA                     STOSB.REP ES:EDI
004F937B  8B 03                     MOV EAX,dword ptr [EBX]
004F937D  8B 8E D0 01 00 00         MOV ECX,dword ptr [ESI + 0x1d0]
004F9383  6A 00                     PUSH 0x0
004F9385  6A FF                     PUSH -0x1
004F9387  6A 00                     PUSH 0x0
004F9389  50                        PUSH EAX
004F938A  E8 E1 8B 21 00            CALL 0x00711f70
004F938F  8B 0B                     MOV ECX,dword ptr [EBX]
004F9391  51                        PUSH ECX
004F9392  E8 D9 C1 1B 00            CALL 0x006b5570
004F9397  8B 96 A0 09 00 00         MOV EDX,dword ptr [ESI + 0x9a0]
004F939D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F93A0  8B 8E 78 01 00 00         MOV ECX,dword ptr [ESI + 0x178]
004F93A6  89 96 43 02 00 00         MOV dword ptr [ESI + 0x243],EDX
004F93AC  89 86 47 02 00 00         MOV dword ptr [ESI + 0x247],EAX
004F93B2  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F93B8  51                        PUSH ECX
004F93B9  52                        PUSH EDX
004F93BA  E8 71 A0 1B 00            CALL 0x006b3430
004F93BF  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004F93C2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F93C7  5F                        POP EDI
004F93C8  5E                        POP ESI
004F93C9  5B                        POP EBX
004F93CA  8B E5                     MOV ESP,EBP
004F93CC  5D                        POP EBP
004F93CD  C2 08 00                  RET 0x8
LAB_004f93d0:
004F93D0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004F93D3  68 B0 21 7C 00            PUSH 0x7c21b0
004F93D8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F93DD  56                        PUSH ESI
004F93DE  6A 00                     PUSH 0x0
004F93E0  68 2F 03 00 00            PUSH 0x32f
004F93E5  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F93EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F93F0  E8 DB 40 1B 00            CALL 0x006ad4d0
004F93F5  83 C4 18                  ADD ESP,0x18
004F93F8  85 C0                     TEST EAX,EAX
004F93FA  74 01                     JZ 0x004f93fd
004F93FC  CC                        INT3
LAB_004f93fd:
004F93FD  68 2F 03 00 00            PUSH 0x32f
004F9402  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9407  6A 00                     PUSH 0x0
004F9409  56                        PUSH ESI
004F940A  E8 31 CA 1A 00            CALL 0x006a5e40
004F940F  5F                        POP EDI
004F9410  5E                        POP ESI
004F9411  5B                        POP EBX
004F9412  8B E5                     MOV ESP,EBP
004F9414  5D                        POP EBP
004F9415  C2 08 00                  RET 0x8
