STBoatC::sub_00492420:
00492420  55                        PUSH EBP
00492421  8B EC                     MOV EBP,ESP
00492423  51                        PUSH ECX
00492424  56                        PUSH ESI
00492425  8B F1                     MOV ESI,ECX
00492427  83 BE C6 07 00 00 01      CMP dword ptr [ESI + 0x7c6],0x1
0049242E  75 3E                     JNZ 0x0049246e
00492430  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
00492436  85 C0                     TEST EAX,EAX
00492438  75 34                     JNZ 0x0049246e
0049243A  8B 8E 8E 05 00 00         MOV ECX,dword ptr [ESI + 0x58e]
00492440  8D 45 FC                  LEA EAX,[EBP + -0x4]
00492443  50                        PUSH EAX
00492444  C7 86 C6 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7c6],0x0
0049244E  51                        PUSH ECX
0049244F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00492455  E8 76 3E 25 00            CALL 0x006e62d0
0049245A  83 F8 FC                  CMP EAX,-0x4
0049245D  74 0F                     JZ 0x0049246e
0049245F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00492462  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00492465  50                        PUSH EAX
00492466  8B 11                     MOV EDX,dword ptr [ECX]
00492468  FF 92 A0 00 00 00         CALL dword ptr [EDX + 0xa0]
LAB_0049246e:
0049246E  5E                        POP ESI
0049246F  8B E5                     MOV ESP,EBP
00492471  5D                        POP EBP
00492472  C3                        RET
