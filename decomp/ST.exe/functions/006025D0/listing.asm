FUN_006025d0:
006025D0  55                        PUSH EBP
006025D1  8B EC                     MOV EBP,ESP
006025D3  56                        PUSH ESI
006025D4  8B F1                     MOV ESI,ECX
006025D6  33 C9                     XOR ECX,ECX
006025D8  33 C0                     XOR EAX,EAX
006025DA  83 BE 6E 03 00 00 03      CMP dword ptr [ESI + 0x36e],0x3
006025E1  74 52                     JZ 0x00602635
006025E3  53                        PUSH EBX
006025E4  BB 7E 01 00 00            MOV EBX,0x17e
006025E9  57                        PUSH EDI
006025EA  53                        PUSH EBX
006025EB  E8 80 86 0A 00            CALL 0x006aac70
006025F0  8B 8E 6E 03 00 00         MOV ECX,dword ptr [ESI + 0x36e]
006025F6  BF 02 00 00 00            MOV EDI,0x2
006025FB  3B CF                     CMP ECX,EDI
006025FD  75 13                     JNZ 0x00602612
006025FF  8A 96 9F 03 00 00         MOV DL,byte ptr [ESI + 0x39f]
00602605  33 C9                     XOR ECX,ECX
00602607  84 D2                     TEST DL,DL
00602609  0F 9E C1                  SETLE CL
0060260C  89 8E 6E 03 00 00         MOV dword ptr [ESI + 0x36e],ECX
LAB_00602612:
00602612  89 BE 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EDI
00602618  B9 5F 00 00 00            MOV ECX,0x5f
0060261D  81 C6 31 02 00 00         ADD ESI,0x231
00602623  8B F8                     MOV EDI,EAX
00602625  F3 A5                     MOVSD.REP ES:EDI,ESI
00602627  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060262A  66 A5                     MOVSW ES:EDI,ESI
0060262C  89 1A                     MOV dword ptr [EDX],EBX
0060262E  5F                        POP EDI
0060262F  5B                        POP EBX
00602630  5E                        POP ESI
00602631  5D                        POP EBP
00602632  C2 04 00                  RET 0x4
LAB_00602635:
00602635  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00602638  5E                        POP ESI
00602639  89 0A                     MOV dword ptr [EDX],ECX
0060263B  5D                        POP EBP
0060263C  C2 04 00                  RET 0x4
