FUN_0067fff0:
0067FFF0  55                        PUSH EBP
0067FFF1  8B EC                     MOV EBP,ESP
0067FFF3  51                        PUSH ECX
0067FFF4  8B 0D 50 D7 79 00         MOV ECX,dword ptr [0x0079d750]
0067FFFA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067FFFD  8D 45 FC                  LEA EAX,[EBP + -0x4]
00680000  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00680007  50                        PUSH EAX
00680008  51                        PUSH ECX
00680009  52                        PUSH EDX
0068000A  E8 71 EE 0A 00            CALL 0x0072ee80
0068000F  83 C4 0C                  ADD ESP,0xc
00680012  83 F8 01                  CMP EAX,0x1
00680015  75 0C                     JNZ 0x00680023
00680017  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068001A  85 C0                     TEST EAX,EAX
0068001C  7C 05                     JL 0x00680023
0068001E  83 F8 04                  CMP EAX,0x4
00680021  7C 03                     JL 0x00680026
LAB_00680023:
00680023  83 C8 FF                  OR EAX,0xffffffff
LAB_00680026:
00680026  8B E5                     MOV ESP,EBP
00680028  5D                        POP EBP
00680029  C3                        RET
