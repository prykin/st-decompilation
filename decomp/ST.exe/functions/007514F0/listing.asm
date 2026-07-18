FUN_007514f0:
007514F0  55                        PUSH EBP
007514F1  8B EC                     MOV EBP,ESP
007514F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007514F6  53                        PUSH EBX
007514F7  56                        PUSH ESI
007514F8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007514FB  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
007514FE  8B 30                     MOV ESI,dword ptr [EAX]
00751500  C1 E1 08                  SHL ECX,0x8
00751503  0B CA                     OR ECX,EDX
00751505  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00751508  3A 14 31                  CMP DL,byte ptr [ECX + ESI*0x1]
0075150B  75 0E                     JNZ 0x0075151b
0075150D  33 C9                     XOR ECX,ECX
0075150F  B3 01                     MOV BL,0x1
00751511  8A 48 14                  MOV CL,byte ptr [EAX + 0x14]
00751514  D2 E3                     SHL BL,CL
00751516  08 58 16                  OR byte ptr [EAX + 0x16],BL
00751519  EB 21                     JMP 0x0075153c
LAB_0075151b:
0075151B  33 C9                     XOR ECX,ECX
0075151D  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00751520  88 54 01 17               MOV byte ptr [ECX + EAX*0x1 + 0x17],DL
00751524  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00751527  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0075152A  FE C1                     INC CL
0075152C  88 48 15                  MOV byte ptr [EAX + 0x15],CL
0075152F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00751532  C1 E1 08                  SHL ECX,0x8
00751535  0B CE                     OR ECX,ESI
00751537  8B 30                     MOV ESI,dword ptr [EAX]
00751539  88 14 31                  MOV byte ptr [ECX + ESI*0x1],DL
LAB_0075153c:
0075153C  8A 58 14                  MOV BL,byte ptr [EAX + 0x14]
0075153F  FE C3                     INC BL
00751541  8A CB                     MOV CL,BL
00751543  88 58 14                  MOV byte ptr [EAX + 0x14],BL
00751546  80 F9 08                  CMP CL,0x8
00751549  72 76                     JC 0x007515c1
0075154B  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0075154E  33 C9                     XOR ECX,ECX
00751550  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00751553  41                        INC ECX
00751554  3B F1                     CMP ESI,ECX
00751556  7D 1B                     JGE 0x00751573
00751558  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075155E  6A 34                     PUSH 0x34
00751560  68 00 2B 7F 00            PUSH 0x7f2b00
00751565  52                        PUSH EDX
00751566  6A CD                     PUSH -0x33
00751568  E8 D3 48 F5 FF            CALL 0x006a5e40
0075156D  5E                        POP ESI
0075156E  5B                        POP EBX
0075156F  5D                        POP EBP
00751570  C2 08 00                  RET 0x8
LAB_00751573:
00751573  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00751576  8A 58 16                  MOV BL,byte ptr [EAX + 0x16]
00751579  88 19                     MOV byte ptr [ECX],BL
0075157B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0075157E  8A 58 15                  MOV BL,byte ptr [EAX + 0x15]
00751581  41                        INC ECX
00751582  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00751585  8B F1                     MOV ESI,ECX
00751587  33 C9                     XOR ECX,ECX
00751589  3A D9                     CMP BL,CL
0075158B  76 19                     JBE 0x007515a6
LAB_0075158d:
0075158D  8A 5C 08 17               MOV BL,byte ptr [EAX + ECX*0x1 + 0x17]
00751591  88 1E                     MOV byte ptr [ESI],BL
00751593  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00751596  33 DB                     XOR EBX,EBX
00751598  46                        INC ESI
00751599  8A 58 15                  MOV BL,byte ptr [EAX + 0x15]
0075159C  41                        INC ECX
0075159D  3B CB                     CMP ECX,EBX
0075159F  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
007515A2  7C E9                     JL 0x0075158d
007515A4  33 C9                     XOR ECX,ECX
LAB_007515a6:
007515A6  33 DB                     XOR EBX,EBX
007515A8  83 CE FF                  OR ESI,0xffffffff
007515AB  8A 58 15                  MOV BL,byte ptr [EAX + 0x15]
007515AE  88 48 16                  MOV byte ptr [EAX + 0x16],CL
007515B1  2B F3                     SUB ESI,EBX
007515B3  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
007515B6  03 DE                     ADD EBX,ESI
007515B8  88 48 15                  MOV byte ptr [EAX + 0x15],CL
007515BB  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
007515BE  88 48 14                  MOV byte ptr [EAX + 0x14],CL
LAB_007515c1:
007515C1  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
007515C4  81 E2 FF 00 00 00         AND EDX,0xff
007515CA  5E                        POP ESI
007515CB  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
007515CE  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
007515D1  5B                        POP EBX
007515D2  5D                        POP EBP
007515D3  C2 08 00                  RET 0x8
