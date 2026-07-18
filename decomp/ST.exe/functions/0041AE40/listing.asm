FUN_0041ae40:
0041AE40  55                        PUSH EBP
0041AE41  8B EC                     MOV EBP,ESP
0041AE43  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0041AE46  56                        PUSH ESI
0041AE47  8B F1                     MOV ESI,ECX
0041AE49  57                        PUSH EDI
0041AE4A  B9 06 00 00 00            MOV ECX,0x6
0041AE4F  33 C0                     XOR EAX,EAX
0041AE51  8B FA                     MOV EDI,EDX
0041AE53  F3 AB                     STOSD.REP ES:EDI
0041AE55  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041AE58  5F                        POP EDI
0041AE59  89 02                     MOV dword ptr [EDX],EAX
0041AE5B  C6 42 08 00               MOV byte ptr [EDX + 0x8],0x0
0041AE5F  5E                        POP ESI
0041AE60  5D                        POP EBP
0041AE61  C2 04 00                  RET 0x4
