FUN_00747b12:
00747B12  55                        PUSH EBP
00747B13  8B EC                     MOV EBP,ESP
00747B15  53                        PUSH EBX
00747B16  56                        PUSH ESI
00747B17  57                        PUSH EDI
00747B18  33 FF                     XOR EDI,EDI
00747B1A  57                        PUSH EDI
00747B1B  8B D9                     MOV EBX,ECX
00747B1D  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00747B20  E8 93 3C 00 00            CALL 0x0074b7b8
00747B25  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
00747B28  89 7B 14                  MOV dword ptr [EBX + 0x14],EDI
00747B2B  89 7B 18                  MOV dword ptr [EBX + 0x18],EDI
00747B2E  E8 EA 3D 00 00            CALL 0x0074b91d
00747B33  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00747B36  89 7B 6C                  MOV dword ptr [EBX + 0x6c],EDI
00747B39  89 43 64                  MOV dword ptr [EBX + 0x64],EAX
00747B3C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00747B3F  89 43 68                  MOV dword ptr [EBX + 0x68],EAX
00747B42  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00747B45  89 43 70                  MOV dword ptr [EBX + 0x70],EAX
00747B48  89 7B 74                  MOV dword ptr [EBX + 0x74],EDI
00747B4B  C7 43 78 01 00 00 00      MOV dword ptr [EBX + 0x78],0x1
00747B52  89 BB 80 00 00 00         MOV dword ptr [EBX + 0x80],EDI
00747B58  89 BB 84 00 00 00         MOV dword ptr [EBX + 0x84],EDI
00747B5E  83 8B 88 00 00 00 FF      OR dword ptr [EBX + 0x88],0xffffffff
00747B65  39 7D 18                  CMP dword ptr [EBP + 0x18],EDI
00747B68  C7 83 8C 00 00 00 FF FF FF 7F  MOV dword ptr [EBX + 0x8c],0x7fffffff
00747B72  D9 E8                     FLD1
00747B74  DD 9B 90 00 00 00         FSTP double ptr [EBX + 0x90]
00747B7A  74 2F                     JZ 0x00747bab
00747B7C  FF 75 18                  PUSH dword ptr [EBP + 0x18]
00747B7F  E8 E0 5A 00 00            CALL 0x0074d664
00747B84  40                        INC EAX
00747B85  8D 34 00                  LEA ESI,[EAX + EAX*0x1]
00747B88  56                        PUSH ESI
00747B89  E8 A2 69 FE FF            CALL 0x0072e530
00747B8E  3B C7                     CMP EAX,EDI
00747B90  59                        POP ECX
00747B91  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00747B94  74 15                     JZ 0x00747bab
00747B96  8B CE                     MOV ECX,ESI
00747B98  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00747B9B  8B F8                     MOV EDI,EAX
00747B9D  8B C1                     MOV EAX,ECX
00747B9F  C1 E9 02                  SHR ECX,0x2
00747BA2  F3 A5                     MOVSD.REP ES:EDI,ESI
00747BA4  8B C8                     MOV ECX,EAX
00747BA6  83 E1 03                  AND ECX,0x3
00747BA9  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00747bab:
00747BAB  5F                        POP EDI
00747BAC  8B C3                     MOV EAX,EBX
00747BAE  5E                        POP ESI
00747BAF  5B                        POP EBX
00747BB0  5D                        POP EBP
00747BB1  C2 18 00                  RET 0x18
