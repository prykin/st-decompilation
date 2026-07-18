FUN_0071b010:
0071B010  55                        PUSH EBP
0071B011  8B EC                     MOV EBP,ESP
0071B013  83 EC 4C                  SUB ESP,0x4c
0071B016  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071B01B  53                        PUSH EBX
0071B01C  56                        PUSH ESI
0071B01D  57                        PUSH EDI
0071B01E  8D 55 B8                  LEA EDX,[EBP + -0x48]
0071B021  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0071B024  6A 00                     PUSH 0x0
0071B026  52                        PUSH EDX
0071B027  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071B02E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0071B031  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071B037  E8 B4 27 01 00            CALL 0x0072d7f0
0071B03C  8B F0                     MOV ESI,EAX
0071B03E  83 C4 08                  ADD ESP,0x8
0071B041  85 F6                     TEST ESI,ESI
0071B043  75 5E                     JNZ 0x0071b0a3
0071B045  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071B048  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0071B04B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071B04E  85 F6                     TEST ESI,ESI
0071B050  74 08                     JZ 0x0071b05a
0071B052  85 DB                     TEST EBX,EBX
0071B054  74 04                     JZ 0x0071b05a
0071B056  85 FF                     TEST EDI,EDI
0071B058  75 14                     JNZ 0x0071b06e
LAB_0071b05a:
0071B05A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071B05F  6A 6F                     PUSH 0x6f
0071B061  68 C8 08 7F 00            PUSH 0x7f08c8
0071B066  50                        PUSH EAX
0071B067  6A FA                     PUSH -0x6
0071B069  E8 D2 AD F8 FF            CALL 0x006a5e40
LAB_0071b06e:
0071B06E  8D 4D F8                  LEA ECX,[EBP + -0x8]
0071B071  51                        PUSH ECX
0071B072  53                        PUSH EBX
0071B073  E8 08 FE FF FF            CALL 0x0071ae80
0071B078  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071B07B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071B07E  52                        PUSH EDX
0071B07F  57                        PUSH EDI
0071B080  56                        PUSH ESI
0071B081  51                        PUSH ECX
0071B082  50                        PUSH EAX
0071B083  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071B086  E8 25 FD FF FF            CALL 0x0071adb0
0071B08B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0071B08E  83 C4 1C                  ADD ESP,0x1c
0071B091  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071B097  B8 01 00 00 00            MOV EAX,0x1
0071B09C  5F                        POP EDI
0071B09D  5E                        POP ESI
0071B09E  5B                        POP EBX
0071B09F  8B E5                     MOV ESP,EBP
0071B0A1  5D                        POP EBP
0071B0A2  C3                        RET
LAB_0071b0a3:
0071B0A3  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0071B0A6  68 00 09 7F 00            PUSH 0x7f0900
0071B0AB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071B0B0  56                        PUSH ESI
0071B0B1  6A 00                     PUSH 0x0
0071B0B3  6A 74                     PUSH 0x74
0071B0B5  68 C8 08 7F 00            PUSH 0x7f08c8
0071B0BA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071B0BF  E8 0C 24 F9 FF            CALL 0x006ad4d0
0071B0C4  83 C4 18                  ADD ESP,0x18
0071B0C7  85 C0                     TEST EAX,EAX
0071B0C9  74 01                     JZ 0x0071b0cc
0071B0CB  CC                        INT3
LAB_0071b0cc:
0071B0CC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071B0CF  85 C0                     TEST EAX,EAX
0071B0D1  74 09                     JZ 0x0071b0dc
0071B0D3  8D 4D FC                  LEA ECX,[EBP + -0x4]
0071B0D6  51                        PUSH ECX
0071B0D7  E8 84 FF F8 FF            CALL 0x006ab060
LAB_0071b0dc:
0071B0DC  6A 78                     PUSH 0x78
0071B0DE  68 C8 08 7F 00            PUSH 0x7f08c8
0071B0E3  6A 00                     PUSH 0x0
0071B0E5  56                        PUSH ESI
0071B0E6  E8 55 AD F8 FF            CALL 0x006a5e40
0071B0EB  5F                        POP EDI
0071B0EC  5E                        POP ESI
0071B0ED  33 C0                     XOR EAX,EAX
0071B0EF  5B                        POP EBX
0071B0F0  8B E5                     MOV ESP,EBP
0071B0F2  5D                        POP EBP
0071B0F3  C3                        RET
