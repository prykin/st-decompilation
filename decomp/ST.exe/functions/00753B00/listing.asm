FUN_00753b00:
00753B00  55                        PUSH EBP
00753B01  8B EC                     MOV EBP,ESP
00753B03  56                        PUSH ESI
00753B04  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00753B07  56                        PUSH ESI
00753B08  E8 33 14 00 00            CALL 0x00754f40
00753B0D  85 C0                     TEST EAX,EAX
00753B0F  74 15                     JZ 0x00753b26
00753B11  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00753B14  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00753B17  50                        PUSH EAX
00753B18  6A 03                     PUSH 0x3
00753B1A  51                        PUSH ECX
00753B1B  56                        PUSH ESI
00753B1C  E8 FF FD FF FF            CALL 0x00753920
00753B21  5E                        POP ESI
00753B22  5D                        POP EBP
00753B23  C2 10 00                  RET 0x10
LAB_00753b26:
00753B26  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00753B29  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00753B2C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00753B2F  52                        PUSH EDX
00753B30  50                        PUSH EAX
00753B31  51                        PUSH ECX
00753B32  56                        PUSH ESI
00753B33  E8 88 FC FF FF            CALL 0x007537c0
00753B38  5E                        POP ESI
00753B39  5D                        POP EBP
00753B3A  C2 10 00                  RET 0x10
