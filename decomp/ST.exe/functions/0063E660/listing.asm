FUN_0063e660:
0063E660  55                        PUSH EBP
0063E661  8B EC                     MOV EBP,ESP
0063E663  51                        PUSH ECX
0063E664  53                        PUSH EBX
0063E665  8B D9                     MOV EBX,ECX
0063E667  8B 83 36 03 00 00         MOV EAX,dword ptr [EBX + 0x336]
0063E66D  85 C0                     TEST EAX,EAX
0063E66F  74 62                     JZ 0x0063e6d3
0063E671  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0063E674  57                        PUSH EDI
0063E675  33 FF                     XOR EDI,EDI
0063E677  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063E67A  85 C9                     TEST ECX,ECX
0063E67C  7E 3E                     JLE 0x0063e6bc
0063E67E  56                        PUSH ESI
LAB_0063e67f:
0063E67F  8B 83 36 03 00 00         MOV EAX,dword ptr [EBX + 0x336]
0063E685  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0063E688  73 2C                     JNC 0x0063e6b6
0063E68A  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063E68D  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0063E690  0F AF F7                  IMUL ESI,EDI
0063E693  03 F2                     ADD ESI,EDX
0063E695  85 F6                     TEST ESI,ESI
0063E697  74 1D                     JZ 0x0063e6b6
0063E699  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
0063E69C  85 C0                     TEST EAX,EAX
0063E69E  7C 16                     JL 0x0063e6b6
0063E6A0  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063E6A6  50                        PUSH EAX
0063E6A7  E8 F4 A4 0A 00            CALL 0x006e8ba0
0063E6AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063E6AF  C7 46 38 FF FF FF FF      MOV dword ptr [ESI + 0x38],0xffffffff
LAB_0063e6b6:
0063E6B6  47                        INC EDI
0063E6B7  3B F9                     CMP EDI,ECX
0063E6B9  7C C4                     JL 0x0063e67f
0063E6BB  5E                        POP ESI
LAB_0063e6bc:
0063E6BC  8B 83 36 03 00 00         MOV EAX,dword ptr [EBX + 0x336]
0063E6C2  50                        PUSH EAX
0063E6C3  E8 48 FA 06 00            CALL 0x006ae110
0063E6C8  C7 83 36 03 00 00 00 00 00 00  MOV dword ptr [EBX + 0x336],0x0
0063E6D2  5F                        POP EDI
LAB_0063e6d3:
0063E6D3  5B                        POP EBX
0063E6D4  8B E5                     MOV ESP,EBP
0063E6D6  5D                        POP EBP
0063E6D7  C3                        RET
