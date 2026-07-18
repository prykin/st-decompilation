FUN_00672af0:
00672AF0  55                        PUSH EBP
00672AF1  8B EC                     MOV EBP,ESP
00672AF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00672AF6  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
00672AFD  50                        PUSH EAX
00672AFE  68 00 10 00 00            PUSH 0x1000
00672B03  51                        PUSH ECX
00672B04  E8 47 5E 05 00            CALL 0x006c8950
00672B09  25 FF FF 00 00            AND EAX,0xffff
00672B0E  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00672B13  5D                        POP EBP
00672B14  C2 04 00                  RET 0x4
