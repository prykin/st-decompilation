FUN_0074a05b:
0074A05B  55                        PUSH EBP
0074A05C  8B EC                     MOV EBP,ESP
0074A05E  51                        PUSH ECX
0074A05F  53                        PUSH EBX
0074A060  56                        PUSH ESI
0074A061  8B F1                     MOV ESI,ECX
0074A063  8D 5E 7C                  LEA EBX,[ESI + 0x7c]
0074A066  53                        PUSH EBX
0074A067  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A06D  83 65 FC 00               AND dword ptr [EBP + -0x4],0x0
0074A071  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074A075  74 0B                     JZ 0x0074a082
0074A077  53                        PUSH EBX
0074A078  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A07E  33 C0                     XOR EAX,EAX
0074A080  EB 39                     JMP 0x0074a0bb
LAB_0074a082:
0074A082  83 7E 78 00               CMP dword ptr [ESI + 0x78],0x0
0074A086  75 27                     JNZ 0x0074a0af
0074A088  68 E0 00 00 00            PUSH 0xe0
0074A08D  E8 9E 44 FE FF            CALL 0x0072e530
0074A092  85 C0                     TEST EAX,EAX
0074A094  59                        POP ECX
0074A095  74 13                     JZ 0x0074a0aa
0074A097  8D 4D FC                  LEA ECX,[EBP + -0x4]
0074A09A  68 98 E2 7E 00            PUSH 0x7ee298
0074A09F  51                        PUSH ECX
0074A0A0  56                        PUSH ESI
0074A0A1  8B C8                     MOV ECX,EAX
0074A0A3  E8 B7 08 00 00            CALL 0x0074a95f
0074A0A8  EB 02                     JMP 0x0074a0ac
LAB_0074a0aa:
0074A0AA  33 C0                     XOR EAX,EAX
LAB_0074a0ac:
0074A0AC  89 46 78                  MOV dword ptr [ESI + 0x78],EAX
LAB_0074a0af:
0074A0AF  8B 76 78                  MOV ESI,dword ptr [ESI + 0x78]
0074A0B2  53                        PUSH EBX
0074A0B3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A0B9  8B C6                     MOV EAX,ESI
LAB_0074a0bb:
0074A0BB  5E                        POP ESI
0074A0BC  5B                        POP EBX
0074A0BD  C9                        LEAVE
0074A0BE  C2 04 00                  RET 0x4
