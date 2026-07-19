mfImgGetHeight:
0070A7B0  55                        PUSH EBP
0070A7B1  8B EC                     MOV EBP,ESP
0070A7B3  83 EC 50                  SUB ESP,0x50
0070A7B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A7BB  56                        PUSH ESI
0070A7BC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070A7BF  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070A7C2  6A 00                     PUSH 0x0
0070A7C4  52                        PUSH EDX
0070A7C5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070A7C8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A7CE  E8 1D 30 02 00            CALL 0x0072d7f0
0070A7D3  8B F0                     MOV ESI,EAX
0070A7D5  83 C4 08                  ADD ESP,0x8
0070A7D8  85 F6                     TEST ESI,ESI
0070A7DA  75 41                     JNZ 0x0070a81d
0070A7DC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070A7DF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070A7E2  8D 4D F4                  LEA ECX,[EBP + -0xc]
0070A7E5  50                        PUSH EAX
0070A7E6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A7E9  51                        PUSH ECX
0070A7EA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070A7ED  52                        PUSH EDX
0070A7EE  50                        PUSH EAX
0070A7EF  E8 1C 7B FE FF            CALL 0x006f2310
0070A7F4  85 C0                     TEST EAX,EAX
0070A7F6  75 13                     JNZ 0x0070a80b
0070A7F8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070A7FB  B8 FC FF FF FF            MOV EAX,0xfffffffc
0070A800  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A806  5E                        POP ESI
0070A807  8B E5                     MOV ESP,EBP
0070A809  5D                        POP EBP
0070A80A  C3                        RET
LAB_0070a80b:
0070A80B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070A80E  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
0070A812  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A818  5E                        POP ESI
0070A819  8B E5                     MOV ESP,EBP
0070A81B  5D                        POP EBP
0070A81C  C3                        RET
LAB_0070a81d:
0070A81D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070A820  68 20 00 7F 00            PUSH 0x7f0020
0070A825  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A82A  56                        PUSH ESI
0070A82B  6A 00                     PUSH 0x0
0070A82D  6A 65                     PUSH 0x65
0070A82F  68 E0 FF 7E 00            PUSH 0x7effe0
0070A834  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A839  E8 92 2C FA FF            CALL 0x006ad4d0
0070A83E  83 C4 18                  ADD ESP,0x18
0070A841  85 C0                     TEST EAX,EAX
0070A843  74 01                     JZ 0x0070a846
0070A845  CC                        INT3
LAB_0070a846:
0070A846  6A 67                     PUSH 0x67
0070A848  68 E0 FF 7E 00            PUSH 0x7effe0
0070A84D  6A 00                     PUSH 0x0
0070A84F  56                        PUSH ESI
0070A850  E8 EB B5 F9 FF            CALL 0x006a5e40
0070A855  85 F6                     TEST ESI,ESI
0070A857  7D 07                     JGE 0x0070a860
0070A859  8B C6                     MOV EAX,ESI
0070A85B  5E                        POP ESI
0070A85C  8B E5                     MOV ESP,EBP
0070A85E  5D                        POP EBP
0070A85F  C3                        RET
LAB_0070a860:
0070A860  83 C8 FF                  OR EAX,0xffffffff
0070A863  5E                        POP ESI
0070A864  8B E5                     MOV ESP,EBP
0070A866  5D                        POP EBP
0070A867  C3                        RET
