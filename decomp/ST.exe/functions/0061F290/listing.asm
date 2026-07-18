FUN_0061f290:
0061F290  55                        PUSH EBP
0061F291  8B EC                     MOV EBP,ESP
0061F293  83 EC 1C                  SUB ESP,0x1c
0061F296  8B 81 A3 00 00 00         MOV EAX,dword ptr [ECX + 0xa3]
0061F29C  33 D2                     XOR EDX,EDX
0061F29E  3B C2                     CMP EAX,EDX
0061F2A0  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0061F2A3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0061F2A6  75 08                     JNZ 0x0061f2b0
0061F2A8  33 C0                     XOR EAX,EAX
0061F2AA  8B E5                     MOV ESP,EBP
0061F2AC  5D                        POP EBP
0061F2AD  C2 04 00                  RET 0x4
LAB_0061f2b0:
0061F2B0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0061F2B3  3B C2                     CMP EAX,EDX
0061F2B5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0061F2B8  0F 84 D7 01 00 00         JZ 0x0061f495
0061F2BE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061F2C1  0F 8E CE 01 00 00         JLE 0x0061f495
0061F2C7  53                        PUSH EBX
0061F2C8  56                        PUSH ESI
0061F2C9  57                        PUSH EDI
0061F2CA  EB 03                     JMP 0x0061f2cf
LAB_0061f2cc:
0061F2CC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0061f2cf:
0061F2CF  8B 81 A3 00 00 00         MOV EAX,dword ptr [ECX + 0xa3]
0061F2D5  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
0061F2D8  73 0B                     JNC 0x0061f2e5
0061F2DA  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0061F2DD  0F AF F2                  IMUL ESI,EDX
0061F2E0  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0061F2E3  EB 02                     JMP 0x0061f2e7
LAB_0061f2e5:
0061F2E5  33 F6                     XOR ESI,ESI
LAB_0061f2e7:
0061F2E7  8B 46 26                  MOV EAX,dword ptr [ESI + 0x26]
0061F2EA  85 C0                     TEST EAX,EAX
0061F2EC  0F 8C 8E 01 00 00         JL 0x0061f480
0061F2F2  83 3E 00                  CMP dword ptr [ESI],0x0
0061F2F5  0F 8C 85 01 00 00         JL 0x0061f480
0061F2FB  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0061F301  8B 5E 2A                  MOV EBX,dword ptr [ESI + 0x2a]
0061F304  8B 79 5F                  MOV EDI,dword ptr [ECX + 0x5f]
0061F307  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0061F30D  2B D3                     SUB EDX,EBX
0061F30F  3B D7                     CMP EDX,EDI
0061F311  7C 1E                     JL 0x0061f331
0061F313  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F319  50                        PUSH EAX
0061F31A  E8 81 98 0C 00            CALL 0x006e8ba0
0061F31F  C7 46 26 FF FF FF FF      MOV dword ptr [ESI + 0x26],0xffffffff
0061F326  C7 06 FF FF FF FF         MOV dword ptr [ESI],0xffffffff
0061F32C  E9 4F 01 00 00            JMP 0x0061f480
LAB_0061f331:
0061F331  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061F334  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0061F33B  85 C0                     TEST EAX,EAX
0061F33D  0F 84 3D 01 00 00         JZ 0x0061f480
0061F343  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0061F349  85 FF                     TEST EDI,EDI
0061F34B  0F 84 2F 01 00 00         JZ 0x0061f480
0061F351  D9 46 0C                  FLD float ptr [ESI + 0xc]
0061F354  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061F35A  D9 46 0C                  FLD float ptr [ESI + 0xc]
0061F35D  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
0061F363  DF E0                     FNSTSW AX
0061F365  F6 C4 01                  TEST AH,0x1
0061F368  75 0A                     JNZ 0x0061f374
0061F36A  E8 19 EF 10 00            CALL 0x0072e288
0061F36F  0F BF D8                  MOVSX EBX,AX
0061F372  EB 09                     JMP 0x0061f37d
LAB_0061f374:
0061F374  E8 0F EF 10 00            CALL 0x0072e288
0061F379  0F BF D8                  MOVSX EBX,AX
0061F37C  4B                        DEC EBX
LAB_0061f37d:
0061F37D  D9 46 08                  FLD float ptr [ESI + 0x8]
0061F380  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061F386  D9 46 08                  FLD float ptr [ESI + 0x8]
0061F389  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061F38F  DF E0                     FNSTSW AX
0061F391  F6 C4 01                  TEST AH,0x1
0061F394  75 0A                     JNZ 0x0061f3a0
0061F396  E8 ED EE 10 00            CALL 0x0072e288
0061F39B  0F BF C0                  MOVSX EAX,AX
0061F39E  EB 09                     JMP 0x0061f3a9
LAB_0061f3a0:
0061F3A0  E8 E3 EE 10 00            CALL 0x0072e288
0061F3A5  0F BF C0                  MOVSX EAX,AX
0061F3A8  48                        DEC EAX
LAB_0061f3a9:
0061F3A9  D9 46 04                  FLD float ptr [ESI + 0x4]
0061F3AC  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0061F3B2  D9 46 04                  FLD float ptr [ESI + 0x4]
0061F3B5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061F3B8  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061F3BE  DF E0                     FNSTSW AX
0061F3C0  F6 C4 01                  TEST AH,0x1
0061F3C3  75 0A                     JNZ 0x0061f3cf
0061F3C5  E8 BE EE 10 00            CALL 0x0072e288
0061F3CA  0F BF C0                  MOVSX EAX,AX
0061F3CD  EB 09                     JMP 0x0061f3d8
LAB_0061f3cf:
0061F3CF  E8 B4 EE 10 00            CALL 0x0072e288
0061F3D4  0F BF C0                  MOVSX EAX,AX
0061F3D7  48                        DEC EAX
LAB_0061f3d8:
0061F3D8  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0061F3DF  74 68                     JZ 0x0061f449
0061F3E1  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0061F3E7  85 C9                     TEST ECX,ECX
0061F3E9  74 5E                     JZ 0x0061f449
0061F3EB  8D 4D E8                  LEA ECX,[EBP + -0x18]
0061F3EE  8D 55 EC                  LEA EDX,[EBP + -0x14]
0061F3F1  51                        PUSH ECX
0061F3F2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061F3F5  52                        PUSH EDX
0061F3F6  8B 97 0C 01 00 00         MOV EDX,dword ptr [EDI + 0x10c]
0061F3FC  51                        PUSH ECX
0061F3FD  50                        PUSH EAX
0061F3FE  52                        PUSH EDX
0061F3FF  8B CF                     MOV ECX,EDI
0061F401  E8 4D 4B DE FF            CALL 0x00403f53
0061F406  85 DB                     TEST EBX,EBX
0061F408  7C 3F                     JL 0x0061f449
0061F40A  83 FB 05                  CMP EBX,0x5
0061F40D  7D 3A                     JGE 0x0061f449
0061F40F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0061F412  85 D2                     TEST EDX,EDX
0061F414  7C 33                     JL 0x0061f449
0061F416  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0061F419  3B D1                     CMP EDX,ECX
0061F41B  7D 2C                     JGE 0x0061f449
0061F41D  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0061F424  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0061F427  03 C3                     ADD EAX,EBX
0061F429  85 C0                     TEST EAX,EAX
0061F42B  7C 1C                     JL 0x0061f449
0061F42D  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0061F430  7D 17                     JGE 0x0061f449
0061F432  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0061F435  85 FF                     TEST EDI,EDI
0061F437  74 10                     JZ 0x0061f449
0061F439  0F AF C1                  IMUL EAX,ECX
0061F43C  03 C7                     ADD EAX,EDI
0061F43E  33 C9                     XOR ECX,ECX
0061F440  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061F443  8B C1                     MOV EAX,ECX
0061F445  85 C0                     TEST EAX,EAX
0061F447  74 1E                     JZ 0x0061f467
LAB_0061f449:
0061F449  8A 46 2F                  MOV AL,byte ptr [ESI + 0x2f]
0061F44C  84 C0                     TEST AL,AL
0061F44E  75 30                     JNZ 0x0061f480
0061F450  8B 56 26                  MOV EDX,dword ptr [ESI + 0x26]
0061F453  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F459  6A 00                     PUSH 0x0
0061F45B  52                        PUSH EDX
0061F45C  E8 3F B6 0C 00            CALL 0x006eaaa0
0061F461  C6 46 2F 01               MOV byte ptr [ESI + 0x2f],0x1
0061F465  EB 19                     JMP 0x0061f480
LAB_0061f467:
0061F467  80 7E 2F 01               CMP byte ptr [ESI + 0x2f],0x1
0061F46B  75 13                     JNZ 0x0061f480
0061F46D  8B 46 26                  MOV EAX,dword ptr [ESI + 0x26]
0061F470  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F476  50                        PUSH EAX
0061F477  E8 E4 B6 0C 00            CALL 0x006eab60
0061F47C  C6 46 2F 00               MOV byte ptr [ESI + 0x2f],0x0
LAB_0061f480:
0061F480  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061F483  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0061F486  42                        INC EDX
0061F487  3B D0                     CMP EDX,EAX
0061F489  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061F48C  0F 8C 3A FE FF FF         JL 0x0061f2cc
0061F492  5F                        POP EDI
0061F493  5E                        POP ESI
0061F494  5B                        POP EBX
LAB_0061f495:
0061F495  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061F498  8B E5                     MOV ESP,EBP
0061F49A  5D                        POP EBP
0061F49B  C2 04 00                  RET 0x4
