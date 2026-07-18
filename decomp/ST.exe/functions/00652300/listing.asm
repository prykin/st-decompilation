FUN_00652300:
00652300  55                        PUSH EBP
00652301  8B EC                     MOV EBP,ESP
00652303  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652306  53                        PUSH EBX
00652307  56                        PUSH ESI
00652308  33 F6                     XOR ESI,ESI
0065230A  33 C9                     XOR ECX,ECX
0065230C  BB 08 00 00 00            MOV EBX,0x8
LAB_00652311:
00652311  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00652318  75 28                     JNZ 0x00652342
0065231A  41                        INC ECX
0065231B  83 F9 04                  CMP ECX,0x4
0065231E  7C F1                     JL 0x00652311
00652320  66 8B 08                  MOV CX,word ptr [EAX]
00652323  83 CA FF                  OR EDX,0xffffffff
00652326  66 83 F9 05               CMP CX,0x5
0065232A  7D 0E                     JGE 0x0065233a
0065232C  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
LAB_0065232f:
0065232F  66 83 F9 06               CMP CX,0x6
00652333  7D 13                     JGE 0x00652348
00652335  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
00652338  EB 1C                     JMP 0x00652356
LAB_0065233a:
0065233A  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
00652340  74 ED                     JZ 0x0065232f
LAB_00652342:
00652342  5E                        POP ESI
00652343  33 C0                     XOR EAX,EAX
00652345  5B                        POP EBX
00652346  5D                        POP EBP
00652347  C3                        RET
LAB_00652348:
00652348  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0065234E  74 06                     JZ 0x00652356
00652350  5E                        POP ESI
00652351  33 C0                     XOR EAX,EAX
00652353  5B                        POP EBX
00652354  5D                        POP EBP
00652355  C3                        RET
LAB_00652356:
00652356  66 83 F9 07               CMP CX,0x7
0065235A  7D 0D                     JGE 0x00652369
0065235C  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_0065235f:
0065235F  66 3B CB                  CMP CX,BX
00652362  7D 13                     JGE 0x00652377
00652364  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
00652367  EB 1C                     JMP 0x00652385
LAB_00652369:
00652369  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0065236F  74 EE                     JZ 0x0065235f
00652371  5E                        POP ESI
00652372  33 C0                     XOR EAX,EAX
00652374  5B                        POP EBX
00652375  5D                        POP EBP
00652376  C3                        RET
LAB_00652377:
00652377  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
0065237D  74 06                     JZ 0x00652385
0065237F  5E                        POP ESI
00652380  33 C0                     XOR EAX,EAX
00652382  5B                        POP EBX
00652383  5D                        POP EBP
00652384  C3                        RET
LAB_00652385:
00652385  66 83 F9 09               CMP CX,0x9
00652389  7D 0E                     JGE 0x00652399
0065238B  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
LAB_0065238e:
0065238E  66 83 F9 0A               CMP CX,0xa
00652392  7D 14                     JGE 0x006523a8
00652394  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
00652397  EB 1D                     JMP 0x006523b6
LAB_00652399:
00652399  80 B8 D8 00 00 00 0A      CMP byte ptr [EAX + 0xd8],0xa
006523A0  74 EC                     JZ 0x0065238e
006523A2  5E                        POP ESI
006523A3  33 C0                     XOR EAX,EAX
006523A5  5B                        POP EBX
006523A6  5D                        POP EBP
006523A7  C3                        RET
LAB_006523a8:
006523A8  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
006523AE  74 06                     JZ 0x006523b6
006523B0  5E                        POP ESI
006523B1  33 C0                     XOR EAX,EAX
006523B3  5B                        POP EBX
006523B4  5D                        POP EBP
006523B5  C3                        RET
LAB_006523b6:
006523B6  66 83 F9 0B               CMP CX,0xb
006523BA  7D 1C                     JGE 0x006523d8
006523BC  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
LAB_006523bf:
006523BF  66 83 F9 0C               CMP CX,0xc
006523C3  7D 21                     JGE 0x006523e6
006523C5  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006523C8  33 C9                     XOR ECX,ECX
006523CA  3B D6                     CMP EDX,ESI
006523CC  89 70 34                  MOV dword ptr [EAX + 0x34],ESI
006523CF  0F 9D C1                  SETGE CL
006523D2  5E                        POP ESI
006523D3  8B C1                     MOV EAX,ECX
006523D5  5B                        POP EBX
006523D6  5D                        POP EBP
006523D7  C3                        RET
LAB_006523d8:
006523D8  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
006523DE  74 DF                     JZ 0x006523bf
006523E0  5E                        POP ESI
006523E1  33 C0                     XOR EAX,EAX
006523E3  5B                        POP EBX
006523E4  5D                        POP EBP
006523E5  C3                        RET
LAB_006523e6:
006523E6  38 98 DB 00 00 00         CMP byte ptr [EAX + 0xdb],BL
006523EC  74 06                     JZ 0x006523f4
006523EE  5E                        POP ESI
006523EF  33 C0                     XOR EAX,EAX
006523F1  5B                        POP EBX
006523F2  5D                        POP EBP
006523F3  C3                        RET
LAB_006523f4:
006523F4  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006523F7  33 C9                     XOR ECX,ECX
006523F9  3B D6                     CMP EDX,ESI
006523FB  5E                        POP ESI
006523FC  0F 9D C1                  SETGE CL
006523FF  8B C1                     MOV EAX,ECX
00652401  5B                        POP EBX
00652402  5D                        POP EBP
00652403  C3                        RET
