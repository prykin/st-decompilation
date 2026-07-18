FUN_00553d40:
00553D40  55                        PUSH EBP
00553D41  8B EC                     MOV EBP,ESP
00553D43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00553D46  53                        PUSH EBX
00553D47  85 C0                     TEST EAX,EAX
00553D49  74 38                     JZ 0x00553d83
00553D4B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553D4E  33 DB                     XOR EBX,EBX
00553D50  85 C0                     TEST EAX,EAX
00553D52  7E 2F                     JLE 0x00553d83
00553D54  56                        PUSH ESI
00553D55  57                        PUSH EDI
00553D56  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_00553d59:
00553D59  33 F6                     XOR ESI,ESI
00553D5B  85 FF                     TEST EDI,EDI
00553D5D  7E 1A                     JLE 0x00553d79
LAB_00553d5f:
00553D5F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553D62  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553D65  6A 0F                     PUSH 0xf
00553D67  50                        PUSH EAX
00553D68  57                        PUSH EDI
00553D69  51                        PUSH ECX
00553D6A  53                        PUSH EBX
00553D6B  56                        PUSH ESI
00553D6C  E8 96 DF EA FF            CALL 0x00401d07
00553D71  83 C4 18                  ADD ESP,0x18
00553D74  46                        INC ESI
00553D75  3B F7                     CMP ESI,EDI
00553D77  7C E6                     JL 0x00553d5f
LAB_00553d79:
00553D79  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553D7C  43                        INC EBX
00553D7D  3B D8                     CMP EBX,EAX
00553D7F  7C D8                     JL 0x00553d59
00553D81  5F                        POP EDI
00553D82  5E                        POP ESI
LAB_00553d83:
00553D83  5B                        POP EBX
00553D84  5D                        POP EBP
00553D85  C3                        RET
