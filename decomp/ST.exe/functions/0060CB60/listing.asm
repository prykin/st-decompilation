FUN_0060cb60:
0060CB60  55                        PUSH EBP
0060CB61  8B EC                     MOV EBP,ESP
0060CB63  53                        PUSH EBX
0060CB64  56                        PUSH ESI
0060CB65  57                        PUSH EDI
0060CB66  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0060CB69  8B C7                     MOV EAX,EDI
0060CB6B  8B F1                     MOV ESI,ECX
0060CB6D  C1 E0 04                  SHL EAX,0x4
0060CB70  03 C7                     ADD EAX,EDI
0060CB72  33 DB                     XOR EBX,EBX
0060CB74  C1 E0 02                  SHL EAX,0x2
0060CB77  50                        PUSH EAX
0060CB78  E8 F3 E0 09 00            CALL 0x006aac70
0060CB7D  89 86 44 02 00 00         MOV dword ptr [ESI + 0x244],EAX
0060CB83  89 18                     MOV dword ptr [EAX],EBX
0060CB85  8B 86 44 02 00 00         MOV EAX,dword ptr [ESI + 0x244]
0060CB8B  85 C0                     TEST EAX,EAX
0060CB8D  74 1C                     JZ 0x0060cbab
0060CB8F  89 BE 3C 02 00 00         MOV dword ptr [ESI + 0x23c],EDI
0060CB95  C7 86 38 02 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x238],0xa
0060CB9F  5F                        POP EDI
0060CBA0  5E                        POP ESI
0060CBA1  B8 01 00 00 00            MOV EAX,0x1
0060CBA6  5B                        POP EBX
0060CBA7  5D                        POP EBP
0060CBA8  C2 04 00                  RET 0x4
LAB_0060cbab:
0060CBAB  C7 86 38 02 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x238],0xa
0060CBB5  5F                        POP EDI
0060CBB6  8B C3                     MOV EAX,EBX
0060CBB8  5E                        POP ESI
0060CBB9  5B                        POP EBX
0060CBBA  5D                        POP EBP
0060CBBB  C2 04 00                  RET 0x4
