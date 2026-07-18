FUN_0067dec0:
0067DEC0  55                        PUSH EBP
0067DEC1  8B EC                     MOV EBP,ESP
0067DEC3  83 EC 48                  SUB ESP,0x48
0067DEC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067DECB  56                        PUSH ESI
0067DECC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067DECF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067DED2  6A 00                     PUSH 0x0
0067DED4  52                        PUSH EDX
0067DED5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067DEDC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067DEDF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DEE5  E8 06 F9 0A 00            CALL 0x0072d7f0
0067DEEA  8B F0                     MOV ESI,EAX
0067DEEC  83 C4 08                  ADD ESP,0x8
0067DEEF  85 F6                     TEST ESI,ESI
0067DEF1  75 44                     JNZ 0x0067df37
0067DEF3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067DEF6  85 F6                     TEST ESI,ESI
0067DEF8  75 17                     JNZ 0x0067df11
0067DEFA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067DEFF  68 6B 01 00 00            PUSH 0x16b
0067DF04  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DF09  50                        PUSH EAX
0067DF0A  6A CC                     PUSH -0x34
0067DF0C  E8 2F 7F 02 00            CALL 0x006a5e40
LAB_0067df11:
0067DF11  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067DF14  8B 15 24 D7 79 00         MOV EDX,dword ptr [0x0079d724]
0067DF1A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067DF1D  51                        PUSH ECX
0067DF1E  52                        PUSH EDX
0067DF1F  50                        PUSH EAX
0067DF20  56                        PUSH ESI
0067DF21  E8 C5 36 D8 FF            CALL 0x004015eb
0067DF26  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067DF29  83 C4 10                  ADD ESP,0x10
0067DF2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DF32  5E                        POP ESI
0067DF33  8B E5                     MOV ESP,EBP
0067DF35  5D                        POP EBP
0067DF36  C3                        RET
LAB_0067df37:
0067DF37  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067DF3A  68 24 30 7D 00            PUSH 0x7d3024
0067DF3F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067DF44  56                        PUSH ESI
0067DF45  6A 00                     PUSH 0x0
0067DF47  68 6E 01 00 00            PUSH 0x16e
0067DF4C  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DF51  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067DF57  E8 74 F5 02 00            CALL 0x006ad4d0
0067DF5C  83 C4 18                  ADD ESP,0x18
0067DF5F  85 C0                     TEST EAX,EAX
0067DF61  74 01                     JZ 0x0067df64
0067DF63  CC                        INT3
LAB_0067df64:
0067DF64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067DF67  50                        PUSH EAX
0067DF68  E8 A3 01 03 00            CALL 0x006ae110
0067DF6D  68 70 01 00 00            PUSH 0x170
0067DF72  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DF77  6A 00                     PUSH 0x0
0067DF79  56                        PUSH ESI
0067DF7A  E8 C1 7E 02 00            CALL 0x006a5e40
0067DF7F  33 C0                     XOR EAX,EAX
0067DF81  5E                        POP ESI
0067DF82  8B E5                     MOV ESP,EBP
0067DF84  5D                        POP EBP
0067DF85  C3                        RET
