FUN_00553410:
00553410  55                        PUSH EBP
00553411  8B EC                     MOV EBP,ESP
00553413  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553416  56                        PUSH ESI
00553417  57                        PUSH EDI
00553418  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055341B  85 C9                     TEST ECX,ECX
0055341D  7C 19                     JL 0x00553438
0055341F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00553422  3B CA                     CMP ECX,EDX
00553424  7D 12                     JGE 0x00553438
00553426  85 FF                     TEST EDI,EDI
00553428  7C 0E                     JL 0x00553438
0055342A  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
0055342D  7D 09                     JGE 0x00553438
0055342F  8B C7                     MOV EAX,EDI
00553431  0F AF C2                  IMUL EAX,EDX
00553434  03 C1                     ADD EAX,ECX
00553436  EB 03                     JMP 0x0055343b
LAB_00553438:
00553438  83 C8 FF                  OR EAX,0xffffffff
LAB_0055343b:
0055343B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0055343E  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
00553441  88 14 30                  MOV byte ptr [EAX + ESI*0x1],DL
00553444  A1 50 2A 80 00            MOV EAX,[0x00802a50]
00553449  85 C0                     TEST EAX,EAX
0055344B  74 08                     JZ 0x00553455
0055344D  56                        PUSH ESI
0055344E  57                        PUSH EDI
0055344F  51                        PUSH ECX
00553450  FF D0                     CALL EAX
00553452  83 C4 0C                  ADD ESP,0xc
LAB_00553455:
00553455  5F                        POP EDI
00553456  5E                        POP ESI
00553457  5D                        POP EBP
00553458  C3                        RET
