FUN_00757300:
00757300  55                        PUSH EBP
00757301  8B EC                     MOV EBP,ESP
00757303  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00757306  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00757309  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0075730C  85 C0                     TEST EAX,EAX
0075730E  77 15                     JA 0x00757325
00757310  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00757316  6A 11                     PUSH 0x11
00757318  68 80 2D 7F 00            PUSH 0x7f2d80
0075731D  52                        PUSH EDX
0075731E  6A FB                     PUSH -0x5
00757320  E8 1B EB F4 FF            CALL 0x006a5e40
LAB_00757325:
00757325  B8 01 00 00 00            MOV EAX,0x1
0075732A  5D                        POP EBP
0075732B  C2 04 00                  RET 0x4
