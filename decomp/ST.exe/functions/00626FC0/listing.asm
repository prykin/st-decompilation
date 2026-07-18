FUN_00626fc0:
00626FC0  55                        PUSH EBP
00626FC1  8B EC                     MOV EBP,ESP
00626FC3  56                        PUSH ESI
00626FC4  8B F1                     MOV ESI,ECX
00626FC6  57                        PUSH EDI
00626FC7  83 BE AE 02 00 00 04      CMP dword ptr [ESI + 0x2ae],0x4
00626FCE  74 20                     JZ 0x00626ff0
00626FD0  8B 8E 62 02 00 00         MOV ECX,dword ptr [ESI + 0x262]
00626FD6  33 C0                     XOR EAX,EAX
00626FD8  A0 4D 87 80 00            MOV AL,[0x0080874d]
00626FDD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00626FE0  3B C8                     CMP ECX,EAX
00626FE2  0F 95 C1                  SETNZ CL
00626FE5  49                        DEC ECX
00626FE6  83 E1 FE                  AND ECX,0xfffffffe
00626FE9  83 C1 03                  ADD ECX,0x3
00626FEC  88 0F                     MOV byte ptr [EDI],CL
00626FEE  EB 06                     JMP 0x00626ff6
LAB_00626ff0:
00626FF0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00626FF3  C6 07 04                  MOV byte ptr [EDI],0x4
LAB_00626ff6:
00626FF6  C6 47 01 01               MOV byte ptr [EDI + 0x1],0x1
00626FFA  8B 16                     MOV EDX,dword ptr [ESI]
00626FFC  8B CE                     MOV ECX,ESI
00626FFE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00627001  89 47 02                  MOV dword ptr [EDI + 0x2],EAX
00627004  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00627007  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0062700D  50                        PUSH EAX
0062700E  E8 A4 D9 DD FF            CALL 0x004049b7
00627013  88 47 06                  MOV byte ptr [EDI + 0x6],AL
00627016  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00627019  89 4F 07                  MOV dword ptr [EDI + 0x7],ECX
0062701C  5F                        POP EDI
0062701D  5E                        POP ESI
0062701E  5D                        POP EBP
0062701F  C2 04 00                  RET 0x4
