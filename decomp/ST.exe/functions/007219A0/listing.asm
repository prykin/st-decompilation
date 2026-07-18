FUN_007219a0:
007219A0  55                        PUSH EBP
007219A1  8B EC                     MOV EBP,ESP
007219A3  51                        PUSH ECX
007219A4  8B 81 38 01 00 00         MOV EAX,dword ptr [ECX + 0x138]
007219AA  53                        PUSH EBX
007219AB  85 C0                     TEST EAX,EAX
007219AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007219B0  74 58                     JZ 0x00721a0a
007219B2  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
007219B5  85 DB                     TEST EBX,EBX
007219B7  74 51                     JZ 0x00721a0a
007219B9  56                        PUSH ESI
007219BA  57                        PUSH EDI
007219BB  7E 07                     JLE 0x007219c4
007219BD  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
007219C0  8B 38                     MOV EDI,dword ptr [EAX]
007219C2  EB 02                     JMP 0x007219c6
LAB_007219c4:
007219C4  33 FF                     XOR EDI,EDI
LAB_007219c6:
007219C6  83 C9 FF                  OR ECX,0xffffffff
007219C9  33 C0                     XOR EAX,EAX
007219CB  F2 AE                     SCASB.REPNE ES:EDI
007219CD  F7 D1                     NOT ECX
007219CF  BA 01 00 00 00            MOV EDX,0x1
007219D4  49                        DEC ECX
007219D5  3B DA                     CMP EBX,EDX
007219D7  8B F1                     MOV ESI,ECX
007219D9  76 26                     JBE 0x00721a01
007219DB  3B D3                     CMP EDX,EBX
LAB_007219dd:
007219DD  7D 0B                     JGE 0x007219ea
007219DF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007219E2  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
007219E5  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
007219E8  EB 02                     JMP 0x007219ec
LAB_007219ea:
007219EA  33 FF                     XOR EDI,EDI
LAB_007219ec:
007219EC  83 C9 FF                  OR ECX,0xffffffff
007219EF  33 C0                     XOR EAX,EAX
007219F1  F2 AE                     SCASB.REPNE ES:EDI
007219F3  F7 D1                     NOT ECX
007219F5  49                        DEC ECX
007219F6  3B CE                     CMP ECX,ESI
007219F8  7E 02                     JLE 0x007219fc
007219FA  8B F1                     MOV ESI,ECX
LAB_007219fc:
007219FC  42                        INC EDX
007219FD  3B D3                     CMP EDX,EBX
007219FF  72 DC                     JC 0x007219dd
LAB_00721a01:
00721A01  8B C6                     MOV EAX,ESI
00721A03  5F                        POP EDI
00721A04  5E                        POP ESI
00721A05  5B                        POP EBX
00721A06  8B E5                     MOV ESP,EBP
00721A08  5D                        POP EBP
00721A09  C3                        RET
LAB_00721a0a:
00721A0A  33 C0                     XOR EAX,EAX
00721A0C  5B                        POP EBX
00721A0D  8B E5                     MOV ESP,EBP
00721A0F  5D                        POP EBP
00721A10  C3                        RET
