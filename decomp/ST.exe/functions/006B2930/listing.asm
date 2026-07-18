FUN_006b2930:
006B2930  55                        PUSH EBP
006B2931  8B EC                     MOV EBP,ESP
006B2933  81 EC 04 01 00 00         SUB ESP,0x104
006B2939  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B293C  53                        PUSH EBX
006B293D  56                        PUSH ESI
006B293E  57                        PUSH EDI
006B293F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B2942  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006B2949  85 FF                     TEST EDI,EDI
006B294B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B294E  0F 84 B7 06 00 00         JZ 0x006b300b
006B2954  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2957  8B 91 A0 01 00 00         MOV EDX,dword ptr [ECX + 0x1a0]
006B295D  3B C2                     CMP EAX,EDX
006B295F  0F 83 7D 06 00 00         JNC 0x006b2fe2
006B2965  8B 91 B0 01 00 00         MOV EDX,dword ptr [ECX + 0x1b0]
006B296B  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
006B296E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006B2971  8B 06                     MOV EAX,dword ptr [ESI]
006B2973  8B D0                     MOV EDX,EAX
006B2975  81 E2 00 C0 00 00         AND EDX,0xc000
006B297B  81 FA 00 80 00 00         CMP EDX,0x8000
006B2981  0F 85 5B 06 00 00         JNZ 0x006b2fe2
006B2987  A9 00 00 08 00            TEST EAX,0x80000
006B298C  74 0E                     JZ 0x006b299c
006B298E  8B 01                     MOV EAX,dword ptr [ECX]
006B2990  05 F0 04 00 00            ADD EAX,0x4f0
006B2995  50                        PUSH EAX
006B2996  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b299c:
006B299C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006B299F  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006B29A2  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006B29A5  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006B29A8  F7 C3 00 00 00 60         TEST EBX,0x60000000
006B29AE  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006B29B1  0F 84 42 01 00 00         JZ 0x006b2af9
006B29B7  F7 C3 00 00 00 40         TEST EBX,0x40000000
006B29BD  74 14                     JZ 0x006b29d3
006B29BF  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006B29C2  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006B29C5  89 85 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EAX
006B29CB  89 8D 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],ECX
006B29D1  EB 2C                     JMP 0x006b29ff
LAB_006b29d3:
006B29D3  8B 17                     MOV EDX,dword ptr [EDI]
006B29D5  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
006B29DB  50                        PUSH EAX
006B29DC  57                        PUSH EDI
006B29DD  C7 85 FC FE FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xfffffefc],0x7c
006B29E7  C7 85 00 FF FF FF 06 00 00 00  MOV dword ptr [EBP + 0xffffff00],0x6
006B29F1  FF 52 58                  CALL dword ptr [EDX + 0x58]
006B29F4  85 C0                     TEST EAX,EAX
006B29F6  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006B29F9  0F 85 8C 05 00 00         JNZ 0x006b2f8b
LAB_006b29ff:
006B29FF  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
006B2A05  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
006B2A08  8B 95 08 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff08]
006B2A0E  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006B2A11  8B 85 08 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff08]
006B2A17  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006B2A1A  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
006B2A20  33 D2                     XOR EDX,EDX
006B2A22  F7 75 14                  DIV dword ptr [EBP + 0x14]
006B2A25  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006B2A28  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006B2A2B  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
LAB_006b2a2e:
006B2A2E  F7 06 00 00 00 06         TEST dword ptr [ESI],0x6000000
006B2A34  74 75                     JZ 0x006b2aab
006B2A36  F7 C3 00 00 00 04         TEST EBX,0x4000000
006B2A3C  75 59                     JNZ 0x006b2a97
006B2A3E  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B2A44  85 C0                     TEST EAX,EAX
006B2A46  74 4F                     JZ 0x006b2a97
006B2A48  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B2A4E  33 FF                     XOR EDI,EDI
006B2A50  85 C0                     TEST EAX,EAX
006B2A52  7E 34                     JLE 0x006b2a88
LAB_006b2a54:
006B2A54  8B 96 D0 00 00 00         MOV EDX,dword ptr [ESI + 0xd0]
006B2A5A  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
006B2A5D  85 C0                     TEST EAX,EAX
006B2A5F  7C 1C                     JL 0x006b2a7d
006B2A61  50                        PUSH EAX
006B2A62  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B2A65  50                        PUSH EAX
006B2A66  E8 45 11 00 00            CALL 0x006b3bb0
006B2A6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B2A6E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2A71  8B 91 B0 01 00 00         MOV EDX,dword ptr [ECX + 0x1b0]
006B2A77  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
006B2A7A  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006b2a7d:
006B2A7D  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B2A83  47                        INC EDI
006B2A84  3B F8                     CMP EDI,EAX
006B2A86  7C CC                     JL 0x006b2a54
LAB_006b2a88:
006B2A88  8D 8E D0 00 00 00         LEA ECX,[ESI + 0xd0]
006B2A8E  51                        PUSH ECX
006B2A8F  E8 CC 85 FF FF            CALL 0x006ab060
006B2A94  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
LAB_006b2a97:
006B2A97  F7 06 00 00 00 02         TEST dword ptr [ESI],0x2000000
006B2A9D  74 0C                     JZ 0x006b2aab
006B2A9F  8B 96 CC 00 00 00         MOV EDX,dword ptr [ESI + 0xcc]
006B2AA5  52                        PUSH EDX
006B2AA6  E8 E5 33 FF FF            CALL 0x006a5e90
LAB_006b2aab:
006B2AAB  8B 06                     MOV EAX,dword ptr [ESI]
006B2AAD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B2AB0  33 C3                     XOR EAX,EBX
006B2AB2  25 FF FF FF 00            AND EAX,0xffffff
006B2AB7  33 C3                     XOR EAX,EBX
006B2AB9  89 06                     MOV dword ptr [ESI],EAX
006B2ABB  89 8E C8 00 00 00         MOV dword ptr [ESI + 0xc8],ECX
006B2AC1  F7 C3 00 00 00 01         TEST EBX,0x1000000
006B2AC7  89 BE CC 00 00 00         MOV dword ptr [ESI + 0xcc],EDI
006B2ACD  74 09                     JZ 0x006b2ad8
006B2ACF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B2AD2  89 96 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EDX
LAB_006b2ad8:
006B2AD8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B2ADB  85 C9                     TEST ECX,ECX
006B2ADD  0F 8E 71 04 00 00         JLE 0x006b2f54
006B2AE3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B2AE6  85 C0                     TEST EAX,EAX
006B2AE8  0F 8E 66 04 00 00         JLE 0x006b2f54
006B2AEE  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
006B2AF1  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006B2AF4  E9 61 04 00 00            JMP 0x006b2f5a
LAB_006b2af9:
006B2AF9  F7 C3 00 00 00 04         TEST EBX,0x4000000
006B2AFF  0F 84 29 FF FF FF         JZ 0x006b2a2e
006B2B05  83 7D 10 01               CMP dword ptr [EBP + 0x10],0x1
006B2B09  75 1B                     JNZ 0x006b2b26
006B2B0B  66 83 7F 04 00            CMP word ptr [EDI + 0x4],0x0
006B2B10  7C 14                     JL 0x006b2b26
006B2B12  81 E3 FF FF FF FB         AND EBX,0xfbffffff
006B2B18  81 CB 00 00 00 01         OR EBX,0x1000000
006B2B1E  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006B2B21  E9 08 FF FF FF            JMP 0x006b2a2e
LAB_006b2b26:
006B2B26  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006B2B2C  33 FF                     XOR EDI,EDI
006B2B2E  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006B2B34  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
006B2B3A  57                        PUSH EDI
006B2B3B  50                        PUSH EAX
006B2B3C  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006B2B3F  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006B2B42  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006B2B48  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B2B4E  E8 9D AC 07 00            CALL 0x0072d7f0
006B2B53  83 C4 08                  ADD ESP,0x8
006B2B56  3B C7                     CMP EAX,EDI
006B2B58  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B2B5B  0F 85 8B 03 00 00         JNZ 0x006b2eec
006B2B61  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006B2B64  F7 06 00 00 00 04         TEST dword ptr [ESI],0x4000000
006B2B6A  74 14                     JZ 0x006b2b80
006B2B6C  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
006B2B72  8B 96 C0 00 00 00         MOV EDX,dword ptr [ESI + 0xc0]
006B2B78  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006B2B7B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006B2B7E  EB 06                     JMP 0x006b2b86
LAB_006b2b80:
006B2B80  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006B2B83  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_006b2b86:
006B2B86  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2B89  33 FF                     XOR EDI,EDI
006B2B8B  85 C0                     TEST EAX,EAX
006B2B8D  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006B2B90  0F 8E 03 02 00 00         JLE 0x006b2d99
006B2B96  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B2B99  83 C0 06                  ADD EAX,0x6
006B2B9C  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006b2b9f:
006B2B9F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006B2BA2  0F BF 59 FE               MOVSX EBX,word ptr [ECX + -0x2]
006B2BA6  85 DB                     TEST EBX,EBX
006B2BA8  0F 8D A4 01 00 00         JGE 0x006b2d52
006B2BAE  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006B2BB1  85 C0                     TEST EAX,EAX
006B2BB3  75 28                     JNZ 0x006b2bdd
006B2BB5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B2BB8  8D 34 95 00 00 00 00      LEA ESI,[EDX*0x4 + 0x0]
006B2BBF  56                        PUSH ESI
006B2BC0  E8 AB 80 FF FF            CALL 0x006aac70
006B2BC5  8B CE                     MOV ECX,ESI
006B2BC7  8B F8                     MOV EDI,EAX
006B2BC9  8B D1                     MOV EDX,ECX
006B2BCB  83 C8 FF                  OR EAX,0xffffffff
006B2BCE  C1 E9 02                  SHR ECX,0x2
006B2BD1  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006B2BD4  F3 AB                     STOSD.REP ES:EDI
006B2BD6  8B CA                     MOV ECX,EDX
006B2BD8  83 E1 03                  AND ECX,0x3
006B2BDB  F3 AA                     STOSB.REP ES:EDI
LAB_006b2bdd:
006B2BDD  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B2BE0  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
006B2BE7  50                        PUSH EAX
006B2BE8  E8 83 80 FF FF            CALL 0x006aac70
006B2BED  85 F6                     TEST ESI,ESI
006B2BEF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B2BF2  7E 4E                     JLE 0x006b2c42
006B2BF4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006B2BF7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B2BFA  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
006B2BFD  8B C8                     MOV ECX,EAX
006B2BFF  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
006B2C02  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B2C05  D1 E7                     SHL EDI,0x1
006B2C07  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_006b2c0a:
006B2C0A  0F BF 46 FE               MOVSX EAX,word ptr [ESI + -0x2]
006B2C0E  3B C3                     CMP EAX,EBX
006B2C10  74 18                     JZ 0x006b2c2a
006B2C12  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B2C18  68 EF 04 00 00            PUSH 0x4ef
006B2C1D  68 C0 DA 7E 00            PUSH 0x7edac0
006B2C22  51                        PUSH ECX
006B2C23  6A FB                     PUSH -0x5
006B2C25  E8 16 32 FF FF            CALL 0x006a5e40
LAB_006b2c2a:
006B2C2A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006B2C2D  8B 16                     MOV EDX,dword ptr [ESI]
006B2C2F  03 F7                     ADD ESI,EDI
006B2C31  89 10                     MOV dword ptr [EAX],EDX
006B2C33  83 C0 04                  ADD EAX,0x4
006B2C36  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006B2C39  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006B2C3C  48                        DEC EAX
006B2C3D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B2C40  75 C8                     JNZ 0x006b2c0a
LAB_006b2c42:
006B2C42  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B2C45  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006B2C48  85 C0                     TEST EAX,EAX
006B2C4A  74 53                     JZ 0x006b2c9f
006B2C4C  3B 7D F0                  CMP EDI,dword ptr [EBP + -0x10]
006B2C4F  7D 4E                     JGE 0x006b2c9f
006B2C51  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B2C54  85 C0                     TEST EAX,EAX
006B2C56  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B2C59  7C 44                     JL 0x006b2c9f
006B2C5B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B2C5E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B2C61  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B2C64  6A 00                     PUSH 0x0
006B2C66  51                        PUSH ECX
006B2C67  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006B2C6A  52                        PUSH EDX
006B2C6B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B2C6E  68 00 00 00 0A            PUSH 0xa000000
006B2C73  51                        PUSH ECX
006B2C74  52                        PUSH EDX
006B2C75  6A 01                     PUSH 0x1
006B2C77  50                        PUSH EAX
006B2C78  56                        PUSH ESI
006B2C79  E8 B2 FC FF FF            CALL 0x006b2930
006B2C7E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B2C81  F7 DB                     NEG EBX
006B2C83  53                        PUSH EBX
006B2C84  50                        PUSH EAX
006B2C85  56                        PUSH ESI
006B2C86  E8 95 03 00 00            CALL 0x006b3020
006B2C8B  8B 8E B0 01 00 00         MOV ECX,dword ptr [ESI + 0x1b0]
006B2C91  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B2C94  8B 34 91                  MOV ESI,dword ptr [ECX + EDX*0x4]
006B2C97  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006B2C9A  E9 A1 00 00 00            JMP 0x006b2d40
LAB_006b2c9f:
006B2C9F  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B2CA2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B2CA5  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006B2CA8  6A 01                     PUSH 0x1
006B2CAA  6A 00                     PUSH 0x0
006B2CAC  50                        PUSH EAX
006B2CAD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B2CB0  51                        PUSH ECX
006B2CB1  68 00 00 00 0A            PUSH 0xa000000
006B2CB6  52                        PUSH EDX
006B2CB7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B2CBA  50                        PUSH EAX
006B2CBB  F7 DB                     NEG EBX
006B2CBD  8D 4D F8                  LEA ECX,[EBP + -0x8]
006B2CC0  53                        PUSH EBX
006B2CC1  51                        PUSH ECX
006B2CC2  52                        PUSH EDX
006B2CC3  E8 88 F0 FF FF            CALL 0x006b1d50
006B2CC8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B2CCB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B2CCE  8B 88 B0 01 00 00         MOV ECX,dword ptr [EAX + 0x1b0]
006B2CD4  8B 34 91                  MOV ESI,dword ptr [ECX + EDX*0x4]
006B2CD7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006B2CDA  8B 06                     MOV EAX,dword ptr [ESI]
006B2CDC  F6 C4 10                  TEST AH,0x10
006B2CDF  74 15                     JZ 0x006b2cf6
006B2CE1  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
006B2CE4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B2CE7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B2CEA  50                        PUSH EAX
006B2CEB  6A 01                     PUSH 0x1
006B2CED  51                        PUSH ECX
006B2CEE  52                        PUSH EDX
006B2CEF  E8 9C F8 FF FF            CALL 0x006b2590
006B2CF4  EB 21                     JMP 0x006b2d17
LAB_006b2cf6:
006B2CF6  F6 C4 20                  TEST AH,0x20
006B2CF9  74 1C                     JZ 0x006b2d17
006B2CFB  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
006B2CFE  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
006B2D01  C1 E8 08                  SHR EAX,0x8
006B2D04  51                        PUSH ECX
006B2D05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B2D08  83 E0 01                  AND EAX,0x1
006B2D0B  52                        PUSH EDX
006B2D0C  50                        PUSH EAX
006B2D0D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B2D10  50                        PUSH EAX
006B2D11  51                        PUSH ECX
006B2D12  E8 49 F8 FF FF            CALL 0x006b2560
LAB_006b2d17:
006B2D17  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
006B2D1A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B2D1D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006B2D20  52                        PUSH EDX
006B2D21  50                        PUSH EAX
006B2D22  53                        PUSH EBX
006B2D23  E8 E8 ED FF FF            CALL 0x006b1b10
006B2D28  8B 8E BC 00 00 00         MOV ECX,dword ptr [ESI + 0xbc]
006B2D2E  8B 96 B8 00 00 00         MOV EDX,dword ptr [ESI + 0xb8]
006B2D34  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B2D37  51                        PUSH ECX
006B2D38  52                        PUSH EDX
006B2D39  50                        PUSH EAX
006B2D3A  53                        PUSH EBX
006B2D3B  E8 D0 F9 FF FF            CALL 0x006b2710
LAB_006b2d40:
006B2D40  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006B2D43  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B2D46  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006B2D4D  89 0C BA                  MOV dword ptr [EDX + EDI*0x4],ECX
006B2D50  EB 2F                     JMP 0x006b2d81
LAB_006b2d52:
006B2D52  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B2D55  85 C0                     TEST EAX,EAX
006B2D57  74 28                     JZ 0x006b2d81
006B2D59  3B 7D F0                  CMP EDI,dword ptr [EBP + -0x10]
006B2D5C  7D 23                     JGE 0x006b2d81
006B2D5E  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B2D61  85 C0                     TEST EAX,EAX
006B2D63  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B2D66  7C 19                     JL 0x006b2d81
006B2D68  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B2D6B  50                        PUSH EAX
006B2D6C  56                        PUSH ESI
006B2D6D  E8 3E 0E 00 00            CALL 0x006b3bb0
006B2D72  8B 86 B0 01 00 00         MOV EAX,dword ptr [ESI + 0x1b0]
006B2D78  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B2D7B  8B 34 88                  MOV ESI,dword ptr [EAX + ECX*0x4]
006B2D7E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006b2d81:
006B2D81  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006B2D84  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2D87  47                        INC EDI
006B2D88  83 C1 0A                  ADD ECX,0xa
006B2D8B  3B F8                     CMP EDI,EAX
006B2D8D  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006B2D90  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006B2D93  0F 8C 06 FE FF FF         JL 0x006b2b9f
LAB_006b2d99:
006B2D99  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006B2D9C  85 DB                     TEST EBX,EBX
006B2D9E  74 36                     JZ 0x006b2dd6
006B2DA0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B2DA3  3B F8                     CMP EDI,EAX
006B2DA5  7D 1D                     JGE 0x006b2dc4
006B2DA7  2B C7                     SUB EAX,EDI
006B2DA9  8D 34 BB                  LEA ESI,[EBX + EDI*0x4]
006B2DAC  8B F8                     MOV EDI,EAX
LAB_006b2dae:
006B2DAE  8B 06                     MOV EAX,dword ptr [ESI]
006B2DB0  85 C0                     TEST EAX,EAX
006B2DB2  7C 0A                     JL 0x006b2dbe
006B2DB4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B2DB7  50                        PUSH EAX
006B2DB8  52                        PUSH EDX
006B2DB9  E8 F2 0D 00 00            CALL 0x006b3bb0
LAB_006b2dbe:
006B2DBE  83 C6 04                  ADD ESI,0x4
006B2DC1  4F                        DEC EDI
006B2DC2  75 EA                     JNZ 0x006b2dae
LAB_006b2dc4:
006B2DC4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B2DC7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B2DCA  8B 88 B0 01 00 00         MOV ECX,dword ptr [EAX + 0x1b0]
006B2DD0  8B 34 91                  MOV ESI,dword ptr [ECX + EDX*0x4]
006B2DD3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006b2dd6:
006B2DD6  53                        PUSH EBX
006B2DD7  E8 B4 30 FF FF            CALL 0x006a5e90
006B2DDC  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006B2DDF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B2DE2  89 86 D0 00 00 00         MOV dword ptr [ESI + 0xd0],EAX
006B2DE8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B2DEB  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006B2DF1  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006B2DF4  85 C0                     TEST EAX,EAX
006B2DF6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B2DFC  0F 8E D6 00 00 00         JLE 0x006b2ed8
006B2E02  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B2E05  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B2E08  8B C2                     MOV EAX,EDX
006B2E0A  8D 4B FF                  LEA ECX,[EBX + -0x1]
LAB_006b2e0d:
006B2E0D  85 C9                     TEST ECX,ECX
006B2E0F  0F 8E AD 00 00 00         JLE 0x006b2ec2
006B2E15  BF 01 00 00 00            MOV EDI,0x1
006B2E1A  83 C0 04                  ADD EAX,0x4
006B2E1D  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006B2E20  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006b2e23:
006B2E23  66 83 38 00               CMP word ptr [EAX],0x0
006B2E27  7C 7E                     JL 0x006b2ea7
006B2E29  3B FB                     CMP EDI,EBX
006B2E2B  7D 7A                     JGE 0x006b2ea7
006B2E2D  8B CB                     MOV ECX,EBX
006B2E2F  8D 50 0A                  LEA EDX,[EAX + 0xa]
006B2E32  2B CF                     SUB ECX,EDI
006B2E34  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_006b2e37:
006B2E37  66 8B 0A                  MOV CX,word ptr [EDX]
006B2E3A  66 85 C9                  TEST CX,CX
006B2E3D  7C 5C                     JL 0x006b2e9b
006B2E3F  83 78 02 00               CMP dword ptr [EAX + 0x2],0x0
006B2E43  74 0B                     JZ 0x006b2e50
006B2E45  83 7A 02 00               CMP dword ptr [EDX + 0x2],0x0
006B2E49  74 50                     JZ 0x006b2e9b
006B2E4B  66 39 08                  CMP word ptr [EAX],CX
006B2E4E  7D 4B                     JGE 0x006b2e9b
LAB_006b2e50:
006B2E50  83 C0 FC                  ADD EAX,-0x4
006B2E53  8B C8                     MOV ECX,EAX
006B2E55  8B 39                     MOV EDI,dword ptr [ECX]
006B2E57  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
006B2E5A  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
006B2E5D  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
006B2E60  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
006B2E64  66 89 4D CC               MOV word ptr [EBP + -0x34],CX
006B2E68  8D 4A FC                  LEA ECX,[EDX + -0x4]
006B2E6B  8B F9                     MOV EDI,ECX
006B2E6D  8B 1F                     MOV EBX,dword ptr [EDI]
006B2E6F  89 18                     MOV dword ptr [EAX],EBX
006B2E71  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
006B2E74  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
006B2E77  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B2E7A  66 8B 7F 08               MOV DI,word ptr [EDI + 0x8]
006B2E7E  66 89 78 08               MOV word ptr [EAX + 0x8],DI
006B2E82  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006B2E85  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006B2E88  89 01                     MOV dword ptr [ECX],EAX
006B2E8A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006B2E8D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006B2E90  66 8B 45 CC               MOV AX,word ptr [EBP + -0x34]
006B2E94  66 89 41 08               MOV word ptr [ECX + 0x8],AX
006B2E98  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_006b2e9b:
006B2E9B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006B2E9E  83 C2 0A                  ADD EDX,0xa
006B2EA1  49                        DEC ECX
006B2EA2  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B2EA5  75 90                     JNZ 0x006b2e37
LAB_006b2ea7:
006B2EA7  47                        INC EDI
006B2EA8  8D 4B FF                  LEA ECX,[EBX + -0x1]
006B2EAB  83 C0 0A                  ADD EAX,0xa
006B2EAE  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006B2EB1  8D 57 FF                  LEA EDX,[EDI + -0x1]
006B2EB4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006B2EB7  3B D1                     CMP EDX,ECX
006B2EB9  0F 8C 64 FF FF FF         JL 0x006b2e23
006B2EBF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_006b2ec2:
006B2EC2  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
006B2EC5  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006B2EC8  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B2ECB  4A                        DEC EDX
006B2ECC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B2ECF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006B2ED2  0F 85 35 FF FF FF         JNZ 0x006b2e0d
LAB_006b2ed8:
006B2ED8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2EDB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006B2EDE  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B2EE1  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
006B2EE7  E9 42 FB FF FF            JMP 0x006b2a2e
LAB_006b2eec:
006B2EEC  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006B2EEF  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006B2EF5  52                        PUSH EDX
006B2EF6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B2EFC  E8 8F 2F FF FF            CALL 0x006a5e90
006B2F01  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006B2F04  85 FF                     TEST EDI,EDI
006B2F06  74 41                     JZ 0x006b2f49
006B2F08  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2F0B  85 C0                     TEST EAX,EAX
006B2F0D  7E 1A                     JLE 0x006b2f29
006B2F0F  8B F7                     MOV ESI,EDI
006B2F11  8B D8                     MOV EBX,EAX
LAB_006b2f13:
006B2F13  8B 06                     MOV EAX,dword ptr [ESI]
006B2F15  85 C0                     TEST EAX,EAX
006B2F17  7C 0A                     JL 0x006b2f23
006B2F19  50                        PUSH EAX
006B2F1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B2F1D  50                        PUSH EAX
006B2F1E  E8 8D 0C 00 00            CALL 0x006b3bb0
LAB_006b2f23:
006B2F23  83 C6 04                  ADD ESI,0x4
006B2F26  4B                        DEC EBX
006B2F27  75 EA                     JNZ 0x006b2f13
LAB_006b2f29:
006B2F29  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B2F2C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2F2F  57                        PUSH EDI
006B2F30  8B 91 B0 01 00 00         MOV EDX,dword ptr [ECX + 0x1b0]
006B2F36  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
006B2F39  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006B2F3C  E8 4F 2F FF FF            CALL 0x006a5e90
006B2F41  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006B2F44  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006B2F47  EB 42                     JMP 0x006b2f8b
LAB_006b2f49:
006B2F49  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006B2F4C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006B2F4F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006B2F52  EB 37                     JMP 0x006b2f8b
LAB_006b2f54:
006B2F54  56                        PUSH ESI
006B2F55  E8 86 CC 01 00            CALL 0x006cfbe0
LAB_006b2f5a:
006B2F5A  F6 06 20                  TEST byte ptr [ESI],0x20
006B2F5D  74 21                     JZ 0x006b2f80
006B2F5F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006B2F62  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006B2F65  8B 96 C4 00 00 00         MOV EDX,dword ptr [ESI + 0xc4]
006B2F6B  50                        PUSH EAX
006B2F6C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2F6F  51                        PUSH ECX
006B2F70  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B2F73  52                        PUSH EDX
006B2F74  50                        PUSH EAX
006B2F75  51                        PUSH ECX
006B2F76  E8 C5 06 00 00            CALL 0x006b3640
006B2F7B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006B2F7E  EB 0B                     JMP 0x006b2f8b
LAB_006b2f80:
006B2F80  33 C0                     XOR EAX,EAX
006B2F82  89 86 C4 00 00 00         MOV dword ptr [ESI + 0xc4],EAX
006B2F88  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
LAB_006b2f8b:
006B2F8B  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B2F91  74 4F                     JZ 0x006b2fe2
006B2F93  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006B2F96  85 C0                     TEST EAX,EAX
006B2F98  75 25                     JNZ 0x006b2fbf
006B2F9A  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006B2F9D  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006B2FA0  0F AF 46 38               IMUL EAX,dword ptr [ESI + 0x38]
006B2FA4  0F AF 4D C0               IMUL ECX,dword ptr [EBP + -0x40]
006B2FA8  3B C8                     CMP ECX,EAX
006B2FAA  7D 13                     JGE 0x006b2fbf
006B2FAC  8B 96 C0 00 00 00         MOV EDX,dword ptr [ESI + 0xc0]
006B2FB2  50                        PUSH EAX
006B2FB3  52                        PUSH EDX
006B2FB4  E8 97 CB 00 00            CALL 0x006bfb50
006B2FB9  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
LAB_006b2fbf:
006B2FBF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B2FC2  8B 08                     MOV ECX,dword ptr [EAX]
006B2FC4  81 C1 F0 04 00 00         ADD ECX,0x4f0
006B2FCA  51                        PUSH ECX
006B2FCB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006B2FD1  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B2FD7  85 C0                     TEST EAX,EAX
006B2FD9  75 07                     JNZ 0x006b2fe2
006B2FDB  C7 45 DC FE FF FF FF      MOV dword ptr [EBP + -0x24],0xfffffffe
LAB_006b2fe2:
006B2FE2  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
006B2FE5  85 F6                     TEST ESI,ESI
006B2FE7  74 22                     JZ 0x006b300b
006B2FE9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B2FEF  68 78 05 00 00            PUSH 0x578
006B2FF4  68 C0 DA 7E 00            PUSH 0x7edac0
006B2FF9  52                        PUSH EDX
006B2FFA  56                        PUSH ESI
006B2FFB  E8 40 2E FF FF            CALL 0x006a5e40
006B3000  8B C6                     MOV EAX,ESI
006B3002  5F                        POP EDI
006B3003  5E                        POP ESI
006B3004  5B                        POP EBX
006B3005  8B E5                     MOV ESP,EBP
006B3007  5D                        POP EBP
006B3008  C2 24 00                  RET 0x24
LAB_006b300b:
006B300B  5F                        POP EDI
006B300C  5E                        POP ESI
006B300D  33 C0                     XOR EAX,EAX
006B300F  5B                        POP EBX
006B3010  8B E5                     MOV ESP,EBP
006B3012  5D                        POP EBP
006B3013  C2 24 00                  RET 0x24
