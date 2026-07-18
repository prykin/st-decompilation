FUN_007595f0:
007595F0  55                        PUSH EBP
007595F1  8B EC                     MOV EBP,ESP
007595F3  53                        PUSH EBX
007595F4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007595F7  56                        PUSH ESI
007595F8  57                        PUSH EDI
007595F9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007595FC  83 FB 01                  CMP EBX,0x1
007595FF  8B 37                     MOV ESI,dword ptr [EDI]
00759601  74 17                     JZ 0x0075961a
00759603  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759608  68 11 02 00 00            PUSH 0x211
0075960D  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759612  50                        PUSH EAX
00759613  6A 0C                     PUSH 0xc
00759615  E8 26 C8 F4 FF            CALL 0x006a5e40
LAB_0075961a:
0075961A  6A 7E                     PUSH 0x7e
0075961C  53                        PUSH EBX
0075961D  57                        PUSH EDI
0075961E  E8 6D FC FF FF            CALL 0x00759290
00759623  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00759626  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00759629  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0075962C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0075962F  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00759632  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00759635  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0075963B  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0075963E  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
00759641  C7 40 28 00 00 00 00      MOV dword ptr [EAX + 0x28],0x0
00759648  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
0075964B  5F                        POP EDI
0075964C  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
0075964F  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
00759652  5E                        POP ESI
00759653  5B                        POP EBX
00759654  5D                        POP EBP
00759655  C2 18 00                  RET 0x18
