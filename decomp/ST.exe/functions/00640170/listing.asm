FUN_00640170:
00640170  55                        PUSH EBP
00640171  8B EC                     MOV EBP,ESP
00640173  8B D1                     MOV EDX,ECX
00640175  57                        PUSH EDI
00640176  33 C0                     XOR EAX,EAX
00640178  8B BA 7F 03 00 00         MOV EDI,dword ptr [EDX + 0x37f]
0064017E  85 FF                     TEST EDI,EDI
00640180  0F 84 81 00 00 00         JZ 0x00640207
00640186  DB 45 08                  FILD dword ptr [EBP + 0x8]
00640189  B9 06 00 00 00            MOV ECX,0x6
0064018E  F3 AB                     STOSD.REP ES:EDI
00640190  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640196  66 AB                     STOSW ES:EDI
00640198  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0064019E  AA                        STOSB ES:EDI
0064019F  8B 82 7F 03 00 00         MOV EAX,dword ptr [EDX + 0x37f]
006401A5  D9 58 04                  FSTP float ptr [EAX + 0x4]
006401A8  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006401AB  8B 8A 7F 03 00 00         MOV ECX,dword ptr [EDX + 0x37f]
006401B1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006401B7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006401BD  D9 59 08                  FSTP float ptr [ECX + 0x8]
006401C0  8B 82 7F 03 00 00         MOV EAX,dword ptr [EDX + 0x37f]
006401C6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006401C9  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006401CC  8B 82 7F 03 00 00         MOV EAX,dword ptr [EDX + 0x37f]
006401D2  C7 40 10 03 00 00 00      MOV dword ptr [EAX + 0x10],0x3
006401D9  8B 8A 7F 03 00 00         MOV ECX,dword ptr [EDX + 0x37f]
006401DF  C6 41 15 00               MOV byte ptr [ECX + 0x15],0x0
006401E3  8B 82 7F 03 00 00         MOV EAX,dword ptr [EDX + 0x37f]
006401E9  C6 40 14 00               MOV byte ptr [EAX + 0x14],0x0
006401ED  8B 8A 7F 03 00 00         MOV ECX,dword ptr [EDX + 0x37f]
006401F3  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006401F9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006401FF  89 41 17                  MOV dword ptr [ECX + 0x17],EAX
00640202  B8 01 00 00 00            MOV EAX,0x1
LAB_00640207:
00640207  5F                        POP EDI
00640208  5D                        POP EBP
00640209  C2 0C 00                  RET 0xc
