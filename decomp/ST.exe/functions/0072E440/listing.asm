__alldiv:
0072E440  57                        PUSH EDI
0072E441  56                        PUSH ESI
0072E442  53                        PUSH EBX
0072E443  33 FF                     XOR EDI,EDI
0072E445  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0072E449  0B C0                     OR EAX,EAX
0072E44B  7D 14                     JGE 0x0072e461
0072E44D  47                        INC EDI
0072E44E  8B 54 24 10               MOV EDX,dword ptr [ESP + 0x10]
0072E452  F7 D8                     NEG EAX
0072E454  F7 DA                     NEG EDX
0072E456  83 D8 00                  SBB EAX,0x0
0072E459  89 44 24 14               MOV dword ptr [ESP + 0x14],EAX
0072E45D  89 54 24 10               MOV dword ptr [ESP + 0x10],EDX
LAB_0072e461:
0072E461  8B 44 24 1C               MOV EAX,dword ptr [ESP + 0x1c]
0072E465  0B C0                     OR EAX,EAX
0072E467  7D 14                     JGE 0x0072e47d
0072E469  47                        INC EDI
0072E46A  8B 54 24 18               MOV EDX,dword ptr [ESP + 0x18]
0072E46E  F7 D8                     NEG EAX
0072E470  F7 DA                     NEG EDX
0072E472  83 D8 00                  SBB EAX,0x0
0072E475  89 44 24 1C               MOV dword ptr [ESP + 0x1c],EAX
0072E479  89 54 24 18               MOV dword ptr [ESP + 0x18],EDX
LAB_0072e47d:
0072E47D  0B C0                     OR EAX,EAX
0072E47F  75 18                     JNZ 0x0072e499
0072E481  8B 4C 24 18               MOV ECX,dword ptr [ESP + 0x18]
0072E485  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0072E489  33 D2                     XOR EDX,EDX
0072E48B  F7 F1                     DIV ECX
0072E48D  8B D8                     MOV EBX,EAX
0072E48F  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072E493  F7 F1                     DIV ECX
0072E495  8B D3                     MOV EDX,EBX
0072E497  EB 41                     JMP 0x0072e4da
LAB_0072e499:
0072E499  8B D8                     MOV EBX,EAX
0072E49B  8B 4C 24 18               MOV ECX,dword ptr [ESP + 0x18]
0072E49F  8B 54 24 14               MOV EDX,dword ptr [ESP + 0x14]
0072E4A3  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
LAB_0072e4a7:
0072E4A7  D1 EB                     SHR EBX,0x1
0072E4A9  D1 D9                     RCR ECX,0x1
0072E4AB  D1 EA                     SHR EDX,0x1
0072E4AD  D1 D8                     RCR EAX,0x1
0072E4AF  0B DB                     OR EBX,EBX
0072E4B1  75 F4                     JNZ 0x0072e4a7
0072E4B3  F7 F1                     DIV ECX
0072E4B5  8B F0                     MOV ESI,EAX
0072E4B7  F7 64 24 1C               MUL dword ptr [ESP + 0x1c]
0072E4BB  8B C8                     MOV ECX,EAX
0072E4BD  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0072E4C1  F7 E6                     MUL ESI
0072E4C3  03 D1                     ADD EDX,ECX
0072E4C5  72 0E                     JC 0x0072e4d5
0072E4C7  3B 54 24 14               CMP EDX,dword ptr [ESP + 0x14]
0072E4CB  77 08                     JA 0x0072e4d5
0072E4CD  72 07                     JC 0x0072e4d6
0072E4CF  3B 44 24 10               CMP EAX,dword ptr [ESP + 0x10]
0072E4D3  76 01                     JBE 0x0072e4d6
LAB_0072e4d5:
0072E4D5  4E                        DEC ESI
LAB_0072e4d6:
0072E4D6  33 D2                     XOR EDX,EDX
0072E4D8  8B C6                     MOV EAX,ESI
LAB_0072e4da:
0072E4DA  4F                        DEC EDI
0072E4DB  75 07                     JNZ 0x0072e4e4
0072E4DD  F7 DA                     NEG EDX
0072E4DF  F7 D8                     NEG EAX
0072E4E1  83 DA 00                  SBB EDX,0x0
LAB_0072e4e4:
0072E4E4  5B                        POP EBX
0072E4E5  5E                        POP ESI
0072E4E6  5F                        POP EDI
0072E4E7  C2 10 00                  RET 0x10
