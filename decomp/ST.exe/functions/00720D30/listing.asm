FUN_00720d30:
00720D30  55                        PUSH EBP
00720D31  8B EC                     MOV EBP,ESP
00720D33  51                        PUSH ECX
00720D34  53                        PUSH EBX
00720D35  56                        PUSH ESI
00720D36  8B F1                     MOV ESI,ECX
00720D38  33 DB                     XOR EBX,EBX
00720D3A  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00720D40  3B C3                     CMP EAX,EBX
00720D42  0F 84 90 00 00 00         JZ 0x00720dd8
00720D48  39 58 08                  CMP dword ptr [EAX + 0x8],EBX
00720D4B  0F 84 87 00 00 00         JZ 0x00720dd8
00720D51  8B 8E 44 01 00 00         MOV ECX,dword ptr [ESI + 0x144]
00720D57  57                        PUSH EDI
00720D58  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00720D5B  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_00720d5e:
00720D5E  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00720D64  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00720D67  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00720D6A  3B CA                     CMP ECX,EDX
00720D6C  7D 60                     JGE 0x00720dce
00720D6E  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00720D71  41                        INC ECX
00720D72  8B 54 8A FC               MOV EDX,dword ptr [EDX + ECX*0x4 + -0x4]
00720D76  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00720D79  85 D2                     TEST EDX,EDX
00720D7B  74 51                     JZ 0x00720dce
00720D7D  8B FA                     MOV EDI,EDX
00720D7F  83 C9 FF                  OR ECX,0xffffffff
00720D82  33 C0                     XOR EAX,EAX
00720D84  F2 AE                     SCASB.REPNE ES:EDI
00720D86  F7 D1                     NOT ECX
00720D88  49                        DEC ECX
00720D89  75 08                     JNZ 0x00720d93
00720D8B  A1 FC 0A 7F 00            MOV EAX,[0x007f0afc]
00720D90  50                        PUSH EAX
00720D91  EB 10                     JMP 0x00720da3
LAB_00720d93:
00720D93  F6 46 20 20               TEST byte ptr [ESI + 0x20],0x20
00720D97  74 09                     JZ 0x00720da2
00720D99  8B 0D 00 0B 7F 00         MOV ECX,dword ptr [0x007f0b00]
00720D9F  51                        PUSH ECX
00720DA0  EB 01                     JMP 0x00720da3
LAB_00720da2:
00720DA2  52                        PUSH EDX
LAB_00720da3:
00720DA3  8B 8E 14 02 00 00         MOV ECX,dword ptr [ESI + 0x214]
00720DA9  E8 12 04 FF FF            CALL 0x007111c0
00720DAE  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00720DB1  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
00720DB4  3B D1                     CMP EDX,ECX
00720DB6  7F 16                     JG 0x00720dce
00720DB8  8B 8E 14 02 00 00         MOV ECX,dword ptr [ESI + 0x214]
00720DBE  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00720DC1  03 D0                     ADD EDX,EAX
00720DC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00720DC6  03 DA                     ADD EBX,EDX
00720DC8  40                        INC EAX
00720DC9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00720DCC  EB 90                     JMP 0x00720d5e
LAB_00720dce:
00720DCE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00720DD1  5F                        POP EDI
00720DD2  5E                        POP ESI
00720DD3  5B                        POP EBX
00720DD4  8B E5                     MOV ESP,EBP
00720DD6  5D                        POP EBP
00720DD7  C3                        RET
LAB_00720dd8:
00720DD8  5E                        POP ESI
00720DD9  33 C0                     XOR EAX,EAX
00720DDB  5B                        POP EBX
00720DDC  8B E5                     MOV ESP,EBP
00720DDE  5D                        POP EBP
00720DDF  C3                        RET
