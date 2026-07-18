FUN_006b6230:
006B6230  55                        PUSH EBP
006B6231  8B EC                     MOV EBP,ESP
006B6233  53                        PUSH EBX
006B6234  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006B6237  56                        PUSH ESI
006B6238  57                        PUSH EDI
006B6239  8B 33                     MOV ESI,dword ptr [EBX]
006B623B  8B 06                     MOV EAX,dword ptr [ESI]
006B623D  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B6240  3B C8                     CMP ECX,EAX
006B6242  7C 25                     JL 0x006b6269
006B6244  8D 78 0A                  LEA EDI,[EAX + 0xa]
006B6247  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
006B624A  8D 0C 85 08 00 00 00      LEA ECX,[EAX*0x4 + 0x8]
006B6251  51                        PUSH ECX
006B6252  56                        PUSH ESI
006B6253  E8 F8 98 00 00            CALL 0x006bfb50
006B6258  8B F0                     MOV ESI,EAX
006B625A  85 F6                     TEST ESI,ESI
006B625C  75 07                     JNZ 0x006b6265
006B625E  5F                        POP EDI
006B625F  5E                        POP ESI
006B6260  5B                        POP EBX
006B6261  5D                        POP EBP
006B6262  C2 14 00                  RET 0x14
LAB_006b6265:
006B6265  89 33                     MOV dword ptr [EBX],ESI
006B6267  89 3E                     MOV dword ptr [ESI],EDI
LAB_006b6269:
006B6269  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B626C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B626F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006B6272  8D 44 96 0C               LEA EAX,[ESI + EDX*0x4 + 0xc]
006B6276  8B 11                     MOV EDX,dword ptr [ECX]
006B6278  89 10                     MOV dword ptr [EAX],EDX
006B627A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006B627D  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006B6280  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006B6283  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006B6286  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B6289  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B628C  52                        PUSH EDX
006B628D  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006B6290  E8 DB 1E 01 00            CALL 0x006c8170
006B6295  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B6298  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
006B629B  89 44 8E 08               MOV dword ptr [ESI + ECX*0x4 + 0x8],EAX
006B629F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B62A2  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006B62A5  8B 4C 96 08               MOV ECX,dword ptr [ESI + EDX*0x4 + 0x8]
006B62A9  85 C9                     TEST ECX,ECX
006B62AB  75 09                     JNZ 0x006b62b6
006B62AD  5F                        POP EDI
006B62AE  5E                        POP ESI
006B62AF  33 C0                     XOR EAX,EAX
006B62B1  5B                        POP EBX
006B62B2  5D                        POP EBP
006B62B3  C2 14 00                  RET 0x14
LAB_006b62b6:
006B62B6  40                        INC EAX
006B62B7  5F                        POP EDI
006B62B8  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B62BB  5E                        POP ESI
006B62BC  B8 01 00 00 00            MOV EAX,0x1
006B62C1  5B                        POP EBX
006B62C2  5D                        POP EBP
006B62C3  C2 14 00                  RET 0x14
