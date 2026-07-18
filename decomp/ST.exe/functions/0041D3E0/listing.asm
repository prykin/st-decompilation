FUN_0041d3e0:
0041D3E0  55                        PUSH EBP
0041D3E1  8B EC                     MOV EBP,ESP
0041D3E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041D3E6  56                        PUSH ESI
0041D3E7  8B F1                     MOV ESI,ECX
0041D3E9  89 86 11 01 00 00         MOV dword ptr [ESI + 0x111],EAX
0041D3EF  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D3F5  85 C9                     TEST ECX,ECX
0041D3F7  74 1F                     JZ 0x0041d418
0041D3F9  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D3FC  6A FF                     PUSH -0x1
0041D3FE  52                        PUSH EDX
0041D3FF  50                        PUSH EAX
0041D400  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041D404  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D407  50                        PUSH EAX
0041D408  52                        PUSH EDX
0041D409  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041D40D  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041D411  50                        PUSH EAX
0041D412  52                        PUSH EDX
0041D413  E8 9F 48 FE FF            CALL 0x00401cb7
LAB_0041d418:
0041D418  8B 06                     MOV EAX,dword ptr [ESI]
0041D41A  8B CE                     MOV ECX,ESI
0041D41C  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041D41F  83 F8 01                  CMP EAX,0x1
0041D422  0F 85 81 00 00 00         JNZ 0x0041d4a9
0041D428  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D42B  33 C9                     XOR ECX,ECX
0041D42D  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041D433  3B C1                     CMP EAX,ECX
0041D435  75 72                     JNZ 0x0041d4a9
0041D437  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D43A  33 C0                     XOR EAX,EAX
0041D43C  DB 86 09 01 00 00         FILD dword ptr [ESI + 0x109]
0041D442  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041D446  C1 EA 10                  SHR EDX,0x10
0041D449  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D44F  81 E2 FF 00 00 00         AND EDX,0xff
0041D455  80 CE 03                  OR DH,0x3
0041D458  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041D45E  C1 E2 10                  SHL EDX,0x10
0041D461  0B D0                     OR EDX,EAX
0041D463  52                        PUSH EDX
0041D464  6A 22                     PUSH 0x22
0041D466  51                        PUSH ECX
0041D467  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0041D46B  D9 1C 24                  FSTP float ptr [ESP]
0041D46E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041D471  51                        PUSH ECX
0041D472  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041D475  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0041D479  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D47F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041D482  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041D488  D9 1C 24                  FSTP float ptr [ESP]
0041D48B  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041D48E  51                        PUSH ECX
0041D48F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041D495  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D49B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041D4A1  D9 1C 24                  FSTP float ptr [ESP]
0041D4A4  E8 67 92 2C 00            CALL 0x006e6710
LAB_0041d4a9:
0041D4A9  5E                        POP ESI
0041D4AA  5D                        POP EBP
0041D4AB  C2 04 00                  RET 0x4
