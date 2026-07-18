FUN_004e42e0:
004E42E0  55                        PUSH EBP
004E42E1  8B EC                     MOV EBP,ESP
004E42E3  53                        PUSH EBX
004E42E4  56                        PUSH ESI
004E42E5  57                        PUSH EDI
004E42E6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E42E9  8B F1                     MOV ESI,ECX
004E42EB  57                        PUSH EDI
004E42EC  E8 8F 1A F2 FF            CALL 0x00405d80
004E42F1  57                        PUSH EDI
004E42F2  8B CE                     MOV ECX,ESI
004E42F4  8B D8                     MOV EBX,EAX
004E42F6  E8 AC F3 F1 FF            CALL 0x004036a7
004E42FB  3B C3                     CMP EAX,EBX
004E42FD  7E 09                     JLE 0x004e4308
004E42FF  53                        PUSH EBX
004E4300  57                        PUSH EDI
004E4301  8B CE                     MOV ECX,ESI
004E4303  E8 1C 0D F2 FF            CALL 0x00405024
LAB_004e4308:
004E4308  57                        PUSH EDI
004E4309  8B CE                     MOV ECX,ESI
004E430B  E8 97 F3 F1 FF            CALL 0x004036a7
004E4310  5F                        POP EDI
004E4311  5E                        POP ESI
004E4312  5B                        POP EBX
004E4313  5D                        POP EBP
004E4314  C2 04 00                  RET 0x4
