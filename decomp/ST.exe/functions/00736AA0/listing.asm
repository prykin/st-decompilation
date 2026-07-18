FUN_00736aa0:
00736AA0  55                        PUSH EBP
00736AA1  8B EC                     MOV EBP,ESP
00736AA3  83 3D 6C A3 85 00 00      CMP dword ptr [0x0085a36c],0x0
00736AAA  74 07                     JZ 0x00736ab3
00736AAC  A1 E0 A2 85 00            MOV EAX,[0x0085a2e0]
00736AB1  EB 02                     JMP 0x00736ab5
LAB_00736ab3:
00736AB3  33 C0                     XOR EAX,EAX
LAB_00736ab5:
00736AB5  5D                        POP EBP
00736AB6  C3                        RET
