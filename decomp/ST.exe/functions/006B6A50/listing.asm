FUN_006b6a50:
006B6A50  55                        PUSH EBP
006B6A51  8B EC                     MOV EBP,ESP
006B6A53  6A FF                     PUSH -0x1
006B6A55  68 F8 D8 79 00            PUSH 0x79d8f8
006B6A5A  68 64 D9 72 00            PUSH 0x72d964
006B6A5F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B6A65  50                        PUSH EAX
006B6A66  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B6A6D  81 EC C4 00 00 00         SUB ESP,0xc4
006B6A73  53                        PUSH EBX
006B6A74  56                        PUSH ESI
006B6A75  57                        PUSH EDI
006B6A76  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B6A79  33 FF                     XOR EDI,EDI
006B6A7B  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
006B6A7E  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006B6A81  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B6A84  89 38                     MOV dword ptr [EAX],EDI
006B6A86  6A 54                     PUSH 0x54
006B6A88  E8 83 41 FF FF            CALL 0x006aac10
006B6A8D  8B D8                     MOV EBX,EAX
006B6A8F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006B6A92  3B DF                     CMP EBX,EDI
006B6A94  75 0A                     JNZ 0x006b6aa0
006B6A96  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B6A9B  E9 89 02 00 00            JMP 0x006b6d29
LAB_006b6aa0:
006B6AA0  C7 43 38 FF FF FF FF      MOV dword ptr [EBX + 0x38],0xffffffff
006B6AA7  57                        PUSH EDI
006B6AA8  FF 15 D0 C0 85 00         CALL dword ptr [0x0085c0d0]
006B6AAE  8B F0                     MOV ESI,EAX
006B6AB0  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6AB3  3B F7                     CMP ESI,EDI
006B6AB5  0F 8C 1C 02 00 00         JL 0x006b6cd7
006B6ABB  53                        PUSH EBX
006B6ABC  68 C8 EC 79 00            PUSH 0x79ecc8
006B6AC1  6A 01                     PUSH 0x1
006B6AC3  57                        PUSH EDI
006B6AC4  68 B8 EC 79 00            PUSH 0x79ecb8
006B6AC9  FF 15 E4 C0 85 00         CALL dword ptr [0x0085c0e4]
006B6ACF  8B F0                     MOV ESI,EAX
006B6AD1  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6AD4  3B F7                     CMP ESI,EDI
006B6AD6  0F 8C FB 01 00 00         JL 0x006b6cd7
006B6ADC  39 3B                     CMP dword ptr [EBX],EDI
006B6ADE  0F 84 F3 01 00 00         JZ 0x006b6cd7
006B6AE4  57                        PUSH EDI
006B6AE5  57                        PUSH EDI
006B6AE6  57                        PUSH EDI
006B6AE7  8D 4D 88                  LEA ECX,[EBP + -0x78]
006B6AEA  51                        PUSH ECX
006B6AEB  57                        PUSH EDI
006B6AEC  E8 CD 6B 07 00            CALL 0x0072d6be
006B6AF1  8B F0                     MOV ESI,EAX
006B6AF3  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6AF6  3B F7                     CMP ESI,EDI
006B6AF8  0F 8C D9 01 00 00         JL 0x006b6cd7
006B6AFE  39 7D 88                  CMP dword ptr [EBP + -0x78],EDI
006B6B01  0F 84 D0 01 00 00         JZ 0x006b6cd7
006B6B07  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B6B0A  52                        PUSH EDX
006B6B0B  E8 BA 6B 07 00            CALL 0x0072d6ca
006B6B10  8D 55 8C                  LEA EDX,[EBP + -0x74]
006B6B13  8B F8                     MOV EDI,EAX
006B6B15  83 C9 FF                  OR ECX,0xffffffff
006B6B18  33 C0                     XOR EAX,EAX
006B6B1A  F2 AE                     SCASB.REPNE ES:EDI
006B6B1C  F7 D1                     NOT ECX
006B6B1E  2B F9                     SUB EDI,ECX
006B6B20  8B C1                     MOV EAX,ECX
006B6B22  8B F7                     MOV ESI,EDI
006B6B24  8B FA                     MOV EDI,EDX
006B6B26  C1 E9 02                  SHR ECX,0x2
006B6B29  F3 A5                     MOVSD.REP ES:EDI,ESI
006B6B2B  8B C8                     MOV ECX,EAX
006B6B2D  83 E1 03                  AND ECX,0x3
006B6B30  F3 A4                     MOVSB.REP ES:EDI,ESI
006B6B32  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006B6B39  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006B6B3C  8B 32                     MOV ESI,dword ptr [EDX]
006B6B3E  8D 4D E0                  LEA ECX,[EBP + -0x20]
006B6B41  51                        PUSH ECX
006B6B42  6A 00                     PUSH 0x0
006B6B44  8D 7D 8C                  LEA EDI,[EBP + -0x74]
006B6B47  83 C9 FF                  OR ECX,0xffffffff
006B6B4A  33 C0                     XOR EAX,EAX
006B6B4C  F2 AE                     SCASB.REPNE ES:EDI
006B6B4E  F7 D1                     NOT ECX
006B6B50  51                        PUSH ECX
006B6B51  8D 45 8C                  LEA EAX,[EBP + -0x74]
006B6B54  50                        PUSH EAX
006B6B55  68 38 EB 79 00            PUSH 0x79eb38
006B6B5A  68 98 EC 79 00            PUSH 0x79ec98
006B6B5F  52                        PUSH EDX
006B6B60  FF 56 10                  CALL dword ptr [ESI + 0x10]
006B6B63  8B F0                     MOV ESI,EAX
006B6B65  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6B68  81 FE 1E 00 77 88         CMP ESI,0x8877001e
006B6B6E  74 15                     JZ 0x006b6b85
006B6B70  85 F6                     TEST ESI,ESI
006B6B72  0F 85 5F 01 00 00         JNZ 0x006b6cd7
006B6B78  BE 03 FF FF FF            MOV ESI,0xffffff03
006B6B7D  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6B80  E9 52 01 00 00            JMP 0x006b6cd7
LAB_006b6b85:
006B6B85  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B6B8C  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006B6B8F  8B C7                     MOV EAX,EDI
006B6B91  83 C0 03                  ADD EAX,0x3
006B6B94  24 FC                     AND AL,0xfc
006B6B96  E8 A5 6E 07 00            CALL 0x0072da40
006B6B9B  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B6B9E  8B F4                     MOV ESI,ESP
006B6BA0  89 B5 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ESI
006B6BA6  8B CF                     MOV ECX,EDI
006B6BA8  33 C0                     XOR EAX,EAX
006B6BAA  8B FE                     MOV EDI,ESI
006B6BAC  8B D1                     MOV EDX,ECX
006B6BAE  C1 E9 02                  SHR ECX,0x2
006B6BB1  F3 AB                     STOSD.REP ES:EDI
006B6BB3  8B CA                     MOV ECX,EDX
006B6BB5  83 E1 03                  AND ECX,0x3
006B6BB8  F3 AA                     STOSB.REP ES:EDI
006B6BBA  83 C9 FF                  OR ECX,0xffffffff
006B6BBD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B6BC0  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006B6BC3  8B 02                     MOV EAX,dword ptr [EDX]
006B6BC5  8D 7D E0                  LEA EDI,[EBP + -0x20]
006B6BC8  57                        PUSH EDI
006B6BC9  56                        PUSH ESI
006B6BCA  8D 7D 8C                  LEA EDI,[EBP + -0x74]
006B6BCD  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
006B6BD3  33 C0                     XOR EAX,EAX
006B6BD5  F2 AE                     SCASB.REPNE ES:EDI
006B6BD7  F7 D1                     NOT ECX
006B6BD9  51                        PUSH ECX
006B6BDA  8D 45 8C                  LEA EAX,[EBP + -0x74]
006B6BDD  50                        PUSH EAX
006B6BDE  68 38 EB 79 00            PUSH 0x79eb38
006B6BE3  68 98 EC 79 00            PUSH 0x79ec98
006B6BE8  52                        PUSH EDX
006B6BE9  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
006B6BEF  FF 51 10                  CALL dword ptr [ECX + 0x10]
006B6BF2  8B F0                     MOV ESI,EAX
006B6BF4  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6BF7  85 F6                     TEST ESI,ESI
006B6BF9  0F 85 D8 00 00 00         JNZ 0x006b6cd7
006B6BFF  8B 03                     MOV EAX,dword ptr [EBX]
006B6C01  8B 10                     MOV EDX,dword ptr [EAX]
006B6C03  56                        PUSH ESI
006B6C04  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006B6C0A  51                        PUSH ECX
006B6C0B  50                        PUSH EAX
006B6C0C  FF 92 98 00 00 00         CALL dword ptr [EDX + 0x98]
006B6C12  8B F0                     MOV ESI,EAX
006B6C14  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6C17  85 F6                     TEST ESI,ESI
006B6C19  0F 85 B8 00 00 00         JNZ 0x006b6cd7
006B6C1F  C7 43 28 02 00 00 00      MOV dword ptr [EBX + 0x28],0x2
006B6C26  8D 53 08                  LEA EDX,[EBX + 0x8]
006B6C29  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B6C2C  8B 08                     MOV ECX,dword ptr [EAX]
006B6C2E  89 0A                     MOV dword ptr [EDX],ECX
006B6C30  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B6C33  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006B6C36  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006B6C39  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006B6C3C  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006B6C3F  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
006B6C42  53                        PUSH EBX
006B6C43  E8 68 F8 FF FF            CALL 0x006b64b0
006B6C48  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006B6C4E  89 8D 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ECX
006B6C54  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
006B6C5A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B6C60  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
006B6C66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B6C69  51                        PUSH ECX
006B6C6A  68 21 DA 72 00            PUSH 0x72da21
006B6C6F  6A 02                     PUSH 0x2
006B6C71  50                        PUSH EAX
006B6C72  E8 79 6B 07 00            CALL 0x0072d7f0
006B6C77  83 C4 10                  ADD ESP,0x10
006B6C7A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B6C7D  85 C0                     TEST EAX,EAX
006B6C7F  75 28                     JNZ 0x006b6ca9
006B6C81  8D 55 DC                  LEA EDX,[EBP + -0x24]
006B6C84  52                        PUSH EDX
006B6C85  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006B6C88  53                        PUSH EBX
006B6C89  E8 62 F9 FF FF            CALL 0x006b65f0
006B6C8E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B6C91  50                        PUSH EAX
006B6C92  53                        PUSH EBX
006B6C93  E8 48 FC FF FF            CALL 0x006b68e0
006B6C98  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
006B6C9E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B6CA4  8B 75 84                  MOV ESI,dword ptr [EBP + -0x7c]
006B6CA7  EB 2E                     JMP 0x006b6cd7
LAB_006b6ca9:
006B6CA9  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
006B6CAF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B6CB5  8B F0                     MOV ESI,EAX
006B6CB7  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006B6CBA  EB 18                     JMP 0x006b6cd4
LAB_006b6cd4:
006B6CD4  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_006b6cd7:
006B6CD7  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006B6CDA  85 C0                     TEST EAX,EAX
006B6CDC  74 0D                     JZ 0x006b6ceb
006B6CDE  8B 08                     MOV ECX,dword ptr [EAX]
006B6CE0  50                        PUSH EAX
006B6CE1  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B6CE4  C7 45 88 00 00 00 00      MOV dword ptr [EBP + -0x78],0x0
LAB_006b6ceb:
006B6CEB  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006B6CEE  52                        PUSH EDX
006B6CEF  E8 1C F4 FF FF            CALL 0x006b6110
006B6CF4  85 F6                     TEST ESI,ESI
006B6CF6  74 2A                     JZ 0x006b6d22
006B6CF8  53                        PUSH EBX
006B6CF9  E8 42 0A 00 00            CALL 0x006b7740
006B6CFE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B6D01  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006B6D07  68 A8 02 00 00            PUSH 0x2a8
006B6D0C  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6D11  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6D17  51                        PUSH ECX
006B6D18  56                        PUSH ESI
006B6D19  E8 22 F1 FE FF            CALL 0x006a5e40
006B6D1E  8B C6                     MOV EAX,ESI
006B6D20  EB 07                     JMP 0x006b6d29
LAB_006b6d22:
006B6D22  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B6D25  89 1A                     MOV dword ptr [EDX],EBX
006B6D27  33 C0                     XOR EAX,EAX
LAB_006b6d29:
006B6D29  8D A5 20 FF FF FF         LEA ESP,[EBP + 0xffffff20]
006B6D2F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B6D32  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B6D39  5F                        POP EDI
006B6D3A  5E                        POP ESI
006B6D3B  5B                        POP EBX
006B6D3C  8B E5                     MOV ESP,EBP
006B6D3E  5D                        POP EBP
006B6D3F  C2 10 00                  RET 0x10
