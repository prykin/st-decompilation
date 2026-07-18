FUN_006aced8:
006ACED8  55                        PUSH EBP
006ACED9  8B EC                     MOV EBP,ESP
006ACEDB  53                        PUSH EBX
006ACEDC  56                        PUSH ESI
006ACEDD  57                        PUSH EDI
006ACEDE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006ACEE1  2B 45 10                  SUB EAX,dword ptr [EBP + 0x10]
006ACEE4  F7 E8                     IMUL EAX
006ACEE6  8B DA                     MOV EBX,EDX
006ACEE8  8B C8                     MOV ECX,EAX
006ACEEA  0B D2                     OR EDX,EDX
006ACEEC  7C 15                     JL 0x006acf03
006ACEEE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ACEF1  2B 45 14                  SUB EAX,dword ptr [EBP + 0x14]
006ACEF4  F7 E8                     IMUL EAX
006ACEF6  03 C1                     ADD EAX,ECX
006ACEF8  13 D3                     ADC EDX,EBX
006ACEFA  7C 07                     JL 0x006acf03
006ACEFC  E8 6F FF FF FF            CALL 0x006ace70
006ACF01  EB 05                     JMP 0x006acf08
LAB_006acf03:
006ACF03  B8 FF FF FF 7F            MOV EAX,0x7fffffff
LAB_006acf08:
006ACF08  5F                        POP EDI
006ACF09  5E                        POP ESI
006ACF0A  5B                        POP EBX
006ACF0B  5D                        POP EBP
006ACF0C  C3                        RET
