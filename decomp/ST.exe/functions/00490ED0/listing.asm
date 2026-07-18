FUN_00490ed0:
00490ED0  55                        PUSH EBP
00490ED1  8B EC                     MOV EBP,ESP
00490ED3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00490ED6  56                        PUSH ESI
00490ED7  8B F1                     MOV ESI,ECX
00490ED9  57                        PUSH EDI
00490EDA  8B FA                     MOV EDI,EDX
00490EDC  83 C9 FF                  OR ECX,0xffffffff
00490EDF  33 C0                     XOR EAX,EAX
00490EE1  F2 AE                     SCASB.REPNE ES:EDI
00490EE3  F7 D1                     NOT ECX
00490EE5  49                        DEC ECX
00490EE6  83 F9 0E                  CMP ECX,0xe
00490EE9  77 2B                     JA 0x00490f16
00490EEB  8B FA                     MOV EDI,EDX
00490EED  83 C9 FF                  OR ECX,0xffffffff
00490EF0  F2 AE                     SCASB.REPNE ES:EDI
00490EF2  F7 D1                     NOT ECX
00490EF4  2B F9                     SUB EDI,ECX
00490EF6  53                        PUSH EBX
00490EF7  8D 9E FB 06 00 00         LEA EBX,[ESI + 0x6fb]
00490EFD  8B C1                     MOV EAX,ECX
00490EFF  8B F7                     MOV ESI,EDI
00490F01  8B FB                     MOV EDI,EBX
00490F03  C1 E9 02                  SHR ECX,0x2
00490F06  F3 A5                     MOVSD.REP ES:EDI,ESI
00490F08  8B C8                     MOV ECX,EAX
00490F0A  5B                        POP EBX
00490F0B  83 E1 03                  AND ECX,0x3
00490F0E  F3 A4                     MOVSB.REP ES:EDI,ESI
00490F10  5F                        POP EDI
00490F11  5E                        POP ESI
00490F12  5D                        POP EBP
00490F13  C2 04 00                  RET 0x4
LAB_00490f16:
00490F16  6A 0E                     PUSH 0xe
00490F18  8D 8E FB 06 00 00         LEA ECX,[ESI + 0x6fb]
00490F1E  52                        PUSH EDX
00490F1F  51                        PUSH ECX
00490F20  E8 1B D4 29 00            CALL 0x0072e340
00490F25  83 C4 0C                  ADD ESP,0xc
00490F28  C6 86 09 07 00 00 00      MOV byte ptr [ESI + 0x709],0x0
00490F2F  5F                        POP EDI
00490F30  5E                        POP ESI
00490F31  5D                        POP EBP
00490F32  C2 04 00                  RET 0x4
