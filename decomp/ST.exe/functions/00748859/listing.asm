FUN_00748859:
00748859  55                        PUSH EBP
0074885A  8B EC                     MOV EBP,ESP
0074885C  53                        PUSH EBX
0074885D  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00748860  33 C0                     XOR EAX,EAX
00748862  3B D8                     CMP EBX,EAX
00748864  75 07                     JNZ 0x0074886d
00748866  B8 03 40 00 80            MOV EAX,0x80004003
0074886B  EB 31                     JMP 0x0074889e
LAB_0074886d:
0074886D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00748870  FF 4D 10                  DEC dword ptr [EBP + 0x10]
00748873  57                        PUSH EDI
00748874  56                        PUSH ESI
00748875  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00748878  85 C9                     TEST ECX,ECX
0074887A  89 06                     MOV dword ptr [ESI],EAX
0074887C  7E 1E                     JLE 0x0074889c
0074887E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00748881:
00748881  8B 0E                     MOV ECX,dword ptr [ESI]
00748883  8B 07                     MOV EAX,dword ptr [EDI]
00748885  FF 34 8B                  PUSH dword ptr [EBX + ECX*0x4]
00748888  57                        PUSH EDI
00748889  FF 50 18                  CALL dword ptr [EAX + 0x18]
0074888C  85 C0                     TEST EAX,EAX
0074888E  75 0C                     JNZ 0x0074889c
00748890  FF 06                     INC dword ptr [ESI]
00748892  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00748895  FF 4D 10                  DEC dword ptr [EBP + 0x10]
00748898  85 C9                     TEST ECX,ECX
0074889A  7F E5                     JG 0x00748881
LAB_0074889c:
0074889C  5E                        POP ESI
0074889D  5F                        POP EDI
LAB_0074889e:
0074889E  5B                        POP EBX
0074889F  5D                        POP EBP
007488A0  C2 10 00                  RET 0x10
