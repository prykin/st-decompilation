FUN_00583e30:
00583E30  55                        PUSH EBP
00583E31  8B EC                     MOV EBP,ESP
00583E33  83 EC 1C                  SUB ESP,0x1c
00583E36  53                        PUSH EBX
00583E37  56                        PUSH ESI
00583E38  8B F1                     MOV ESI,ECX
00583E3A  B8 02 00 00 00            MOV EAX,0x2
00583E3F  57                        PUSH EDI
00583E40  39 86 35 02 00 00         CMP dword ptr [ESI + 0x235],EAX
00583E46  0F 84 90 01 00 00         JZ 0x00583fdc
00583E4C  8D 45 FC                  LEA EAX,[EBP + -0x4]
00583E4F  8D 4D F8                  LEA ECX,[EBP + -0x8]
00583E52  50                        PUSH EAX
00583E53  8D 55 F4                  LEA EDX,[EBP + -0xc]
00583E56  51                        PUSH ECX
00583E57  52                        PUSH EDX
00583E58  8B CE                     MOV ECX,ESI
00583E5A  E8 9F E2 E7 FF            CALL 0x004020fe
00583E5F  8B D8                     MOV EBX,EAX
00583E61  83 FB 01                  CMP EBX,0x1
00583E64  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00583E67  0F 85 6B 01 00 00         JNZ 0x00583fd8
00583E6D  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
00583E73  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00583E76  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00583E79  85 C0                     TEST EAX,EAX
00583E7B  74 7F                     JZ 0x00583efc
00583E7D  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00583E81  8B C7                     MOV EAX,EDI
00583E83  2B C1                     SUB EAX,ECX
00583E85  79 02                     JNS 0x00583e89
00583E87  F7 D8                     NEG EAX
LAB_00583e89:
00583E89  83 F8 02                  CMP EAX,0x2
00583E8C  7D 6E                     JGE 0x00583efc
00583E8E  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00583E92  8B C2                     MOV EAX,EDX
00583E94  2B C1                     SUB EAX,ECX
00583E96  79 02                     JNS 0x00583e9a
00583E98  F7 D8                     NEG EAX
LAB_00583e9a:
00583E9A  83 F8 02                  CMP EAX,0x2
00583E9D  7D 5D                     JGE 0x00583efc
00583E9F  0F BF 5E 4B               MOVSX EBX,word ptr [ESI + 0x4b]
00583EA3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00583EA6  8B C8                     MOV ECX,EAX
00583EA8  2B CB                     SUB ECX,EBX
00583EAA  79 02                     JNS 0x00583eae
00583EAC  F7 D9                     NEG ECX
LAB_00583eae:
00583EAE  83 F9 02                  CMP ECX,0x2
00583EB1  7D 46                     JGE 0x00583ef9
00583EB3  66 69 C0 C8 00            IMUL AX,AX,0xc8
00583EB8  66 69 D2 C9 00            IMUL DX,DX,0xc9
00583EBD  66 69 FF C9 00            IMUL DI,DI,0xc9
00583EC2  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00583EC6  66 05 64 00               ADD AX,0x64
00583ECA  6A 06                     PUSH 0x6
00583ECC  66 83 C2 64               ADD DX,0x64
00583ED0  50                        PUSH EAX
00583ED1  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00583ED5  52                        PUSH EDX
00583ED6  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00583EDA  66 83 C7 64               ADD DI,0x64
00583EDE  57                        PUSH EDI
00583EDF  52                        PUSH EDX
00583EE0  50                        PUSH EAX
00583EE1  51                        PUSH ECX
00583EE2  8B CE                     MOV ECX,ESI
00583EE4  E8 6C E5 E7 FF            CALL 0x00402455
00583EE9  F7 D8                     NEG EAX
00583EEB  1B C0                     SBB EAX,EAX
00583EED  5F                        POP EDI
00583EEE  24 FD                     AND AL,0xfd
00583EF0  5E                        POP ESI
00583EF1  83 C0 03                  ADD EAX,0x3
00583EF4  5B                        POP EBX
00583EF5  8B E5                     MOV ESP,EBP
00583EF7  5D                        POP EBP
00583EF8  C3                        RET
LAB_00583ef9:
00583EF9  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00583efc:
00583EFC  8B 86 47 02 00 00         MOV EAX,dword ptr [ESI + 0x247]
00583F02  C7 86 39 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x239],0xffffffff
00583F0C  83 F8 0A                  CMP EAX,0xa
00583F0F  C7 86 31 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x231],0x1
00583F19  75 0A                     JNZ 0x00583f25
00583F1B  C7 86 4B 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x24b],0x0
LAB_00583f25:
00583F25  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00583F29  52                        PUSH EDX
00583F2A  57                        PUSH EDI
00583F2B  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00583F2F  52                        PUSH EDX
00583F30  50                        PUSH EAX
00583F31  E8 DA 79 15 00            CALL 0x006db910
00583F36  6A 08                     PUSH 0x8
00583F38  50                        PUSH EAX
00583F39  E8 52 7A 15 00            CALL 0x006db990
00583F3E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00583F41  8B F8                     MOV EDI,EAX
00583F43  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00583F49  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00583F4F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00583F52  C1 E8 10                  SHR EAX,0x10
00583F55  50                        PUSH EAX
00583F56  8D 45 EC                  LEA EAX,[EBP + -0x14]
00583F59  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00583F5D  50                        PUSH EAX
00583F5E  8D 45 E8                  LEA EAX,[EBP + -0x18]
00583F61  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00583F65  50                        PUSH EAX
00583F66  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00583F69  50                        PUSH EAX
00583F6A  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00583F6E  50                        PUSH EAX
00583F6F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00583F72  51                        PUSH ECX
00583F73  52                        PUSH EDX
00583F74  50                        PUSH EAX
00583F75  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00583F78  50                        PUSH EAX
00583F79  51                        PUSH ECX
00583F7A  52                        PUSH EDX
00583F7B  E8 10 90 12 00            CALL 0x006acf90
00583F80  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00583F84  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00583F87  50                        PUSH EAX
00583F88  2B D1                     SUB EDX,ECX
00583F8A  52                        PUSH EDX
00583F8B  57                        PUSH EDI
00583F8C  E8 BA E4 E7 FF            CALL 0x0040244b
00583F91  83 C4 28                  ADD ESP,0x28
00583F94  85 C0                     TEST EAX,EAX
00583F96  74 40                     JZ 0x00583fd8
00583F98  6A 06                     PUSH 0x6
00583F9A  8B CE                     MOV ECX,ESI
00583F9C  E8 EF 1C E8 FF            CALL 0x00405c90
00583FA1  6A 05                     PUSH 0x5
00583FA3  8B CE                     MOV ECX,ESI
00583FA5  E8 5B 11 E8 FF            CALL 0x00405105
00583FAA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00583FAD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00583FB0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00583FB3  50                        PUSH EAX
00583FB4  51                        PUSH ECX
00583FB5  52                        PUSH EDX
00583FB6  8B CE                     MOV ECX,ESI
00583FB8  E8 5B 03 E8 FF            CALL 0x00404318
00583FBD  85 C0                     TEST EAX,EAX
00583FBF  74 19                     JZ 0x00583fda
00583FC1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00583FC4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00583FC7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00583FCA  50                        PUSH EAX
00583FCB  51                        PUSH ECX
00583FCC  52                        PUSH EDX
00583FCD  8B CE                     MOV ECX,ESI
00583FCF  E8 44 03 E8 FF            CALL 0x00404318
00583FD4  85 C0                     TEST EAX,EAX
00583FD6  74 02                     JZ 0x00583fda
LAB_00583fd8:
00583FD8  33 DB                     XOR EBX,EBX
LAB_00583fda:
00583FDA  8B C3                     MOV EAX,EBX
LAB_00583fdc:
00583FDC  5F                        POP EDI
00583FDD  5E                        POP ESI
00583FDE  5B                        POP EBX
00583FDF  8B E5                     MOV ESP,EBP
00583FE1  5D                        POP EBP
00583FE2  C3                        RET
