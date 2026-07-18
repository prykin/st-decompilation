FUN_0041d620:
0041D620  55                        PUSH EBP
0041D621  8B EC                     MOV EBP,ESP
0041D623  57                        PUSH EDI
0041D624  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041D62A  85 FF                     TEST EDI,EDI
0041D62C  74 66                     JZ 0x0041d694
0041D62E  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0041D635  74 5D                     JZ 0x0041d694
0041D637  0F BF 51 5B               MOVSX EDX,word ptr [ECX + 0x5b]
0041D63B  56                        PUSH ESI
0041D63C  0F BF 71 5D               MOVSX ESI,word ptr [ECX + 0x5d]
0041D640  85 D2                     TEST EDX,EDX
0041D642  7C 3E                     JL 0x0041d682
0041D644  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0041D647  3B D0                     CMP EDX,EAX
0041D649  7D 37                     JGE 0x0041d682
0041D64B  85 F6                     TEST ESI,ESI
0041D64D  7C 33                     JL 0x0041d682
0041D64F  3B 77 24                  CMP ESI,dword ptr [EDI + 0x24]
0041D652  7D 2E                     JGE 0x0041d682
0041D654  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041D657  83 F9 08                  CMP ECX,0x8
0041D65A  73 26                     JNC 0x0041d682
0041D65C  8B 8C 8F B4 00 00 00      MOV ECX,dword ptr [EDI + ECX*0x4 + 0xb4]
0041D663  85 C9                     TEST ECX,ECX
0041D665  74 1B                     JZ 0x0041d682
0041D667  0F AF C6                  IMUL EAX,ESI
0041D66A  03 C1                     ADD EAX,ECX
0041D66C  33 C9                     XOR ECX,ECX
0041D66E  5E                        POP ESI
0041D66F  5F                        POP EDI
0041D670  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041D673  33 D2                     XOR EDX,EDX
0041D675  8B C1                     MOV EAX,ECX
0041D677  85 C0                     TEST EAX,EAX
0041D679  0F 9F C2                  SETG DL
0041D67C  8B C2                     MOV EAX,EDX
0041D67E  5D                        POP EBP
0041D67F  C2 04 00                  RET 0x4
LAB_0041d682:
0041D682  83 C8 FF                  OR EAX,0xffffffff
0041D685  33 D2                     XOR EDX,EDX
0041D687  85 C0                     TEST EAX,EAX
0041D689  0F 9F C2                  SETG DL
0041D68C  5E                        POP ESI
0041D68D  8B C2                     MOV EAX,EDX
0041D68F  5F                        POP EDI
0041D690  5D                        POP EBP
0041D691  C2 04 00                  RET 0x4
LAB_0041d694:
0041D694  33 C0                     XOR EAX,EAX
0041D696  5F                        POP EDI
0041D697  5D                        POP EBP
0041D698  C2 04 00                  RET 0x4
