FUN_006acf0d:
006ACF0D  55                        PUSH EBP
006ACF0E  8B EC                     MOV EBP,ESP
006ACF10  53                        PUSH EBX
006ACF11  56                        PUSH ESI
006ACF12  57                        PUSH EDI
006ACF13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006ACF16  2B 45 14                  SUB EAX,dword ptr [EBP + 0x14]
006ACF19  F7 E8                     IMUL EAX
006ACF1B  8B DA                     MOV EBX,EDX
006ACF1D  8B C8                     MOV ECX,EAX
006ACF1F  0B D2                     OR EDX,EDX
006ACF21  7C 23                     JL 0x006acf46
006ACF23  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ACF26  2B 45 18                  SUB EAX,dword ptr [EBP + 0x18]
006ACF29  F7 E8                     IMUL EAX
006ACF2B  03 C8                     ADD ECX,EAX
006ACF2D  13 DA                     ADC EBX,EDX
006ACF2F  7C 15                     JL 0x006acf46
006ACF31  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ACF34  2B 45 1C                  SUB EAX,dword ptr [EBP + 0x1c]
006ACF37  F7 E8                     IMUL EAX
006ACF39  03 C1                     ADD EAX,ECX
006ACF3B  13 D3                     ADC EDX,EBX
006ACF3D  7C 07                     JL 0x006acf46
006ACF3F  E8 2C FF FF FF            CALL 0x006ace70
006ACF44  EB 05                     JMP 0x006acf4b
LAB_006acf46:
006ACF46  B8 FF FF FF 7F            MOV EAX,0x7fffffff
LAB_006acf4b:
006ACF4B  5F                        POP EDI
006ACF4C  5E                        POP ESI
006ACF4D  5B                        POP EBX
006ACF4E  5D                        POP EBP
006ACF4F  C3                        RET
