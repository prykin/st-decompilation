FUN_00627050:
00627050  55                        PUSH EBP
00627051  8B EC                     MOV EBP,ESP
00627053  56                        PUSH ESI
00627054  8B F1                     MOV ESI,ECX
00627056  57                        PUSH EDI
00627057  83 BE AE 02 00 00 04      CMP dword ptr [ESI + 0x2ae],0x4
0062705E  74 20                     JZ 0x00627080
00627060  8B 8E 62 02 00 00         MOV ECX,dword ptr [ESI + 0x262]
00627066  33 C0                     XOR EAX,EAX
00627068  A0 4D 87 80 00            MOV AL,[0x0080874d]
0062706D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00627070  3B C8                     CMP ECX,EAX
00627072  0F 95 C1                  SETNZ CL
00627075  49                        DEC ECX
00627076  83 E1 FE                  AND ECX,0xfffffffe
00627079  83 C1 03                  ADD ECX,0x3
0062707C  88 0F                     MOV byte ptr [EDI],CL
0062707E  EB 06                     JMP 0x00627086
LAB_00627080:
00627080  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00627083  C6 07 04                  MOV byte ptr [EDI],0x4
LAB_00627086:
00627086  C6 47 01 01               MOV byte ptr [EDI + 0x1],0x1
0062708A  8B 16                     MOV EDX,dword ptr [ESI]
0062708C  8B CE                     MOV ECX,ESI
0062708E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00627091  89 47 02                  MOV dword ptr [EDI + 0x2],EAX
00627094  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00627097  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0062709D  50                        PUSH EAX
0062709E  E8 14 D9 DD FF            CALL 0x004049b7
006270A3  88 47 06                  MOV byte ptr [EDI + 0x6],AL
006270A6  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006270A9  89 4F 07                  MOV dword ptr [EDI + 0x7],ECX
006270AC  5F                        POP EDI
006270AD  5E                        POP ESI
006270AE  5D                        POP EBP
006270AF  C2 04 00                  RET 0x4
