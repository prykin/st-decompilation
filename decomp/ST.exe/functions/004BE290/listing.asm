FUN_004be290:
004BE290  55                        PUSH EBP
004BE291  8B EC                     MOV EBP,ESP
004BE293  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004BE296  56                        PUSH ESI
004BE297  8B F1                     MOV ESI,ECX
004BE299  57                        PUSH EDI
004BE29A  8B FA                     MOV EDI,EDX
004BE29C  83 C9 FF                  OR ECX,0xffffffff
004BE29F  33 C0                     XOR EAX,EAX
004BE2A1  F2 AE                     SCASB.REPNE ES:EDI
004BE2A3  F7 D1                     NOT ECX
004BE2A5  49                        DEC ECX
004BE2A6  83 F9 0E                  CMP ECX,0xe
004BE2A9  77 2B                     JA 0x004be2d6
004BE2AB  8B FA                     MOV EDI,EDX
004BE2AD  83 C9 FF                  OR ECX,0xffffffff
004BE2B0  F2 AE                     SCASB.REPNE ES:EDI
004BE2B2  F7 D1                     NOT ECX
004BE2B4  2B F9                     SUB EDI,ECX
004BE2B6  53                        PUSH EBX
004BE2B7  8D 9E C4 05 00 00         LEA EBX,[ESI + 0x5c4]
004BE2BD  8B C1                     MOV EAX,ECX
004BE2BF  8B F7                     MOV ESI,EDI
004BE2C1  8B FB                     MOV EDI,EBX
004BE2C3  C1 E9 02                  SHR ECX,0x2
004BE2C6  F3 A5                     MOVSD.REP ES:EDI,ESI
004BE2C8  8B C8                     MOV ECX,EAX
004BE2CA  5B                        POP EBX
004BE2CB  83 E1 03                  AND ECX,0x3
004BE2CE  F3 A4                     MOVSB.REP ES:EDI,ESI
004BE2D0  5F                        POP EDI
004BE2D1  5E                        POP ESI
004BE2D2  5D                        POP EBP
004BE2D3  C2 04 00                  RET 0x4
LAB_004be2d6:
004BE2D6  6A 0E                     PUSH 0xe
004BE2D8  8D 8E C4 05 00 00         LEA ECX,[ESI + 0x5c4]
004BE2DE  52                        PUSH EDX
004BE2DF  51                        PUSH ECX
004BE2E0  E8 5B 00 27 00            CALL 0x0072e340
004BE2E5  83 C4 0C                  ADD ESP,0xc
004BE2E8  C6 86 D2 05 00 00 00      MOV byte ptr [ESI + 0x5d2],0x0
004BE2EF  5F                        POP EDI
004BE2F0  5E                        POP ESI
004BE2F1  5D                        POP EBP
004BE2F2  C2 04 00                  RET 0x4
