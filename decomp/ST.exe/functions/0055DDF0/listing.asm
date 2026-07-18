FUN_0055ddf0:
0055DDF0  55                        PUSH EBP
0055DDF1  8B EC                     MOV EBP,ESP
0055DDF3  81 EC 00 04 00 00         SUB ESP,0x400
0055DDF9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055DDFC  6A 00                     PUSH 0x0
0055DDFE  50                        PUSH EAX
0055DDFF  E8 3C F9 15 00            CALL 0x006bd740
0055DE04  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055DE07  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
0055DE0D  6A 00                     PUSH 0x0
0055DE0F  51                        PUSH ECX
0055DE10  52                        PUSH EDX
0055DE11  E8 4A E5 15 00            CALL 0x006bc360
0055DE16  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055DE19  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055DE1C  50                        PUSH EAX
0055DE1D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055DE20  51                        PUSH ECX
0055DE21  68 00 01 00 00            PUSH 0x100
0055DE26  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
0055DE2C  6A 00                     PUSH 0x0
0055DE2E  52                        PUSH EDX
0055DE2F  50                        PUSH EAX
0055DE30  E8 4B B2 1B 00            CALL 0x00719080
0055DE35  83 C4 18                  ADD ESP,0x18
0055DE38  8B E5                     MOV ESP,EBP
0055DE3A  5D                        POP EBP
0055DE3B  C3                        RET
