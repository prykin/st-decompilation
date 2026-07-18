FUN_006b8240:
006B8240  55                        PUSH EBP
006B8241  8B EC                     MOV EBP,ESP
006B8243  56                        PUSH ESI
006B8244  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8247  85 F6                     TEST ESI,ESI
006B8249  75 07                     JNZ 0x006b8252
006B824B  33 C0                     XOR EAX,EAX
006B824D  5E                        POP ESI
006B824E  5D                        POP EBP
006B824F  C2 08 00                  RET 0x8
LAB_006b8252:
006B8252  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B8255  33 C9                     XOR ECX,ECX
006B8257  85 D2                     TEST EDX,EDX
006B8259  7E 15                     JLE 0x006b8270
LAB_006b825b:
006B825B  8A 06                     MOV AL,byte ptr [ESI]
006B825D  46                        INC ESI
006B825E  84 C0                     TEST AL,AL
006B8260  74 0C                     JZ 0x006b826e
006B8262  41                        INC ECX
006B8263  3B CA                     CMP ECX,EDX
006B8265  7C F4                     JL 0x006b825b
006B8267  8B C6                     MOV EAX,ESI
006B8269  5E                        POP ESI
006B826A  5D                        POP EBP
006B826B  C2 08 00                  RET 0x8
LAB_006b826e:
006B826E  33 F6                     XOR ESI,ESI
LAB_006b8270:
006B8270  8B C6                     MOV EAX,ESI
006B8272  5E                        POP ESI
006B8273  5D                        POP EBP
006B8274  C2 08 00                  RET 0x8
