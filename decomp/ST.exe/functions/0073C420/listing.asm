FUN_0073c420:
0073C420  55                        PUSH EBP
0073C421  8B EC                     MOV EBP,ESP
0073C423  51                        PUSH ECX
0073C424  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073C427  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0073C42A  83 E9 01                  SUB ECX,0x1
0073C42D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073C430  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0073C433  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073C436  83 78 04 00               CMP dword ptr [EAX + 0x4],0x0
0073C43A  7C 26                     JL 0x0073c462
0073C43C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C43F  8B 11                     MOV EDX,dword ptr [ECX]
0073C441  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0073C444  88 02                     MOV byte ptr [EDX],AL
0073C446  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0073C44A  81 E1 FF 00 00 00         AND ECX,0xff
0073C450  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073C453  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073C456  8B 02                     MOV EAX,dword ptr [EDX]
0073C458  83 C0 01                  ADD EAX,0x1
0073C45B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C45E  89 01                     MOV dword ptr [ECX],EAX
0073C460  EB 13                     JMP 0x0073c475
LAB_0073c462:
0073C462  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073C465  52                        PUSH EDX
0073C466  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C469  50                        PUSH EAX
0073C46A  E8 01 F0 FF FF            CALL 0x0073b470
0073C46F  83 C4 08                  ADD ESP,0x8
0073C472  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073c475:
0073C475  83 7D FC FF               CMP dword ptr [EBP + -0x4],-0x1
0073C479  75 0B                     JNZ 0x0073c486
0073C47B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073C47E  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
0073C484  EB 0D                     JMP 0x0073c493
LAB_0073c486:
0073C486  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073C489  8B 02                     MOV EAX,dword ptr [EDX]
0073C48B  83 C0 01                  ADD EAX,0x1
0073C48E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073C491  89 01                     MOV dword ptr [ECX],EAX
LAB_0073c493:
0073C493  8B E5                     MOV ESP,EBP
0073C495  5D                        POP EBP
0073C496  C3                        RET
