getSystemCP:
00736630  55                        PUSH EBP
00736631  8B EC                     MOV EBP,ESP
00736633  C7 05 28 72 85 00 00 00 00 00  MOV dword ptr [0x00857228],0x0
0073663D  83 7D 08 FE               CMP dword ptr [EBP + 0x8],-0x2
00736641  75 12                     JNZ 0x00736655
00736643  C7 05 28 72 85 00 01 00 00 00  MOV dword ptr [0x00857228],0x1
0073664D  FF 15 04 BC 85 00         CALL dword ptr [0x0085bc04]
00736653  EB 32                     JMP 0x00736687
LAB_00736655:
00736655  83 7D 08 FD               CMP dword ptr [EBP + 0x8],-0x3
00736659  75 12                     JNZ 0x0073666d
0073665B  C7 05 28 72 85 00 01 00 00 00  MOV dword ptr [0x00857228],0x1
00736665  FF 15 00 BC 85 00         CALL dword ptr [0x0085bc00]
0073666B  EB 1A                     JMP 0x00736687
LAB_0073666d:
0073666D  83 7D 08 FC               CMP dword ptr [EBP + 0x8],-0x4
00736671  75 11                     JNZ 0x00736684
00736673  C7 05 28 72 85 00 01 00 00 00  MOV dword ptr [0x00857228],0x1
0073667D  A1 20 72 85 00            MOV EAX,[0x00857220]
00736682  EB 03                     JMP 0x00736687
LAB_00736684:
00736684  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00736687:
00736687  5D                        POP EBP
00736688  C3                        RET
