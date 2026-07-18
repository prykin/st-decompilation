FUN_00735390:
00735390  55                        PUSH EBP
00735391  8B EC                     MOV EBP,ESP
00735393  83 EC 08                  SUB ESP,0x8
00735396  DD 45 0C                  FLD double ptr [EBP + 0xc]
00735399  DC 45 14                  FADD double ptr [EBP + 0x14]
0073539C  DD 5D F8                  FSTP double ptr [EBP + -0x8]
0073539F  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
007353A6  75 2C                     JNZ 0x007353d4
007353A8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007353AB  50                        PUSH EAX
007353AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007353AF  51                        PUSH ECX
007353B0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007353B3  52                        PUSH EDX
007353B4  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007353B7  50                        PUSH EAX
007353B8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007353BB  51                        PUSH ECX
007353BC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007353BF  52                        PUSH EDX
007353C0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007353C3  50                        PUSH EAX
007353C4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007353C7  51                        PUSH ECX
007353C8  6A 01                     PUSH 0x1
007353CA  E8 11 0A 00 00            CALL 0x00735de0
007353CF  83 C4 24                  ADD ESP,0x24
007353D2  EB 1E                     JMP 0x007353f2
LAB_007353d4:
007353D4  C7 05 48 71 85 00 21 00 00 00  MOV dword ptr [0x00857148],0x21
007353DE  68 FF FF 00 00            PUSH 0xffff
007353E3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007353E6  52                        PUSH EDX
007353E7  E8 84 0E 00 00            CALL 0x00736270
007353EC  83 C4 08                  ADD ESP,0x8
007353EF  DD 45 F8                  FLD double ptr [EBP + -0x8]
LAB_007353f2:
007353F2  8B E5                     MOV ESP,EBP
007353F4  5D                        POP EBP
007353F5  C3                        RET
