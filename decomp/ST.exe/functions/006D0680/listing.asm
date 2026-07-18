FUN_006d0680:
006D0680  55                        PUSH EBP
006D0681  8B EC                     MOV EBP,ESP
006D0683  83 EC 20                  SUB ESP,0x20
006D0686  53                        PUSH EBX
006D0687  56                        PUSH ESI
006D0688  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D068B  33 DB                     XOR EBX,EBX
006D068D  57                        PUSH EDI
006D068E  39 5E 08                  CMP dword ptr [ESI + 0x8],EBX
006D0691  0F 8E 23 01 00 00         JLE 0x006d07ba
006D0697  39 5E 0C                  CMP dword ptr [ESI + 0xc],EBX
006D069A  0F 8E 1A 01 00 00         JLE 0x006d07ba
006D06A0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D06A3  33 C0                     XOR EAX,EAX
006D06A5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006D06A8  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006D06AB  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006D06AE  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
006D06B2  0F AF C2                  IMUL EAX,EDX
006D06B5  83 C0 1F                  ADD EAX,0x1f
006D06B8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D06BB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D06BE  C1 E8 03                  SHR EAX,0x3
006D06C1  25 FC FF FF 1F            AND EAX,0x1ffffffc
006D06C6  89 02                     MOV dword ptr [EDX],EAX
006D06C8  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006D06CB  3B CB                     CMP ECX,EBX
006D06CD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D06D0  7D 09                     JGE 0x006d06db
006D06D2  F7 D9                     NEG ECX
006D06D4  F7 D8                     NEG EAX
006D06D6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D06D9  89 02                     MOV dword ptr [EDX],EAX
LAB_006d06db:
006D06DB  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D06DE  8D 45 F0                  LEA EAX,[EBP + -0x10]
006D06E1  50                        PUSH EAX
006D06E2  8B D7                     MOV EDX,EDI
006D06E4  8D 4D E0                  LEA ECX,[EBP + -0x20]
006D06E7  E8 74 FD FD FF            CALL 0x006b0460
006D06EC  85 C0                     TEST EAX,EAX
006D06EE  0F 84 C6 00 00 00         JZ 0x006d07ba
006D06F4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D06F7  8B 17                     MOV EDX,dword ptr [EDI]
006D06F9  8B C8                     MOV ECX,EAX
006D06FB  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006D06FE  2B CA                     SUB ECX,EDX
006D0700  8B 16                     MOV EDX,dword ptr [ESI]
006D0702  03 D1                     ADD EDX,ECX
006D0704  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D0707  89 16                     MOV dword ptr [ESI],EDX
006D0709  8B D1                     MOV EDX,ECX
006D070B  2B 57 04                  SUB EDX,dword ptr [EDI + 0x4]
006D070E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006D0711  01 56 04                  ADD dword ptr [ESI + 0x4],EDX
006D0714  8B D7                     MOV EDX,EDI
006D0716  89 02                     MOV dword ptr [EDX],EAX
006D0718  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006D071B  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006D071E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D0721  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
006D0724  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006D0727  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006D072A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D072D  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006D0730  33 C0                     XOR EAX,EAX
006D0732  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006D0735  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
006D0739  0F AF C2                  IMUL EAX,EDX
006D073C  83 C0 1F                  ADD EAX,0x1f
006D073F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D0742  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D0745  C1 E8 03                  SHR EAX,0x3
006D0748  25 FC FF FF 1F            AND EAX,0x1ffffffc
006D074D  89 02                     MOV dword ptr [EDX],EAX
006D074F  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006D0752  3B CB                     CMP ECX,EBX
006D0754  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D0757  7D 09                     JGE 0x006d0762
006D0759  F7 D9                     NEG ECX
006D075B  F7 D8                     NEG EAX
006D075D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D0760  89 02                     MOV dword ptr [EDX],EAX
LAB_006d0762:
006D0762  8D 45 F0                  LEA EAX,[EBP + -0x10]
006D0765  8B D6                     MOV EDX,ESI
006D0767  50                        PUSH EAX
006D0768  8D 4D E0                  LEA ECX,[EBP + -0x20]
006D076B  E8 F0 FC FD FF            CALL 0x006b0460
006D0770  85 C0                     TEST EAX,EAX
006D0772  74 46                     JZ 0x006d07ba
006D0774  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D0777  8B 1E                     MOV EBX,dword ptr [ESI]
006D0779  8B 17                     MOV EDX,dword ptr [EDI]
006D077B  8B C8                     MOV ECX,EAX
006D077D  2B CB                     SUB ECX,EBX
006D077F  03 D1                     ADD EDX,ECX
006D0781  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D0784  89 17                     MOV dword ptr [EDI],EDX
006D0786  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
006D0789  8B D1                     MOV EDX,ECX
006D078B  2B D3                     SUB EDX,EBX
006D078D  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
006D0790  03 DA                     ADD EBX,EDX
006D0792  89 5F 04                  MOV dword ptr [EDI + 0x4],EBX
006D0795  89 06                     MOV dword ptr [ESI],EAX
006D0797  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006D079A  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006D079D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D07A0  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006D07A3  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006D07A6  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
006D07A9  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
006D07AC  5F                        POP EDI
006D07AD  5E                        POP ESI
006D07AE  B8 01 00 00 00            MOV EAX,0x1
006D07B3  5B                        POP EBX
006D07B4  8B E5                     MOV ESP,EBP
006D07B6  5D                        POP EBP
006D07B7  C2 18 00                  RET 0x18
LAB_006d07ba:
006D07BA  5F                        POP EDI
006D07BB  5E                        POP ESI
006D07BC  33 C0                     XOR EAX,EAX
006D07BE  5B                        POP EBX
006D07BF  8B E5                     MOV ESP,EBP
006D07C1  5D                        POP EBP
006D07C2  C2 18 00                  RET 0x18
