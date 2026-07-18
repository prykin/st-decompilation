FUN_004c6bb0:
004C6BB0  55                        PUSH EBP
004C6BB1  8B EC                     MOV EBP,ESP
004C6BB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C6BB6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004C6BB9  56                        PUSH ESI
004C6BBA  8B F1                     MOV ESI,ECX
004C6BBC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C6BBF  57                        PUSH EDI
004C6BC0  89 86 E0 03 00 00         MOV dword ptr [ESI + 0x3e0],EAX
004C6BC6  66 8B C2                  MOV AX,DX
004C6BC9  89 96 E8 03 00 00         MOV dword ptr [ESI + 0x3e8],EDX
004C6BCF  66 8B 96 E0 03 00 00      MOV DX,word ptr [ESI + 0x3e0]
004C6BD6  50                        PUSH EAX
004C6BD7  33 FF                     XOR EDI,EDI
004C6BD9  89 8E E4 03 00 00         MOV dword ptr [ESI + 0x3e4],ECX
004C6BDF  51                        PUSH ECX
004C6BE0  52                        PUSH EDX
004C6BE1  8B CE                     MOV ECX,ESI
004C6BE3  C7 86 DC 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x3dc],0x1
004C6BED  89 BE FC 03 00 00         MOV dword ptr [ESI + 0x3fc],EDI
004C6BF3  89 BE 00 04 00 00         MOV dword ptr [ESI + 0x400],EDI
004C6BF9  89 BE 04 04 00 00         MOV dword ptr [ESI + 0x404],EDI
004C6BFF  E8 14 D7 F3 FF            CALL 0x00404318
004C6C04  83 F8 FF                  CMP EAX,-0x1
004C6C07  74 13                     JZ 0x004c6c1c
004C6C09  83 F8 02                  CMP EAX,0x2
004C6C0C  75 22                     JNZ 0x004c6c30
004C6C0E  89 BE DC 03 00 00         MOV dword ptr [ESI + 0x3dc],EDI
004C6C14  5F                        POP EDI
004C6C15  33 C0                     XOR EAX,EAX
004C6C17  5E                        POP ESI
004C6C18  5D                        POP EBP
004C6C19  C2 0C 00                  RET 0xc
LAB_004c6c1c:
004C6C1C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004C6C21  6A 1C                     PUSH 0x1c
004C6C23  68 68 D3 7A 00            PUSH 0x7ad368
004C6C28  50                        PUSH EAX
004C6C29  6A FB                     PUSH -0x5
004C6C2B  E8 10 F2 1D 00            CALL 0x006a5e40
LAB_004c6c30:
004C6C30  5F                        POP EDI
004C6C31  33 C0                     XOR EAX,EAX
004C6C33  5E                        POP ESI
004C6C34  5D                        POP EBP
004C6C35  C2 0C 00                  RET 0xc
