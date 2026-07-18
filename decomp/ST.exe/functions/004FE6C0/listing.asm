FUN_004fe6c0:
004FE6C0  55                        PUSH EBP
004FE6C1  8B EC                     MOV EBP,ESP
004FE6C3  83 EC 50                  SUB ESP,0x50
004FE6C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FE6C9  53                        PUSH EBX
004FE6CA  56                        PUSH ESI
004FE6CB  57                        PUSH EDI
004FE6CC  85 C0                     TEST EAX,EAX
004FE6CE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004FE6D1  74 08                     JZ 0x004fe6db
004FE6D3  8B 91 8C 01 00 00         MOV EDX,dword ptr [ECX + 0x18c]
004FE6D9  EB 06                     JMP 0x004fe6e1
LAB_004fe6db:
004FE6DB  8B 91 94 01 00 00         MOV EDX,dword ptr [ECX + 0x194]
LAB_004fe6e1:
004FE6E1  85 C0                     TEST EAX,EAX
004FE6E3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004FE6E6  74 08                     JZ 0x004fe6f0
004FE6E8  8A 89 7F 0B 00 00         MOV CL,byte ptr [ECX + 0xb7f]
004FE6EE  EB 06                     JMP 0x004fe6f6
LAB_004fe6f0:
004FE6F0  8A 89 6D 0C 00 00         MOV CL,byte ptr [ECX + 0xc6d]
LAB_004fe6f6:
004FE6F6  80 F9 64                  CMP CL,0x64
004FE6F9  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
004FE6FC  0F 87 BB 01 00 00         JA 0x004fe8bd
004FE702  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FE707  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004FE70A  8D 4D B0                  LEA ECX,[EBP + -0x50]
004FE70D  6A 00                     PUSH 0x0
004FE70F  52                        PUSH EDX
004FE710  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004FE713  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE719  E8 D2 F0 22 00            CALL 0x0072d7f0
004FE71E  8B F0                     MOV ESI,EAX
004FE720  83 C4 08                  ADD ESP,0x8
004FE723  85 F6                     TEST ESI,ESI
004FE725  0F 85 59 01 00 00         JNZ 0x004fe884
004FE72B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FE72E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004FE731  85 C0                     TEST EAX,EAX
004FE733  0F 84 95 00 00 00         JZ 0x004fe7ce
004FE739  8B 87 DA 02 00 00         MOV EAX,dword ptr [EDI + 0x2da]
004FE73F  56                        PUSH ESI
004FE740  50                        PUSH EAX
004FE741  E8 5A CC 20 00            CALL 0x0070b3a0
004FE746  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004FE749  83 C4 08                  ADD ESP,0x8
004FE74C  68 FF 00 00 00            PUSH 0xff
004FE751  56                        PUSH ESI
004FE752  50                        PUSH EAX
004FE753  6A 06                     PUSH 0x6
004FE755  6A 02                     PUSH 0x2
004FE757  56                        PUSH ESI
004FE758  53                        PUSH EBX
004FE759  E8 E2 6C 1B 00            CALL 0x006b5440
004FE75E  8B 8F DA 02 00 00         MOV ECX,dword ptr [EDI + 0x2da]
004FE764  6A 01                     PUSH 0x1
004FE766  51                        PUSH ECX
004FE767  E8 34 CC 20 00            CALL 0x0070b3a0
004FE76C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004FE76F  8B F0                     MOV ESI,EAX
004FE771  81 E2 FF 00 00 00         AND EDX,0xff
004FE777  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004FE77C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
004FE77F  83 C4 08                  ADD ESP,0x8
004FE782  0F AF D1                  IMUL EDX,ECX
004FE785  F7 EA                     IMUL EDX
004FE787  C1 FA 05                  SAR EDX,0x5
004FE78A  8B C2                     MOV EAX,EDX
004FE78C  68 FF 00 00 00            PUSH 0xff
004FE791  C1 E8 1F                  SHR EAX,0x1f
004FE794  03 D0                     ADD EDX,EAX
004FE796  2B CA                     SUB ECX,EDX
004FE798  52                        PUSH EDX
004FE799  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
004FE79C  52                        PUSH EDX
004FE79D  51                        PUSH ECX
004FE79E  6A 00                     PUSH 0x0
004FE7A0  6A 00                     PUSH 0x0
004FE7A2  83 C1 06                  ADD ECX,0x6
004FE7A5  56                        PUSH ESI
004FE7A6  51                        PUSH ECX
004FE7A7  6A 02                     PUSH 0x2
004FE7A9  6A 00                     PUSH 0x0
004FE7AB  53                        PUSH EBX
004FE7AC  E8 5F 69 1B 00            CALL 0x006b5110
004FE7B1  8B 87 54 01 00 00         MOV EAX,dword ptr [EDI + 0x154]
004FE7B7  85 C0                     TEST EAX,EAX
004FE7B9  0F 8C B3 00 00 00         JL 0x004fe872
004FE7BF  8B 8F A0 00 00 00         MOV ECX,dword ptr [EDI + 0xa0]
004FE7C5  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
004FE7C8  51                        PUSH ECX
004FE7C9  E9 95 00 00 00            JMP 0x004fe863
LAB_004fe7ce:
004FE7CE  8B 8F DA 02 00 00         MOV ECX,dword ptr [EDI + 0x2da]
004FE7D4  6A 02                     PUSH 0x2
004FE7D6  51                        PUSH ECX
004FE7D7  E8 C4 CB 20 00            CALL 0x0070b3a0
004FE7DC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004FE7DF  83 C4 08                  ADD ESP,0x8
004FE7E2  68 FF 00 00 00            PUSH 0xff
004FE7E7  6A 00                     PUSH 0x0
004FE7E9  50                        PUSH EAX
004FE7EA  6A 06                     PUSH 0x6
004FE7EC  68 C7 00 00 00            PUSH 0xc7
004FE7F1  6A 00                     PUSH 0x0
004FE7F3  53                        PUSH EBX
004FE7F4  E8 47 6C 1B 00            CALL 0x006b5440
004FE7F9  8B 97 DA 02 00 00         MOV EDX,dword ptr [EDI + 0x2da]
004FE7FF  6A 03                     PUSH 0x3
004FE801  52                        PUSH EDX
004FE802  E8 99 CB 20 00            CALL 0x0070b3a0
004FE807  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004FE80A  8B F0                     MOV ESI,EAX
004FE80C  81 E2 FF 00 00 00         AND EDX,0xff
004FE812  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004FE817  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
004FE81A  83 C4 08                  ADD ESP,0x8
004FE81D  0F AF D1                  IMUL EDX,ECX
004FE820  F7 EA                     IMUL EDX
004FE822  C1 FA 05                  SAR EDX,0x5
004FE825  8B C2                     MOV EAX,EDX
004FE827  68 FF 00 00 00            PUSH 0xff
004FE82C  C1 E8 1F                  SHR EAX,0x1f
004FE82F  03 D0                     ADD EDX,EAX
004FE831  2B CA                     SUB ECX,EDX
004FE833  52                        PUSH EDX
004FE834  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
004FE837  52                        PUSH EDX
004FE838  51                        PUSH ECX
004FE839  6A 00                     PUSH 0x0
004FE83B  6A 00                     PUSH 0x0
004FE83D  83 C1 06                  ADD ECX,0x6
004FE840  56                        PUSH ESI
004FE841  51                        PUSH ECX
004FE842  68 C7 00 00 00            PUSH 0xc7
004FE847  6A 00                     PUSH 0x0
004FE849  53                        PUSH EBX
004FE84A  E8 C1 68 1B 00            CALL 0x006b5110
004FE84F  8B 87 5C 01 00 00         MOV EAX,dword ptr [EDI + 0x15c]
004FE855  85 C0                     TEST EAX,EAX
004FE857  7C 19                     JL 0x004fe872
004FE859  8B 8F A8 00 00 00         MOV ECX,dword ptr [EDI + 0xa8]
004FE85F  8B 57 50                  MOV EDX,dword ptr [EDI + 0x50]
004FE862  51                        PUSH ECX
LAB_004fe863:
004FE863  52                        PUSH EDX
004FE864  6A FF                     PUSH -0x1
004FE866  50                        PUSH EAX
004FE867  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FE86C  50                        PUSH EAX
004FE86D  E8 CE 4D 1B 00            CALL 0x006b3640
LAB_004fe872:
004FE872  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004FE875  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE87B  5F                        POP EDI
004FE87C  5E                        POP ESI
004FE87D  5B                        POP EBX
004FE87E  8B E5                     MOV ESP,EBP
004FE880  5D                        POP EBP
004FE881  C2 04 00                  RET 0x4
LAB_004fe884:
004FE884  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004FE887  68 24 24 7C 00            PUSH 0x7c2424
004FE88C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FE891  56                        PUSH ESI
004FE892  6A 00                     PUSH 0x0
004FE894  6A 4A                     PUSH 0x4a
004FE896  68 CC 23 7C 00            PUSH 0x7c23cc
004FE89B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FE8A1  E8 2A EC 1A 00            CALL 0x006ad4d0
004FE8A6  83 C4 18                  ADD ESP,0x18
004FE8A9  85 C0                     TEST EAX,EAX
004FE8AB  74 01                     JZ 0x004fe8ae
004FE8AD  CC                        INT3
LAB_004fe8ae:
004FE8AE  6A 4A                     PUSH 0x4a
004FE8B0  68 CC 23 7C 00            PUSH 0x7c23cc
004FE8B5  6A 00                     PUSH 0x0
004FE8B7  56                        PUSH ESI
004FE8B8  E8 83 75 1A 00            CALL 0x006a5e40
LAB_004fe8bd:
004FE8BD  5F                        POP EDI
004FE8BE  5E                        POP ESI
004FE8BF  5B                        POP EBX
004FE8C0  8B E5                     MOV ESP,EBP
004FE8C2  5D                        POP EBP
004FE8C3  C2 04 00                  RET 0x4
