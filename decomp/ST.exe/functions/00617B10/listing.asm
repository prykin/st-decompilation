FUN_00617b10:
00617B10  55                        PUSH EBP
00617B11  8B EC                     MOV EBP,ESP
00617B13  83 EC 24                  SUB ESP,0x24
00617B16  56                        PUSH ESI
00617B17  8B F1                     MOV ESI,ECX
00617B19  57                        PUSH EDI
00617B1A  83 CF FF                  OR EDI,0xffffffff
00617B1D  8B 46 5E                  MOV EAX,dword ptr [ESI + 0x5e]
00617B20  85 C0                     TEST EAX,EAX
00617B22  75 18                     JNZ 0x00617b3c
00617B24  6A 0A                     PUSH 0xa
00617B26  6A 24                     PUSH 0x24
00617B28  6A 07                     PUSH 0x7
00617B2A  6A 00                     PUSH 0x0
00617B2C  E8 5F 67 09 00            CALL 0x006ae290
00617B31  85 C0                     TEST EAX,EAX
00617B33  89 46 5E                  MOV dword ptr [ESI + 0x5e],EAX
00617B36  0F 84 A0 00 00 00         JZ 0x00617bdc
LAB_00617b3c:
00617B3C  8B 4E 5A                  MOV ECX,dword ptr [ESI + 0x5a]
00617B3F  33 C0                     XOR EAX,EAX
00617B41  41                        INC ECX
00617B42  8D 7D DC                  LEA EDI,[EBP + -0x24]
00617B45  89 4E 5A                  MOV dword ptr [ESI + 0x5a],ECX
00617B48  8B D1                     MOV EDX,ECX
00617B4A  B9 09 00 00 00            MOV ECX,0x9
00617B4F  53                        PUSH EBX
00617B50  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00617B53  F3 AB                     STOSD.REP ES:EDI
00617B55  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00617B58  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00617B5B  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
00617B5E  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
00617B62  66 89 45 EA               MOV word ptr [EBP + -0x16],AX
00617B66  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00617B69  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00617B6C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00617B71  66 89 7D DC               MOV word ptr [EBP + -0x24],DI
00617B75  66 89 5D DE               MOV word ptr [EBP + -0x22],BX
00617B79  66 89 7D E6               MOV word ptr [EBP + -0x1a],DI
00617B7D  66 89 5D E8               MOV word ptr [EBP + -0x18],BX
00617B81  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00617B84  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00617B8A  8B 46 5E                  MOV EAX,dword ptr [ESI + 0x5e]
00617B8D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00617B90  8D 55 DC                  LEA EDX,[EBP + -0x24]
00617B93  89 4D E2                  MOV dword ptr [EBP + -0x1e],ECX
00617B96  52                        PUSH EDX
00617B97  50                        PUSH EAX
00617B98  E8 23 66 09 00            CALL 0x006ae1c0
00617B9D  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00617BA0  66 8B 56 58               MOV DX,word ptr [ESI + 0x58]
00617BA4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00617BA7  8B 46 5A                  MOV EAX,dword ptr [ESI + 0x5a]
00617BAA  56                        PUSH ESI
00617BAB  50                        PUSH EAX
00617BAC  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
00617BAF  51                        PUSH ECX
00617BB0  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00617BB3  52                        PUSH EDX
00617BB4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00617BB7  50                        PUSH EAX
00617BB8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00617BBB  51                        PUSH ECX
00617BBC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00617BBF  52                        PUSH EDX
00617BC0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00617BC3  50                        PUSH EAX
00617BC4  51                        PUSH ECX
00617BC5  52                        PUSH EDX
00617BC6  53                        PUSH EBX
00617BC7  57                        PUSH EDI
00617BC8  E8 AE BE DE FF            CALL 0x00403a7b
00617BCD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00617BD0  83 C4 30                  ADD ESP,0x30
00617BD3  5B                        POP EBX
00617BD4  5F                        POP EDI
00617BD5  5E                        POP ESI
00617BD6  8B E5                     MOV ESP,EBP
00617BD8  5D                        POP EBP
00617BD9  C2 18 00                  RET 0x18
LAB_00617bdc:
00617BDC  8B C7                     MOV EAX,EDI
00617BDE  5F                        POP EDI
00617BDF  5E                        POP ESI
00617BE0  8B E5                     MOV ESP,EBP
00617BE2  5D                        POP EBP
00617BE3  C2 18 00                  RET 0x18
