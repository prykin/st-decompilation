FUN_007537c0:
007537C0  55                        PUSH EBP
007537C1  8B EC                     MOV EBP,ESP
007537C3  83 EC 48                  SUB ESP,0x48
007537C6  56                        PUSH ESI
007537C7  57                        PUSH EDI
007537C8  6A 28                     PUSH 0x28
007537CA  E8 41 74 F5 FF            CALL 0x006aac10
007537CF  8B F0                     MOV ESI,EAX
007537D1  85 F6                     TEST ESI,ESI
007537D3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007537D6  75 08                     JNZ 0x007537e0
007537D8  5F                        POP EDI
007537D9  5E                        POP ESI
007537DA  8B E5                     MOV ESP,EBP
007537DC  5D                        POP EBP
007537DD  C2 10 00                  RET 0x10
LAB_007537e0:
007537E0  A1 38 2C 7F 00            MOV EAX,[0x007f2c38]
007537E5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007537E8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007537EB  89 06                     MOV dword ptr [ESI],EAX
007537ED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007537F0  51                        PUSH ECX
007537F1  6A 02                     PUSH 0x2
007537F3  52                        PUSH EDX
007537F4  50                        PUSH EAX
007537F5  56                        PUSH ESI
007537F6  C7 46 04 01 01 00 00      MOV dword ptr [ESI + 0x4],0x101
007537FD  E8 7E 19 00 00            CALL 0x00755180
00753802  8B F8                     MOV EDI,EAX
00753804  85 FF                     TEST EDI,EDI
00753806  0F 85 DD 00 00 00         JNZ 0x007538e9
0075380C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075380F  8B 16                     MOV EDX,dword ptr [ESI]
00753811  6A 00                     PUSH 0x0
00753813  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
00753816  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00753819  66 8B 4E 04               MOV CX,word ptr [ESI + 0x4]
0075381D  66 89 48 14               MOV word ptr [EAX + 0x14],CX
00753821  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00753824  C7 42 1C FF FF FF FF      MOV dword ptr [EDX + 0x1c],0xffffffff
0075382B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0075382E  66 C7 40 16 00 08         MOV word ptr [EAX + 0x16],0x800
00753834  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00753837  66 89 79 20               MOV word ptr [ECX + 0x20],DI
0075383B  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0075383E  BF 20 00 00 00            MOV EDI,0x20
00753843  89 7A 22                  MOV dword ptr [EDX + 0x22],EDI
00753846  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00753849  8D 55 B8                  LEA EDX,[EBP + -0x48]
0075384C  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
0075384F  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00753855  8D 45 BC                  LEA EAX,[EBP + -0x44]
00753858  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0075385B  50                        PUSH EAX
0075385C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00753862  E8 89 9F FD FF            CALL 0x0072d7f0
00753867  83 C4 08                  ADD ESP,0x8
0075386A  85 C0                     TEST EAX,EAX
0075386C  75 69                     JNZ 0x007538d7
0075386E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00753871  57                        PUSH EDI
00753872  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00753875  8D 48 10                  LEA ECX,[EAX + 0x10]
00753878  51                        PUSH ECX
00753879  6A 00                     PUSH 0x0
0075387B  50                        PUSH EAX
0075387C  E8 DF 0F F8 FF            CALL 0x006d4860
00753881  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00753884  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00753887  03 CF                     ADD ECX,EDI
00753889  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
0075388C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0075388F  8B 50 50                  MOV EDX,dword ptr [EAX + 0x50]
00753892  66 8B 40 20               MOV AX,word ptr [EAX + 0x20]
00753896  66 89 42 28               MOV word ptr [EDX + 0x28],AX
0075389A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0075389D  66 FF 40 20               INC word ptr [EAX + 0x20]
007538A1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
007538A4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007538A7  8B 51 50                  MOV EDX,dword ptr [ECX + 0x50]
007538AA  50                        PUSH EAX
007538AB  C7 42 20 FF FF FF FF      MOV dword ptr [EDX + 0x20],0xffffffff
007538B2  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
007538B5  8B 51 22                  MOV EDX,dword ptr [ECX + 0x22]
007538B8  52                        PUSH EDX
007538B9  56                        PUSH ESI
007538BA  E8 11 17 00 00            CALL 0x00754fd0
007538BF  8B F8                     MOV EDI,EAX
007538C1  85 FF                     TEST EDI,EDI
007538C3  75 24                     JNZ 0x007538e9
007538C5  50                        PUSH EAX
007538C6  50                        PUSH EAX
007538C7  56                        PUSH ESI
007538C8  E8 53 D6 FF FF            CALL 0x00750f20
007538CD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
007538D0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007538D5  EB 0E                     JMP 0x007538e5
LAB_007538d7:
007538D7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
007538DA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007538DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007538E3  8B F8                     MOV EDI,EAX
LAB_007538e5:
007538E5  85 FF                     TEST EDI,EDI
007538E7  74 24                     JZ 0x0075390d
LAB_007538e9:
007538E9  56                        PUSH ESI
007538EA  E8 B1 F9 FF FF            CALL 0x007532a0
007538EF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007538F5  6A 35                     PUSH 0x35
007538F7  68 20 2C 7F 00            PUSH 0x7f2c20
007538FC  52                        PUSH EDX
007538FD  57                        PUSH EDI
007538FE  E8 3D 25 F5 FF            CALL 0x006a5e40
00753903  33 C0                     XOR EAX,EAX
00753905  5F                        POP EDI
00753906  5E                        POP ESI
00753907  8B E5                     MOV ESP,EBP
00753909  5D                        POP EBP
0075390A  C2 10 00                  RET 0x10
LAB_0075390d:
0075390D  8B C6                     MOV EAX,ESI
0075390F  5F                        POP EDI
00753910  5E                        POP ESI
00753911  8B E5                     MOV ESP,EBP
00753913  5D                        POP EBP
00753914  C2 10 00                  RET 0x10
