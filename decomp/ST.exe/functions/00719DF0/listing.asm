FUN_00719df0:
00719DF0  55                        PUSH EBP
00719DF1  8B EC                     MOV EBP,ESP
00719DF3  83 EC 50                  SUB ESP,0x50
00719DF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00719DFB  56                        PUSH ESI
00719DFC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00719DFF  8D 4D B0                  LEA ECX,[EBP + -0x50]
00719E02  6A 00                     PUSH 0x0
00719E04  52                        PUSH EDX
00719E05  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00719E08  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719E0E  E8 DD 39 01 00            CALL 0x0072d7f0
00719E13  8B F0                     MOV ESI,EAX
00719E15  83 C4 08                  ADD ESP,0x8
00719E18  85 F6                     TEST ESI,ESI
00719E1A  75 31                     JNZ 0x00719e4d
00719E1C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00719E1F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00719E22  8D 4D F4                  LEA ECX,[EBP + -0xc]
00719E25  50                        PUSH EAX
00719E26  51                        PUSH ECX
00719E27  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00719E2A  52                        PUSH EDX
00719E2B  6A 02                     PUSH 0x2
00719E2D  E8 DE 84 FD FF            CALL 0x006f2310
00719E32  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00719E35  85 C0                     TEST EAX,EAX
00719E37  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
00719E3B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719E41  75 51                     JNZ 0x00719e94
00719E43  B8 FC FF FF FF            MOV EAX,0xfffffffc
00719E48  5E                        POP ESI
00719E49  8B E5                     MOV ESP,EBP
00719E4B  5D                        POP EBP
00719E4C  C3                        RET
LAB_00719e4d:
00719E4D  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00719E50  68 20 08 7F 00            PUSH 0x7f0820
00719E55  68 CC 4C 7A 00            PUSH 0x7a4ccc
00719E5A  56                        PUSH ESI
00719E5B  6A 00                     PUSH 0x0
00719E5D  6A 39                     PUSH 0x39
00719E5F  68 00 08 7F 00            PUSH 0x7f0800
00719E64  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00719E6A  E8 61 36 F9 FF            CALL 0x006ad4d0
00719E6F  83 C4 18                  ADD ESP,0x18
00719E72  85 C0                     TEST EAX,EAX
00719E74  74 01                     JZ 0x00719e77
00719E76  CC                        INT3
LAB_00719e77:
00719E77  6A 3B                     PUSH 0x3b
00719E79  68 00 08 7F 00            PUSH 0x7f0800
00719E7E  6A 00                     PUSH 0x0
00719E80  56                        PUSH ESI
00719E81  E8 BA BF F8 FF            CALL 0x006a5e40
00719E86  85 F6                     TEST ESI,ESI
00719E88  7D 07                     JGE 0x00719e91
00719E8A  8B C6                     MOV EAX,ESI
00719E8C  5E                        POP ESI
00719E8D  8B E5                     MOV ESP,EBP
00719E8F  5D                        POP EBP
00719E90  C3                        RET
LAB_00719e91:
00719E91  83 C8 FF                  OR EAX,0xffffffff
LAB_00719e94:
00719E94  5E                        POP ESI
00719E95  8B E5                     MOV ESP,EBP
00719E97  5D                        POP EBP
00719E98  C3                        RET
