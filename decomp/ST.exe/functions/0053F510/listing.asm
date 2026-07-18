FUN_0053f510:
0053F510  55                        PUSH EBP
0053F511  8B EC                     MOV EBP,ESP
0053F513  56                        PUSH ESI
0053F514  57                        PUSH EDI
0053F515  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053F518  8B F1                     MOV ESI,ECX
0053F51A  33 C9                     XOR ECX,ECX
0053F51C  83 FF 05                  CMP EDI,0x5
0053F51F  73 06                     JNC 0x0053f527
0053F521  89 8E 99 01 00 00         MOV dword ptr [ESI + 0x199],ECX
LAB_0053f527:
0053F527  8B 96 99 01 00 00         MOV EDX,dword ptr [ESI + 0x199]
0053F52D  8D 47 FB                  LEA EAX,[EDI + -0x5]
0053F530  3B D0                     CMP EDX,EAX
0053F532  76 0F                     JBE 0x0053f543
0053F534  83 FF 05                  CMP EDI,0x5
0053F537  1B D2                     SBB EDX,EDX
0053F539  F7 D2                     NOT EDX
0053F53B  23 D0                     AND EDX,EAX
0053F53D  89 96 99 01 00 00         MOV dword ptr [ESI + 0x199],EDX
LAB_0053f543:
0053F543  83 FF 05                  CMP EDI,0x5
0053F546  73 24                     JNC 0x0053f56c
0053F548  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0053F54B  8B 8E 9D 01 00 00         MOV ECX,dword ptr [ESI + 0x19d]
0053F551  8D 46 18                  LEA EAX,[ESI + 0x18]
0053F554  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
0053F55B  50                        PUSH EAX
0053F55C  51                        PUSH ECX
0053F55D  6A 02                     PUSH 0x2
0053F55F  8B CE                     MOV ECX,ESI
0053F561  E8 1A 6B 1A 00            CALL 0x006e6080
0053F566  5F                        POP EDI
0053F567  5E                        POP ESI
0053F568  5D                        POP EBP
0053F569  C2 08 00                  RET 0x8
LAB_0053f56c:
0053F56C  53                        PUSH EBX
0053F56D  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0053F570  83 FB 05                  CMP EBX,0x5
0053F573  73 22                     JNC 0x0053f597
0053F575  8B 86 9D 01 00 00         MOV EAX,dword ptr [ESI + 0x19d]
0053F57B  8D 56 18                  LEA EDX,[ESI + 0x18]
0053F57E  52                        PUSH EDX
0053F57F  50                        PUSH EAX
0053F580  6A 02                     PUSH 0x2
0053F582  8B CE                     MOV ECX,ESI
0053F584  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
0053F58B  C7 46 2C 01 00 00 00      MOV dword ptr [ESI + 0x2c],0x1
0053F592  E8 E9 6A 1A 00            CALL 0x006e6080
LAB_0053f597:
0053F597  3B DF                     CMP EBX,EDI
0053F599  5B                        POP EBX
0053F59A  74 48                     JZ 0x0053f5e4
0053F59C  8B 8E 9D 01 00 00         MOV ECX,dword ptr [ESI + 0x19d]
0053F5A2  83 C7 FC                  ADD EDI,-0x4
0053F5A5  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
0053F5A8  8D 7E 18                  LEA EDI,[ESI + 0x18]
0053F5AB  57                        PUSH EDI
0053F5AC  51                        PUSH ECX
0053F5AD  6A 02                     PUSH 0x2
0053F5AF  8B CE                     MOV ECX,ESI
0053F5B1  C7 46 28 28 00 00 00      MOV dword ptr [ESI + 0x28],0x28
0053F5B8  E8 C3 6A 1A 00            CALL 0x006e6080
0053F5BD  8B 86 9D 01 00 00         MOV EAX,dword ptr [ESI + 0x19d]
0053F5C3  8B 96 99 01 00 00         MOV EDX,dword ptr [ESI + 0x199]
0053F5C9  57                        PUSH EDI
0053F5CA  50                        PUSH EAX
0053F5CB  6A 02                     PUSH 0x2
0053F5CD  8B CE                     MOV ECX,ESI
0053F5CF  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
0053F5D6  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
0053F5D9  E8 A2 6A 1A 00            CALL 0x006e6080
0053F5DE  5F                        POP EDI
0053F5DF  5E                        POP ESI
0053F5E0  5D                        POP EBP
0053F5E1  C2 08 00                  RET 0x8
LAB_0053f5e4:
0053F5E4  8B 96 9D 01 00 00         MOV EDX,dword ptr [ESI + 0x19d]
0053F5EA  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053F5ED  51                        PUSH ECX
0053F5EE  52                        PUSH EDX
0053F5EF  6A 02                     PUSH 0x2
0053F5F1  8B CE                     MOV ECX,ESI
0053F5F3  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053F5FA  E8 81 6A 1A 00            CALL 0x006e6080
0053F5FF  5F                        POP EDI
0053F600  5E                        POP ESI
0053F601  5D                        POP EBP
0053F602  C2 08 00                  RET 0x8
