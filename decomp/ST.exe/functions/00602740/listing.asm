FUN_00602740:
00602740  55                        PUSH EBP
00602741  8B EC                     MOV EBP,ESP
00602743  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00602746  56                        PUSH ESI
00602747  8B F1                     MOV ESI,ECX
00602749  57                        PUSH EDI
0060274A  8B FA                     MOV EDI,EDX
0060274C  83 C9 FF                  OR ECX,0xffffffff
0060274F  33 C0                     XOR EAX,EAX
00602751  F2 AE                     SCASB.REPNE ES:EDI
00602753  F7 D1                     NOT ECX
00602755  49                        DEC ECX
00602756  83 F9 0E                  CMP ECX,0xe
00602759  77 2B                     JA 0x00602786
0060275B  8B FA                     MOV EDI,EDX
0060275D  83 C9 FF                  OR ECX,0xffffffff
00602760  F2 AE                     SCASB.REPNE ES:EDI
00602762  F7 D1                     NOT ECX
00602764  2B F9                     SUB EDI,ECX
00602766  53                        PUSH EBX
00602767  8D 9E 5B 02 00 00         LEA EBX,[ESI + 0x25b]
0060276D  8B C1                     MOV EAX,ECX
0060276F  8B F7                     MOV ESI,EDI
00602771  8B FB                     MOV EDI,EBX
00602773  C1 E9 02                  SHR ECX,0x2
00602776  F3 A5                     MOVSD.REP ES:EDI,ESI
00602778  8B C8                     MOV ECX,EAX
0060277A  5B                        POP EBX
0060277B  83 E1 03                  AND ECX,0x3
0060277E  F3 A4                     MOVSB.REP ES:EDI,ESI
00602780  5F                        POP EDI
00602781  5E                        POP ESI
00602782  5D                        POP EBP
00602783  C2 04 00                  RET 0x4
LAB_00602786:
00602786  6A 0E                     PUSH 0xe
00602788  8D 8E 5B 02 00 00         LEA ECX,[ESI + 0x25b]
0060278E  52                        PUSH EDX
0060278F  51                        PUSH ECX
00602790  E8 AB BB 12 00            CALL 0x0072e340
00602795  83 C4 0C                  ADD ESP,0xc
00602798  C6 86 69 02 00 00 00      MOV byte ptr [ESI + 0x269],0x0
0060279F  5F                        POP EDI
006027A0  5E                        POP ESI
006027A1  5D                        POP EBP
006027A2  C2 04 00                  RET 0x4
