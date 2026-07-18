FUN_00749091:
00749091  56                        PUSH ESI
00749092  8B F1                     MOV ESI,ECX
00749094  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00749097  85 C0                     TEST EAX,EAX
00749099  74 07                     JZ 0x007490a2
0074909B  50                        PUSH EAX
0074909C  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_007490a2:
007490A2  8B C6                     MOV EAX,ESI
007490A4  8D 4E 10                  LEA ECX,[ESI + 0x10]
007490A7  F7 D8                     NEG EAX
007490A9  1B C0                     SBB EAX,EAX
007490AB  23 C1                     AND EAX,ECX
007490AD  50                        PUSH EAX
007490AE  FF 15 84 BB 85 00         CALL dword ptr [0x0085bb84]
007490B4  8B CE                     MOV ECX,ESI
007490B6  83 C6 04                  ADD ESI,0x4
007490B9  F7 D9                     NEG ECX
007490BB  1B C9                     SBB ECX,ECX
007490BD  23 CE                     AND ECX,ESI
007490BF  E8 B3 26 00 00            CALL 0x0074b777
007490C4  5E                        POP ESI
007490C5  C3                        RET
