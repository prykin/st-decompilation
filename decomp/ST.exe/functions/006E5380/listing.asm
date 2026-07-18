FUN_006e5380:
006E5380  55                        PUSH EBP
006E5381  8B EC                     MOV EBP,ESP
006E5383  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E5386  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E5389  50                        PUSH EAX
006E538A  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
006E538D  6A 00                     PUSH 0x0
006E538F  52                        PUSH EDX
006E5390  50                        PUSH EAX
006E5391  E8 BA E0 FF FF            CALL 0x006e3450
006E5396  83 C4 10                  ADD ESP,0x10
006E5399  5D                        POP EBP
006E539A  C2 08 00                  RET 0x8
