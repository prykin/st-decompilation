FUN_0075fb50:
0075FB50  55                        PUSH EBP
0075FB51  8B EC                     MOV EBP,ESP
0075FB53  53                        PUSH EBX
0075FB54  56                        PUSH ESI
0075FB55  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075FB58  57                        PUSH EDI
0075FB59  33 FF                     XOR EDI,EDI
0075FB5B  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0075FB5E  8B 9E BA 01 00 00         MOV EBX,dword ptr [ESI + 0x1ba]
0075FB64  8D 4C 00 04               LEA ECX,[EAX + EAX*0x1 + 0x4]
0075FB68  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0075FB6B  85 C0                     TEST EAX,EAX
0075FB6D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075FB70  7E 1C                     JLE 0x0075fb8e
0075FB72  83 C3 44                  ADD EBX,0x44
LAB_0075fb75:
0075FB75  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FB78  8B 16                     MOV EDX,dword ptr [ESI]
0075FB7A  50                        PUSH EAX
0075FB7B  6A 01                     PUSH 0x1
0075FB7D  56                        PUSH ESI
0075FB7E  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075FB81  89 03                     MOV dword ptr [EBX],EAX
0075FB83  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0075FB86  47                        INC EDI
0075FB87  83 C3 04                  ADD EBX,0x4
0075FB8A  3B F8                     CMP EDI,EAX
0075FB8C  7C E7                     JL 0x0075fb75
LAB_0075fb8e:
0075FB8E  5F                        POP EDI
0075FB8F  5E                        POP ESI
0075FB90  5B                        POP EBX
0075FB91  5D                        POP EBP
0075FB92  C2 04 00                  RET 0x4
