FUN_00691650:
00691650  55                        PUSH EBP
00691651  8B EC                     MOV EBP,ESP
00691653  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00691656  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00691659  50                        PUSH EAX
0069165A  51                        PUSH ECX
0069165B  68 60 59 7D 00            PUSH 0x7d5960
00691660  68 68 3A 85 00            PUSH 0x853a68
00691665  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0069166B  83 C4 10                  ADD ESP,0x10
0069166E  B8 68 3A 85 00            MOV EAX,0x853a68
00691673  5D                        POP EBP
00691674  C2 08 00                  RET 0x8
