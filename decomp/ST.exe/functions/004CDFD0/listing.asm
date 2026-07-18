FUN_004cdfd0:
004CDFD0  55                        PUSH EBP
004CDFD1  8B EC                     MOV EBP,ESP
004CDFD3  53                        PUSH EBX
004CDFD4  56                        PUSH ESI
004CDFD5  8B F1                     MOV ESI,ECX
004CDFD7  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004CDFDA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CDFDD  57                        PUSH EDI
004CDFDE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004CDFE1  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004CDFE4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CDFE7  50                        PUSH EAX
004CDFE8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CDFEB  6A 00                     PUSH 0x0
004CDFED  6A 00                     PUSH 0x0
004CDFEF  6A 00                     PUSH 0x0
004CDFF1  6A 00                     PUSH 0x0
004CDFF3  51                        PUSH ECX
004CDFF4  57                        PUSH EDI
004CDFF5  53                        PUSH EBX
004CDFF6  52                        PUSH EDX
004CDFF7  50                        PUSH EAX
004CDFF8  E8 2C 48 F3 FF            CALL 0x00402829
004CDFFD  83 C4 28                  ADD ESP,0x28
004CE000  85 C0                     TEST EAX,EAX
004CE002  74 2C                     JZ 0x004ce030
004CE004  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004CE007  8B 96 C0 05 00 00         MOV EDX,dword ptr [ESI + 0x5c0]
004CE00D  6A 64                     PUSH 0x64
004CE00F  33 C0                     XOR EAX,EAX
004CE011  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
004CE015  51                        PUSH ECX
004CE016  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CE019  6A 00                     PUSH 0x0
004CE01B  52                        PUSH EDX
004CE01C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CE01F  50                        PUSH EAX
004CE020  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CE023  53                        PUSH EBX
004CE024  51                        PUSH ECX
004CE025  52                        PUSH EDX
004CE026  57                        PUSH EDI
004CE027  50                        PUSH EAX
004CE028  E8 75 38 F3 FF            CALL 0x004018a2
004CE02D  83 C4 28                  ADD ESP,0x28
LAB_004ce030:
004CE030  5F                        POP EDI
004CE031  5E                        POP ESI
004CE032  33 C0                     XOR EAX,EAX
004CE034  5B                        POP EBX
004CE035  5D                        POP EBP
004CE036  C2 10 00                  RET 0x10
