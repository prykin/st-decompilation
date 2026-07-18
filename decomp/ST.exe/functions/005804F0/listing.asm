FUN_005804f0:
005804F0  55                        PUSH EBP
005804F1  8B EC                     MOV EBP,ESP
005804F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005804F6  56                        PUSH ESI
005804F7  8B F1                     MOV ESI,ECX
005804F9  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
005804FF  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
00580505  3D DC 00 00 00            CMP EAX,0xdc
0058050A  C7 86 5D 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x25d],0x1
00580514  72 33                     JC 0x00580549
00580516  3D DE 00 00 00            CMP EAX,0xde
0058051B  76 07                     JBE 0x00580524
0058051D  3D E0 00 00 00            CMP EAX,0xe0
00580522  75 25                     JNZ 0x00580549
LAB_00580524:
00580524  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058052A  83 B9 E4 00 00 00 14      CMP dword ptr [ECX + 0xe4],0x14
00580531  76 0F                     JBE 0x00580542
00580533  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00580536  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00580539  52                        PUSH EDX
0058053A  50                        PUSH EAX
0058053B  8B CE                     MOV ECX,ESI
0058053D  E8 3D 4A E8 FF            CALL 0x00404f7f
LAB_00580542:
00580542  8B CE                     MOV ECX,ESI
00580544  E8 72 40 E8 FF            CALL 0x004045bb
LAB_00580549:
00580549  5E                        POP ESI
0058054A  5D                        POP EBP
0058054B  C2 0C 00                  RET 0xc
