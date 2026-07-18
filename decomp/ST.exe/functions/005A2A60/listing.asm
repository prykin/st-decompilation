FUN_005a2a60:
005A2A60  55                        PUSH EBP
005A2A61  8B EC                     MOV EBP,ESP
005A2A63  83 EC 50                  SUB ESP,0x50
005A2A66  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A2A6C  53                        PUSH EBX
005A2A6D  56                        PUSH ESI
005A2A6E  3C 06                     CMP AL,0x6
005A2A70  57                        PUSH EDI
005A2A71  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A2A74  0F 85 2C 01 00 00         JNZ 0x005a2ba6
005A2A7A  8A 81 60 1A 00 00         MOV AL,byte ptr [ECX + 0x1a60]
005A2A80  84 C0                     TEST AL,AL
005A2A82  0F 85 1E 01 00 00         JNZ 0x005a2ba6
005A2A88  8B 81 A6 1E 00 00         MOV EAX,dword ptr [ECX + 0x1ea6]
005A2A8E  85 C0                     TEST EAX,EAX
005A2A90  0F 84 10 01 00 00         JZ 0x005a2ba6
005A2A96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A2A9B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005A2A9E  8D 4D B0                  LEA ECX,[EBP + -0x50]
005A2AA1  6A 00                     PUSH 0x0
005A2AA3  52                        PUSH EDX
005A2AA4  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005A2AA7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2AAD  E8 3E AD 18 00            CALL 0x0072d7f0
005A2AB2  8B F0                     MOV ESI,EAX
005A2AB4  83 C4 08                  ADD ESP,0x8
005A2AB7  85 F6                     TEST ESI,ESI
005A2AB9  0F 85 A8 00 00 00         JNZ 0x005a2b67
005A2ABF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A2AC2  33 DB                     XOR EBX,EBX
005A2AC4  8B 81 A6 1E 00 00         MOV EAX,dword ptr [ECX + 0x1ea6]
005A2ACA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005A2ACD  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005A2AD0  85 D2                     TEST EDX,EDX
005A2AD2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005A2AD5  76 65                     JBE 0x005a2b3c
005A2AD7  3B DA                     CMP EBX,EDX
005A2AD9  73 0D                     JNC 0x005a2ae8
LAB_005a2adb:
005A2ADB  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005A2ADE  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
005A2AE1  0F AF FB                  IMUL EDI,EBX
005A2AE4  03 FE                     ADD EDI,ESI
005A2AE6  EB 02                     JMP 0x005a2aea
LAB_005a2ae8:
005A2AE8  33 FF                     XOR EDI,EDI
LAB_005a2aea:
005A2AEA  85 FF                     TEST EDI,EDI
005A2AEC  74 3B                     JZ 0x005a2b29
005A2AEE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005A2AF1  8B C7                     MOV EAX,EDI
LAB_005a2af3:
005A2AF3  8A 08                     MOV CL,byte ptr [EAX]
005A2AF5  8A D1                     MOV DL,CL
005A2AF7  3A 0E                     CMP CL,byte ptr [ESI]
005A2AF9  75 1C                     JNZ 0x005a2b17
005A2AFB  84 D2                     TEST DL,DL
005A2AFD  74 14                     JZ 0x005a2b13
005A2AFF  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
005A2B02  8A D1                     MOV DL,CL
005A2B04  3A 4E 01                  CMP CL,byte ptr [ESI + 0x1]
005A2B07  75 0E                     JNZ 0x005a2b17
005A2B09  83 C0 02                  ADD EAX,0x2
005A2B0C  83 C6 02                  ADD ESI,0x2
005A2B0F  84 D2                     TEST DL,DL
005A2B11  75 E0                     JNZ 0x005a2af3
LAB_005a2b13:
005A2B13  33 C0                     XOR EAX,EAX
005A2B15  EB 05                     JMP 0x005a2b1c
LAB_005a2b17:
005A2B17  1B C0                     SBB EAX,EAX
005A2B19  83 D8 FF                  SBB EAX,-0x1
LAB_005a2b1c:
005A2B1C  85 C0                     TEST EAX,EAX
005A2B1E  74 10                     JZ 0x005a2b30
005A2B20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A2B23  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A2B26  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_005a2b29:
005A2B29  43                        INC EBX
005A2B2A  3B DA                     CMP EBX,EDX
005A2B2C  72 AD                     JC 0x005a2adb
005A2B2E  EB 0C                     JMP 0x005a2b3c
LAB_005a2b30:
005A2B30  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005A2B33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A2B36  8B 42 25                  MOV EAX,dword ptr [EDX + 0x25]
005A2B39  89 47 25                  MOV dword ptr [EDI + 0x25],EAX
LAB_005a2b3c:
005A2B3C  8B 81 20 1B 00 00         MOV EAX,dword ptr [ECX + 0x1b20]
005A2B42  8D 51 1D                  LEA EDX,[ECX + 0x1d]
005A2B45  52                        PUSH EDX
005A2B46  50                        PUSH EAX
005A2B47  6A 02                     PUSH 0x2
005A2B49  C7 41 2D 05 00 00 00      MOV dword ptr [ECX + 0x2d],0x5
005A2B50  E8 2B 35 14 00            CALL 0x006e6080
005A2B55  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005A2B58  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2B5E  5F                        POP EDI
005A2B5F  5E                        POP ESI
005A2B60  5B                        POP EBX
005A2B61  8B E5                     MOV ESP,EBP
005A2B63  5D                        POP EBP
005A2B64  C2 04 00                  RET 0x4
LAB_005a2b67:
005A2B67  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005A2B6A  68 E4 C4 7C 00            PUSH 0x7cc4e4
005A2B6F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A2B74  56                        PUSH ESI
005A2B75  6A 00                     PUSH 0x0
005A2B77  68 50 0A 00 00            PUSH 0xa50
005A2B7C  68 70 BF 7C 00            PUSH 0x7cbf70
005A2B81  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A2B87  E8 44 A9 10 00            CALL 0x006ad4d0
005A2B8C  83 C4 18                  ADD ESP,0x18
005A2B8F  85 C0                     TEST EAX,EAX
005A2B91  74 01                     JZ 0x005a2b94
005A2B93  CC                        INT3
LAB_005a2b94:
005A2B94  68 50 0A 00 00            PUSH 0xa50
005A2B99  68 70 BF 7C 00            PUSH 0x7cbf70
005A2B9E  6A 00                     PUSH 0x0
005A2BA0  56                        PUSH ESI
005A2BA1  E8 9A 32 10 00            CALL 0x006a5e40
LAB_005a2ba6:
005A2BA6  5F                        POP EDI
005A2BA7  5E                        POP ESI
005A2BA8  5B                        POP EBX
005A2BA9  8B E5                     MOV ESP,EBP
005A2BAB  5D                        POP EBP
005A2BAC  C2 04 00                  RET 0x4
