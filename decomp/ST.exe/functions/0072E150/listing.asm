FUN_0072e150:
0072E150  55                        PUSH EBP
0072E151  8B EC                     MOV EBP,ESP
0072E153  83 EC 10                  SUB ESP,0x10
0072E156  68 FF FF 00 00            PUSH 0xffff
0072E15B  A1 04 11 7F 00            MOV EAX,[0x007f1104]
0072E160  50                        PUSH EAX
0072E161  E8 0A 81 00 00            CALL 0x00736270
0072E166  83 C4 08                  ADD ESP,0x8
0072E169  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0072E16C  8B 4D 0E                  MOV ECX,dword ptr [EBP + 0xe]
0072E16F  81 E1 FF FF 00 00         AND ECX,0xffff
0072E175  81 E1 F0 7F 00 00         AND ECX,0x7ff0
0072E17B  81 F9 F0 7F 00 00         CMP ECX,0x7ff0
0072E181  0F 85 84 00 00 00         JNZ 0x0072e20b
0072E187  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072E18A  52                        PUSH EDX
0072E18B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E18E  50                        PUSH EAX
0072E18F  E8 DC 7E 00 00            CALL 0x00736070
0072E194  83 C4 08                  ADD ESP,0x8
0072E197  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0072E19A  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0072E19E  7E 42                     JLE 0x0072e1e2
0072E1A0  83 7D F0 02               CMP dword ptr [EBP + -0x10],0x2
0072E1A4  7E 08                     JLE 0x0072e1ae
0072E1A6  83 7D F0 03               CMP dword ptr [EBP + -0x10],0x3
0072E1AA  74 1B                     JZ 0x0072e1c7
0072E1AC  EB 34                     JMP 0x0072e1e2
LAB_0072e1ae:
0072E1AE  68 FF FF 00 00            PUSH 0xffff
0072E1B3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072E1B6  51                        PUSH ECX
0072E1B7  E8 B4 80 00 00            CALL 0x00736270
0072E1BC  83 C4 08                  ADD ESP,0x8
0072E1BF  DD 45 08                  FLD double ptr [EBP + 0x8]
0072E1C2  E9 BA 00 00 00            JMP 0x0072e281
LAB_0072e1c7:
0072E1C7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072E1CA  52                        PUSH EDX
0072E1CB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072E1CE  50                        PUSH EAX
0072E1CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072E1D2  51                        PUSH ECX
0072E1D3  6A 0B                     PUSH 0xb
0072E1D5  E8 56 71 00 00            CALL 0x00735330
0072E1DA  83 C4 10                  ADD ESP,0x10
0072E1DD  E9 9F 00 00 00            JMP 0x0072e281
LAB_0072e1e2:
0072E1E2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072E1E5  52                        PUSH EDX
0072E1E6  DD 45 08                  FLD double ptr [EBP + 0x8]
0072E1E9  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
0072E1EF  83 EC 08                  SUB ESP,0x8
0072E1F2  DD 1C 24                  FSTP double ptr [ESP]
0072E1F5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072E1F8  50                        PUSH EAX
0072E1F9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072E1FC  51                        PUSH ECX
0072E1FD  6A 0B                     PUSH 0xb
0072E1FF  6A 08                     PUSH 0x8
0072E201  E8 FA 71 00 00            CALL 0x00735400
0072E206  83 C4 1C                  ADD ESP,0x1c
0072E209  EB 76                     JMP 0x0072e281
LAB_0072e20b:
0072E20B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072E20E  52                        PUSH EDX
0072E20F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E212  50                        PUSH EAX
0072E213  E8 F8 70 00 00            CALL 0x00735310
0072E218  83 C4 08                  ADD ESP,0x8
0072E21B  DD 5D F8                  FSTP double ptr [EBP + -0x8]
0072E21E  DD 45 F8                  FLD double ptr [EBP + -0x8]
0072E221  DC 5D 08                  FCOMP double ptr [EBP + 0x8]
0072E224  DF E0                     FNSTSW AX
0072E226  F6 C4 40                  TEST AH,0x40
0072E229  74 16                     JZ 0x0072e241
0072E22B  68 FF FF 00 00            PUSH 0xffff
0072E230  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072E233  51                        PUSH ECX
0072E234  E8 37 80 00 00            CALL 0x00736270
0072E239  83 C4 08                  ADD ESP,0x8
0072E23C  DD 45 F8                  FLD double ptr [EBP + -0x8]
0072E23F  EB 40                     JMP 0x0072e281
LAB_0072e241:
0072E241  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072E244  83 E2 20                  AND EDX,0x20
0072E247  85 D2                     TEST EDX,EDX
0072E249  74 16                     JZ 0x0072e261
0072E24B  68 FF FF 00 00            PUSH 0xffff
0072E250  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072E253  50                        PUSH EAX
0072E254  E8 17 80 00 00            CALL 0x00736270
0072E259  83 C4 08                  ADD ESP,0x8
0072E25C  DD 45 F8                  FLD double ptr [EBP + -0x8]
0072E25F  EB 20                     JMP 0x0072e281
LAB_0072e261:
0072E261  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072E264  51                        PUSH ECX
0072E265  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072E268  52                        PUSH EDX
0072E269  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072E26C  50                        PUSH EAX
0072E26D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072E270  51                        PUSH ECX
0072E271  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072E274  52                        PUSH EDX
0072E275  6A 0B                     PUSH 0xb
0072E277  6A 10                     PUSH 0x10
0072E279  E8 82 71 00 00            CALL 0x00735400
0072E27E  83 C4 1C                  ADD ESP,0x1c
LAB_0072e281:
0072E281  8B E5                     MOV ESP,EBP
0072E283  5D                        POP EBP
0072E284  C3                        RET
