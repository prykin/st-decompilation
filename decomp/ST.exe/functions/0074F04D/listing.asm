FUN_0074f04d:
0074F04D  55                        PUSH EBP
0074F04E  8B EC                     MOV EBP,ESP
0074F050  51                        PUSH ECX
0074F051  56                        PUSH ESI
0074F052  8B F1                     MOV ESI,ECX
0074F054  57                        PUSH EDI
0074F055  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0074F058  57                        PUSH EDI
0074F059  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0074F05C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F062  83 7E 48 01               CMP dword ptr [ESI + 0x48],0x1
0074F066  75 0E                     JNZ 0x0074f076
0074F068  57                        PUSH EDI
0074F069  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F06F  B8 05 40 00 80            MOV EAX,0x80004005
0074F074  EB 44                     JMP 0x0074f0ba
LAB_0074f076:
0074F076  BF D8 1D 7A 00            MOV EDI,0x7a1dd8
0074F07B  53                        PUSH EBX
0074F07C  57                        PUSH EDI
0074F07D  8B 06                     MOV EAX,dword ptr [ESI]
0074F07F  FF 76 3C                  PUSH dword ptr [ESI + 0x3c]
0074F082  FF 76 38                  PUSH dword ptr [ESI + 0x38]
0074F085  6A 00                     PUSH 0x0
0074F087  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074F08A  56                        PUSH ESI
0074F08B  FF 50 34                  CALL dword ptr [EAX + 0x34]
0074F08E  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074F092  8B D8                     MOV EBX,EAX
0074F094  74 18                     JZ 0x0074f0ae
0074F096  85 DB                     TEST EBX,EBX
0074F098  7C 14                     JL 0x0074f0ae
0074F09A  57                        PUSH EDI
0074F09B  8B 06                     MOV EAX,dword ptr [ESI]
0074F09D  FF 76 44                  PUSH dword ptr [ESI + 0x44]
0074F0A0  FF 76 40                  PUSH dword ptr [ESI + 0x40]
0074F0A3  6A 00                     PUSH 0x0
0074F0A5  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F0A8  56                        PUSH ESI
0074F0A9  FF 50 34                  CALL dword ptr [EAX + 0x34]
0074F0AC  8B D8                     MOV EBX,EAX
LAB_0074f0ae:
0074F0AE  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074F0B1  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F0B7  8B C3                     MOV EAX,EBX
0074F0B9  5B                        POP EBX
LAB_0074f0ba:
0074F0BA  5F                        POP EDI
0074F0BB  5E                        POP ESI
0074F0BC  C9                        LEAVE
0074F0BD  C2 08 00                  RET 0x8
