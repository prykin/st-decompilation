FUN_0054cf70:
0054CF70  55                        PUSH EBP
0054CF71  8B EC                     MOV EBP,ESP
0054CF73  56                        PUSH ESI
0054CF74  57                        PUSH EDI
0054CF75  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0054CF78  8B F1                     MOV ESI,ECX
0054CF7A  57                        PUSH EDI
0054CF7B  E8 57 4B EB FF            CALL 0x00401ad7
0054CF80  57                        PUSH EDI
0054CF81  8B CE                     MOV ECX,ESI
0054CF83  E8 28 87 19 00            CALL 0x006e56b0
0054CF88  5F                        POP EDI
0054CF89  5E                        POP ESI
0054CF8A  5D                        POP EBP
0054CF8B  C2 04 00                  RET 0x4
