FUN_005803e0:
005803E0  56                        PUSH ESI
005803E1  8B F1                     MOV ESI,ECX
005803E3  F6 86 61 02 00 00 01      TEST byte ptr [ESI + 0x261],0x1
005803EA  75 41                     JNZ 0x0058042d
005803EC  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005803F1  57                        PUSH EDI
005803F2  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005803F8  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005803FE  51                        PUSH ECX
005803FF  6A 0E                     PUSH 0xe
00580401  8B CF                     MOV ECX,EDI
00580403  E8 38 4E E8 FF            CALL 0x00405240
00580408  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058040E  8B CF                     MOV ECX,EDI
00580410  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00580416  50                        PUSH EAX
00580417  6A 0D                     PUSH 0xd
00580419  E8 22 4E E8 FF            CALL 0x00405240
0058041E  8B 86 61 02 00 00         MOV EAX,dword ptr [ESI + 0x261]
00580424  5F                        POP EDI
00580425  0C 01                     OR AL,0x1
00580427  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
LAB_0058042d:
0058042D  5E                        POP ESI
0058042E  C3                        RET
