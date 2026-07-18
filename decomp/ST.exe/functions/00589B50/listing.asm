FUN_00589b50:
00589B50  55                        PUSH EBP
00589B51  8B EC                     MOV EBP,ESP
00589B53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00589B56  56                        PUSH ESI
00589B57  83 F8 08                  CMP EAX,0x8
00589B5A  8B F1                     MOV ESI,ECX
00589B5C  72 24                     JC 0x00589b82
00589B5E  68 3C BA 7C 00            PUSH 0x7cba3c
00589B63  68 CC 4C 7A 00            PUSH 0x7a4ccc
00589B68  6A 00                     PUSH 0x0
00589B6A  6A 00                     PUSH 0x0
00589B6C  6A 71                     PUSH 0x71
00589B6E  68 18 BA 7C 00            PUSH 0x7cba18
00589B73  E8 58 39 12 00            CALL 0x006ad4d0
00589B78  83 C4 18                  ADD ESP,0x18
00589B7B  85 C0                     TEST EAX,EAX
00589B7D  74 01                     JZ 0x00589b80
00589B7F  CC                        INT3
LAB_00589b80:
00589B80  33 C0                     XOR EAX,EAX
LAB_00589b82:
00589B82  8B 8E A5 02 00 00         MOV ECX,dword ptr [ESI + 0x2a5]
00589B88  81 F9 F8 00 00 00         CMP ECX,0xf8
00589B8E  74 2A                     JZ 0x00589bba
00589B90  81 F9 F9 00 00 00         CMP ECX,0xf9
00589B96  74 22                     JZ 0x00589bba
00589B98  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00589B9B  6A 00                     PUSH 0x0
00589B9D  D1 E0                     SHL EAX,0x1
00589B9F  66 89 46 6C               MOV word ptr [ESI + 0x6c],AX
00589BA3  8D 48 05                  LEA ECX,[EAX + 0x5]
00589BA6  51                        PUSH ECX
00589BA7  50                        PUSH EAX
00589BA8  6A 0E                     PUSH 0xe
00589BAA  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00589BB0  E8 05 83 E7 FF            CALL 0x00401eba
00589BB5  5E                        POP ESI
00589BB6  5D                        POP EBP
00589BB7  C2 04 00                  RET 0x4
LAB_00589bba:
00589BBA  C1 E0 03                  SHL EAX,0x3
00589BBD  6A 00                     PUSH 0x0
00589BBF  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00589BC5  8D 50 07                  LEA EDX,[EAX + 0x7]
00589BC8  66 89 46 6C               MOV word ptr [ESI + 0x6c],AX
00589BCC  52                        PUSH EDX
00589BCD  50                        PUSH EAX
00589BCE  6A 0E                     PUSH 0xe
00589BD0  E8 E5 82 E7 FF            CALL 0x00401eba
00589BD5  5E                        POP ESI
00589BD6  5D                        POP EBP
00589BD7  C2 04 00                  RET 0x4
