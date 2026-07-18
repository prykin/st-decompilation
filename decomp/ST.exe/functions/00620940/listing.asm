FUN_00620940:
00620940  55                        PUSH EBP
00620941  8B EC                     MOV EBP,ESP
00620943  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00620946  53                        PUSH EBX
00620947  56                        PUSH ESI
00620948  57                        PUSH EDI
00620949  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0062094F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00620952  33 C0                     XOR EAX,EAX
00620954  33 DB                     XOR EBX,EBX
00620956  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0062095C  8B B1 DD 00 00 00         MOV ESI,dword ptr [ECX + 0xdd]
00620962  83 CF FF                  OR EDI,0xffffffff
00620965  85 F6                     TEST ESI,ESI
00620967  74 60                     JZ 0x006209c9
00620969  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062096C  85 C9                     TEST ECX,ECX
0062096E  7C 59                     JL 0x006209c9
00620970  33 D2                     XOR EDX,EDX
00620972  85 C9                     TEST ECX,ECX
00620974  7E 53                     JLE 0x006209c9
00620976  3B D1                     CMP EDX,ECX
LAB_00620978:
00620978  73 0B                     JNC 0x00620985
0062097A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062097D  0F AF CA                  IMUL ECX,EDX
00620980  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00620983  EB 02                     JMP 0x00620987
LAB_00620985:
00620985  33 C9                     XOR ECX,ECX
LAB_00620987:
00620987  8B 09                     MOV ECX,dword ptr [ECX]
00620989  85 C9                     TEST ECX,ECX
0062098B  76 0D                     JBE 0x0062099a
0062098D  3B CB                     CMP ECX,EBX
0062098F  76 09                     JBE 0x0062099a
00620991  8B FA                     MOV EDI,EDX
00620993  8B D9                     MOV EBX,ECX
00620995  B8 01 00 00 00            MOV EAX,0x1
LAB_0062099a:
0062099A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062099D  42                        INC EDX
0062099E  3B D1                     CMP EDX,ECX
006209A0  7C D6                     JL 0x00620978
006209A2  85 FF                     TEST EDI,EDI
006209A4  7C 23                     JL 0x006209c9
006209A6  3B F9                     CMP EDI,ECX
006209A8  73 0D                     JNC 0x006209b7
006209AA  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006209AD  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006209B0  0F AF CF                  IMUL ECX,EDI
006209B3  03 CA                     ADD ECX,EDX
006209B5  EB 02                     JMP 0x006209b9
LAB_006209b7:
006209B7  33 C9                     XOR ECX,ECX
LAB_006209b9:
006209B9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006209BC  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006209BF  89 16                     MOV dword ptr [ESI],EDX
006209C1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006209C4  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006209C7  89 0A                     MOV dword ptr [EDX],ECX
LAB_006209c9:
006209C9  5F                        POP EDI
006209CA  5E                        POP ESI
006209CB  5B                        POP EBX
006209CC  5D                        POP EBP
006209CD  C2 08 00                  RET 0x8
