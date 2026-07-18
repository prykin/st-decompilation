FUN_0057dfd0:
0057DFD0  55                        PUSH EBP
0057DFD1  8B EC                     MOV EBP,ESP
0057DFD3  56                        PUSH ESI
0057DFD4  8B F1                     MOV ESI,ECX
0057DFD6  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0057DFDC  2D DD 00 00 00            SUB EAX,0xdd
0057DFE1  74 31                     JZ 0x0057e014
0057DFE3  48                        DEC EAX
0057DFE4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057DFE7  75 5C                     JNZ 0x0057e045
0057DFE9  3D 3F 42 0F 00            CMP EAX,0xf423f
0057DFEE  7E 55                     JLE 0x0057e045
0057DFF0  68 C0 B1 7C 00            PUSH 0x7cb1c0
0057DFF5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057DFFA  6A 00                     PUSH 0x0
0057DFFC  6A 00                     PUSH 0x0
0057DFFE  6A 3C                     PUSH 0x3c
0057E000  68 9C B1 7C 00            PUSH 0x7cb19c
0057E005  E8 C6 F4 12 00            CALL 0x006ad4d0
0057E00A  83 C4 18                  ADD ESP,0x18
0057E00D  85 C0                     TEST EAX,EAX
0057E00F  74 2F                     JZ 0x0057e040
0057E011  CC                        INT3
LAB_0057e014:
0057E014  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057E017  3D 3F 42 0F 00            CMP EAX,0xf423f
0057E01C  7E 27                     JLE 0x0057e045
0057E01E  68 C0 B1 7C 00            PUSH 0x7cb1c0
0057E023  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057E028  6A 00                     PUSH 0x0
0057E02A  6A 00                     PUSH 0x0
0057E02C  6A 36                     PUSH 0x36
0057E02E  68 9C B1 7C 00            PUSH 0x7cb19c
0057E033  E8 98 F4 12 00            CALL 0x006ad4d0
0057E038  83 C4 18                  ADD ESP,0x18
0057E03B  85 C0                     TEST EAX,EAX
0057E03D  74 01                     JZ 0x0057e040
0057E03F  CC                        INT3
LAB_0057e040:
0057E040  B8 3F 42 0F 00            MOV EAX,0xf423f
LAB_0057e045:
0057E045  85 C0                     TEST EAX,EAX
0057E047  89 86 59 02 00 00         MOV dword ptr [ESI + 0x259],EAX
0057E04D  7F 17                     JG 0x0057e066
0057E04F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057E052  85 C0                     TEST EAX,EAX
0057E054  74 09                     JZ 0x0057e05f
0057E056  6A 01                     PUSH 0x1
0057E058  8B CE                     MOV ECX,ESI
0057E05A  E8 D1 59 E8 FF            CALL 0x00403a30
LAB_0057e05f:
0057E05F  8B CE                     MOV ECX,ESI
0057E061  E8 13 34 E8 FF            CALL 0x00401479
LAB_0057e066:
0057E066  5E                        POP ESI
0057E067  5D                        POP EBP
0057E068  C2 08 00                  RET 0x8
