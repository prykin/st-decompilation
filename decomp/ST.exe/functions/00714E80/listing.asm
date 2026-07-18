FUN_00714e80:
00714E80  55                        PUSH EBP
00714E81  8B EC                     MOV EBP,ESP
00714E83  53                        PUSH EBX
00714E84  56                        PUSH ESI
00714E85  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00714E88  57                        PUSH EDI
00714E89  85 F6                     TEST ESI,ESI
00714E8B  8B D9                     MOV EBX,ECX
00714E8D  75 0C                     JNZ 0x00714e9b
00714E8F  5F                        POP EDI
00714E90  5E                        POP ESI
00714E91  B8 CC FF FF FF            MOV EAX,0xffffffcc
00714E96  5B                        POP EBX
00714E97  5D                        POP EBP
00714E98  C2 04 00                  RET 0x4
LAB_00714e9b:
00714E9B  8B 3B                     MOV EDI,dword ptr [EBX]
00714E9D  85 FF                     TEST EDI,EDI
00714E9F  74 0F                     JZ 0x00714eb0
00714EA1  83 C9 FF                  OR ECX,0xffffffff
00714EA4  33 C0                     XOR EAX,EAX
00714EA6  F2 AE                     SCASB.REPNE ES:EDI
00714EA8  F7 D1                     NOT ECX
00714EAA  49                        DEC ECX
00714EAB  8B D1                     MOV EDX,ECX
00714EAD  42                        INC EDX
00714EAE  EB 02                     JMP 0x00714eb2
LAB_00714eb0:
00714EB0  33 D2                     XOR EDX,EDX
LAB_00714eb2:
00714EB2  8B FE                     MOV EDI,ESI
00714EB4  83 C9 FF                  OR ECX,0xffffffff
00714EB7  33 C0                     XOR EAX,EAX
00714EB9  F2 AE                     SCASB.REPNE ES:EDI
00714EBB  F7 D1                     NOT ECX
00714EBD  49                        DEC ECX
00714EBE  8D 44 11 01               LEA EAX,[ECX + EDX*0x1 + 0x1]
00714EC2  8B CB                     MOV ECX,EBX
00714EC4  50                        PUSH EAX
00714EC5  E8 16 FE FF FF            CALL 0x00714ce0
00714ECA  85 C0                     TEST EAX,EAX
00714ECC  75 25                     JNZ 0x00714ef3
00714ECE  8B FE                     MOV EDI,ESI
00714ED0  83 C9 FF                  OR ECX,0xffffffff
00714ED3  F2 AE                     SCASB.REPNE ES:EDI
00714ED5  F7 D1                     NOT ECX
00714ED7  2B F9                     SUB EDI,ECX
00714ED9  8B F7                     MOV ESI,EDI
00714EDB  8B 3B                     MOV EDI,dword ptr [EBX]
00714EDD  8B D1                     MOV EDX,ECX
00714EDF  83 C9 FF                  OR ECX,0xffffffff
00714EE2  F2 AE                     SCASB.REPNE ES:EDI
00714EE4  8B CA                     MOV ECX,EDX
00714EE6  4F                        DEC EDI
00714EE7  C1 E9 02                  SHR ECX,0x2
00714EEA  F3 A5                     MOVSD.REP ES:EDI,ESI
00714EEC  8B CA                     MOV ECX,EDX
00714EEE  83 E1 03                  AND ECX,0x3
00714EF1  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00714ef3:
00714EF3  5F                        POP EDI
00714EF4  5E                        POP ESI
00714EF5  5B                        POP EBX
00714EF6  5D                        POP EBP
00714EF7  C2 04 00                  RET 0x4
