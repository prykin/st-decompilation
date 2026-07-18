FUN_006b60b0:
006B60B0  55                        PUSH EBP
006B60B1  8B EC                     MOV EBP,ESP
006B60B3  57                        PUSH EDI
006B60B4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B60B7  85 FF                     TEST EDI,EDI
006B60B9  75 07                     JNZ 0x006b60c2
006B60BB  33 C0                     XOR EAX,EAX
006B60BD  5F                        POP EDI
006B60BE  5D                        POP EBP
006B60BF  C2 08 00                  RET 0x8
LAB_006b60c2:
006B60C2  8A 07                     MOV AL,byte ptr [EDI]
006B60C4  84 C0                     TEST AL,AL
006B60C6  74 10                     JZ 0x006b60d8
LAB_006b60c8:
006B60C8  3C 20                     CMP AL,0x20
006B60CA  74 04                     JZ 0x006b60d0
006B60CC  3C 09                     CMP AL,0x9
006B60CE  75 08                     JNZ 0x006b60d8
LAB_006b60d0:
006B60D0  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
006B60D3  47                        INC EDI
006B60D4  84 C0                     TEST AL,AL
006B60D6  75 F0                     JNZ 0x006b60c8
LAB_006b60d8:
006B60D8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B60DB  85 D2                     TEST EDX,EDX
006B60DD  75 07                     JNZ 0x006b60e6
006B60DF  8B C7                     MOV EAX,EDI
006B60E1  5F                        POP EDI
006B60E2  5D                        POP EBP
006B60E3  C2 08 00                  RET 0x8
LAB_006b60e6:
006B60E6  83 C9 FF                  OR ECX,0xffffffff
006B60E9  33 C0                     XOR EAX,EAX
006B60EB  F2 AE                     SCASB.REPNE ES:EDI
006B60ED  F7 D1                     NOT ECX
006B60EF  53                        PUSH EBX
006B60F0  2B F9                     SUB EDI,ECX
006B60F2  56                        PUSH ESI
006B60F3  8B F7                     MOV ESI,EDI
006B60F5  8B D9                     MOV EBX,ECX
006B60F7  8B FA                     MOV EDI,EDX
006B60F9  8B C7                     MOV EAX,EDI
006B60FB  C1 E9 02                  SHR ECX,0x2
006B60FE  F3 A5                     MOVSD.REP ES:EDI,ESI
006B6100  8B CB                     MOV ECX,EBX
006B6102  83 E1 03                  AND ECX,0x3
006B6105  F3 A4                     MOVSB.REP ES:EDI,ESI
006B6107  5E                        POP ESI
006B6108  5B                        POP EBX
006B6109  5F                        POP EDI
006B610A  5D                        POP EBP
006B610B  C2 08 00                  RET 0x8
