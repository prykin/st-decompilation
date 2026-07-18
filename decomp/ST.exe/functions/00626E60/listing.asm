FUN_00626e60:
00626E60  55                        PUSH EBP
00626E61  8B EC                     MOV EBP,ESP
00626E63  56                        PUSH ESI
00626E64  57                        PUSH EDI
00626E65  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00626E68  8B F1                     MOV ESI,ECX
00626E6A  BA 01 00 00 00            MOV EDX,0x1
00626E6F  33 C0                     XOR EAX,EAX
LAB_00626e71:
00626E71  85 96 42 03 00 00         TEST dword ptr [ESI + 0x342],EDX
00626E77  0F 95 C1                  SETNZ CL
00626E7A  88 0C 38                  MOV byte ptr [EAX + EDI*0x1],CL
00626E7D  D1 E2                     SHL EDX,0x1
00626E7F  40                        INC EAX
00626E80  83 F8 06                  CMP EAX,0x6
00626E83  7C EC                     JL 0x00626e71
00626E85  5F                        POP EDI
00626E86  5E                        POP ESI
00626E87  5D                        POP EBP
00626E88  C2 04 00                  RET 0x4
