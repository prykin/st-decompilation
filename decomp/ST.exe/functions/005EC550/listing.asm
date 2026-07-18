FUN_005ec550:
005EC550  55                        PUSH EBP
005EC551  8B EC                     MOV EBP,ESP
005EC553  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EC556  56                        PUSH ESI
005EC557  8B F1                     MOV ESI,ECX
005EC559  57                        PUSH EDI
005EC55A  8B FA                     MOV EDI,EDX
005EC55C  83 C9 FF                  OR ECX,0xffffffff
005EC55F  33 C0                     XOR EAX,EAX
005EC561  F2 AE                     SCASB.REPNE ES:EDI
005EC563  F7 D1                     NOT ECX
005EC565  49                        DEC ECX
005EC566  83 F9 0E                  CMP ECX,0xe
005EC569  77 2B                     JA 0x005ec596
005EC56B  8B FA                     MOV EDI,EDX
005EC56D  83 C9 FF                  OR ECX,0xffffffff
005EC570  F2 AE                     SCASB.REPNE ES:EDI
005EC572  F7 D1                     NOT ECX
005EC574  2B F9                     SUB EDI,ECX
005EC576  53                        PUSH EBX
005EC577  8D 9E 58 03 00 00         LEA EBX,[ESI + 0x358]
005EC57D  8B C1                     MOV EAX,ECX
005EC57F  8B F7                     MOV ESI,EDI
005EC581  8B FB                     MOV EDI,EBX
005EC583  C1 E9 02                  SHR ECX,0x2
005EC586  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC588  8B C8                     MOV ECX,EAX
005EC58A  5B                        POP EBX
005EC58B  83 E1 03                  AND ECX,0x3
005EC58E  F3 A4                     MOVSB.REP ES:EDI,ESI
005EC590  5F                        POP EDI
005EC591  5E                        POP ESI
005EC592  5D                        POP EBP
005EC593  C2 04 00                  RET 0x4
LAB_005ec596:
005EC596  6A 0E                     PUSH 0xe
005EC598  8D 8E 58 03 00 00         LEA ECX,[ESI + 0x358]
005EC59E  52                        PUSH EDX
005EC59F  51                        PUSH ECX
005EC5A0  E8 9B 1D 14 00            CALL 0x0072e340
005EC5A5  83 C4 0C                  ADD ESP,0xc
005EC5A8  C6 86 66 03 00 00 00      MOV byte ptr [ESI + 0x366],0x0
005EC5AF  5F                        POP EDI
005EC5B0  5E                        POP ESI
005EC5B1  5D                        POP EBP
005EC5B2  C2 04 00                  RET 0x4
