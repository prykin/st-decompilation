FUN_0041d6c0:
0041D6C0  55                        PUSH EBP
0041D6C1  8B EC                     MOV EBP,ESP
0041D6C3  57                        PUSH EDI
0041D6C4  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041D6CA  85 FF                     TEST EDI,EDI
0041D6CC  74 66                     JZ 0x0041d734
0041D6CE  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0041D6D5  74 5D                     JZ 0x0041d734
0041D6D7  0F BF 51 5B               MOVSX EDX,word ptr [ECX + 0x5b]
0041D6DB  56                        PUSH ESI
0041D6DC  0F BF 71 5D               MOVSX ESI,word ptr [ECX + 0x5d]
0041D6E0  85 D2                     TEST EDX,EDX
0041D6E2  7C 3E                     JL 0x0041d722
0041D6E4  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0041D6E7  3B D0                     CMP EDX,EAX
0041D6E9  7D 37                     JGE 0x0041d722
0041D6EB  85 F6                     TEST ESI,ESI
0041D6ED  7C 33                     JL 0x0041d722
0041D6EF  3B 77 24                  CMP ESI,dword ptr [EDI + 0x24]
0041D6F2  7D 2E                     JGE 0x0041d722
0041D6F4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041D6F7  83 F9 08                  CMP ECX,0x8
0041D6FA  73 26                     JNC 0x0041d722
0041D6FC  8B 8C 8F D4 00 00 00      MOV ECX,dword ptr [EDI + ECX*0x4 + 0xd4]
0041D703  85 C9                     TEST ECX,ECX
0041D705  74 1B                     JZ 0x0041d722
0041D707  0F AF C6                  IMUL EAX,ESI
0041D70A  03 C1                     ADD EAX,ECX
0041D70C  33 C9                     XOR ECX,ECX
0041D70E  5E                        POP ESI
0041D70F  5F                        POP EDI
0041D710  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041D713  33 D2                     XOR EDX,EDX
0041D715  8B C1                     MOV EAX,ECX
0041D717  85 C0                     TEST EAX,EAX
0041D719  0F 9F C2                  SETG DL
0041D71C  8B C2                     MOV EAX,EDX
0041D71E  5D                        POP EBP
0041D71F  C2 04 00                  RET 0x4
LAB_0041d722:
0041D722  83 C8 FF                  OR EAX,0xffffffff
0041D725  33 D2                     XOR EDX,EDX
0041D727  85 C0                     TEST EAX,EAX
0041D729  0F 9F C2                  SETG DL
0041D72C  5E                        POP ESI
0041D72D  8B C2                     MOV EAX,EDX
0041D72F  5F                        POP EDI
0041D730  5D                        POP EBP
0041D731  C2 04 00                  RET 0x4
LAB_0041d734:
0041D734  33 C0                     XOR EAX,EAX
0041D736  5F                        POP EDI
0041D737  5D                        POP EBP
0041D738  C2 04 00                  RET 0x4
