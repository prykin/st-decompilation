FUN_007515e0:
007515E0  55                        PUSH EBP
007515E1  8B EC                     MOV EBP,ESP
007515E3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007515E6  53                        PUSH EBX
007515E7  48                        DEC EAX
007515E8  56                        PUSH ESI
007515E9  57                        PUSH EDI
007515EA  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007515ED  0F 88 EC 00 00 00         JS 0x007516df
007515F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007515F6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007515F9  33 D2                     XOR EDX,EDX
LAB_007515fb:
007515FB  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
007515FE  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
00751601  8A 0F                     MOV CL,byte ptr [EDI]
00751603  C1 E6 08                  SHL ESI,0x8
00751606  0B F3                     OR ESI,EBX
00751608  8B 18                     MOV EBX,dword ptr [EAX]
0075160A  3A 0C 1E                  CMP CL,byte ptr [ESI + EBX*0x1]
0075160D  75 0E                     JNZ 0x0075161d
0075160F  33 C9                     XOR ECX,ECX
00751611  B3 01                     MOV BL,0x1
00751613  8A 48 14                  MOV CL,byte ptr [EAX + 0x14]
00751616  D2 E3                     SHL BL,CL
00751618  08 58 16                  OR byte ptr [EAX + 0x16],BL
0075161B  EB 23                     JMP 0x00751640
LAB_0075161d:
0075161D  33 DB                     XOR EBX,EBX
0075161F  8A 58 15                  MOV BL,byte ptr [EAX + 0x15]
00751622  88 4C 03 17               MOV byte ptr [EBX + EAX*0x1 + 0x17],CL
00751626  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00751629  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0075162C  FE C1                     INC CL
0075162E  88 48 15                  MOV byte ptr [EAX + 0x15],CL
00751631  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00751634  8A 1F                     MOV BL,byte ptr [EDI]
00751636  C1 E1 08                  SHL ECX,0x8
00751639  0B CE                     OR ECX,ESI
0075163B  8B 30                     MOV ESI,dword ptr [EAX]
0075163D  88 1C 31                  MOV byte ptr [ECX + ESI*0x1],BL
LAB_00751640:
00751640  8A 58 14                  MOV BL,byte ptr [EAX + 0x14]
00751643  FE C3                     INC BL
00751645  8A CB                     MOV CL,BL
00751647  88 58 14                  MOV byte ptr [EAX + 0x14],BL
0075164A  80 F9 08                  CMP CL,0x8
0075164D  72 59                     JC 0x007516a8
0075164F  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00751652  33 C9                     XOR ECX,ECX
00751654  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00751657  41                        INC ECX
00751658  3B F1                     CMP ESI,ECX
0075165A  7C 6E                     JL 0x007516ca
0075165C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0075165F  8A 58 16                  MOV BL,byte ptr [EAX + 0x16]
00751662  88 19                     MOV byte ptr [ECX],BL
00751664  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00751667  8A 58 15                  MOV BL,byte ptr [EAX + 0x15]
0075166A  41                        INC ECX
0075166B  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0075166E  8B F1                     MOV ESI,ECX
00751670  33 C9                     XOR ECX,ECX
00751672  3A DA                     CMP BL,DL
00751674  76 17                     JBE 0x0075168d
LAB_00751676:
00751676  8A 5C 08 17               MOV BL,byte ptr [EAX + ECX*0x1 + 0x17]
0075167A  88 1E                     MOV byte ptr [ESI],BL
0075167C  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0075167F  33 DB                     XOR EBX,EBX
00751681  46                        INC ESI
00751682  8A 58 15                  MOV BL,byte ptr [EAX + 0x15]
00751685  41                        INC ECX
00751686  3B CB                     CMP ECX,EBX
00751688  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0075168B  7C E9                     JL 0x00751676
LAB_0075168d:
0075168D  33 C9                     XOR ECX,ECX
0075168F  83 CE FF                  OR ESI,0xffffffff
00751692  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00751695  88 50 16                  MOV byte ptr [EAX + 0x16],DL
00751698  2B F1                     SUB ESI,ECX
0075169A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0075169D  03 CE                     ADD ECX,ESI
0075169F  88 50 15                  MOV byte ptr [EAX + 0x15],DL
007516A2  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
007516A5  88 50 14                  MOV byte ptr [EAX + 0x14],DL
LAB_007516a8:
007516A8  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
007516AB  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
007516AE  33 C9                     XOR ECX,ECX
007516B0  8A 0F                     MOV CL,byte ptr [EDI]
007516B2  47                        INC EDI
007516B3  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
007516B6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007516B9  49                        DEC ECX
007516BA  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
007516BD  0F 89 38 FF FF FF         JNS 0x007515fb
007516C3  5F                        POP EDI
007516C4  5E                        POP ESI
007516C5  5B                        POP EBX
007516C6  5D                        POP EBP
007516C7  C2 0C 00                  RET 0xc
LAB_007516ca:
007516CA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007516D0  6A 52                     PUSH 0x52
007516D2  68 00 2B 7F 00            PUSH 0x7f2b00
007516D7  52                        PUSH EDX
007516D8  6A CD                     PUSH -0x33
007516DA  E8 61 47 F5 FF            CALL 0x006a5e40
LAB_007516df:
007516DF  5F                        POP EDI
007516E0  5E                        POP ESI
007516E1  5B                        POP EBX
007516E2  5D                        POP EBP
007516E3  C2 0C 00                  RET 0xc
