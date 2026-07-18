FUN_0041d350:
0041D350  55                        PUSH EBP
0041D351  8B EC                     MOV EBP,ESP
0041D353  57                        PUSH EDI
0041D354  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041D35A  85 FF                     TEST EDI,EDI
0041D35C  74 5A                     JZ 0x0041d3b8
0041D35E  0F BF 51 5B               MOVSX EDX,word ptr [ECX + 0x5b]
0041D362  56                        PUSH ESI
0041D363  0F BF 71 5D               MOVSX ESI,word ptr [ECX + 0x5d]
0041D367  85 D2                     TEST EDX,EDX
0041D369  7C 3B                     JL 0x0041d3a6
0041D36B  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0041D36E  3B D0                     CMP EDX,EAX
0041D370  7D 34                     JGE 0x0041d3a6
0041D372  85 F6                     TEST ESI,ESI
0041D374  7C 30                     JL 0x0041d3a6
0041D376  3B 77 24                  CMP ESI,dword ptr [EDI + 0x24]
0041D379  7D 2B                     JGE 0x0041d3a6
0041D37B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041D37E  83 F9 08                  CMP ECX,0x8
0041D381  73 23                     JNC 0x0041d3a6
0041D383  8B 4C 8F 74               MOV ECX,dword ptr [EDI + ECX*0x4 + 0x74]
0041D387  85 C9                     TEST ECX,ECX
0041D389  74 1B                     JZ 0x0041d3a6
0041D38B  0F AF C6                  IMUL EAX,ESI
0041D38E  03 C1                     ADD EAX,ECX
0041D390  33 C9                     XOR ECX,ECX
0041D392  5E                        POP ESI
0041D393  5F                        POP EDI
0041D394  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041D397  33 D2                     XOR EDX,EDX
0041D399  8B C1                     MOV EAX,ECX
0041D39B  85 C0                     TEST EAX,EAX
0041D39D  0F 9F C2                  SETG DL
0041D3A0  8B C2                     MOV EAX,EDX
0041D3A2  5D                        POP EBP
0041D3A3  C2 04 00                  RET 0x4
LAB_0041d3a6:
0041D3A6  83 C8 FF                  OR EAX,0xffffffff
0041D3A9  33 D2                     XOR EDX,EDX
0041D3AB  85 C0                     TEST EAX,EAX
0041D3AD  0F 9F C2                  SETG DL
0041D3B0  5E                        POP ESI
0041D3B1  8B C2                     MOV EAX,EDX
0041D3B3  5F                        POP EDI
0041D3B4  5D                        POP EBP
0041D3B5  C2 04 00                  RET 0x4
LAB_0041d3b8:
0041D3B8  33 C0                     XOR EAX,EAX
0041D3BA  5F                        POP EDI
0041D3BB  5D                        POP EBP
0041D3BC  C2 04 00                  RET 0x4
