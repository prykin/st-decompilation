FUN_005bd4b0:
005BD4B0  55                        PUSH EBP
005BD4B1  8B EC                     MOV EBP,ESP
005BD4B3  83 EC 4C                  SUB ESP,0x4c
005BD4B6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005BD4B9  53                        PUSH EBX
005BD4BA  56                        PUSH ESI
005BD4BB  57                        PUSH EDI
005BD4BC  85 C0                     TEST EAX,EAX
005BD4BE  0F 84 2E 02 00 00         JZ 0x005bd6f2
005BD4C4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BD4C7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BD4CC  8D 55 B8                  LEA EDX,[EBP + -0x48]
005BD4CF  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005BD4D2  6A 00                     PUSH 0x0
005BD4D4  52                        PUSH EDX
005BD4D5  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005BD4D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BD4DE  E8 0D 03 17 00            CALL 0x0072d7f0
005BD4E3  8B F0                     MOV ESI,EAX
005BD4E5  83 C4 08                  ADD ESP,0x8
005BD4E8  85 F6                     TEST ESI,ESI
005BD4EA  0F 85 C9 01 00 00         JNZ 0x005bd6b9
005BD4F0  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005BD4F3  6A 01                     PUSH 0x1
005BD4F5  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005BD4F8  8D 48 28                  LEA ECX,[EAX + 0x28]
005BD4FB  51                        PUSH ECX
005BD4FC  50                        PUSH EAX
005BD4FD  E8 DE 7A 0F 00            CALL 0x006b4fe0
005BD502  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005BD505  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005BD508  50                        PUSH EAX
005BD509  33 C0                     XOR EAX,EAX
005BD50B  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005BD50F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005BD512  50                        PUSH EAX
005BD513  51                        PUSH ECX
005BD514  52                        PUSH EDX
005BD515  E8 A6 7B 0F 00            CALL 0x006b50c0
005BD51A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005BD51D  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005BD520  85 DB                     TEST EBX,EBX
005BD522  75 18                     JNZ 0x005bd53c
005BD524  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005BD528  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005BD52C  83 C3 1F                  ADD EBX,0x1f
005BD52F  C1 EB 03                  SHR EBX,0x3
005BD532  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005BD538  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005bd53c:
005BD53C  50                        PUSH EAX
005BD53D  E8 5E 7A 0F 00            CALL 0x006b4fa0
005BD542  8B CB                     MOV ECX,EBX
005BD544  8B F8                     MOV EDI,EAX
005BD546  8B D1                     MOV EDX,ECX
005BD548  B8 4C 4C 4C 4C            MOV EAX,0x4c4c4c4c
005BD54D  C1 E9 02                  SHR ECX,0x2
005BD550  F3 AB                     STOSD.REP ES:EDI
005BD552  8B CA                     MOV ECX,EDX
005BD554  6A 0D                     PUSH 0xd
005BD556  83 E1 03                  AND ECX,0x3
005BD559  6A 18                     PUSH 0x18
005BD55B  F3 AA                     STOSB.REP ES:EDI
005BD55D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BD560  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BD563  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BD566  83 E9 04                  SUB ECX,0x4
005BD569  83 EA 04                  SUB EDX,0x4
005BD56C  51                        PUSH ECX
005BD56D  52                        PUSH EDX
005BD56E  6A 02                     PUSH 0x2
005BD570  6A 02                     PUSH 0x2
005BD572  6A 00                     PUSH 0x0
005BD574  50                        PUSH EAX
005BD575  E8 66 89 0F 00            CALL 0x006b5ee0
005BD57A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BD57D  6A 0F                     PUSH 0xf
005BD57F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005BD582  83 E9 0A                  SUB ECX,0xa
005BD585  51                        PUSH ECX
005BD586  8B 8E 83 00 00 00         MOV ECX,dword ptr [ESI + 0x83]
005BD58C  6A 05                     PUSH 0x5
005BD58E  6A 05                     PUSH 0x5
005BD590  6A 00                     PUSH 0x0
005BD592  50                        PUSH EAX
005BD593  E8 F8 34 15 00            CALL 0x00710a90
005BD598  8A 46 67                  MOV AL,byte ptr [ESI + 0x67]
005BD59B  84 C0                     TEST AL,AL
005BD59D  74 07                     JZ 0x005bd5a6
005BD59F  B8 36 C7 80 00            MOV EAX,0x80c736
005BD5A4  EB 11                     JMP 0x005bd5b7
LAB_005bd5a6:
005BD5A6  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BD5AC  52                        PUSH EDX
005BD5AD  68 11 27 00 00            PUSH 0x2711
005BD5B2  E8 89 2B 0F 00            CALL 0x006b0140
LAB_005bd5b7:
005BD5B7  50                        PUSH EAX
005BD5B8  A1 18 76 80 00            MOV EAX,[0x00807618]
005BD5BD  50                        PUSH EAX
005BD5BE  68 45 24 00 00            PUSH 0x2445
005BD5C3  E8 78 2B 0F 00            CALL 0x006b0140
005BD5C8  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
005BD5CE  50                        PUSH EAX
005BD5CF  68 14 CF 7C 00            PUSH 0x7ccf14
005BD5D4  68 3A F3 80 00            PUSH 0x80f33a
005BD5D9  FF D7                     CALL EDI
005BD5DB  8B 8E 83 00 00 00         MOV ECX,dword ptr [ESI + 0x83]
005BD5E1  83 C4 10                  ADD ESP,0x10
005BD5E4  6A 00                     PUSH 0x0
005BD5E6  6A FF                     PUSH -0x1
005BD5E8  6A 0A                     PUSH 0xa
005BD5EA  68 3A F3 80 00            PUSH 0x80f33a
005BD5EF  E8 CC 43 15 00            CALL 0x007119c0
005BD5F4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BD5F7  6A 0F                     PUSH 0xf
005BD5F9  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005BD5FC  83 E9 0A                  SUB ECX,0xa
005BD5FF  51                        PUSH ECX
005BD600  8B 8E 83 00 00 00         MOV ECX,dword ptr [ESI + 0x83]
005BD606  6A 19                     PUSH 0x19
005BD608  6A 05                     PUSH 0x5
005BD60A  6A 00                     PUSH 0x0
005BD60C  50                        PUSH EAX
005BD60D  E8 7E 34 15 00            CALL 0x00710a90
005BD612  8A 46 67                  MOV AL,byte ptr [ESI + 0x67]
005BD615  84 C0                     TEST AL,AL
005BD617  74 10                     JZ 0x005bd629
005BD619  A1 22 C5 80 00            MOV EAX,[0x0080c522]
005BD61E  F7 D8                     NEG EAX
005BD620  1B C0                     SBB EAX,EAX
005BD622  05 39 23 00 00            ADD EAX,0x2339
005BD627  EB 05                     JMP 0x005bd62e
LAB_005bd629:
005BD629  B8 11 27 00 00            MOV EAX,0x2711
LAB_005bd62e:
005BD62E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BD634  52                        PUSH EDX
005BD635  50                        PUSH EAX
005BD636  E8 05 2B 0F 00            CALL 0x006b0140
005BD63B  50                        PUSH EAX
005BD63C  A1 18 76 80 00            MOV EAX,[0x00807618]
005BD641  50                        PUSH EAX
005BD642  68 37 23 00 00            PUSH 0x2337
005BD647  E8 F4 2A 0F 00            CALL 0x006b0140
005BD64C  50                        PUSH EAX
005BD64D  68 08 CF 7C 00            PUSH 0x7ccf08
005BD652  68 3A F3 80 00            PUSH 0x80f33a
005BD657  FF D7                     CALL EDI
005BD659  8B 8E 83 00 00 00         MOV ECX,dword ptr [ESI + 0x83]
005BD65F  83 C4 10                  ADD ESP,0x10
005BD662  6A 00                     PUSH 0x0
005BD664  6A FF                     PUSH -0x1
005BD666  6A 0A                     PUSH 0xa
005BD668  68 3A F3 80 00            PUSH 0x80f33a
005BD66D  E8 4E 43 15 00            CALL 0x007119c0
005BD672  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BD675  81 C6 A3 00 00 00         ADD ESI,0xa3
005BD67B  6A 4C                     PUSH 0x4c
005BD67D  56                        PUSH ESI
005BD67E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BD681  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BD684  51                        PUSH ECX
005BD685  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005BD688  52                        PUSH EDX
005BD689  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005BD68C  6A 00                     PUSH 0x0
005BD68E  6A 00                     PUSH 0x0
005BD690  6A 00                     PUSH 0x0
005BD692  50                        PUSH EAX
005BD693  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005BD696  50                        PUSH EAX
005BD697  51                        PUSH ECX
005BD698  52                        PUSH EDX
005BD699  E8 62 79 10 00            CALL 0x006c5000
005BD69E  8D 45 FC                  LEA EAX,[EBP + -0x4]
005BD6A1  50                        PUSH EAX
005BD6A2  E8 B9 D9 0E 00            CALL 0x006ab060
005BD6A7  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005BD6AA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BD6B0  5F                        POP EDI
005BD6B1  5E                        POP ESI
005BD6B2  5B                        POP EBX
005BD6B3  8B E5                     MOV ESP,EBP
005BD6B5  5D                        POP EBP
005BD6B6  C2 20 00                  RET 0x20
LAB_005bd6b9:
005BD6B9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005BD6BC  68 EC CE 7C 00            PUSH 0x7cceec
005BD6C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BD6C6  56                        PUSH ESI
005BD6C7  6A 00                     PUSH 0x0
005BD6C9  6A 44                     PUSH 0x44
005BD6CB  68 C8 CE 7C 00            PUSH 0x7ccec8
005BD6D0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BD6D6  E8 F5 FD 0E 00            CALL 0x006ad4d0
005BD6DB  83 C4 18                  ADD ESP,0x18
005BD6DE  85 C0                     TEST EAX,EAX
005BD6E0  74 01                     JZ 0x005bd6e3
005BD6E2  CC                        INT3
LAB_005bd6e3:
005BD6E3  6A 44                     PUSH 0x44
005BD6E5  68 C8 CE 7C 00            PUSH 0x7ccec8
005BD6EA  6A 00                     PUSH 0x0
005BD6EC  56                        PUSH ESI
005BD6ED  E8 4E 87 0E 00            CALL 0x006a5e40
LAB_005bd6f2:
005BD6F2  5F                        POP EDI
005BD6F3  5E                        POP ESI
005BD6F4  5B                        POP EBX
005BD6F5  8B E5                     MOV ESP,EBP
005BD6F7  5D                        POP EBP
005BD6F8  C2 20 00                  RET 0x20
