FUN_006a2d00:
006A2D00  55                        PUSH EBP
006A2D01  8B EC                     MOV EBP,ESP
006A2D03  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A2D06  57                        PUSH EDI
006A2D07  B9 41 00 00 00            MOV ECX,0x41
006A2D0C  33 C0                     XOR EAX,EAX
006A2D0E  BF 8C 42 85 00            MOV EDI,0x85428c
006A2D13  F3 AB                     STOSD.REP ES:EDI
006A2D15  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A2D18  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A2D1B  50                        PUSH EAX
006A2D1C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A2D1F  51                        PUSH ECX
006A2D20  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A2D23  52                        PUSH EDX
006A2D24  50                        PUSH EAX
006A2D25  51                        PUSH ECX
006A2D26  E8 81 13 D6 FF            CALL 0x004040ac
006A2D2B  25 FF 7F 00 00            AND EAX,0x7fff
006A2D30  50                        PUSH EAX
006A2D31  68 C0 FA 7D 00            PUSH 0x7dfac0
006A2D36  68 AC FA 7D 00            PUSH 0x7dfaac
006A2D3B  68 8C 42 85 00            PUSH 0x85428c
006A2D40  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006A2D46  83 C4 24                  ADD ESP,0x24
006A2D49  B8 8C 42 85 00            MOV EAX,0x85428c
006A2D4E  5F                        POP EDI
006A2D4F  5D                        POP EBP
006A2D50  C3                        RET
