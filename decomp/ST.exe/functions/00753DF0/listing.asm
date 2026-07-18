FUN_00753df0:
00753DF0  55                        PUSH EBP
00753DF1  8B EC                     MOV EBP,ESP
00753DF3  83 EC 4C                  SUB ESP,0x4c
00753DF6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753DF9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753DFC  83 F8 01                  CMP EAX,0x1
00753DFF  56                        PUSH ESI
00753E00  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00753E03  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00753E06  75 12                     JNZ 0x00753e1a
00753E08  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00753E0B  50                        PUSH EAX
00753E0C  51                        PUSH ECX
00753E0D  E8 6E 1C 00 00            CALL 0x00755a80
00753E12  83 F8 FF                  CMP EAX,-0x1
00753E15  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00753E18  74 7A                     JZ 0x00753e94
LAB_00753e1a:
00753E1A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00753E20  8D 45 B8                  LEA EAX,[EBP + -0x48]
00753E23  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00753E26  6A 00                     PUSH 0x0
00753E28  50                        PUSH EAX
00753E29  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00753E2C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00753E32  E8 B9 99 FD FF            CALL 0x0072d7f0
00753E37  8B F0                     MOV ESI,EAX
00753E39  83 C4 08                  ADD ESP,0x8
00753E3C  85 F6                     TEST ESI,ESI
00753E3E  75 27                     JNZ 0x00753e67
00753E40  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00753E43  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00753E46  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00753E49  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00753E4C  51                        PUSH ECX
00753E4D  52                        PUSH EDX
00753E4E  56                        PUSH ESI
00753E4F  50                        PUSH EAX
00753E50  E8 0B 0A F8 FF            CALL 0x006d4860
00753E55  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00753E58  8B C6                     MOV EAX,ESI
00753E5A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00753E60  5E                        POP ESI
00753E61  8B E5                     MOV ESP,EBP
00753E63  5D                        POP EBP
00753E64  C2 10 00                  RET 0x10
LAB_00753e67:
00753E67  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753E6A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00753E6D  83 F8 01                  CMP EAX,0x1
00753E70  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00753E76  75 0D                     JNZ 0x00753e85
00753E78  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00753E7B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00753E7E  50                        PUSH EAX
00753E7F  51                        PUSH ECX
00753E80  E8 5B FE FF FF            CALL 0x00753ce0
LAB_00753e85:
00753E85  6A 15                     PUSH 0x15
00753E87  68 88 2C 7F 00            PUSH 0x7f2c88
00753E8C  6A 00                     PUSH 0x0
00753E8E  56                        PUSH ESI
00753E8F  E8 AC 1F F5 FF            CALL 0x006a5e40
LAB_00753e94:
00753E94  83 C8 FF                  OR EAX,0xffffffff
00753E97  5E                        POP ESI
00753E98  8B E5                     MOV ESP,EBP
00753E9A  5D                        POP EBP
00753E9B  C2 10 00                  RET 0x10
