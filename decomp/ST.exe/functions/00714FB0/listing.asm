FUN_00714fb0:
00714FB0  55                        PUSH EBP
00714FB1  8B EC                     MOV EBP,ESP
00714FB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00714FB6  53                        PUSH EBX
00714FB7  56                        PUSH ESI
00714FB8  33 DB                     XOR EBX,EBX
00714FBA  57                        PUSH EDI
00714FBB  8B F9                     MOV EDI,ECX
00714FBD  85 C0                     TEST EAX,EAX
00714FBF  74 03                     JZ 0x00714fc4
00714FC1  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
LAB_00714fc4:
00714FC4  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
00714FC7  80 3E 00                  CMP byte ptr [ESI],0x0
00714FCA  74 4B                     JZ 0x00715017
LAB_00714fcc:
00714FCC  85 DB                     TEST EBX,EBX
00714FCE  74 2A                     JZ 0x00714ffa
00714FD0  56                        PUSH ESI
00714FD1  33 DB                     XOR EBX,EBX
00714FD3  E8 E8 7D FF FF            CALL 0x0070cdc0
00714FD8  83 C4 04                  ADD ESP,0x4
00714FDB  85 C0                     TEST EAX,EAX
00714FDD  7D 11                     JGE 0x00714ff0
LAB_00714fdf:
00714FDF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00714FE2  56                        PUSH ESI
00714FE3  50                        PUSH EAX
00714FE4  E8 17 7E FF FF            CALL 0x0070ce00
00714FE9  83 C4 08                  ADD ESP,0x8
00714FEC  85 C0                     TEST EAX,EAX
00714FEE  75 26                     JNZ 0x00715016
LAB_00714ff0:
00714FF0  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
00714FF3  46                        INC ESI
00714FF4  84 C0                     TEST AL,AL
00714FF6  75 D4                     JNZ 0x00714fcc
00714FF8  EB 1D                     JMP 0x00715017
LAB_00714ffa:
00714FFA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00714FFD  85 C0                     TEST EAX,EAX
00714FFF  74 DE                     JZ 0x00714fdf
00715001  56                        PUSH ESI
00715002  50                        PUSH EAX
00715003  E8 88 7D FF FF            CALL 0x0070cd90
00715008  83 C4 08                  ADD ESP,0x8
0071500B  85 C0                     TEST EAX,EAX
0071500D  75 D0                     JNZ 0x00714fdf
0071500F  BB 01 00 00 00            MOV EBX,0x1
00715014  EB DA                     JMP 0x00714ff0
LAB_00715016:
00715016  46                        INC ESI
LAB_00715017:
00715017  3B 77 08                  CMP ESI,dword ptr [EDI + 0x8]
0071501A  74 1E                     JZ 0x0071503a
0071501C  8A 1E                     MOV BL,byte ptr [ESI]
0071501E  C6 06 00                  MOV byte ptr [ESI],0x0
00715021  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00715024  51                        PUSH ECX
00715025  8B CF                     MOV ECX,EDI
00715027  E8 94 FD FF FF            CALL 0x00714dc0
0071502C  88 1E                     MOV byte ptr [ESI],BL
0071502E  8B 07                     MOV EAX,dword ptr [EDI]
00715030  89 77 08                  MOV dword ptr [EDI + 0x8],ESI
00715033  5F                        POP EDI
00715034  5E                        POP ESI
00715035  5B                        POP EBX
00715036  5D                        POP EBP
00715037  C2 0C 00                  RET 0xc
LAB_0071503a:
0071503A  5F                        POP EDI
0071503B  5E                        POP ESI
0071503C  33 C0                     XOR EAX,EAX
0071503E  5B                        POP EBX
0071503F  5D                        POP EBP
00715040  C2 0C 00                  RET 0xc
