STResourceC::sub_00580D30:
00580D30  55                        PUSH EBP
00580D31  8B EC                     MOV EBP,ESP
00580D33  56                        PUSH ESI
00580D34  57                        PUSH EDI
00580D35  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00580D38  8B F1                     MOV ESI,ECX
00580D3A  85 FF                     TEST EDI,EDI
00580D3C  74 0A                     JZ 0x00580d48
00580D3E  C7 86 5D 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x25d],0x2
LAB_00580d48:
00580D48  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
00580D4E  85 C0                     TEST EAX,EAX
00580D50  74 0B                     JZ 0x00580d5d
00580D52  6A 00                     PUSH 0x0
00580D54  6A 00                     PUSH 0x0
00580D56  8B CE                     MOV ECX,ESI
00580D58  E8 CE 3B E8 FF            CALL 0x0040492b
LAB_00580d5d:
00580D5D  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00580D61  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00580D67  56                        PUSH ESI
00580D68  50                        PUSH EAX
00580D69  E8 D3 07 E8 FF            CALL 0x00401541
00580D6E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00580D74  56                        PUSH ESI
00580D75  E8 8A 3F E8 FF            CALL 0x00404d04
00580D7A  85 FF                     TEST EDI,EDI
00580D7C  66 C7 46 32 FF FF         MOV word ptr [ESI + 0x32],0xffff
00580D82  75 07                     JNZ 0x00580d8b
00580D84  8B CE                     MOV ECX,ESI
00580D86  E8 BE 36 E8 FF            CALL 0x00404449
LAB_00580d8b:
00580D8B  5F                        POP EDI
00580D8C  5E                        POP ESI
00580D8D  5D                        POP EBP
00580D8E  C2 04 00                  RET 0x4
