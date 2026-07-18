FUN_00626c00:
00626C00  55                        PUSH EBP
00626C01  8B EC                     MOV EBP,ESP
00626C03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00626C06  56                        PUSH ESI
00626C07  8B F1                     MOV ESI,ECX
00626C09  57                        PUSH EDI
00626C0A  8B FA                     MOV EDI,EDX
00626C0C  83 C9 FF                  OR ECX,0xffffffff
00626C0F  33 C0                     XOR EAX,EAX
00626C11  F2 AE                     SCASB.REPNE ES:EDI
00626C13  F7 D1                     NOT ECX
00626C15  49                        DEC ECX
00626C16  83 F9 0E                  CMP ECX,0xe
00626C19  77 2B                     JA 0x00626c46
00626C1B  8B FA                     MOV EDI,EDX
00626C1D  83 C9 FF                  OR ECX,0xffffffff
00626C20  F2 AE                     SCASB.REPNE ES:EDI
00626C22  F7 D1                     NOT ECX
00626C24  2B F9                     SUB EDI,ECX
00626C26  53                        PUSH EBX
00626C27  8D 9E 8E 02 00 00         LEA EBX,[ESI + 0x28e]
00626C2D  8B C1                     MOV EAX,ECX
00626C2F  8B F7                     MOV ESI,EDI
00626C31  8B FB                     MOV EDI,EBX
00626C33  C1 E9 02                  SHR ECX,0x2
00626C36  F3 A5                     MOVSD.REP ES:EDI,ESI
00626C38  8B C8                     MOV ECX,EAX
00626C3A  5B                        POP EBX
00626C3B  83 E1 03                  AND ECX,0x3
00626C3E  F3 A4                     MOVSB.REP ES:EDI,ESI
00626C40  5F                        POP EDI
00626C41  5E                        POP ESI
00626C42  5D                        POP EBP
00626C43  C2 04 00                  RET 0x4
LAB_00626c46:
00626C46  6A 0E                     PUSH 0xe
00626C48  8D 8E 8E 02 00 00         LEA ECX,[ESI + 0x28e]
00626C4E  52                        PUSH EDX
00626C4F  51                        PUSH ECX
00626C50  E8 EB 76 10 00            CALL 0x0072e340
00626C55  83 C4 0C                  ADD ESP,0xc
00626C58  C6 86 9C 02 00 00 00      MOV byte ptr [ESI + 0x29c],0x0
00626C5F  5F                        POP EDI
00626C60  5E                        POP ESI
00626C61  5D                        POP EBP
00626C62  C2 04 00                  RET 0x4
