mfImgGetNumIms:
0070A930  55                        PUSH EBP
0070A931  8B EC                     MOV EBP,ESP
0070A933  83 EC 50                  SUB ESP,0x50
0070A936  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A93B  56                        PUSH ESI
0070A93C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070A93F  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070A942  6A 00                     PUSH 0x0
0070A944  52                        PUSH EDX
0070A945  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070A948  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A94E  E8 9D 2E 02 00            CALL 0x0072d7f0
0070A953  8B F0                     MOV ESI,EAX
0070A955  83 C4 08                  ADD ESP,0x8
0070A958  85 F6                     TEST ESI,ESI
0070A95A  75 41                     JNZ 0x0070a99d
0070A95C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070A95F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070A962  8D 4D F4                  LEA ECX,[EBP + -0xc]
0070A965  50                        PUSH EAX
0070A966  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A969  51                        PUSH ECX
0070A96A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070A96D  52                        PUSH EDX
0070A96E  50                        PUSH EAX
0070A96F  E8 9C 79 FE FF            CALL 0x006f2310
0070A974  85 C0                     TEST EAX,EAX
0070A976  75 13                     JNZ 0x0070a98b
0070A978  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070A97B  B8 FC FF FF FF            MOV EAX,0xfffffffc
0070A980  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A986  5E                        POP ESI
0070A987  8B E5                     MOV ESP,EBP
0070A989  5D                        POP EBP
0070A98A  C3                        RET
LAB_0070a98b:
0070A98B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070A98E  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0070A992  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A998  5E                        POP ESI
0070A999  8B E5                     MOV ESP,EBP
0070A99B  5D                        POP EBP
0070A99C  C3                        RET
LAB_0070a99d:
0070A99D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070A9A0  68 40 00 7F 00            PUSH 0x7f0040
0070A9A5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A9AA  56                        PUSH ESI
0070A9AB  6A 00                     PUSH 0x0
0070A9AD  68 93 00 00 00            PUSH 0x93
0070A9B2  68 E0 FF 7E 00            PUSH 0x7effe0
0070A9B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A9BC  E8 0F 2B FA FF            CALL 0x006ad4d0
0070A9C1  83 C4 18                  ADD ESP,0x18
0070A9C4  85 C0                     TEST EAX,EAX
0070A9C6  74 01                     JZ 0x0070a9c9
0070A9C8  CC                        INT3
LAB_0070a9c9:
0070A9C9  68 95 00 00 00            PUSH 0x95
0070A9CE  68 E0 FF 7E 00            PUSH 0x7effe0
0070A9D3  6A 00                     PUSH 0x0
0070A9D5  56                        PUSH ESI
0070A9D6  E8 65 B4 F9 FF            CALL 0x006a5e40
0070A9DB  85 F6                     TEST ESI,ESI
0070A9DD  7D 07                     JGE 0x0070a9e6
0070A9DF  8B C6                     MOV EAX,ESI
0070A9E1  5E                        POP ESI
0070A9E2  8B E5                     MOV ESP,EBP
0070A9E4  5D                        POP EBP
0070A9E5  C3                        RET
LAB_0070a9e6:
0070A9E6  83 C8 FF                  OR EAX,0xffffffff
0070A9E9  5E                        POP ESI
0070A9EA  8B E5                     MOV ESP,EBP
0070A9EC  5D                        POP EBP
0070A9ED  C3                        RET
