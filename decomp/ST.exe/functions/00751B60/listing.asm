FUN_00751b60:
00751B60  55                        PUSH EBP
00751B61  8B EC                     MOV EBP,ESP
00751B63  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00751B66  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00751B69  8D 45 10                  LEA EAX,[EBP + 0x10]
00751B6C  56                        PUSH ESI
00751B6D  50                        PUSH EAX
00751B6E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00751B71  51                        PUSH ECX
00751B72  52                        PUSH EDX
00751B73  50                        PUSH EAX
00751B74  E8 17 28 00 00            CALL 0x00754390
00751B79  8B F0                     MOV ESI,EAX
00751B7B  83 FE FC                  CMP ESI,-0x4
00751B7E  74 18                     JZ 0x00751b98
00751B80  85 F6                     TEST ESI,ESI
00751B82  74 14                     JZ 0x00751b98
00751B84  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00751B8A  6A 11                     PUSH 0x11
00751B8C  68 18 2B 7F 00            PUSH 0x7f2b18
00751B91  51                        PUSH ECX
00751B92  56                        PUSH ESI
00751B93  E8 A8 42 F5 FF            CALL 0x006a5e40
LAB_00751b98:
00751B98  8B C6                     MOV EAX,ESI
00751B9A  5E                        POP ESI
00751B9B  5D                        POP EBP
00751B9C  C2 0C 00                  RET 0xc
