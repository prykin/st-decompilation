FUN_00660420:
00660420  55                        PUSH EBP
00660421  8B EC                     MOV EBP,ESP
00660423  83 EC 18                  SUB ESP,0x18
00660426  8B D1                     MOV EDX,ECX
00660428  57                        PUSH EDI
00660429  B9 06 00 00 00            MOV ECX,0x6
0066042E  33 C0                     XOR EAX,EAX
00660430  8D 7D E8                  LEA EDI,[EBP + -0x18]
00660433  89 82 A7 00 00 00         MOV dword ptr [EDX + 0xa7],EAX
00660439  F3 AB                     STOSD.REP ES:EDI
0066043B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0066043E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00660441  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00660444  66 8B 42 7D               MOV AX,word ptr [EDX + 0x7d]
00660448  66 3D FE FF               CMP AX,0xfffe
0066044C  5F                        POP EDI
0066044D  74 2D                     JZ 0x0066047c
0066044F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660455  85 C9                     TEST ECX,ECX
00660457  74 23                     JZ 0x0066047c
00660459  8A 52 24                  MOV DL,byte ptr [EDX + 0x24]
0066045C  50                        PUSH EAX
0066045D  52                        PUSH EDX
0066045E  E8 96 58 DA FF            CALL 0x00405cf9
00660463  85 C0                     TEST EAX,EAX
00660465  74 15                     JZ 0x0066047c
00660467  8B 10                     MOV EDX,dword ptr [EAX]
00660469  8D 4D E8                  LEA ECX,[EBP + -0x18]
0066046C  51                        PUSH ECX
0066046D  6A 02                     PUSH 0x2
0066046F  8B C8                     MOV ECX,EAX
00660471  FF 52 08                  CALL dword ptr [EDX + 0x8]
00660474  33 C0                     XOR EAX,EAX
00660476  8B E5                     MOV ESP,EBP
00660478  5D                        POP EBP
00660479  C2 04 00                  RET 0x4
LAB_0066047c:
0066047C  83 C8 FF                  OR EAX,0xffffffff
0066047F  8B E5                     MOV ESP,EBP
00660481  5D                        POP EBP
00660482  C2 04 00                  RET 0x4
