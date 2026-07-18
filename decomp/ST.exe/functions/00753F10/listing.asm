FUN_00753f10:
00753F10  C8 04 00 00               ENTER 0x4,0x0
00753F14  53                        PUSH EBX
00753F15  56                        PUSH ESI
00753F16  57                        PUSH EDI
00753F17  B8 D2 C1 00 00            MOV EAX,0xc1d2
00753F1C  50                        PUSH EAX
00753F1D  E8 FF EB CA FF            CALL 0x00402b21
00753F22  83 C4 04                  ADD ESP,0x4
00753F25  0B C0                     OR EAX,EAX
00753F27  74 58                     JZ 0x00753f81
00753F29  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00753F2C  8B F8                     MOV EDI,EAX
00753F2E  FC                        CLD
00753F2F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00753F32  89 07                     MOV dword ptr [EDI],EAX
00753F34  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00753F37  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
00753F3A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753F3D  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00753F40  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
00753F43  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00753F46  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
00753F49  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00753F4C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00753F4F  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
00753F52  40                        INC EAX
00753F53  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
00753F56  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00753F59  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
00753F5C  89 47 24                  MOV dword ptr [EDI + 0x24],EAX
00753F5F  C7 47 3C 00 00 00 00      MOV dword ptr [EDI + 0x3c],0x0
00753F66  55                        PUSH EBP
00753F67  8B EF                     MOV EBP,EDI
00753F69  E8 17 02 00 00            CALL 0x00754185
00753F6E  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00753F71  5D                        POP EBP
00753F72  50                        PUSH EAX
00753F73  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00753F76  E8 0F 1E CB FF            CALL 0x00405d8a
00753F7B  83 C4 04                  ADD ESP,0x4
00753F7E  58                        POP EAX
00753F7F  EB 03                     JMP 0x00753f84
LAB_00753f81:
00753F81  83 C0 FE                  ADD EAX,-0x2
LAB_00753f84:
00753F84  0B C0                     OR EAX,EAX
00753F86  7D 1A                     JGE 0x00753fa2
00753F88  8B F0                     MOV ESI,EAX
00753F8A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00753F8F  0B C0                     OR EAX,EAX
00753F91  74 0D                     JZ 0x00753fa0
00753F93  83 C0 04                  ADD EAX,0x4
00753F96  56                        PUSH ESI
00753F97  50                        PUSH EAX
00753F98  E8 0F F9 FD FF            CALL 0x007338ac
LAB_00753fa0:
00753FA0  8B C6                     MOV EAX,ESI
LAB_00753fa2:
00753FA2  5F                        POP EDI
00753FA3  5E                        POP ESI
00753FA4  5B                        POP EBX
00753FA5  C9                        LEAVE
00753FA6  C3                        RET
