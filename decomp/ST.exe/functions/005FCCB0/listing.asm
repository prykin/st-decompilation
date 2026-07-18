FUN_005fccb0:
005FCCB0  55                        PUSH EBP
005FCCB1  8B EC                     MOV EBP,ESP
005FCCB3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FCCB6  56                        PUSH ESI
005FCCB7  8B F1                     MOV ESI,ECX
005FCCB9  57                        PUSH EDI
005FCCBA  8B FA                     MOV EDI,EDX
005FCCBC  83 C9 FF                  OR ECX,0xffffffff
005FCCBF  33 C0                     XOR EAX,EAX
005FCCC1  F2 AE                     SCASB.REPNE ES:EDI
005FCCC3  F7 D1                     NOT ECX
005FCCC5  49                        DEC ECX
005FCCC6  83 F9 0E                  CMP ECX,0xe
005FCCC9  77 2B                     JA 0x005fccf6
005FCCCB  8B FA                     MOV EDI,EDX
005FCCCD  83 C9 FF                  OR ECX,0xffffffff
005FCCD0  F2 AE                     SCASB.REPNE ES:EDI
005FCCD2  F7 D1                     NOT ECX
005FCCD4  2B F9                     SUB EDI,ECX
005FCCD6  53                        PUSH EBX
005FCCD7  8D 9E 5C 03 00 00         LEA EBX,[ESI + 0x35c]
005FCCDD  8B C1                     MOV EAX,ECX
005FCCDF  8B F7                     MOV ESI,EDI
005FCCE1  8B FB                     MOV EDI,EBX
005FCCE3  C1 E9 02                  SHR ECX,0x2
005FCCE6  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCCE8  8B C8                     MOV ECX,EAX
005FCCEA  5B                        POP EBX
005FCCEB  83 E1 03                  AND ECX,0x3
005FCCEE  F3 A4                     MOVSB.REP ES:EDI,ESI
005FCCF0  5F                        POP EDI
005FCCF1  5E                        POP ESI
005FCCF2  5D                        POP EBP
005FCCF3  C2 04 00                  RET 0x4
LAB_005fccf6:
005FCCF6  6A 0E                     PUSH 0xe
005FCCF8  8D 8E 5C 03 00 00         LEA ECX,[ESI + 0x35c]
005FCCFE  52                        PUSH EDX
005FCCFF  51                        PUSH ECX
005FCD00  E8 3B 16 13 00            CALL 0x0072e340
005FCD05  83 C4 0C                  ADD ESP,0xc
005FCD08  C6 86 6A 03 00 00 00      MOV byte ptr [ESI + 0x36a],0x0
005FCD0F  5F                        POP EDI
005FCD10  5E                        POP ESI
005FCD11  5D                        POP EBP
005FCD12  C2 04 00                  RET 0x4
