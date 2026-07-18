FUN_005ec510:
005EC510  55                        PUSH EBP
005EC511  8B EC                     MOV EBP,ESP
005EC513  56                        PUSH ESI
005EC514  57                        PUSH EDI
005EC515  8D B9 58 03 00 00         LEA EDI,[ECX + 0x358]
005EC51B  83 C9 FF                  OR ECX,0xffffffff
005EC51E  33 C0                     XOR EAX,EAX
005EC520  F2 AE                     SCASB.REPNE ES:EDI
005EC522  F7 D1                     NOT ECX
005EC524  2B F9                     SUB EDI,ECX
005EC526  8B C1                     MOV EAX,ECX
005EC528  8B F7                     MOV ESI,EDI
005EC52A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005EC52D  C1 E9 02                  SHR ECX,0x2
005EC530  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC532  8B C8                     MOV ECX,EAX
005EC534  83 E1 03                  AND ECX,0x3
005EC537  F3 A4                     MOVSB.REP ES:EDI,ESI
005EC539  5F                        POP EDI
005EC53A  5E                        POP ESI
005EC53B  5D                        POP EBP
005EC53C  C2 04 00                  RET 0x4
