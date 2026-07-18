FUN_00550830:
00550830  55                        PUSH EBP
00550831  8B EC                     MOV EBP,ESP
00550833  56                        PUSH ESI
00550834  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00550837  85 F6                     TEST ESI,ESI
00550839  74 79                     JZ 0x005508b4
0055083B  8D 46 40                  LEA EAX,[ESI + 0x40]
0055083E  50                        PUSH EAX
0055083F  56                        PUSH ESI
00550840  68 DC 40 7C 00            PUSH 0x7c40dc
00550845  68 3A F3 80 00            PUSH 0x80f33a
0055084A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00550850  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00550856  83 C4 10                  ADD ESP,0x10
00550859  85 C9                     TEST ECX,ECX
0055085B  74 21                     JZ 0x0055087e
0055085D  8A 86 50 04 00 00         MOV AL,byte ptr [ESI + 0x450]
00550863  3C FF                     CMP AL,0xff
00550865  74 07                     JZ 0x0055086e
00550867  25 FF 00 00 00            AND EAX,0xff
0055086C  EB 05                     JMP 0x00550873
LAB_0055086e:
0055086E  B8 08 00 00 00            MOV EAX,0x8
LAB_00550873:
00550873  50                        PUSH EAX
00550874  68 3A F3 80 00            PUSH 0x80f33a
00550879  E8 5A 0C EB FF            CALL 0x004014d8
LAB_0055087e:
0055087E  33 C0                     XOR EAX,EAX
00550880  A0 4E 87 80 00            MOV AL,[0x0080874e]
00550885  48                        DEC EAX
00550886  74 14                     JZ 0x0055089c
00550888  48                        DEC EAX
00550889  74 0A                     JZ 0x00550895
0055088B  48                        DEC EAX
0055088C  75 26                     JNZ 0x005508b4
0055088E  B8 3A 00 00 00            MOV EAX,0x3a
00550893  EB 0C                     JMP 0x005508a1
LAB_00550895:
00550895  B8 39 00 00 00            MOV EAX,0x39
0055089A  EB 05                     JMP 0x005508a1
LAB_0055089c:
0055089C  B8 38 00 00 00            MOV EAX,0x38
LAB_005508a1:
005508A1  6A 00                     PUSH 0x0
005508A3  6A 00                     PUSH 0x0
005508A5  50                        PUSH EAX
005508A6  6A 00                     PUSH 0x0
005508A8  6A 05                     PUSH 0x5
005508AA  B9 58 76 80 00            MOV ECX,0x807658
005508AF  E8 24 43 EB FF            CALL 0x00404bd8
LAB_005508b4:
005508B4  5E                        POP ESI
005508B5  5D                        POP EBP
005508B6  C2 04 00                  RET 0x4
