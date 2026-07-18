FSGSTy::PrepBkgMess:
005999C0  55                        PUSH EBP
005999C1  8B EC                     MOV EBP,ESP
005999C3  83 EC 50                  SUB ESP,0x50
005999C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005999CB  53                        PUSH EBX
005999CC  56                        PUSH ESI
005999CD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005999D0  57                        PUSH EDI
005999D1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005999D4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005999D7  6A 00                     PUSH 0x0
005999D9  52                        PUSH EDX
005999DA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005999DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005999E3  E8 08 3E 19 00            CALL 0x0072d7f0
005999E8  8B F0                     MOV ESI,EAX
005999EA  83 C4 08                  ADD ESP,0x8
005999ED  85 F6                     TEST ESI,ESI
005999EF  0F 85 26 01 00 00         JNZ 0x00599b1b
005999F5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005999F8  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005999FE  8D BE C0 1A 00 00         LEA EDI,[ESI + 0x1ac0]
00599A04  85 C0                     TEST EAX,EAX
00599A06  74 06                     JZ 0x00599a0e
00599A08  57                        PUSH EDI
00599A09  E8 52 16 11 00            CALL 0x006ab060
LAB_00599a0e:
00599A0E  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
00599A11  84 DB                     TEST BL,BL
00599A13  75 09                     JNZ 0x00599a1e
00599A15  C7 45 FC 06 01 00 00      MOV dword ptr [EBP + -0x4],0x106
00599A1C  EB 12                     JMP 0x00599a30
LAB_00599a1e:
00599A1E  8A C3                     MOV AL,BL
00599A20  FE C8                     DEC AL
00599A22  F6 D8                     NEG AL
00599A24  1B C0                     SBB EAX,EAX
00599A26  24 FB                     AND AL,0xfb
00599A28  05 7A 01 00 00            ADD EAX,0x17a
00599A2D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00599a30:
00599A30  84 DB                     TEST BL,BL
00599A32  75 09                     JNZ 0x00599a3d
00599A34  C7 45 F8 B8 01 00 00      MOV dword ptr [EBP + -0x8],0x1b8
00599A3B  EB 17                     JMP 0x00599a54
LAB_00599a3d:
00599A3D  8A CB                     MOV CL,BL
00599A3F  FE C9                     DEC CL
00599A41  F6 D9                     NEG CL
00599A43  1B C9                     SBB ECX,ECX
00599A45  81 E1 29 01 00 00         AND ECX,0x129
00599A4B  81 C1 B8 01 00 00         ADD ECX,0x1b8
00599A51  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00599a54:
00599A54  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
00599A57  6A 01                     PUSH 0x1
00599A59  8D 50 28                  LEA EDX,[EAX + 0x28]
00599A5C  52                        PUSH EDX
00599A5D  50                        PUSH EAX
00599A5E  E8 7D B5 11 00            CALL 0x006b4fe0
00599A63  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00599A66  50                        PUSH EAX
00599A67  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
00599A6A  33 C9                     XOR ECX,ECX
00599A6C  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00599A70  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00599A73  51                        PUSH ECX
00599A74  52                        PUSH EDX
00599A75  50                        PUSH EAX
00599A76  E8 45 B6 11 00            CALL 0x006b50c0
00599A7B  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
00599A81  89 07                     MOV dword ptr [EDI],EAX
00599A83  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00599A89  50                        PUSH EAX
00599A8A  51                        PUSH ECX
00599A8B  52                        PUSH EDX
00599A8C  E8 7F 89 11 00            CALL 0x006b2410
00599A91  8B 07                     MOV EAX,dword ptr [EDI]
00599A93  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00599A96  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00599A99  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
00599A9F  51                        PUSH ECX
00599AA0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00599AA6  52                        PUSH EDX
00599AA7  50                        PUSH EAX
00599AA8  51                        PUSH ECX
00599AA9  E8 52 8D 11 00            CALL 0x006b2800
00599AAE  8A D3                     MOV DL,BL
00599AB0  F6 DA                     NEG DL
00599AB2  1B D2                     SBB EDX,EDX
00599AB4  83 E2 B4                  AND EDX,0xffffffb4
00599AB7  81 C2 AA 00 00 00         ADD EDX,0xaa
00599ABD  84 DB                     TEST BL,BL
00599ABF  8B C2                     MOV EAX,EDX
00599AC1  75 07                     JNZ 0x00599aca
00599AC3  B9 B4 00 00 00            MOV ECX,0xb4
00599AC8  EB 11                     JMP 0x00599adb
LAB_00599aca:
00599ACA  8A CB                     MOV CL,BL
00599ACC  FE C9                     DEC CL
00599ACE  F6 D9                     NEG CL
00599AD0  1B C9                     SBB ECX,ECX
00599AD2  80 E1 6E                  AND CL,0x6e
00599AD5  81 C1 B4 00 00 00         ADD ECX,0xb4
LAB_00599adb:
00599ADB  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
00599AE1  50                        PUSH EAX
00599AE2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00599AE7  51                        PUSH ECX
00599AE8  6A FF                     PUSH -0x1
00599AEA  52                        PUSH EDX
00599AEB  50                        PUSH EAX
00599AEC  E8 4F 9B 11 00            CALL 0x006b3640
00599AF1  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
00599AF7  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00599AFD  51                        PUSH ECX
00599AFE  52                        PUSH EDX
00599AFF  E8 EC 9F 11 00            CALL 0x006b3af0
00599B04  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00599B07  88 9E BB 1A 00 00         MOV byte ptr [ESI + 0x1abb],BL
00599B0D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00599B12  5F                        POP EDI
00599B13  5E                        POP ESI
00599B14  5B                        POP EBX
00599B15  8B E5                     MOV ESP,EBP
00599B17  5D                        POP EBP
00599B18  C2 04 00                  RET 0x4
LAB_00599b1b:
00599B1B  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00599B1E  68 CC C1 7C 00            PUSH 0x7cc1cc
00599B23  68 CC 4C 7A 00            PUSH 0x7a4ccc
00599B28  56                        PUSH ESI
00599B29  6A 00                     PUSH 0x0
00599B2B  68 A8 03 00 00            PUSH 0x3a8
00599B30  68 70 BF 7C 00            PUSH 0x7cbf70
00599B35  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00599B3B  E8 90 39 11 00            CALL 0x006ad4d0
00599B40  83 C4 18                  ADD ESP,0x18
00599B43  85 C0                     TEST EAX,EAX
00599B45  74 01                     JZ 0x00599b48
00599B47  CC                        INT3
LAB_00599b48:
00599B48  68 A8 03 00 00            PUSH 0x3a8
00599B4D  68 70 BF 7C 00            PUSH 0x7cbf70
00599B52  6A 00                     PUSH 0x0
00599B54  56                        PUSH ESI
00599B55  E8 E6 C2 10 00            CALL 0x006a5e40
00599B5A  5F                        POP EDI
00599B5B  5E                        POP ESI
00599B5C  5B                        POP EBX
00599B5D  8B E5                     MOV ESP,EBP
00599B5F  5D                        POP EBP
00599B60  C2 04 00                  RET 0x4
