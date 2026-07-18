FUN_0070ce40:
0070CE40  55                        PUSH EBP
0070CE41  8B EC                     MOV EBP,ESP
0070CE43  51                        PUSH ECX
0070CE44  53                        PUSH EBX
0070CE45  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0070CE48  80 3B 00                  CMP byte ptr [EBX],0x0
0070CE4B  74 52                     JZ 0x0070ce9f
0070CE4D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070CE50  80 3A 00                  CMP byte ptr [EDX],0x0
0070CE53  74 4A                     JZ 0x0070ce9f
0070CE55  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
0070CE58  56                        PUSH ESI
0070CE59  57                        PUSH EDI
0070CE5A  88 45 0F                  MOV byte ptr [EBP + 0xf],AL
0070CE5D  8B FA                     MOV EDI,EDX
0070CE5F  83 C9 FF                  OR ECX,0xffffffff
0070CE62  33 C0                     XOR EAX,EAX
0070CE64  C6 42 01 00               MOV byte ptr [EDX + 0x1],0x0
0070CE68  F2 AE                     SCASB.REPNE ES:EDI
0070CE6A  F7 D1                     NOT ECX
0070CE6C  2B F9                     SUB EDI,ECX
0070CE6E  8B C1                     MOV EAX,ECX
0070CE70  8B F7                     MOV ESI,EDI
0070CE72  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070CE75  8B FB                     MOV EDI,EBX
0070CE77  83 C9 FF                  OR ECX,0xffffffff
0070CE7A  33 C0                     XOR EAX,EAX
0070CE7C  F2 AE                     SCASB.REPNE ES:EDI
0070CE7E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070CE81  4F                        DEC EDI
0070CE82  8B C8                     MOV ECX,EAX
0070CE84  C1 E9 02                  SHR ECX,0x2
0070CE87  F3 A5                     MOVSD.REP ES:EDI,ESI
0070CE89  8B C8                     MOV ECX,EAX
0070CE8B  8B C3                     MOV EAX,EBX
0070CE8D  83 E1 03                  AND ECX,0x3
0070CE90  F3 A4                     MOVSB.REP ES:EDI,ESI
0070CE92  8A 4D 0F                  MOV CL,byte ptr [EBP + 0xf]
0070CE95  5F                        POP EDI
0070CE96  5E                        POP ESI
0070CE97  88 4A 01                  MOV byte ptr [EDX + 0x1],CL
0070CE9A  5B                        POP EBX
0070CE9B  8B E5                     MOV ESP,EBP
0070CE9D  5D                        POP EBP
0070CE9E  C3                        RET
LAB_0070ce9f:
0070CE9F  8B C3                     MOV EAX,EBX
0070CEA1  5B                        POP EBX
0070CEA2  8B E5                     MOV ESP,EBP
0070CEA4  5D                        POP EBP
0070CEA5  C3                        RET
