FUN_00567220:
00567220  56                        PUSH ESI
00567221  8B F1                     MOV ESI,ECX
00567223  8B 86 8B 0F 00 00         MOV EAX,dword ptr [ESI + 0xf8b]
00567229  85 C0                     TEST EAX,EAX
0056722B  74 16                     JZ 0x00567243
0056722D  57                        PUSH EDI
0056722E  E8 ED AB 15 00            CALL 0x006c1e20
00567233  B9 60 00 00 00            MOV ECX,0x60
00567238  33 C0                     XOR EAX,EAX
0056723A  8D BE 0B 0E 00 00         LEA EDI,[ESI + 0xe0b]
00567240  F3 AB                     STOSD.REP ES:EDI
00567242  5F                        POP EDI
LAB_00567243:
00567243  8B 86 F7 0D 00 00         MOV EAX,dword ptr [ESI + 0xdf7]
00567249  85 C0                     TEST EAX,EAX
0056724B  74 10                     JZ 0x0056725d
0056724D  50                        PUSH EAX
0056724E  E8 3D B1 15 00            CALL 0x006c2390
00567253  C7 86 F7 0D 00 00 00 00 00 00  MOV dword ptr [ESI + 0xdf7],0x0
LAB_0056725d:
0056725D  8B 86 8B 0F 00 00         MOV EAX,dword ptr [ESI + 0xf8b]
00567263  85 C0                     TEST EAX,EAX
00567265  74 05                     JZ 0x0056726c
00567267  E8 E4 AD 15 00            CALL 0x006c2050
LAB_0056726c:
0056726C  C7 86 8B 0F 00 00 00 00 00 00  MOV dword ptr [ESI + 0xf8b],0x0
00567276  5E                        POP ESI
00567277  C3                        RET
