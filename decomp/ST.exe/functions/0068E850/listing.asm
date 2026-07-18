FUN_0068e850:
0068E850  55                        PUSH EBP
0068E851  8B EC                     MOV EBP,ESP
0068E853  56                        PUSH ESI
0068E854  8B B1 BD 00 00 00         MOV ESI,dword ptr [ECX + 0xbd]
0068E85A  57                        PUSH EDI
0068E85B  33 C0                     XOR EAX,EAX
0068E85D  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0068E860  33 D2                     XOR EDX,EDX
0068E862  85 FF                     TEST EDI,EDI
0068E864  7E 26                     JLE 0x0068e88c
0068E866  53                        PUSH EBX
0068E867  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0068E86A  3B D7                     CMP EDX,EDI
LAB_0068e86c:
0068E86C  73 0B                     JNC 0x0068e879
0068E86E  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0068E871  0F AF CA                  IMUL ECX,EDX
0068E874  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
0068E877  EB 02                     JMP 0x0068e87b
LAB_0068e879:
0068E879  33 C9                     XOR ECX,ECX
LAB_0068e87b:
0068E87B  83 79 2C 02               CMP dword ptr [ECX + 0x2c],0x2
0068E87F  77 05                     JA 0x0068e886
0068E881  39 19                     CMP dword ptr [ECX],EBX
0068E883  75 01                     JNZ 0x0068e886
0068E885  40                        INC EAX
LAB_0068e886:
0068E886  42                        INC EDX
0068E887  3B D7                     CMP EDX,EDI
0068E889  7C E1                     JL 0x0068e86c
0068E88B  5B                        POP EBX
LAB_0068e88c:
0068E88C  5F                        POP EDI
0068E88D  5E                        POP ESI
0068E88E  5D                        POP EBP
0068E88F  C2 04 00                  RET 0x4
