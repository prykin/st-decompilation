FUN_006027f0:
006027F0  55                        PUSH EBP
006027F1  8B EC                     MOV EBP,ESP
006027F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006027F6  56                        PUSH ESI
006027F7  8B F1                     MOV ESI,ECX
006027F9  57                        PUSH EDI
006027FA  8B FA                     MOV EDI,EDX
006027FC  83 C9 FF                  OR ECX,0xffffffff
006027FF  33 C0                     XOR EAX,EAX
00602801  F2 AE                     SCASB.REPNE ES:EDI
00602803  F7 D1                     NOT ECX
00602805  49                        DEC ECX
00602806  81 F9 03 01 00 00         CMP ECX,0x103
0060280C  77 2B                     JA 0x00602839
0060280E  8B FA                     MOV EDI,EDX
00602810  83 C9 FF                  OR ECX,0xffffffff
00602813  F2 AE                     SCASB.REPNE ES:EDI
00602815  F7 D1                     NOT ECX
00602817  2B F9                     SUB EDI,ECX
00602819  53                        PUSH EBX
0060281A  8D 9E 6A 02 00 00         LEA EBX,[ESI + 0x26a]
00602820  8B C1                     MOV EAX,ECX
00602822  8B F7                     MOV ESI,EDI
00602824  8B FB                     MOV EDI,EBX
00602826  C1 E9 02                  SHR ECX,0x2
00602829  F3 A5                     MOVSD.REP ES:EDI,ESI
0060282B  8B C8                     MOV ECX,EAX
0060282D  5B                        POP EBX
0060282E  83 E1 03                  AND ECX,0x3
00602831  F3 A4                     MOVSB.REP ES:EDI,ESI
00602833  5F                        POP EDI
00602834  5E                        POP ESI
00602835  5D                        POP EBP
00602836  C2 04 00                  RET 0x4
LAB_00602839:
00602839  68 03 01 00 00            PUSH 0x103
0060283E  8D 8E 6A 02 00 00         LEA ECX,[ESI + 0x26a]
00602844  52                        PUSH EDX
00602845  51                        PUSH ECX
00602846  E8 F5 BA 12 00            CALL 0x0072e340
0060284B  83 C4 0C                  ADD ESP,0xc
0060284E  C6 86 6D 03 00 00 00      MOV byte ptr [ESI + 0x36d],0x0
00602855  5F                        POP EDI
00602856  5E                        POP ESI
00602857  5D                        POP EBP
00602858  C2 04 00                  RET 0x4
