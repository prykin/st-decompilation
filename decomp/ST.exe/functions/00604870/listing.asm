FUN_00604870:
00604870  55                        PUSH EBP
00604871  8B EC                     MOV EBP,ESP
00604873  56                        PUSH ESI
00604874  8B F1                     MOV ESI,ECX
00604876  57                        PUSH EDI
00604877  83 CF FF                  OR EDI,0xffffffff
0060487A  8B 86 15 02 00 00         MOV EAX,dword ptr [ESI + 0x215]
00604880  85 C0                     TEST EAX,EAX
00604882  75 13                     JNZ 0x00604897
00604884  6A 14                     PUSH 0x14
00604886  6A 20                     PUSH 0x20
00604888  6A 0A                     PUSH 0xa
0060488A  6A 00                     PUSH 0x0
0060488C  E8 FF 99 0A 00            CALL 0x006ae290
00604891  89 86 15 02 00 00         MOV dword ptr [ESI + 0x215],EAX
LAB_00604897:
00604897  8B B6 15 02 00 00         MOV ESI,dword ptr [ESI + 0x215]
0060489D  85 F6                     TEST ESI,ESI
0060489F  74 10                     JZ 0x006048b1
006048A1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006048A4  50                        PUSH EAX
006048A5  56                        PUSH ESI
006048A6  E8 15 99 0A 00            CALL 0x006ae1c0
006048AB  5F                        POP EDI
006048AC  5E                        POP ESI
006048AD  5D                        POP EBP
006048AE  C2 04 00                  RET 0x4
LAB_006048b1:
006048B1  8B C7                     MOV EAX,EDI
006048B3  5F                        POP EDI
006048B4  5E                        POP ESI
006048B5  5D                        POP EBP
006048B6  C2 04 00                  RET 0x4
