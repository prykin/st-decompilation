FUN_006033d0:
006033D0  55                        PUSH EBP
006033D1  8B EC                     MOV EBP,ESP
006033D3  56                        PUSH ESI
006033D4  8B F1                     MOV ESI,ECX
006033D6  57                        PUSH EDI
006033D7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006033DA  8B 86 6E 03 00 00         MOV EAX,dword ptr [ESI + 0x36e]
006033E0  85 C0                     TEST EAX,EAX
006033E2  74 30                     JZ 0x00603414
006033E4  C6 07 04                  MOV byte ptr [EDI],0x4
006033E7  8A 86 1D 02 00 00         MOV AL,byte ptr [ESI + 0x21d]
006033ED  88 47 01                  MOV byte ptr [EDI + 0x1],AL
006033F0  C6 47 02 01               MOV byte ptr [EDI + 0x2],0x1
006033F4  8B 16                     MOV EDX,dword ptr [ESI]
006033F6  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006033F9  89 47 03                  MOV dword ptr [EDI + 0x3],EAX
006033FC  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
006033FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00603405  50                        PUSH EAX
00603406  E8 AC 15 E0 FF            CALL 0x004049b7
0060340B  88 47 07                  MOV byte ptr [EDI + 0x7],AL
0060340E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00603411  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
LAB_00603414:
00603414  8D 96 5B 02 00 00         LEA EDX,[ESI + 0x25b]
0060341A  6A 0E                     PUSH 0xe
0060341C  8D 47 0C                  LEA EAX,[EDI + 0xc]
0060341F  52                        PUSH EDX
00603420  50                        PUSH EAX
00603421  E8 1A AF 12 00            CALL 0x0072e340
00603426  C6 47 1B 64               MOV byte ptr [EDI + 0x1b],0x64
0060342A  8B 86 6E 03 00 00         MOV EAX,dword ptr [ESI + 0x36e]
00603430  83 C4 0C                  ADD ESP,0xc
00603433  85 C0                     TEST EAX,EAX
00603435  74 04                     JZ 0x0060343b
00603437  C6 47 1D 01               MOV byte ptr [EDI + 0x1d],0x1
LAB_0060343b:
0060343B  5F                        POP EDI
0060343C  5E                        POP ESI
0060343D  5D                        POP EBP
0060343E  C2 04 00                  RET 0x4
