FUN_0074987c:
0074987C  55                        PUSH EBP
0074987D  8B EC                     MOV EBP,ESP
0074987F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00749882  56                        PUSH ESI
00749883  57                        PUSH EDI
00749884  83 78 10 00               CMP dword ptr [EAX + 0x10],0x0
00749888  74 21                     JZ 0x007498ab
0074988A  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
0074988D  3B 0D 40 12 7A 00         CMP ECX,dword ptr [0x007a1240]
00749893  75 1D                     JNZ 0x007498b2
00749895  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
00749898  3B 0D 44 12 7A 00         CMP ECX,dword ptr [0x007a1244]
0074989E  75 12                     JNZ 0x007498b2
007498A0  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
007498A3  3B 0D 48 12 7A 00         CMP ECX,dword ptr [0x007a1248]
007498A9  75 07                     JNZ 0x007498b2
LAB_007498ab:
007498AB  BE F0 16 7A 00            MOV ESI,0x7a16f0
007498B0  EB 2B                     JMP 0x007498dd
LAB_007498b2:
007498B2  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
007498B5  3B 0D 50 12 7A 00         CMP ECX,dword ptr [0x007a1250]
007498BB  75 1B                     JNZ 0x007498d8
007498BD  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
007498C0  3B 0D 54 12 7A 00         CMP ECX,dword ptr [0x007a1254]
007498C6  75 10                     JNZ 0x007498d8
007498C8  8B 40 30                  MOV EAX,dword ptr [EAX + 0x30]
007498CB  BE 00 17 7A 00            MOV ESI,0x7a1700
007498D0  3B 05 58 12 7A 00         CMP EAX,dword ptr [0x007a1258]
007498D6  74 05                     JZ 0x007498dd
LAB_007498d8:
007498D8  BE 68 E3 79 00            MOV ESI,0x79e368
LAB_007498dd:
007498DD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007498E0  8B F8                     MOV EDI,EAX
007498E2  A5                        MOVSD ES:EDI,ESI
007498E3  A5                        MOVSD ES:EDI,ESI
007498E4  A5                        MOVSD ES:EDI,ESI
007498E5  A5                        MOVSD ES:EDI,ESI
007498E6  5F                        POP EDI
007498E7  5E                        POP ESI
007498E8  5D                        POP EBP
007498E9  C2 08 00                  RET 0x8
