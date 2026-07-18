FUN_0075f8e0:
0075F8E0  55                        PUSH EBP
0075F8E1  8B EC                     MOV EBP,ESP
0075F8E3  83 EC 14                  SUB ESP,0x14
0075F8E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F8E9  53                        PUSH EBX
0075F8EA  56                        PUSH ESI
0075F8EB  57                        PUSH EDI
0075F8EC  8B 70 70                  MOV ESI,dword ptr [EAX + 0x70]
0075F8EF  8B 50 58                  MOV EDX,dword ptr [EAX + 0x58]
0075F8F2  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0075F8F5  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0075F8F8  BB 01 00 00 00            MOV EBX,0x1
LAB_0075f8fd:
0075F8FD  43                        INC EBX
0075F8FE  83 FE 01                  CMP ESI,0x1
0075F901  8B C3                     MOV EAX,EBX
0075F903  7E 09                     JLE 0x0075f90e
0075F905  8D 4E FF                  LEA ECX,[ESI + -0x1]
LAB_0075f908:
0075F908  0F AF C3                  IMUL EAX,EBX
0075F90B  49                        DEC ECX
0075F90C  75 FA                     JNZ 0x0075f908
LAB_0075f90e:
0075F90E  3B C2                     CMP EAX,EDX
0075F910  7E EB                     JLE 0x0075f8fd
0075F912  4B                        DEC EBX
0075F913  83 FB 02                  CMP EBX,0x2
0075F916  7D 17                     JGE 0x0075f92f
0075F918  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075F91D  68 D5 00 00 00            PUSH 0xd5
0075F922  68 A0 2E 7F 00            PUSH 0x7f2ea0
0075F927  50                        PUSH EAX
0075F928  6A 37                     PUSH 0x37
0075F92A  E8 11 65 F4 FF            CALL 0x006a5e40
LAB_0075f92f:
0075F92F  85 F6                     TEST ESI,ESI
0075F931  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0075F938  7E 1C                     JLE 0x0075f956
0075F93A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0075F93D  8B CE                     MOV ECX,ESI
0075F93F  8B C3                     MOV EAX,EBX
0075F941  8B D6                     MOV EDX,ESI
0075F943  F3 AB                     STOSD.REP ES:EDI
LAB_0075f945:
0075F945  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075F948  0F AF CB                  IMUL ECX,EBX
0075F94B  4A                        DEC EDX
0075F94C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075F94F  75 F4                     JNZ 0x0075f945
0075F951  EB 03                     JMP 0x0075f956
LAB_0075f953:
0075F953  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0075f956:
0075F956  33 DB                     XOR EBX,EBX
0075F958  3B F3                     CMP ESI,EBX
0075F95A  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0075F95D  7E 5C                     JLE 0x0075f9bb
0075F95F  C7 45 F8 98 22 7A 00      MOV dword ptr [EBP + -0x8],0x7a2298
LAB_0075f966:
0075F966  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075F969  83 7A 24 02               CMP dword ptr [EDX + 0x24],0x2
0075F96D  75 07                     JNZ 0x0075f976
0075F96F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075F972  8B 30                     MOV ESI,dword ptr [EAX]
0075F974  EB 02                     JMP 0x0075f978
LAB_0075f976:
0075F976  8B F3                     MOV ESI,EBX
LAB_0075f978:
0075F978  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F97B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075F97E  99                        CDQ
0075F97F  8B 3C B1                  MOV EDI,dword ptr [ECX + ESI*0x4]
0075F982  F7 FF                     IDIV EDI
0075F984  8D 4F 01                  LEA ECX,[EDI + 0x1]
0075F987  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075F98A  0F AF C1                  IMUL EAX,ECX
0075F98D  3B C2                     CMP EAX,EDX
0075F98F  7F 23                     JG 0x0075f9b4
0075F991  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075F994  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075F997  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075F99A  43                        INC EBX
0075F99B  89 0C B2                  MOV dword ptr [EDX + ESI*0x4],ECX
0075F99E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075F9A1  83 C1 04                  ADD ECX,0x4
0075F9A4  3B D8                     CMP EBX,EAX
0075F9A6  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0075F9AD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075F9B0  7C B4                     JL 0x0075f966
0075F9B2  EB 9F                     JMP 0x0075f953
LAB_0075f9b4:
0075F9B4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075F9B7  85 C0                     TEST EAX,EAX
0075F9B9  75 98                     JNZ 0x0075f953
LAB_0075f9bb:
0075F9BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075F9BE  5F                        POP EDI
0075F9BF  5E                        POP ESI
0075F9C0  5B                        POP EBX
0075F9C1  8B E5                     MOV ESP,EBP
0075F9C3  5D                        POP EBP
0075F9C4  C2 08 00                  RET 0x8
