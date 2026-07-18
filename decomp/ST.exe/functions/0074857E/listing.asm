FUN_0074857e:
0074857E  55                        PUSH EBP
0074857F  8B EC                     MOV EBP,ESP
00748581  56                        PUSH ESI
00748582  57                        PUSH EDI
00748583  6A 00                     PUSH 0x0
00748585  8B F1                     MOV ESI,ECX
00748587  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074858A  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074858D  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00748590  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00748593  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748596  E8 77 F5 FF FF            CALL 0x00747b12
0074859B  83 A6 9C 00 00 00 00      AND dword ptr [ESI + 0x9c],0x0
007485A2  80 A6 A0 00 00 00 00      AND byte ptr [ESI + 0xa0],0x0
007485A9  80 A6 A1 00 00 00 00      AND byte ptr [ESI + 0xa1],0x0
007485B0  6A 0C                     PUSH 0xc
007485B2  59                        POP ECX
007485B3  33 C0                     XOR EAX,EAX
007485B5  8D BE A8 00 00 00         LEA EDI,[ESI + 0xa8]
007485BB  F3 AB                     STOSD.REP ES:EDI
007485BD  8B C6                     MOV EAX,ESI
007485BF  5F                        POP EDI
007485C0  5E                        POP ESI
007485C1  5D                        POP EBP
007485C2  C2 14 00                  RET 0x14
