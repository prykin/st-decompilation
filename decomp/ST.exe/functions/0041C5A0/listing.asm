FUN_0041c5a0:
0041C5A0  56                        PUSH ESI
0041C5A1  8B F1                     MOV ESI,ECX
0041C5A3  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041C5A9  85 C9                     TEST ECX,ECX
0041C5AB  0F 84 B6 00 00 00         JZ 0x0041c667
0041C5B1  F6 86 D1 01 00 00 01      TEST byte ptr [ESI + 0x1d1],0x1
0041C5B8  0F 85 A9 00 00 00         JNZ 0x0041c667
0041C5BE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041C5C1  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
0041C5C7  6A FF                     PUSH -0x1
0041C5C9  50                        PUSH EAX
0041C5CA  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041C5CD  52                        PUSH EDX
0041C5CE  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041C5D2  50                        PUSH EAX
0041C5D3  52                        PUSH EDX
0041C5D4  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041C5D8  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C5DC  50                        PUSH EAX
0041C5DD  52                        PUSH EDX
0041C5DE  E8 0F 53 FE FF            CALL 0x004018f2
0041C5E3  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
0041C5E7  75 2B                     JNZ 0x0041c614
0041C5E9  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041C5EC  8B 8E 05 01 00 00         MOV ECX,dword ptr [ESI + 0x105]
0041C5F2  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0041C5F5  6A FF                     PUSH -0x1
0041C5F7  50                        PUSH EAX
0041C5F8  51                        PUSH ECX
0041C5F9  0F BF 46 5F               MOVSX EAX,word ptr [ESI + 0x5f]
0041C5FD  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
0041C601  52                        PUSH EDX
0041C602  50                        PUSH EAX
0041C603  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C607  51                        PUSH ECX
0041C608  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041C60E  52                        PUSH EDX
0041C60F  E8 04 5A FE FF            CALL 0x00402018
LAB_0041c614:
0041C614  8B 06                     MOV EAX,dword ptr [ESI]
0041C616  8B CE                     MOV ECX,ESI
0041C618  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0041C61B  83 C0 FB                  ADD EAX,-0x5
0041C61E  83 F8 1E                  CMP EAX,0x1e
0041C621  77 44                     JA 0x0041c667
0041C623  33 C9                     XOR ECX,ECX
0041C625  8A 88 78 C6 41 00         MOV CL,byte ptr [EAX + 0x41c678]
switchD_0041c62b::switchD:
0041C62B  FF 24 8D 6C C6 41 00      JMP dword ptr [ECX*0x4 + 0x41c66c]
switchD_0041c62b::caseD_b:
0041C632  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041C635  8B 86 0D 01 00 00         MOV EAX,dword ptr [ESI + 0x10d]
0041C63B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041C63E  52                        PUSH EDX
0041C63F  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041C643  50                        PUSH EAX
0041C644  51                        PUSH ECX
0041C645  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041C649  0F BF 4E 5B               MOVSX ECX,word ptr [ESI + 0x5b]
0041C64D  52                        PUSH EDX
0041C64E  50                        PUSH EAX
0041C64F  51                        PUSH ECX
0041C650  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041C656  E8 36 7C FE FF            CALL 0x00404291
0041C65B  5E                        POP ESI
0041C65C  C3                        RET
switchD_0041c62b::caseD_5:
0041C65D  8B 16                     MOV EDX,dword ptr [ESI]
0041C65F  8B CE                     MOV ECX,ESI
0041C661  FF 92 98 00 00 00         CALL dword ptr [EDX + 0x98]
switchD_0041c62b::caseD_6:
0041C667  5E                        POP ESI
0041C668  C3                        RET
