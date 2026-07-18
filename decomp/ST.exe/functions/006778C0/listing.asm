FUN_006778c0:
006778C0  55                        PUSH EBP
006778C1  8B EC                     MOV EBP,ESP
006778C3  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
006778C8  53                        PUSH EBX
006778C9  33 DB                     XOR EBX,EBX
006778CB  85 C0                     TEST EAX,EAX
006778CD  75 05                     JNZ 0x006778d4
006778CF  33 C0                     XOR EAX,EAX
006778D1  5B                        POP EBX
006778D2  5D                        POP EBP
006778D3  C3                        RET
LAB_006778d4:
006778D4  56                        PUSH ESI
006778D5  57                        PUSH EDI
006778D6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006778D9  85 FF                     TEST EDI,EDI
006778DB  7D 02                     JGE 0x006778df
006778DD  33 FF                     XOR EDI,EDI
LAB_006778df:
006778DF  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006778E2  85 F6                     TEST ESI,ESI
006778E4  7D 02                     JGE 0x006778e8
006778E6  33 F6                     XOR ESI,ESI
LAB_006778e8:
006778E8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006778EB  85 D2                     TEST EDX,EDX
006778ED  7F 07                     JG 0x006778f6
006778EF  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
LAB_006778f6:
006778F6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006778F9  85 C9                     TEST ECX,ECX
006778FB  7F 07                     JG 0x00677904
006778FD  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
LAB_00677904:
00677904  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00677907  3D DD 00 00 00            CMP EAX,0xdd
0067790C  7C 23                     JL 0x00677931
0067790E  3D DE 00 00 00            CMP EAX,0xde
00677913  7F 1C                     JG 0x00677931
00677915  51                        PUSH ECX
00677916  52                        PUSH EDX
00677917  56                        PUSH ESI
00677918  8D 4D 10                  LEA ECX,[EBP + 0x10]
0067791B  57                        PUSH EDI
0067791C  8D 55 0C                  LEA EDX,[EBP + 0xc]
0067791F  51                        PUSH ECX
00677920  52                        PUSH EDX
00677921  50                        PUSH EAX
00677922  E8 24 A6 D8 FF            CALL 0x00401f4b
00677927  83 C4 1C                  ADD ESP,0x1c
0067792A  85 C0                     TEST EAX,EAX
0067792C  75 03                     JNZ 0x00677931
0067792E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_00677931:
00677931  5F                        POP EDI
00677932  8B C3                     MOV EAX,EBX
00677934  5E                        POP ESI
00677935  5B                        POP EBX
00677936  5D                        POP EBP
00677937  C3                        RET
