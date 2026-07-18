FUN_0074939f:
0074939F  53                        PUSH EBX
007493A0  55                        PUSH EBP
007493A1  56                        PUSH ESI
007493A2  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
007493A6  57                        PUSH EDI
007493A7  33 ED                     XOR EBP,EBP
007493A9  8D 5E F4                  LEA EBX,[ESI + -0xc]
007493AC  8D 46 04                  LEA EAX,[ESI + 0x4]
007493AF  8B FB                     MOV EDI,EBX
007493B1  F7 DF                     NEG EDI
007493B3  1B FF                     SBB EDI,EDI
007493B5  23 F8                     AND EDI,EAX
007493B7  57                        PUSH EDI
007493B8  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007493BE  33 C0                     XOR EAX,EAX
007493C0  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
007493C3  75 0E                     JNZ 0x007493d3
007493C5  39 46 48                  CMP dword ptr [ESI + 0x48],EAX
007493C8  75 09                     JNZ 0x007493d3
007493CA  57                        PUSH EDI
007493CB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007493D1  EB 39                     JMP 0x0074940c
LAB_007493d3:
007493D3  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
007493D6  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
007493D9  3B 4E 30                  CMP ECX,dword ptr [ESI + 0x30]
007493DC  7D 09                     JGE 0x007493e7
007493DE  C7 46 48 01 00 00 00      MOV dword ptr [ESI + 0x48],0x1
007493E5  EB 0D                     JMP 0x007493f4
LAB_007493e7:
007493E7  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
007493EA  8B 03                     MOV EAX,dword ptr [EBX]
007493EC  8B CB                     MOV ECX,EBX
007493EE  FF 50 10                  CALL dword ptr [EAX + 0x10]
007493F1  6A 01                     PUSH 0x1
007493F3  5D                        POP EBP
LAB_007493f4:
007493F4  8B CB                     MOV ECX,EBX
007493F6  E8 22 FF FF FF            CALL 0x0074931d
007493FB  57                        PUSH EDI
007493FC  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749402  85 ED                     TEST EBP,EBP
00749404  74 06                     JZ 0x0074940c
00749406  8B 06                     MOV EAX,dword ptr [ESI]
00749408  56                        PUSH ESI
00749409  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_0074940c:
0074940C  5F                        POP EDI
0074940D  5E                        POP ESI
0074940E  5D                        POP EBP
0074940F  33 C0                     XOR EAX,EAX
00749411  5B                        POP EBX
00749412  C2 04 00                  RET 0x4
