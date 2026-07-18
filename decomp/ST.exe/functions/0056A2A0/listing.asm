FUN_0056a2a0:
0056A2A0  55                        PUSH EBP
0056A2A1  8B EC                     MOV EBP,ESP
0056A2A3  83 EC 48                  SUB ESP,0x48
0056A2A6  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056A2AC  53                        PUSH EBX
0056A2AD  56                        PUSH ESI
0056A2AE  57                        PUSH EDI
0056A2AF  85 C0                     TEST EAX,EAX
0056A2B1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056A2B4  0F 84 92 01 00 00         JZ 0x0056a44c
0056A2BA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0056A2BD  85 C0                     TEST EAX,EAX
0056A2BF  0F 84 87 01 00 00         JZ 0x0056a44c
0056A2C5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056A2C8  85 C0                     TEST EAX,EAX
0056A2CA  0F 84 7C 01 00 00         JZ 0x0056a44c
0056A2D0  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056A2D5  8D 55 BC                  LEA EDX,[EBP + -0x44]
0056A2D8  8D 4D B8                  LEA ECX,[EBP + -0x48]
0056A2DB  6A 00                     PUSH 0x0
0056A2DD  52                        PUSH EDX
0056A2DE  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056A2E1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056A2E7  E8 04 35 1C 00            CALL 0x0072d7f0
0056A2EC  83 C4 08                  ADD ESP,0x8
0056A2EF  85 C0                     TEST EAX,EAX
0056A2F1  0F 85 4D 01 00 00         JNZ 0x0056a444
0056A2F7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0056A2FA  6A 00                     PUSH 0x0
0056A2FC  8B 03                     MOV EAX,dword ptr [EBX]
0056A2FE  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0056A301  F7 41 08 00 00 10 00      TEST dword ptr [ECX + 0x8],0x100000
0056A308  74 0F                     JZ 0x0056a319
0056A30A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0056A30D  8B CB                     MOV ECX,EBX
0056A30F  52                        PUSH EDX
0056A310  6A 02                     PUSH 0x2
0056A312  E8 59 78 18 00            CALL 0x006f1b70
0056A317  EB 0F                     JMP 0x0056a328
LAB_0056a319:
0056A319  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0056A31C  6A 00                     PUSH 0x0
0056A31E  50                        PUSH EAX
0056A31F  53                        PUSH EBX
0056A320  E8 DB F9 1A 00            CALL 0x00719d00
0056A325  83 C4 10                  ADD ESP,0x10
LAB_0056a328:
0056A328  8B F8                     MOV EDI,EAX
0056A32A  85 FF                     TEST EDI,EDI
0056A32C  0F 84 FE 00 00 00         JZ 0x0056a430
0056A332  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0056A335  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0056A338  85 C0                     TEST EAX,EAX
0056A33A  7E 61                     JLE 0x0056a39d
0056A33C  8B 8E 07 0E 00 00         MOV ECX,dword ptr [ESI + 0xe07]
0056A342  89 86 FB 0D 00 00         MOV dword ptr [ESI + 0xdfb],EAX
0056A348  89 8E 03 0E 00 00         MOV dword ptr [ESI + 0xe03],ECX
0056A34E  8B 1B                     MOV EBX,dword ptr [EBX]
0056A350  6A 01                     PUSH 0x1
0056A352  6A 00                     PUSH 0x0
0056A354  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
0056A357  6A 00                     PUSH 0x0
0056A359  F7 42 08 00 00 10 00      TEST dword ptr [EDX + 0x8],0x100000
0056A360  74 13                     JZ 0x0056a375
0056A362  A1 0A 73 80 00            MOV EAX,[0x0080730a]
0056A367  50                        PUSH EAX
0056A368  6A 00                     PUSH 0x0
0056A36A  6A 00                     PUSH 0x0
0056A36C  57                        PUSH EDI
0056A36D  53                        PUSH EBX
0056A36E  E8 BD 81 15 00            CALL 0x006c2530
0056A373  EB 11                     JMP 0x0056a386
LAB_0056a375:
0056A375  8B 0D 0A 73 80 00         MOV ECX,dword ptr [0x0080730a]
0056A37B  51                        PUSH ECX
0056A37C  6A 00                     PUSH 0x0
0056A37E  6A 00                     PUSH 0x0
0056A380  57                        PUSH EDI
0056A381  E8 0A 70 15 00            CALL 0x006c1390
LAB_0056a386:
0056A386  89 86 07 0E 00 00         MOV dword ptr [ESI + 0xe07],EAX
0056A38C  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0056A392  89 86 FF 0D 00 00         MOV dword ptr [ESI + 0xdff],EAX
0056A398  E9 84 00 00 00            JMP 0x0056a421
LAB_0056a39d:
0056A39D  8B 86 07 0E 00 00         MOV EAX,dword ptr [ESI + 0xe07]
0056A3A3  8B 1B                     MOV EBX,dword ptr [EBX]
0056A3A5  85 C0                     TEST EAX,EAX
0056A3A7  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
0056A3AA  7D 42                     JGE 0x0056a3ee
0056A3AC  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0056A3AF  6A 01                     PUSH 0x1
0056A3B1  A9 00 00 10 00            TEST EAX,0x100000
0056A3B6  6A 00                     PUSH 0x0
0056A3B8  6A 00                     PUSH 0x0
0056A3BA  74 19                     JZ 0x0056a3d5
0056A3BC  A1 0A 73 80 00            MOV EAX,[0x0080730a]
0056A3C1  50                        PUSH EAX
0056A3C2  6A 48                     PUSH 0x48
0056A3C4  6A 00                     PUSH 0x0
0056A3C6  57                        PUSH EDI
0056A3C7  53                        PUSH EBX
0056A3C8  E8 63 81 15 00            CALL 0x006c2530
0056A3CD  89 86 07 0E 00 00         MOV dword ptr [ESI + 0xe07],EAX
0056A3D3  EB 4C                     JMP 0x0056a421
LAB_0056a3d5:
0056A3D5  8B 0D 0A 73 80 00         MOV ECX,dword ptr [0x0080730a]
0056A3DB  51                        PUSH ECX
0056A3DC  6A 48                     PUSH 0x48
0056A3DE  6A 00                     PUSH 0x0
0056A3E0  57                        PUSH EDI
0056A3E1  E8 AA 6F 15 00            CALL 0x006c1390
0056A3E6  89 86 07 0E 00 00         MOV dword ptr [ESI + 0xe07],EAX
0056A3EC  EB 33                     JMP 0x0056a421
LAB_0056a3ee:
0056A3EE  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0056A3F1  50                        PUSH EAX
0056A3F2  F7 C1 00 00 10 00         TEST ECX,0x100000
0056A3F8  50                        PUSH EAX
0056A3F9  6A 00                     PUSH 0x0
0056A3FB  74 13                     JZ 0x0056a410
0056A3FD  A1 0A 73 80 00            MOV EAX,[0x0080730a]
0056A402  50                        PUSH EAX
0056A403  6A 48                     PUSH 0x48
0056A405  6A 00                     PUSH 0x0
0056A407  57                        PUSH EDI
0056A408  53                        PUSH EBX
0056A409  E8 22 81 15 00            CALL 0x006c2530
0056A40E  EB 11                     JMP 0x0056a421
LAB_0056a410:
0056A410  8B 0D 0A 73 80 00         MOV ECX,dword ptr [0x0080730a]
0056A416  51                        PUSH ECX
0056A417  6A 48                     PUSH 0x48
0056A419  6A 00                     PUSH 0x0
0056A41B  57                        PUSH EDI
0056A41C  E8 6F 6F 15 00            CALL 0x006c1390
LAB_0056a421:
0056A421  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0056A424  85 F6                     TEST ESI,ESI
0056A426  74 08                     JZ 0x0056a430
0056A428  57                        PUSH EDI
0056A429  E8 C2 7F 15 00            CALL 0x006c23f0
0056A42E  89 06                     MOV dword ptr [ESI],EAX
LAB_0056a430:
0056A430  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0056A433  33 C0                     XOR EAX,EAX
0056A435  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056A43B  5F                        POP EDI
0056A43C  5E                        POP ESI
0056A43D  5B                        POP EBX
0056A43E  8B E5                     MOV ESP,EBP
0056A440  5D                        POP EBP
0056A441  C2 10 00                  RET 0x10
LAB_0056a444:
0056A444  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056A447  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0056a44c:
0056A44C  5F                        POP EDI
0056A44D  5E                        POP ESI
0056A44E  83 C8 FF                  OR EAX,0xffffffff
0056A451  5B                        POP EBX
0056A452  8B E5                     MOV ESP,EBP
0056A454  5D                        POP EBP
0056A455  C2 10 00                  RET 0x10
