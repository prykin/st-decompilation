FUN_004ab470:
004AB470  55                        PUSH EBP
004AB471  8B EC                     MOV EBP,ESP
004AB473  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AB476  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AB479  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AB47C  6A 01                     PUSH 0x1
004AB47E  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AB483  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AB489  89 15 DC 73 80 00         MOV dword ptr [0x008073dc],EDX
004AB48F  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004AB495  D9 1D D0 73 80 00         FSTP float ptr [0x008073d0]
004AB49B  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004AB49E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AB4A4  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004AB4AA  D9 1D D4 73 80 00         FSTP float ptr [0x008073d4]
004AB4B0  E8 92 A0 F5 FF            CALL 0x00405547
004AB4B5  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AB4BA  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004AB4C0  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
004AB4C6  25 FF 00 00 00            AND EAX,0xff
004AB4CB  50                        PUSH EAX
004AB4CC  A1 D8 73 80 00            MOV EAX,[0x008073d8]
004AB4D1  51                        PUSH ECX
004AB4D2  52                        PUSH EDX
004AB4D3  50                        PUSH EAX
004AB4D4  B9 58 76 80 00            MOV ECX,0x807658
004AB4D9  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AB4E3  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
004AB4ED  E8 E2 81 F5 FF            CALL 0x004036d4
004AB4F2  C7 05 E0 73 80 00 00 00 00 00  MOV dword ptr [0x008073e0],0x0
004AB4FC  5D                        POP EBP
004AB4FD  C2 08 00                  RET 0x8
