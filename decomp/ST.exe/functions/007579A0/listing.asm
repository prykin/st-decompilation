FUN_007579a0:
007579A0  55                        PUSH EBP
007579A1  8B EC                     MOV EBP,ESP
007579A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007579A6  8B 88 A2 01 00 00         MOV ECX,dword ptr [EAX + 0x1a2]
007579AC  C7 01 C0 79 75 00         MOV dword ptr [ECX],0x7579c0
007579B2  5D                        POP EBP
007579B3  C2 04 00                  RET 0x4
