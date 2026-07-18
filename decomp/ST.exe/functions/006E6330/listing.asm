FUN_006e6330:
006E6330  55                        PUSH EBP
006E6331  8B EC                     MOV EBP,ESP
006E6333  83 EC 4C                  SUB ESP,0x4c
006E6336  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E633B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E633E  56                        PUSH ESI
006E633F  8D 55 B8                  LEA EDX,[EBP + -0x48]
006E6342  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006E6345  6A 00                     PUSH 0x0
006E6347  52                        PUSH EDX
006E6348  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006E634B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E6351  E8 9A 74 04 00            CALL 0x0072d7f0
006E6356  8B F0                     MOV ESI,EAX
006E6358  83 C4 08                  ADD ESP,0x8
006E635B  85 F6                     TEST ESI,ESI
006E635D  75 4E                     JNZ 0x006e63ad
006E635F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E6362  83 7E 0C 04               CMP dword ptr [ESI + 0xc],0x4
006E6366  75 2C                     JNZ 0x006e6394
006E6368  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006E636B  8D 45 FC                  LEA EAX,[EBP + -0x4]
006E636E  50                        PUSH EAX
006E636F  51                        PUSH ECX
006E6370  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E6373  E8 58 FF FF FF            CALL 0x006e62d0
006E6378  85 C0                     TEST EAX,EAX
006E637A  75 21                     JNZ 0x006e639d
006E637C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E637F  56                        PUSH ESI
006E6380  8B 11                     MOV EDX,dword ptr [ECX]
006E6382  FF 12                     CALL dword ptr [EDX]
006E6384  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006E6387  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E638D  5E                        POP ESI
006E638E  8B E5                     MOV ESP,EBP
006E6390  5D                        POP EBP
006E6391  C2 04 00                  RET 0x4
LAB_006e6394:
006E6394  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E6397  56                        PUSH ESI
006E6398  E8 B3 F5 FF FF            CALL 0x006e5950
LAB_006e639d:
006E639D  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006E63A0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E63A6  5E                        POP ESI
006E63A7  8B E5                     MOV ESP,EBP
006E63A9  5D                        POP EBP
006E63AA  C2 04 00                  RET 0x4
LAB_006e63ad:
006E63AD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006E63B0  68 0C EC 7E 00            PUSH 0x7eec0c
006E63B5  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E63BA  56                        PUSH ESI
006E63BB  6A 00                     PUSH 0x0
006E63BD  68 34 05 00 00            PUSH 0x534
006E63C2  68 8C E7 7E 00            PUSH 0x7ee78c
006E63C7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E63CD  E8 FE 70 FC FF            CALL 0x006ad4d0
006E63D2  83 C4 18                  ADD ESP,0x18
006E63D5  85 C0                     TEST EAX,EAX
006E63D7  74 01                     JZ 0x006e63da
006E63D9  CC                        INT3
LAB_006e63da:
006E63DA  68 35 05 00 00            PUSH 0x535
006E63DF  68 8C E7 7E 00            PUSH 0x7ee78c
006E63E4  6A 00                     PUSH 0x0
006E63E6  56                        PUSH ESI
006E63E7  E8 54 FA FB FF            CALL 0x006a5e40
006E63EC  B8 FF FF 00 00            MOV EAX,0xffff
006E63F1  5E                        POP ESI
006E63F2  8B E5                     MOV ESP,EBP
006E63F4  5D                        POP EBP
006E63F5  C2 04 00                  RET 0x4
