FUN_006c6850:
006C6850  55                        PUSH EBP
006C6851  8B EC                     MOV EBP,ESP
006C6853  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C6856  85 C9                     TEST ECX,ECX
006C6858  7D 0E                     JGE 0x006c6868
006C685A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C685D  8D 54 08 01               LEA EDX,[EAX + ECX*0x1 + 0x1]
006C6861  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006C6864  F7 D9                     NEG ECX
006C6866  EB 03                     JMP 0x006c686b
LAB_006c6868:
006C6868  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006c686b:
006C686B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C686E  53                        PUSH EBX
006C686F  56                        PUSH ESI
006C6870  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C6873  85 C0                     TEST EAX,EAX
006C6875  57                        PUSH EDI
006C6876  7D 06                     JGE 0x006c687e
006C6878  8D 74 06 01               LEA ESI,[ESI + EAX*0x1 + 0x1]
006C687C  F7 D8                     NEG EAX
LAB_006c687e:
006C687E  8D 7C 0A FF               LEA EDI,[EDX + ECX*0x1 + -0x1]
006C6882  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C6885  8D 5C 06 FF               LEA EBX,[ESI + EAX*0x1 + -0x1]
006C6889  51                        PUSH ECX
006C688A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C688D  8D 47 FF                  LEA EAX,[EDI + -0x1]
006C6890  56                        PUSH ESI
006C6891  50                        PUSH EAX
006C6892  56                        PUSH ESI
006C6893  52                        PUSH EDX
006C6894  51                        PUSH ECX
006C6895  E8 16 EB FF FF            CALL 0x006c53b0
006C689A  85 C0                     TEST EAX,EAX
006C689C  75 43                     JNZ 0x006c68e1
006C689E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C68A1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C68A4  8D 43 FF                  LEA EAX,[EBX + -0x1]
006C68A7  52                        PUSH EDX
006C68A8  50                        PUSH EAX
006C68A9  57                        PUSH EDI
006C68AA  56                        PUSH ESI
006C68AB  57                        PUSH EDI
006C68AC  51                        PUSH ECX
006C68AD  E8 FE EA FF FF            CALL 0x006c53b0
006C68B2  85 C0                     TEST EAX,EAX
006C68B4  75 2B                     JNZ 0x006c68e1
006C68B6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C68B9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C68BC  52                        PUSH EDX
006C68BD  40                        INC EAX
006C68BE  53                        PUSH EBX
006C68BF  50                        PUSH EAX
006C68C0  53                        PUSH EBX
006C68C1  57                        PUSH EDI
006C68C2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C68C5  57                        PUSH EDI
006C68C6  E8 E5 EA FF FF            CALL 0x006c53b0
006C68CB  85 C0                     TEST EAX,EAX
006C68CD  75 12                     JNZ 0x006c68e1
006C68CF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C68D2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C68D5  46                        INC ESI
006C68D6  51                        PUSH ECX
006C68D7  56                        PUSH ESI
006C68D8  50                        PUSH EAX
006C68D9  53                        PUSH EBX
006C68DA  50                        PUSH EAX
006C68DB  57                        PUSH EDI
006C68DC  E8 CF EA FF FF            CALL 0x006c53b0
LAB_006c68e1:
006C68E1  5F                        POP EDI
006C68E2  5E                        POP ESI
006C68E3  5B                        POP EBX
006C68E4  5D                        POP EBP
006C68E5  C2 18 00                  RET 0x18
