FUN_00752e10:
00752E10  55                        PUSH EBP
00752E11  8B EC                     MOV EBP,ESP
00752E13  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00752E16  8B 08                     MOV ECX,dword ptr [EAX]
00752E18  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00752E1B  51                        PUSH ECX
00752E1C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00752E1F  52                        PUSH EDX
00752E20  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00752E23  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00752E26  51                        PUSH ECX
00752E27  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00752E2A  52                        PUSH EDX
00752E2B  50                        PUSH EAX
00752E2C  51                        PUSH ECX
00752E2D  E8 7E 25 F7 FF            CALL 0x006c53b0
00752E32  5D                        POP EBP
00752E33  C2 20 00                  RET 0x20
