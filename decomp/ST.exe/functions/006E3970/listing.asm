FUN_006e3970:
006E3970  55                        PUSH EBP
006E3971  8B EC                     MOV EBP,ESP
006E3973  83 EC 50                  SUB ESP,0x50
006E3976  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E397B  53                        PUSH EBX
006E397C  56                        PUSH ESI
006E397D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E3980  57                        PUSH EDI
006E3981  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006E3984  8D 4D B0                  LEA ECX,[EBP + -0x50]
006E3987  6A 00                     PUSH 0x0
006E3989  52                        PUSH EDX
006E398A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E398D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3993  E8 58 9E 04 00            CALL 0x0072d7f0
006E3998  8B F0                     MOV ESI,EAX
006E399A  83 C4 08                  ADD ESP,0x8
006E399D  85 F6                     TEST ESI,ESI
006E399F  75 7B                     JNZ 0x006e3a1c
006E39A1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006E39A4  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E39A7  50                        PUSH EAX
006E39A8  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E39AB  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006E39AE  4E                        DEC ESI
006E39AF  8B D6                     MOV EDX,ESI
006E39B1  E8 BA 92 FC FF            CALL 0x006acc70
006E39B6  85 C0                     TEST EAX,EAX
006E39B8  7C 50                     JL 0x006e3a0a
006E39BA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006e39bd:
006E39BD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E39C0  39 59 08                  CMP dword ptr [ECX + 0x8],EBX
006E39C3  75 32                     JNZ 0x006e39f7
006E39C5  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
006E39C8  56                        PUSH ESI
006E39C9  52                        PUSH EDX
006E39CA  E8 A1 D2 FC FF            CALL 0x006b0c70
006E39CF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E39D2  50                        PUSH EAX
006E39D3  E8 B2 23 D2 FF            CALL 0x00405d8a
006E39D8  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
006E39DB  83 C4 04                  ADD ESP,0x4
006E39DE  85 C0                     TEST EAX,EAX
006E39E0  74 15                     JZ 0x006e39f7
LAB_006e39e2:
006E39E2  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E39E5  3B F1                     CMP ESI,ECX
006E39E7  77 08                     JA 0x006e39f1
006E39E9  85 C9                     TEST ECX,ECX
006E39EB  76 04                     JBE 0x006e39f1
006E39ED  49                        DEC ECX
006E39EE  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_006e39f1:
006E39F1  8B 00                     MOV EAX,dword ptr [EAX]
006E39F3  85 C0                     TEST EAX,EAX
006E39F5  75 EB                     JNZ 0x006e39e2
LAB_006e39f7:
006E39F7  8D 4D F4                  LEA ECX,[EBP + -0xc]
006E39FA  4E                        DEC ESI
006E39FB  51                        PUSH ECX
006E39FC  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E39FF  8B D6                     MOV EDX,ESI
006E3A01  E8 6A 92 FC FF            CALL 0x006acc70
006E3A06  85 C0                     TEST EAX,EAX
006E3A08  7D B3                     JGE 0x006e39bd
LAB_006e3a0a:
006E3A0A  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006E3A0D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E3A13  5F                        POP EDI
006E3A14  5E                        POP ESI
006E3A15  5B                        POP EBX
006E3A16  8B E5                     MOV ESP,EBP
006E3A18  5D                        POP EBP
006E3A19  C2 04 00                  RET 0x4
LAB_006e3a1c:
006E3A1C  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E3A1F  68 3C E8 7E 00            PUSH 0x7ee83c
006E3A24  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E3A29  56                        PUSH ESI
006E3A2A  6A 00                     PUSH 0x0
006E3A2C  68 A1 00 00 00            PUSH 0xa1
006E3A31  68 8C E7 7E 00            PUSH 0x7ee78c
006E3A36  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E3A3B  E8 90 9A FC FF            CALL 0x006ad4d0
006E3A40  83 C4 18                  ADD ESP,0x18
006E3A43  85 C0                     TEST EAX,EAX
006E3A45  74 01                     JZ 0x006e3a48
006E3A47  CC                        INT3
LAB_006e3a48:
006E3A48  68 A2 00 00 00            PUSH 0xa2
006E3A4D  68 8C E7 7E 00            PUSH 0x7ee78c
006E3A52  6A 00                     PUSH 0x0
006E3A54  56                        PUSH ESI
006E3A55  E8 E6 23 FC FF            CALL 0x006a5e40
006E3A5A  5F                        POP EDI
006E3A5B  5E                        POP ESI
006E3A5C  5B                        POP EBX
006E3A5D  8B E5                     MOV ESP,EBP
006E3A5F  5D                        POP EBP
006E3A60  C2 04 00                  RET 0x4
