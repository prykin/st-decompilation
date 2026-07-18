FUN_007217e0:
007217E0  8B D1                     MOV EDX,ECX
007217E2  56                        PUSH ESI
007217E3  33 F6                     XOR ESI,ESI
007217E5  57                        PUSH EDI
007217E6  8B 82 38 01 00 00         MOV EAX,dword ptr [EDX + 0x138]
007217EC  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
LAB_007217ef:
007217EF  8B 82 38 01 00 00         MOV EAX,dword ptr [EDX + 0x138]
007217F5  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
007217F8  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
007217FB  3B CF                     CMP ECX,EDI
007217FD  7D 1D                     JGE 0x0072181c
007217FF  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
00721802  41                        INC ECX
00721803  8B 7C 8F FC               MOV EDI,dword ptr [EDI + ECX*0x4 + -0x4]
00721807  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0072180A  85 FF                     TEST EDI,EDI
0072180C  74 0E                     JZ 0x0072181c
0072180E  83 C9 FF                  OR ECX,0xffffffff
00721811  33 C0                     XOR EAX,EAX
00721813  F2 AE                     SCASB.REPNE ES:EDI
00721815  F7 D1                     NOT ECX
00721817  49                        DEC ECX
00721818  03 F1                     ADD ESI,ECX
0072181A  EB D3                     JMP 0x007217ef
LAB_0072181c:
0072181C  8B C6                     MOV EAX,ESI
0072181E  5F                        POP EDI
0072181F  5E                        POP ESI
00721820  C3                        RET
