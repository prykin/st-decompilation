FUN_005672e0:
005672E0  56                        PUSH ESI
005672E1  8B F1                     MOV ESI,ECX
005672E3  E8 AB A0 E9 FF            CALL 0x00401393
005672E8  8B 86 F7 0D 00 00         MOV EAX,dword ptr [ESI + 0xdf7]
005672EE  85 C0                     TEST EAX,EAX
005672F0  74 10                     JZ 0x00567302
005672F2  50                        PUSH EAX
005672F3  E8 98 B0 15 00            CALL 0x006c2390
005672F8  C7 86 F7 0D 00 00 00 00 00 00  MOV dword ptr [ESI + 0xdf7],0x0
LAB_00567302:
00567302  8B 86 8B 0F 00 00         MOV EAX,dword ptr [ESI + 0xf8b]
00567308  85 C0                     TEST EAX,EAX
0056730A  74 05                     JZ 0x00567311
0056730C  E8 3F AD 15 00            CALL 0x006c2050
LAB_00567311:
00567311  C7 86 8B 0F 00 00 00 00 00 00  MOV dword ptr [ESI + 0xf8b],0x0
0056731B  5E                        POP ESI
0056731C  C3                        RET
