mfImgGetTransp:
0070A870  55                        PUSH EBP
0070A871  8B EC                     MOV EBP,ESP
0070A873  83 EC 50                  SUB ESP,0x50
0070A876  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A87B  56                        PUSH ESI
0070A87C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070A87F  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070A882  6A 00                     PUSH 0x0
0070A884  52                        PUSH EDX
0070A885  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070A888  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A88E  E8 5D 2F 02 00            CALL 0x0072d7f0
0070A893  8B F0                     MOV ESI,EAX
0070A895  83 C4 08                  ADD ESP,0x8
0070A898  85 F6                     TEST ESI,ESI
0070A89A  75 41                     JNZ 0x0070a8dd
0070A89C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070A89F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070A8A2  8D 4D F4                  LEA ECX,[EBP + -0xc]
0070A8A5  50                        PUSH EAX
0070A8A6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A8A9  51                        PUSH ECX
0070A8AA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070A8AD  52                        PUSH EDX
0070A8AE  50                        PUSH EAX
0070A8AF  E8 5C 7A FE FF            CALL 0x006f2310
0070A8B4  85 C0                     TEST EAX,EAX
0070A8B6  75 13                     JNZ 0x0070a8cb
0070A8B8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070A8BB  B8 FC FF FF FF            MOV EAX,0xfffffffc
0070A8C0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A8C6  5E                        POP ESI
0070A8C7  8B E5                     MOV ESP,EBP
0070A8C9  5D                        POP EBP
0070A8CA  C3                        RET
LAB_0070a8cb:
0070A8CB  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070A8CE  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0070A8D2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A8D8  5E                        POP ESI
0070A8D9  8B E5                     MOV ESP,EBP
0070A8DB  5D                        POP EBP
0070A8DC  C3                        RET
LAB_0070a8dd:
0070A8DD  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070A8E0  68 30 00 7F 00            PUSH 0x7f0030
0070A8E5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A8EA  56                        PUSH ESI
0070A8EB  6A 00                     PUSH 0x0
0070A8ED  6A 7C                     PUSH 0x7c
0070A8EF  68 E0 FF 7E 00            PUSH 0x7effe0
0070A8F4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A8F9  E8 D2 2B FA FF            CALL 0x006ad4d0
0070A8FE  83 C4 18                  ADD ESP,0x18
0070A901  85 C0                     TEST EAX,EAX
0070A903  74 01                     JZ 0x0070a906
0070A905  CC                        INT3
LAB_0070a906:
0070A906  6A 7E                     PUSH 0x7e
0070A908  68 E0 FF 7E 00            PUSH 0x7effe0
0070A90D  6A 00                     PUSH 0x0
0070A90F  56                        PUSH ESI
0070A910  E8 2B B5 F9 FF            CALL 0x006a5e40
0070A915  85 F6                     TEST ESI,ESI
0070A917  7D 07                     JGE 0x0070a920
0070A919  8B C6                     MOV EAX,ESI
0070A91B  5E                        POP ESI
0070A91C  8B E5                     MOV ESP,EBP
0070A91E  5D                        POP EBP
0070A91F  C3                        RET
LAB_0070a920:
0070A920  83 C8 FF                  OR EAX,0xffffffff
0070A923  5E                        POP ESI
0070A924  8B E5                     MOV ESP,EBP
0070A926  5D                        POP EBP
0070A927  C3                        RET
