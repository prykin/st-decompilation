FUN_00668670:
00668670  55                        PUSH EBP
00668671  8B EC                     MOV EBP,ESP
00668673  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00668676  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
00668679  84 C9                     TEST CL,CL
0066867B  74 27                     JZ 0x006686a4
0066867D  56                        PUSH ESI
0066867E  57                        PUSH EDI
0066867F  8D B0 EB 01 00 00         LEA ESI,[EAX + 0x1eb]
00668685  BF 07 00 00 00            MOV EDI,0x7
LAB_0066868a:
0066868A  8B 06                     MOV EAX,dword ptr [ESI]
0066868C  85 C0                     TEST EAX,EAX
0066868E  74 0C                     JZ 0x0066869c
00668690  50                        PUSH EAX
00668691  E8 7A 5A 04 00            CALL 0x006ae110
00668696  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0066869c:
0066869C  83 C6 0C                  ADD ESI,0xc
0066869F  4F                        DEC EDI
006686A0  75 E8                     JNZ 0x0066868a
006686A2  5F                        POP EDI
006686A3  5E                        POP ESI
LAB_006686a4:
006686A4  5D                        POP EBP
006686A5  C3                        RET
