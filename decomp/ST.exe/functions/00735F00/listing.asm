FUN_00735f00:
00735F00  55                        PUSH EBP
00735F01  8B EC                     MOV EBP,ESP
00735F03  51                        PUSH ECX
00735F04  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735F07  83 E0 20                  AND EAX,0x20
00735F0A  85 C0                     TEST EAX,EAX
00735F0C  74 09                     JZ 0x00735f17
00735F0E  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
00735F15  EB 53                     JMP 0x00735f6a
LAB_00735f17:
00735F17  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735F1A  83 E1 08                  AND ECX,0x8
00735F1D  85 C9                     TEST ECX,ECX
00735F1F  74 09                     JZ 0x00735f2a
00735F21  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00735F28  EB 40                     JMP 0x00735f6a
LAB_00735f2a:
00735F2A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735F2D  83 E2 04                  AND EDX,0x4
00735F30  85 D2                     TEST EDX,EDX
00735F32  74 09                     JZ 0x00735f3d
00735F34  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
00735F3B  EB 2D                     JMP 0x00735f6a
LAB_00735f3d:
00735F3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735F40  83 E0 01                  AND EAX,0x1
00735F43  85 C0                     TEST EAX,EAX
00735F45  74 09                     JZ 0x00735f50
00735F47  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
00735F4E  EB 1A                     JMP 0x00735f6a
LAB_00735f50:
00735F50  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735F53  83 E1 02                  AND ECX,0x2
00735F56  85 C9                     TEST ECX,ECX
00735F58  74 09                     JZ 0x00735f63
00735F5A  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
00735F61  EB 07                     JMP 0x00735f6a
LAB_00735f63:
00735F63  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00735f6a:
00735F6A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735F6D  8B E5                     MOV ESP,EBP
00735F6F  5D                        POP EBP
00735F70  C3                        RET
