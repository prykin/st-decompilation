FUN_005ddb40:
005DDB40  55                        PUSH EBP
005DDB41  8B EC                     MOV EBP,ESP
005DDB43  81 EC 5C 04 00 00         SUB ESP,0x45c
005DDB49  56                        PUSH ESI
005DDB4A  8B F1                     MOV ESI,ECX
005DDB4C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005DDB4F  8B 86 86 06 00 00         MOV EAX,dword ptr [ESI + 0x686]
005DDB55  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DDB58  85 C9                     TEST ECX,ECX
005DDB5A  7E 07                     JLE 0x005ddb63
005DDB5C  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005DDB5F  8B 00                     MOV EAX,dword ptr [EAX]
005DDB61  EB 02                     JMP 0x005ddb65
LAB_005ddb63:
005DDB63  33 C0                     XOR EAX,EAX
LAB_005ddb65:
005DDB65  50                        PUSH EAX
005DDB66  B9 20 76 80 00            MOV ECX,0x807620
005DDB6B  E8 DD 46 E2 FF            CALL 0x0040224d
005DDB70  85 C0                     TEST EAX,EAX
005DDB72  0F 84 A8 00 00 00         JZ 0x005ddc20
005DDB78  53                        PUSH EBX
005DDB79  57                        PUSH EDI
005DDB7A  8B 96 96 06 00 00         MOV EDX,dword ptr [ESI + 0x696]
005DDB80  B9 14 01 00 00            MOV ECX,0x114
005DDB85  33 C0                     XOR EAX,EAX
005DDB87  8D BD A4 FB FF FF         LEA EDI,[EBP + 0xfffffba4]
005DDB8D  F3 AB                     STOSD.REP ES:EDI
005DDB8F  AA                        STOSB ES:EDI
005DDB90  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005DDB93  33 DB                     XOR EBX,EBX
005DDB95  85 C0                     TEST EAX,EAX
005DDB97  7E 7B                     JLE 0x005ddc14
LAB_005ddb99:
005DDB99  BF A0 16 80 00            MOV EDI,0x8016a0
005DDB9E  83 C9 FF                  OR ECX,0xffffffff
005DDBA1  33 C0                     XOR EAX,EAX
005DDBA3  8D B5 A4 FB FF FF         LEA ESI,[EBP + 0xfffffba4]
005DDBA9  F2 AE                     SCASB.REPNE ES:EDI
005DDBAB  F7 D1                     NOT ECX
005DDBAD  2B F9                     SUB EDI,ECX
005DDBAF  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005DDBB2  8B C1                     MOV EAX,ECX
005DDBB4  8B F7                     MOV ESI,EDI
005DDBB6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005DDBB9  C1 E9 02                  SHR ECX,0x2
005DDBBC  F3 A5                     MOVSD.REP ES:EDI,ESI
005DDBBE  8B C8                     MOV ECX,EAX
005DDBC0  83 E1 03                  AND ECX,0x3
005DDBC3  F3 A4                     MOVSB.REP ES:EDI,ESI
005DDBC5  3B 5A 08                  CMP EBX,dword ptr [EDX + 0x8]
005DDBC8  7D 08                     JGE 0x005ddbd2
005DDBCA  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
005DDBCD  8B 3C 99                  MOV EDI,dword ptr [ECX + EBX*0x4]
005DDBD0  EB 02                     JMP 0x005ddbd4
LAB_005ddbd2:
005DDBD2  33 FF                     XOR EDI,EDI
LAB_005ddbd4:
005DDBD4  83 C9 FF                  OR ECX,0xffffffff
005DDBD7  33 C0                     XOR EAX,EAX
005DDBD9  F2 AE                     SCASB.REPNE ES:EDI
005DDBDB  F7 D1                     NOT ECX
005DDBDD  2B F9                     SUB EDI,ECX
005DDBDF  8D 95 E4 FB FF FF         LEA EDX,[EBP + 0xfffffbe4]
005DDBE5  8B C1                     MOV EAX,ECX
005DDBE7  8B F7                     MOV ESI,EDI
005DDBE9  8B FA                     MOV EDI,EDX
005DDBEB  C1 E9 02                  SHR ECX,0x2
005DDBEE  F3 A5                     MOVSD.REP ES:EDI,ESI
005DDBF0  8B C8                     MOV ECX,EAX
005DDBF2  83 E1 03                  AND ECX,0x3
005DDBF5  F3 A4                     MOVSB.REP ES:EDI,ESI
005DDBF7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DDBFA  8D 8D A4 FB FF FF         LEA ECX,[EBP + 0xfffffba4]
005DDC00  51                        PUSH ECX
005DDC01  8B CE                     MOV ECX,ESI
005DDC03  E8 B4 4F E2 FF            CALL 0x00402bbc
005DDC08  8B 96 96 06 00 00         MOV EDX,dword ptr [ESI + 0x696]
005DDC0E  43                        INC EBX
005DDC0F  3B 5A 08                  CMP EBX,dword ptr [EDX + 0x8]
005DDC12  7C 85                     JL 0x005ddb99
LAB_005ddc14:
005DDC14  5F                        POP EDI
005DDC15  5B                        POP EBX
005DDC16  B8 01 00 00 00            MOV EAX,0x1
005DDC1B  5E                        POP ESI
005DDC1C  8B E5                     MOV ESP,EBP
005DDC1E  5D                        POP EBP
005DDC1F  C3                        RET
LAB_005ddc20:
005DDC20  33 C0                     XOR EAX,EAX
005DDC22  5E                        POP ESI
005DDC23  8B E5                     MOV ESP,EBP
005DDC25  5D                        POP EBP
005DDC26  C3                        RET
