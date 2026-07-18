FUN_00758fa0:
00758FA0  55                        PUSH EBP
00758FA1  8B EC                     MOV EBP,ESP
00758FA3  51                        PUSH ECX
00758FA4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758FA7  53                        PUSH EBX
00758FA8  56                        PUSH ESI
00758FA9  57                        PUSH EDI
00758FAA  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
00758FAD  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
00758FB0  8B 3E                     MOV EDI,dword ptr [ESI]
00758FB2  85 DB                     TEST EBX,EBX
00758FB4  75 11                     JNZ 0x00758fc7
00758FB6  50                        PUSH EAX
00758FB7  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758FBA  85 C0                     TEST EAX,EAX
00758FBC  0F 84 A6 00 00 00         JZ 0x00759068
00758FC2  8B 3E                     MOV EDI,dword ptr [ESI]
00758FC4  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
LAB_00758fc7:
00758FC7  33 C0                     XOR EAX,EAX
00758FC9  4B                        DEC EBX
00758FCA  8A 27                     MOV AH,byte ptr [EDI]
00758FCC  47                        INC EDI
00758FCD  85 DB                     TEST EBX,EBX
00758FCF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00758FD2  75 17                     JNZ 0x00758feb
00758FD4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758FD7  50                        PUSH EAX
00758FD8  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758FDB  85 C0                     TEST EAX,EAX
00758FDD  0F 84 85 00 00 00         JZ 0x00759068
00758FE3  8B 3E                     MOV EDI,dword ptr [ESI]
00758FE5  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
00758FE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00758feb:
00758FEB  33 C9                     XOR ECX,ECX
00758FED  4B                        DEC EBX
00758FEE  8A 0F                     MOV CL,byte ptr [EDI]
00758FF0  03 C1                     ADD EAX,ECX
00758FF2  47                        INC EDI
00758FF3  83 F8 04                  CMP EAX,0x4
00758FF6  74 18                     JZ 0x00759010
00758FF8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00758FFE  68 5E 02 00 00            PUSH 0x25e
00759003  68 B0 2D 7F 00            PUSH 0x7f2db0
00759008  52                        PUSH EDX
00759009  6A 09                     PUSH 0x9
0075900B  E8 30 CE F4 FF            CALL 0x006a5e40
LAB_00759010:
00759010  85 DB                     TEST EBX,EBX
00759012  75 10                     JNZ 0x00759024
00759014  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759017  50                        PUSH EAX
00759018  FF 56 0C                  CALL dword ptr [ESI + 0xc]
0075901B  85 C0                     TEST EAX,EAX
0075901D  74 49                     JZ 0x00759068
0075901F  8B 3E                     MOV EDI,dword ptr [ESI]
00759021  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
LAB_00759024:
00759024  33 C9                     XOR ECX,ECX
00759026  4B                        DEC EBX
00759027  8A 2F                     MOV CH,byte ptr [EDI]
00759029  47                        INC EDI
0075902A  85 DB                     TEST EBX,EBX
0075902C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075902F  75 10                     JNZ 0x00759041
00759031  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00759034  52                        PUSH EDX
00759035  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00759038  85 C0                     TEST EAX,EAX
0075903A  74 2C                     JZ 0x00759068
0075903C  8B 3E                     MOV EDI,dword ptr [ESI]
0075903E  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
LAB_00759041:
00759041  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00759044  33 C0                     XOR EAX,EAX
00759046  8A 07                     MOV AL,byte ptr [EDI]
00759048  03 C1                     ADD EAX,ECX
0075904A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075904D  47                        INC EDI
0075904E  4B                        DEC EBX
0075904F  89 81 0C 01 00 00         MOV dword ptr [ECX + 0x10c],EAX
00759055  89 3E                     MOV dword ptr [ESI],EDI
00759057  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
0075905A  5F                        POP EDI
0075905B  5E                        POP ESI
0075905C  B8 01 00 00 00            MOV EAX,0x1
00759061  5B                        POP EBX
00759062  8B E5                     MOV ESP,EBP
00759064  5D                        POP EBP
00759065  C2 04 00                  RET 0x4
LAB_00759068:
00759068  5F                        POP EDI
00759069  5E                        POP ESI
0075906A  33 C0                     XOR EAX,EAX
0075906C  5B                        POP EBX
0075906D  8B E5                     MOV ESP,EBP
0075906F  5D                        POP EBP
00759070  C2 04 00                  RET 0x4
