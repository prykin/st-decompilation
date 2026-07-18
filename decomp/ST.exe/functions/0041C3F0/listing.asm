FUN_0041c3f0:
0041C3F0  55                        PUSH EBP
0041C3F1  8B EC                     MOV EBP,ESP
0041C3F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041C3F6  56                        PUSH ESI
0041C3F7  85 C0                     TEST EAX,EAX
0041C3F9  8B F1                     MOV ESI,ECX
0041C3FB  0F 8C 00 01 00 00         JL 0x0041c501
0041C401  89 86 01 01 00 00         MOV dword ptr [ESI + 0x101],EAX
0041C407  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041C40D  85 C9                     TEST ECX,ECX
0041C40F  0F 84 EC 00 00 00         JZ 0x0041c501
0041C415  F6 86 D1 01 00 00 01      TEST byte ptr [ESI + 0x1d1],0x1
0041C41C  0F 85 DF 00 00 00         JNZ 0x0041c501
0041C422  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041C425  6A FF                     PUSH -0x1
0041C427  52                        PUSH EDX
0041C428  50                        PUSH EAX
0041C429  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041C42D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041C430  50                        PUSH EAX
0041C431  52                        PUSH EDX
0041C432  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041C436  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C43A  50                        PUSH EAX
0041C43B  52                        PUSH EDX
0041C43C  E8 4B 74 FE FF            CALL 0x0040388c
0041C441  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
0041C445  75 5C                     JNZ 0x0041c4a3
0041C447  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041C44A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041C450  6A 0A                     PUSH 0xa
0041C452  50                        PUSH EAX
0041C453  E8 13 54 FE FF            CALL 0x0040186b
0041C458  85 C0                     TEST EAX,EAX
0041C45A  7E 10                     JLE 0x0041c46c
0041C45C  8B 8E 01 01 00 00         MOV ECX,dword ptr [ESI + 0x101]
0041C462  D1 E1                     SHL ECX,0x1
0041C464  89 8E 05 01 00 00         MOV dword ptr [ESI + 0x105],ECX
0041C46A  EB 0C                     JMP 0x0041c478
LAB_0041c46c:
0041C46C  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
0041C472  89 96 05 01 00 00         MOV dword ptr [ESI + 0x105],EDX
LAB_0041c478:
0041C478  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041C47B  8B 8E 05 01 00 00         MOV ECX,dword ptr [ESI + 0x105]
0041C481  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0041C484  6A FF                     PUSH -0x1
0041C486  50                        PUSH EAX
0041C487  51                        PUSH ECX
0041C488  0F BF 46 5F               MOVSX EAX,word ptr [ESI + 0x5f]
0041C48C  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
0041C490  52                        PUSH EDX
0041C491  50                        PUSH EAX
0041C492  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C496  51                        PUSH ECX
0041C497  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041C49D  52                        PUSH EDX
0041C49E  E8 87 67 FE FF            CALL 0x00402c2a
LAB_0041c4a3:
0041C4A3  8B 06                     MOV EAX,dword ptr [ESI]
0041C4A5  8B CE                     MOV ECX,ESI
0041C4A7  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0041C4AA  83 C0 FB                  ADD EAX,-0x5
0041C4AD  83 F8 1E                  CMP EAX,0x1e
0041C4B0  77 4F                     JA 0x0041c501
0041C4B2  33 C9                     XOR ECX,ECX
0041C4B4  8A 88 14 C5 41 00         MOV CL,byte ptr [EAX + 0x41c514]
switchD_0041c4ba::switchD:
0041C4BA  FF 24 8D 08 C5 41 00      JMP dword ptr [ECX*0x4 + 0x41c508]
switchD_0041c4ba::caseD_b:
0041C4C1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041C4C4  8B 86 01 01 00 00         MOV EAX,dword ptr [ESI + 0x101]
0041C4CA  0F BF 4E 5F               MOVSX ECX,word ptr [ESI + 0x5f]
0041C4CE  6A FF                     PUSH -0x1
0041C4D0  52                        PUSH EDX
0041C4D1  0F BF 56 5D               MOVSX EDX,word ptr [ESI + 0x5d]
0041C4D5  89 86 0D 01 00 00         MOV dword ptr [ESI + 0x10d],EAX
0041C4DB  50                        PUSH EAX
0041C4DC  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041C4DF  50                        PUSH EAX
0041C4E0  51                        PUSH ECX
0041C4E1  0F BF 46 5B               MOVSX EAX,word ptr [ESI + 0x5b]
0041C4E5  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041C4EB  52                        PUSH EDX
0041C4EC  50                        PUSH EAX
0041C4ED  E8 2D 4F FE FF            CALL 0x0040141f
0041C4F2  5E                        POP ESI
0041C4F3  5D                        POP EBP
0041C4F4  C2 04 00                  RET 0x4
switchD_0041c4ba::caseD_5:
0041C4F7  8B 16                     MOV EDX,dword ptr [ESI]
0041C4F9  8B CE                     MOV ECX,ESI
0041C4FB  FF 92 94 00 00 00         CALL dword ptr [EDX + 0x94]
switchD_0041c4ba::caseD_6:
0041C501  5E                        POP ESI
0041C502  5D                        POP EBP
0041C503  C2 04 00                  RET 0x4
