FUN_00751f30:
00751F30  55                        PUSH EBP
00751F31  8B EC                     MOV EBP,ESP
00751F33  56                        PUSH ESI
00751F34  57                        PUSH EDI
00751F35  6A 3E                     PUSH 0x3e
00751F37  E8 D4 8C F5 FF            CALL 0x006aac10
00751F3C  8B F0                     MOV ESI,EAX
00751F3E  85 F6                     TEST ESI,ESI
00751F40  75 06                     JNZ 0x00751f48
00751F42  5F                        POP EDI
00751F43  5E                        POP ESI
00751F44  5D                        POP EBP
00751F45  C2 08 00                  RET 0x8
LAB_00751f48:
00751F48  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751F4B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00751F4E  51                        PUSH ECX
00751F4F  56                        PUSH ESI
00751F50  89 46 26                  MOV dword ptr [ESI + 0x26],EAX
00751F53  C7 46 36 90 1F 75 00      MOV dword ptr [ESI + 0x36],0x751f90
00751F5A  E8 A1 57 F7 FF            CALL 0x006c7700
00751F5F  8B F8                     MOV EDI,EAX
00751F61  85 FF                     TEST EDI,EDI
00751F63  74 22                     JZ 0x00751f87
00751F65  56                        PUSH ESI
00751F66  E8 15 5A F7 FF            CALL 0x006c7980
00751F6B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00751F71  6A 38                     PUSH 0x38
00751F73  68 60 2B 7F 00            PUSH 0x7f2b60
00751F78  52                        PUSH EDX
00751F79  57                        PUSH EDI
00751F7A  E8 C1 3E F5 FF            CALL 0x006a5e40
00751F7F  5F                        POP EDI
00751F80  33 C0                     XOR EAX,EAX
00751F82  5E                        POP ESI
00751F83  5D                        POP EBP
00751F84  C2 08 00                  RET 0x8
LAB_00751f87:
00751F87  8B C6                     MOV EAX,ESI
00751F89  5F                        POP EDI
00751F8A  5E                        POP ESI
00751F8B  5D                        POP EBP
00751F8C  C2 08 00                  RET 0x8
