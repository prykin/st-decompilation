FUN_00738b80:
00738B80  55                        PUSH EBP
00738B81  8B EC                     MOV EBP,ESP
00738B83  83 7D 08 FF               CMP dword ptr [EBP + 0x8],-0x1
00738B87  74 10                     JZ 0x00738b99
00738B89  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00738B8C  50                        PUSH EAX
00738B8D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738B90  51                        PUSH ECX
00738B91  E8 9A 86 00 00            CALL 0x00741230
00738B96  83 C4 08                  ADD ESP,0x8
LAB_00738b99:
00738B99  5D                        POP EBP
00738B9A  C3                        RET
