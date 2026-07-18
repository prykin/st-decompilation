FUN_007319b0:
007319B0  55                        PUSH EBP
007319B1  8B EC                     MOV EBP,ESP
007319B3  83 EC 08                  SUB ESP,0x8
007319B6  A1 C0 A5 85 00            MOV EAX,[0x0085a5c0]
007319BB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007319BE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007319C5  EB 09                     JMP 0x007319d0
LAB_007319c7:
007319C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007319CA  83 C1 01                  ADD ECX,0x1
007319CD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007319d0:
007319D0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007319D3  3B 15 BC A5 85 00         CMP EDX,dword ptr [0x0085a5bc]
007319D9  7D 4B                     JGE 0x00731a26
007319DB  68 00 40 00 00            PUSH 0x4000
007319E0  68 00 00 10 00            PUSH 0x100000
007319E5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007319E8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007319EB  51                        PUSH ECX
007319EC  FF 15 E0 BB 85 00         CALL dword ptr [0x0085bbe0]
007319F2  68 00 80 00 00            PUSH 0x8000
007319F7  6A 00                     PUSH 0x0
007319F9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007319FC  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
007319FF  50                        PUSH EAX
00731A00  FF 15 E0 BB 85 00         CALL dword ptr [0x0085bbe0]
00731A06  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731A09  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00731A0C  52                        PUSH EDX
00731A0D  6A 00                     PUSH 0x0
00731A0F  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
00731A14  50                        PUSH EAX
00731A15  FF 15 D4 BB 85 00         CALL dword ptr [0x0085bbd4]
00731A1B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731A1E  83 C1 14                  ADD ECX,0x14
00731A21  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00731A24  EB A1                     JMP 0x007319c7
LAB_00731a26:
00731A26  8B 15 C0 A5 85 00         MOV EDX,dword ptr [0x0085a5c0]
00731A2C  52                        PUSH EDX
00731A2D  6A 00                     PUSH 0x0
00731A2F  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
00731A34  50                        PUSH EAX
00731A35  FF 15 D4 BB 85 00         CALL dword ptr [0x0085bbd4]
00731A3B  8B 0D C4 A5 85 00         MOV ECX,dword ptr [0x0085a5c4]
00731A41  51                        PUSH ECX
00731A42  FF 15 D8 BB 85 00         CALL dword ptr [0x0085bbd8]
00731A48  8B E5                     MOV ESP,EBP
00731A4A  5D                        POP EBP
00731A4B  C3                        RET
