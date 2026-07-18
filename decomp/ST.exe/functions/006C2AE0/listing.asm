FUN_006c2ae0:
006C2AE0  55                        PUSH EBP
006C2AE1  8B EC                     MOV EBP,ESP
006C2AE3  83 EC 48                  SUB ESP,0x48
006C2AE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2AE9  53                        PUSH EBX
006C2AEA  33 DB                     XOR EBX,EBX
006C2AEC  56                        PUSH ESI
006C2AED  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C2AF0  57                        PUSH EDI
006C2AF1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006C2AF4  83 79 20 08               CMP dword ptr [ECX + 0x20],0x8
006C2AF8  7F 21                     JG 0x006c2b1b
006C2AFA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C2B00  68 9C 00 00 00            PUSH 0x9c
006C2B05  68 64 DE 7E 00            PUSH 0x7ede64
006C2B0A  52                        PUSH EDX
006C2B0B  6A D0                     PUSH -0x30
006C2B0D  E8 2E 33 FE FF            CALL 0x006a5e40
006C2B12  5F                        POP EDI
006C2B13  5E                        POP ESI
006C2B14  5B                        POP EBX
006C2B15  8B E5                     MOV ESP,EBP
006C2B17  5D                        POP EBP
006C2B18  C2 0C 00                  RET 0xc
LAB_006c2b1b:
006C2B1B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006C2B20  8D 55 BC                  LEA EDX,[EBP + -0x44]
006C2B23  8D 4D B8                  LEA ECX,[EBP + -0x48]
006C2B26  53                        PUSH EBX
006C2B27  52                        PUSH EDX
006C2B28  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C2B2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C2B31  E8 BA AC 06 00            CALL 0x0072d7f0
006C2B36  8B F8                     MOV EDI,EAX
006C2B38  83 C4 08                  ADD ESP,0x8
006C2B3B  3B FB                     CMP EDI,EBX
006C2B3D  0F 85 F9 00 00 00         JNZ 0x006c2c3c
006C2B43  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2B46  F7 46 08 00 00 00 40      TEST dword ptr [ESI + 0x8],0x40000000
006C2B4D  74 06                     JZ 0x006c2b55
006C2B4F  56                        PUSH ESI
006C2B50  E8 2B 01 00 00            CALL 0x006c2c80
LAB_006c2b55:
006C2B55  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C2B58  F6 C3 0C                  TEST BL,0xc
006C2B5B  74 06                     JZ 0x006c2b63
006C2B5D  83 E3 FD                  AND EBX,0xfffffffd
006C2B60  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
LAB_006c2b63:
006C2B63  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C2B66  8D 7E 34                  LEA EDI,[ESI + 0x34]
006C2B69  24 F0                     AND AL,0xf0
006C2B6B  6A 00                     PUSH 0x0
006C2B6D  0B C3                     OR EAX,EBX
006C2B6F  57                        PUSH EDI
006C2B70  6A 00                     PUSH 0x0
006C2B72  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006C2B75  E8 32 AB 06 00            CALL 0x0072d6ac
006C2B7A  85 C0                     TEST EAX,EAX
006C2B7C  74 17                     JZ 0x006c2b95
006C2B7E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C2B84  68 A8 00 00 00            PUSH 0xa8
006C2B89  68 64 DE 7E 00            PUSH 0x7ede64
006C2B8E  51                        PUSH ECX
006C2B8F  50                        PUSH EAX
006C2B90  E8 AB 32 FE FF            CALL 0x006a5e40
LAB_006c2b95:
006C2B95  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C2B98  8B 07                     MOV EAX,dword ptr [EDI]
006C2B9A  6A 02                     PUSH 0x2
006C2B9C  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006C2B9F  8B 10                     MOV EDX,dword ptr [EAX]
006C2BA1  51                        PUSH ECX
006C2BA2  50                        PUSH EAX
006C2BA3  FF 52 18                  CALL dword ptr [EDX + 0x18]
006C2BA6  85 C0                     TEST EAX,EAX
006C2BA8  74 17                     JZ 0x006c2bc1
006C2BAA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C2BB0  68 A9 00 00 00            PUSH 0xa9
006C2BB5  68 64 DE 7E 00            PUSH 0x7ede64
006C2BBA  52                        PUSH EDX
006C2BBB  50                        PUSH EAX
006C2BBC  E8 7F 32 FE FF            CALL 0x006a5e40
LAB_006c2bc1:
006C2BC1  8B 07                     MOV EAX,dword ptr [EDI]
006C2BC3  8B 0D 70 BF 85 00         MOV ECX,dword ptr [0x0085bf70]
006C2BC9  50                        PUSH EAX
006C2BCA  51                        PUSH ECX
006C2BCB  FF 15 80 BF 85 00         CALL dword ptr [0x0085bf80]
006C2BD1  F6 C3 08                  TEST BL,0x8
006C2BD4  74 07                     JZ 0x006c2bdd
006C2BD6  81 4D FC 00 00 00 40      OR dword ptr [EBP + -0x4],0x40000000
LAB_006c2bdd:
006C2BDD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C2BE0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C2BE3  52                        PUSH EDX
006C2BE4  50                        PUSH EAX
006C2BE5  FF 15 7C BF 85 00         CALL dword ptr [0x0085bf7c]
006C2BEB  85 C0                     TEST EAX,EAX
006C2BED  89 06                     MOV dword ptr [ESI],EAX
006C2BEF  75 18                     JNZ 0x006c2c09
006C2BF1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C2BF7  68 B3 00 00 00            PUSH 0xb3
006C2BFC  68 64 DE 7E 00            PUSH 0x7ede64
006C2C01  51                        PUSH ECX
006C2C02  6A F6                     PUSH -0xa
006C2C04  E8 37 32 FE FF            CALL 0x006a5e40
LAB_006c2c09:
006C2C09  8B 06                     MOV EAX,dword ptr [ESI]
006C2C0B  8D 56 3C                  LEA EDX,[ESI + 0x3c]
006C2C0E  52                        PUSH EDX
006C2C0F  50                        PUSH EAX
006C2C10  FF 15 90 BF 85 00         CALL dword ptr [0x0085bf90]
006C2C16  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006C2C19  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006C2C1C  81 E1 FF FF FF FB         AND ECX,0xfbffffff
006C2C22  81 C9 00 00 00 40         OR ECX,0x40000000
006C2C28  33 C0                     XOR EAX,EAX
006C2C2A  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
006C2C2D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C2C33  5F                        POP EDI
006C2C34  5E                        POP ESI
006C2C35  5B                        POP EBX
006C2C36  8B E5                     MOV ESP,EBP
006C2C38  5D                        POP EBP
006C2C39  C2 0C 00                  RET 0xc
LAB_006c2c3c:
006C2C3C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006C2C3F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2C42  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C2C47  8B 0E                     MOV ECX,dword ptr [ESI]
006C2C49  51                        PUSH ECX
006C2C4A  FF 15 94 BF 85 00         CALL dword ptr [0x0085bf94]
006C2C50  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006C2C53  50                        PUSH EAX
006C2C54  8B 10                     MOV EDX,dword ptr [EAX]
006C2C56  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C2C59  68 C6 00 00 00            PUSH 0xc6
006C2C5E  68 64 DE 7E 00            PUSH 0x7ede64
006C2C63  53                        PUSH EBX
006C2C64  57                        PUSH EDI
006C2C65  89 5E 34                  MOV dword ptr [ESI + 0x34],EBX
006C2C68  E8 D3 31 FE FF            CALL 0x006a5e40
006C2C6D  8B C7                     MOV EAX,EDI
006C2C6F  5F                        POP EDI
006C2C70  5E                        POP ESI
006C2C71  5B                        POP EBX
006C2C72  8B E5                     MOV ESP,EBP
006C2C74  5D                        POP EBP
006C2C75  C2 0C 00                  RET 0xc
