STTmMineC::FUN_0063ddb0:
0063DDB0  55                        PUSH EBP
0063DDB1  8B EC                     MOV EBP,ESP
0063DDB3  53                        PUSH EBX
0063DDB4  56                        PUSH ESI
0063DDB5  57                        PUSH EDI
0063DDB6  8B F9                     MOV EDI,ECX
0063DDB8  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063DDBE  85 C0                     TEST EAX,EAX
0063DDC0  74 34                     JZ 0x0063ddf6
0063DDC2  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0063DDC5  33 F6                     XOR ESI,ESI
0063DDC7  85 DB                     TEST EBX,EBX
0063DDC9  7E 2B                     JLE 0x0063ddf6
LAB_0063ddcb:
0063DDCB  8B 8F 36 03 00 00         MOV ECX,dword ptr [EDI + 0x336]
0063DDD1  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0063DDD4  73 1B                     JNC 0x0063ddf1
0063DDD6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063DDD9  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0063DDDC  0F AF C6                  IMUL EAX,ESI
0063DDDF  03 C2                     ADD EAX,EDX
0063DDE1  85 C0                     TEST EAX,EAX
0063DDE3  74 0C                     JZ 0x0063ddf1
0063DDE5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063DDE8  8B CF                     MOV ECX,EDI
0063DDEA  50                        PUSH EAX
0063DDEB  56                        PUSH ESI
0063DDEC  E8 83 54 DC FF            CALL 0x00403274
LAB_0063ddf1:
0063DDF1  46                        INC ESI
0063DDF2  3B F3                     CMP ESI,EBX
0063DDF4  7C D5                     JL 0x0063ddcb
LAB_0063ddf6:
0063DDF6  5F                        POP EDI
0063DDF7  5E                        POP ESI
0063DDF8  5B                        POP EBX
0063DDF9  5D                        POP EBP
0063DDFA  C2 04 00                  RET 0x4
