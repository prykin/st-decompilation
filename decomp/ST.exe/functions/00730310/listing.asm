FUN_00730310:
00730310  55                        PUSH EBP
00730311  8B EC                     MOV EBP,ESP
00730313  83 EC 18                  SUB ESP,0x18
00730316  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730319  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0073031c:
0073031C  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00730323  7E 17                     JLE 0x0073033c
00730325  6A 08                     PUSH 0x8
00730327  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073032A  33 D2                     XOR EDX,EDX
0073032C  8A 11                     MOV DL,byte ptr [ECX]
0073032E  52                        PUSH EDX
0073032F  E8 DC 02 00 00            CALL 0x00730610
00730334  83 C4 08                  ADD ESP,0x8
00730337  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0073033A  EB 19                     JMP 0x00730355
LAB_0073033c:
0073033C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073033F  33 C9                     XOR ECX,ECX
00730341  8A 08                     MOV CL,byte ptr [EAX]
00730343  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
00730349  33 C0                     XOR EAX,EAX
0073034B  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
0073034F  83 E0 08                  AND EAX,0x8
00730352  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00730355:
00730355  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
00730359  74 0B                     JZ 0x00730366
0073035B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073035E  83 C1 01                  ADD ECX,0x1
00730361  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00730364  EB B6                     JMP 0x0073031c
LAB_00730366:
00730366  6A 00                     PUSH 0x0
00730368  6A 00                     PUSH 0x0
0073036A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073036D  52                        PUSH EDX
0073036E  E8 9D 68 00 00            CALL 0x00736c10
00730373  83 C4 04                  ADD ESP,0x4
00730376  50                        PUSH EAX
00730377  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073037A  50                        PUSH EAX
0073037B  E8 00 C4 00 00            CALL 0x0073c780
00730380  83 C4 10                  ADD ESP,0x10
00730383  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00730386  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073038A  74 0E                     JZ 0x0073039a
0073038C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073038F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00730392  03 51 04                  ADD EDX,dword ptr [ECX + 0x4]
00730395  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00730398  89 10                     MOV dword ptr [EAX],EDX
LAB_0073039a:
0073039A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073039D  8B 11                     MOV EDX,dword ptr [ECX]
0073039F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007303A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007303A5  25 40 02 00 00            AND EAX,0x240
007303AA  85 C0                     TEST EAX,EAX
007303AC  74 1E                     JZ 0x007303cc
007303AE  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
007303B5  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
007303BC  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007303C0  74 08                     JZ 0x007303ca
007303C2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007303C5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007303C8  89 11                     MOV dword ptr [ECX],EDX
LAB_007303ca:
007303CA  EB 77                     JMP 0x00730443
LAB_007303cc:
007303CC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007303CF  25 81 00 00 00            AND EAX,0x81
007303D4  85 C0                     TEST EAX,EAX
007303D6  74 35                     JZ 0x0073040d
007303D8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007303DB  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007303DE  83 FA 2D                  CMP EDX,0x2d
007303E1  75 0D                     JNZ 0x007303f0
007303E3  DD 05 60 1F 7F 00         FLD double ptr [0x007f1f60]
007303E9  D9 E0                     FCHS
007303EB  DD 5D EC                  FSTP double ptr [EBP + -0x14]
007303EE  EB 11                     JMP 0x00730401
LAB_007303f0:
007303F0  A1 60 1F 7F 00            MOV EAX,[0x007f1f60]
007303F5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007303F8  8B 0D 64 1F 7F 00         MOV ECX,dword ptr [0x007f1f64]
007303FE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00730401:
00730401  C7 05 48 71 85 00 22 00 00 00  MOV dword ptr [0x00857148],0x22
0073040B  EB 36                     JMP 0x00730443
LAB_0073040d:
0073040D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00730410  81 E2 00 01 00 00         AND EDX,0x100
00730416  85 D2                     TEST EDX,EDX
00730418  74 1A                     JZ 0x00730434
0073041A  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00730421  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00730428  C7 05 48 71 85 00 22 00 00 00  MOV dword ptr [0x00857148],0x22
00730432  EB 0F                     JMP 0x00730443
LAB_00730434:
00730434  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00730437  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073043A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0073043D  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00730440  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00730443:
00730443  DD 45 EC                  FLD double ptr [EBP + -0x14]
00730446  8B E5                     MOV ESP,EBP
00730448  5D                        POP EBP
00730449  C3                        RET
