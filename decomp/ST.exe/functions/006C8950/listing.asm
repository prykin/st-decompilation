FUN_006c8950:
006C8950  55                        PUSH EBP
006C8951  8B EC                     MOV EBP,ESP
006C8953  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
006C8956  3C 02                     CMP AL,0x2
006C8958  72 0C                     JC 0x006c8966
006C895A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C895D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C8960  33 C1                     XOR EAX,ECX
006C8962  5D                        POP EBP
006C8963  C2 0C 00                  RET 0xc
LAB_006c8966:
006C8966  3C 01                     CMP AL,0x1
006C8968  73 0E                     JNC 0x006c8978
006C896A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C896D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C8970  F7 D0                     NOT EAX
006C8972  23 C2                     AND EAX,EDX
006C8974  5D                        POP EBP
006C8975  C2 0C 00                  RET 0xc
LAB_006c8978:
006C8978  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C897B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C897E  0B C1                     OR EAX,ECX
006C8980  5D                        POP EBP
006C8981  C2 0C 00                  RET 0xc
