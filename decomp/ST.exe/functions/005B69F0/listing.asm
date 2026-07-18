ChatGlassTy::OutChGlProc:
005B69F0  55                        PUSH EBP
005B69F1  8B EC                     MOV EBP,ESP
005B69F3  83 EC 48                  SUB ESP,0x48
005B69F6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B69F9  53                        PUSH EBX
005B69FA  56                        PUSH ESI
005B69FB  57                        PUSH EDI
005B69FC  85 C0                     TEST EAX,EAX
005B69FE  0F 84 CC 00 00 00         JZ 0x005b6ad0
005B6A04  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B6A07  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B6A0C  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B6A0F  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B6A12  6A 00                     PUSH 0x0
005B6A14  52                        PUSH EDX
005B6A15  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B6A18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6A1E  E8 CD 6D 17 00            CALL 0x0072d7f0
005B6A23  8B F0                     MOV ESI,EAX
005B6A25  83 C4 08                  ADD ESP,0x8
005B6A28  85 F6                     TEST ESI,ESI
005B6A2A  75 65                     JNZ 0x005b6a91
005B6A2C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B6A2F  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
005B6A32  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005B6A35  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005B6A38  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005B6A3B  8D 47 04                  LEA EAX,[EDI + 0x4]
005B6A3E  50                        PUSH EAX
005B6A3F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B6A42  53                        PUSH EBX
005B6A43  51                        PUSH ECX
005B6A44  52                        PUSH EDX
005B6A45  56                        PUSH ESI
005B6A46  50                        PUSH EAX
005B6A47  E8 A4 FE 10 00            CALL 0x006c68f0
005B6A4C  8B 0F                     MOV ECX,dword ptr [EDI]
005B6A4E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005B6A51  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005B6A54  51                        PUSH ECX
005B6A55  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B6A58  53                        PUSH EBX
005B6A59  52                        PUSH EDX
005B6A5A  50                        PUSH EAX
005B6A5B  56                        PUSH ESI
005B6A5C  51                        PUSH ECX
005B6A5D  E8 EE FD 10 00            CALL 0x006c6850
005B6A62  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005B6A65  8B 0F                     MOV ECX,dword ptr [EDI]
005B6A67  51                        PUSH ECX
005B6A68  8D 44 1A EA               LEA EAX,[EDX + EBX*0x1 + -0x16]
005B6A6C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005B6A6F  50                        PUSH EAX
005B6A70  8D 4C 16 FF               LEA ECX,[ESI + EDX*0x1 + -0x1]
005B6A74  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005B6A77  51                        PUSH ECX
005B6A78  50                        PUSH EAX
005B6A79  56                        PUSH ESI
005B6A7A  52                        PUSH EDX
005B6A7B  E8 30 E9 10 00            CALL 0x006c53b0
005B6A80  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B6A83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B6A88  5F                        POP EDI
005B6A89  5E                        POP ESI
005B6A8A  5B                        POP EBX
005B6A8B  8B E5                     MOV ESP,EBP
005B6A8D  5D                        POP EBP
005B6A8E  C2 20 00                  RET 0x20
LAB_005b6a91:
005B6A91  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B6A94  68 54 CB 7C 00            PUSH 0x7ccb54
005B6A99  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B6A9E  56                        PUSH ESI
005B6A9F  6A 00                     PUSH 0x0
005B6AA1  68 53 01 00 00            PUSH 0x153
005B6AA6  68 38 CA 7C 00            PUSH 0x7cca38
005B6AAB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6AB1  E8 1A 6A 0F 00            CALL 0x006ad4d0
005B6AB6  83 C4 18                  ADD ESP,0x18
005B6AB9  85 C0                     TEST EAX,EAX
005B6ABB  74 01                     JZ 0x005b6abe
005B6ABD  CC                        INT3
LAB_005b6abe:
005B6ABE  68 53 01 00 00            PUSH 0x153
005B6AC3  68 38 CA 7C 00            PUSH 0x7cca38
005B6AC8  6A 00                     PUSH 0x0
005B6ACA  56                        PUSH ESI
005B6ACB  E8 70 F3 0E 00            CALL 0x006a5e40
LAB_005b6ad0:
005B6AD0  5F                        POP EDI
005B6AD1  5E                        POP ESI
005B6AD2  5B                        POP EBX
005B6AD3  8B E5                     MOV ESP,EBP
005B6AD5  5D                        POP EBP
005B6AD6  C2 20 00                  RET 0x20
