InfocPanelTy::DoneInfocPanel:
005204D0  55                        PUSH EBP
005204D1  8B EC                     MOV EBP,ESP
005204D3  83 EC 48                  SUB ESP,0x48
005204D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005204DB  56                        PUSH ESI
005204DC  57                        PUSH EDI
005204DD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005204E0  33 FF                     XOR EDI,EDI
005204E2  8D 55 BC                  LEA EDX,[EBP + -0x44]
005204E5  8D 4D B8                  LEA ECX,[EBP + -0x48]
005204E8  57                        PUSH EDI
005204E9  52                        PUSH EDX
005204EA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005204ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005204F3  E8 F8 D2 20 00            CALL 0x0072d7f0
005204F8  8B F0                     MOV ESI,EAX
005204FA  83 C4 08                  ADD ESP,0x8
005204FD  3B F7                     CMP ESI,EDI
005204FF  75 5B                     JNZ 0x0052055c
00520501  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00520504  8B 86 D0 03 00 00         MOV EAX,dword ptr [ESI + 0x3d0]
0052050A  3B C7                     CMP EAX,EDI
0052050C  74 09                     JZ 0x00520517
0052050E  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00520511  50                        PUSH EAX
00520512  E8 99 51 1C 00            CALL 0x006e56b0
LAB_00520517:
00520517  8B 86 D5 03 00 00         MOV EAX,dword ptr [ESI + 0x3d5]
0052051D  89 BE D0 03 00 00         MOV dword ptr [ESI + 0x3d0],EDI
00520523  3B C7                     CMP EAX,EDI
00520525  74 0F                     JZ 0x00520536
00520527  50                        PUSH EAX
00520528  E8 33 00 1F 00            CALL 0x00710560
0052052D  83 C4 04                  ADD ESP,0x4
00520530  89 BE D5 03 00 00         MOV dword ptr [ESI + 0x3d5],EDI
LAB_00520536:
00520536  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00520539  89 BE CC 03 00 00         MOV dword ptr [ESI + 0x3cc],EDI
0052053F  89 BE C8 03 00 00         MOV dword ptr [ESI + 0x3c8],EDI
00520545  89 BE C4 03 00 00         MOV dword ptr [ESI + 0x3c4],EDI
0052054B  89 3D 98 16 80 00         MOV dword ptr [0x00801698],EDI
00520551  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00520556  5F                        POP EDI
00520557  5E                        POP ESI
00520558  8B E5                     MOV ESP,EBP
0052055A  5D                        POP EBP
0052055B  C3                        RET
LAB_0052055c:
0052055C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052055F  68 2C 3F 7C 00            PUSH 0x7c3f2c
00520564  68 CC 4C 7A 00            PUSH 0x7a4ccc
00520569  56                        PUSH ESI
0052056A  57                        PUSH EDI
0052056B  6A 4F                     PUSH 0x4f
0052056D  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520572  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520578  E8 53 CF 18 00            CALL 0x006ad4d0
0052057D  83 C4 18                  ADD ESP,0x18
00520580  85 C0                     TEST EAX,EAX
00520582  74 01                     JZ 0x00520585
00520584  CC                        INT3
LAB_00520585:
00520585  6A 4F                     PUSH 0x4f
00520587  68 B0 3E 7C 00            PUSH 0x7c3eb0
0052058C  57                        PUSH EDI
0052058D  56                        PUSH ESI
0052058E  E8 AD 58 18 00            CALL 0x006a5e40
00520593  5F                        POP EDI
00520594  5E                        POP ESI
00520595  8B E5                     MOV ESP,EBP
00520597  5D                        POP EBP
00520598  C3                        RET
