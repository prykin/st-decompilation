FUN_004e5af0:
004E5AF0  55                        PUSH EBP
004E5AF1  8B EC                     MOV EBP,ESP
004E5AF3  53                        PUSH EBX
004E5AF4  56                        PUSH ESI
004E5AF5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E5AF8  57                        PUSH EDI
004E5AF9  85 F6                     TEST ESI,ESI
004E5AFB  8B D9                     MOV EBX,ECX
004E5AFD  7C 4E                     JL 0x004e5b4d
004E5AFF  83 FE 08                  CMP ESI,0x8
004E5B02  7D 49                     JGE 0x004e5b4d
004E5B04  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E5B07  83 FF 01                  CMP EDI,0x1
004E5B0A  7C 41                     JL 0x004e5b4d
004E5B0C  81 FF 9B 00 00 00         CMP EDI,0x9b
004E5B12  7D 39                     JGE 0x004e5b4d
004E5B14  57                        PUSH EDI
004E5B15  56                        PUSH ESI
004E5B16  E8 04 C3 F1 FF            CALL 0x00401e1f
004E5B1B  85 C0                     TEST EAX,EAX
004E5B1D  75 2E                     JNZ 0x004e5b4d
004E5B1F  57                        PUSH EDI
004E5B20  56                        PUSH ESI
004E5B21  8B CB                     MOV ECX,EBX
004E5B23  E8 95 B6 F1 FF            CALL 0x004011bd
004E5B28  57                        PUSH EDI
004E5B29  56                        PUSH ESI
004E5B2A  8B CB                     MOV ECX,EBX
004E5B2C  E8 DC F7 F1 FF            CALL 0x0040530d
004E5B31  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E5B34  3B C8                     CMP ECX,EAX
004E5B36  7E 15                     JLE 0x004e5b4d
004E5B38  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004E5B3B  8D 14 C6                  LEA EDX,[ESI + EAX*0x8]
004E5B3E  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004E5B41  C1 E0 04                  SHL EAX,0x4
004E5B44  03 C6                     ADD EAX,ESI
004E5B46  88 8C 47 5B 55 7F 00      MOV byte ptr [EDI + EAX*0x2 + 0x7f555b],CL
LAB_004e5b4d:
004E5B4D  5F                        POP EDI
004E5B4E  5E                        POP ESI
004E5B4F  5B                        POP EBX
004E5B50  5D                        POP EBP
004E5B51  C2 0C 00                  RET 0xc
