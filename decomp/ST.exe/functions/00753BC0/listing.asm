FUN_00753bc0:
00753BC0  55                        PUSH EBP
00753BC1  8B EC                     MOV EBP,ESP
00753BC3  51                        PUSH ECX
00753BC4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753BC7  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00753BCE  85 C0                     TEST EAX,EAX
00753BD0  74 03                     JZ 0x00753bd5
00753BD2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00753bd5:
00753BD5  53                        PUSH EBX
00753BD6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00753BD9  56                        PUSH ESI
00753BDA  8D 45 10                  LEA EAX,[EBP + 0x10]
00753BDD  57                        PUSH EDI
00753BDE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00753BE1  50                        PUSH EAX
00753BE2  8D 4D FC                  LEA ECX,[EBP + -0x4]
00753BE5  53                        PUSH EBX
00753BE6  51                        PUSH ECX
00753BE7  57                        PUSH EDI
00753BE8  E8 03 18 00 00            CALL 0x007553f0
00753BED  8B F0                     MOV ESI,EAX
00753BEF  85 F6                     TEST ESI,ESI
00753BF1  75 47                     JNZ 0x00753c3a
LAB_00753bf3:
00753BF3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00753BF6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00753BF9  85 C9                     TEST ECX,ECX
00753BFB  74 3D                     JZ 0x00753c3a
00753BFD  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00753C00  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00753C03  52                        PUSH EDX
00753C04  50                        PUSH EAX
00753C05  FF D1                     CALL ECX
00753C07  83 C4 08                  ADD ESP,0x8
00753C0A  85 C0                     TEST EAX,EAX
00753C0C  74 2C                     JZ 0x00753c3a
00753C0E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753C11  85 C0                     TEST EAX,EAX
00753C13  75 10                     JNZ 0x00753c25
00753C15  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00753C18  51                        PUSH ECX
00753C19  E8 72 22 F5 FF            CALL 0x006a5e90
00753C1E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_00753c25:
00753C25  8D 55 10                  LEA EDX,[EBP + 0x10]
00753C28  8D 45 FC                  LEA EAX,[EBP + -0x4]
00753C2B  52                        PUSH EDX
00753C2C  53                        PUSH EBX
00753C2D  50                        PUSH EAX
00753C2E  57                        PUSH EDI
00753C2F  E8 BC 17 00 00            CALL 0x007553f0
00753C34  8B F0                     MOV ESI,EAX
00753C36  85 F6                     TEST ESI,ESI
00753C38  74 B9                     JZ 0x00753bf3
LAB_00753c3a:
00753C3A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753C3D  85 C0                     TEST EAX,EAX
00753C3F  75 0E                     JNZ 0x00753c4f
00753C41  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00753C44  83 F8 01                  CMP EAX,0x1
00753C47  74 06                     JZ 0x00753c4f
00753C49  50                        PUSH EAX
00753C4A  E8 41 22 F5 FF            CALL 0x006a5e90
LAB_00753c4f:
00753C4F  83 FE FC                  CMP ESI,-0x4
00753C52  74 18                     JZ 0x00753c6c
00753C54  85 F6                     TEST ESI,ESI
00753C56  74 14                     JZ 0x00753c6c
00753C58  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00753C5E  6A 1E                     PUSH 0x1e
00753C60  68 58 2C 7F 00            PUSH 0x7f2c58
00753C65  51                        PUSH ECX
00753C66  56                        PUSH ESI
00753C67  E8 D4 21 F5 FF            CALL 0x006a5e40
LAB_00753c6c:
00753C6C  8B C6                     MOV EAX,ESI
00753C6E  5F                        POP EDI
00753C6F  5E                        POP ESI
00753C70  5B                        POP EBX
00753C71  8B E5                     MOV ESP,EBP
00753C73  5D                        POP EBP
00753C74  C2 0C 00                  RET 0xc
