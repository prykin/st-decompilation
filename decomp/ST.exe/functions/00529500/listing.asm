FUN_00529500:
00529500  55                        PUSH EBP
00529501  8B EC                     MOV EBP,ESP
00529503  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00529509  33 C0                     XOR EAX,EAX
0052950B  80 F9 03                  CMP CL,0x3
0052950E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00529511  0F 95 C0                  SETNZ AL
00529514  48                        DEC EAX
00529515  81 C1 E3 D8 FF FF         ADD ECX,0xffffd8e3
0052951B  83 E0 05                  AND EAX,0x5
0052951E  83 F9 14                  CMP ECX,0x14
00529521  77 22                     JA 0x00529545
00529523  33 D2                     XOR EDX,EDX
00529525  8A 91 58 95 52 00         MOV DL,byte ptr [ECX + 0x529558]
switchD_0052952b::switchD:
0052952B  FF 24 95 48 95 52 00      JMP dword ptr [EDX*0x4 + 0x529548]
switchD_0052952b::caseD_271d:
00529532  B8 02 00 00 00            MOV EAX,0x2
00529537  5D                        POP EBP
00529538  C3                        RET
switchD_0052952b::caseD_271f:
00529539  B8 03 00 00 00            MOV EAX,0x3
0052953E  5D                        POP EBP
0052953F  C3                        RET
switchD_0052952b::caseD_271e:
00529540  B8 04 00 00 00            MOV EAX,0x4
switchD_0052952b::caseD_2720:
00529545  5D                        POP EBP
00529546  C3                        RET
